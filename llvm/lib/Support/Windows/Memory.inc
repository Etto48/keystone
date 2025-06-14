//===- Win32/Memory.cpp - Win32 Memory Implementation -----------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides the Win32 specific implementation of various Memory
// management utilities
//
//===----------------------------------------------------------------------===//

#include "llvm/Support/DataTypes.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/WindowsError.h"
#include <cstdint>

// The Windows.h header must be the last one included.
#include "WindowsSupport.h"

namespace {

DWORD getWindowsProtectionFlags(unsigned Flags) {
  switch (Flags) {
  // Contrary to what you might expect, the Windows page protection flags
  // are not a bitwise combination of RWX values
  case llvm_ks::sys::Memory::MF_READ:
    return PAGE_READONLY;
  case llvm_ks::sys::Memory::MF_WRITE:
    // Note: PAGE_WRITE is not supported by VirtualProtect
    return PAGE_READWRITE;
  case llvm_ks::sys::Memory::MF_READ|llvm_ks::sys::Memory::MF_WRITE:
    return PAGE_READWRITE;
  case llvm_ks::sys::Memory::MF_READ|llvm_ks::sys::Memory::MF_EXEC:
    return PAGE_EXECUTE_READ;
  case llvm_ks::sys::Memory::MF_READ |
         llvm_ks::sys::Memory::MF_WRITE |
         llvm_ks::sys::Memory::MF_EXEC:
    return PAGE_EXECUTE_READWRITE;
  case llvm_ks::sys::Memory::MF_EXEC:
    return PAGE_EXECUTE;
  default:
    llvm_unreachable("Illegal memory protection flag specified!");
  }
  // Provide a default return value as required by some compilers.
  return PAGE_NOACCESS;
}

size_t getAllocationGranularity() {
  SYSTEM_INFO  Info;
  ::GetSystemInfo(&Info);
  if (Info.dwPageSize > Info.dwAllocationGranularity)
    return Info.dwPageSize;
  else
    return Info.dwAllocationGranularity;
}

} // namespace

namespace llvm_ks {
namespace sys {

//===----------------------------------------------------------------------===//
//=== WARNING: Implementation here must contain only Win32 specific code
//===          and must not be UNIX code
//===----------------------------------------------------------------------===//

MemoryBlock Memory::allocateMappedMemory(size_t NumBytes,
                                         const MemoryBlock *const NearBlock,
                                         unsigned Flags,
                                         std::error_code &EC) {
  EC = std::error_code();
  if (NumBytes == 0)
    return MemoryBlock();

  // While we'd be happy to allocate single pages, the Windows allocation
  // granularity may be larger than a single page (in practice, it is 64K)
  // so mapping less than that will create an unreachable fragment of memory.
  // Avoid using one-time initialization of static locals here, since they
  // aren't thread safe with MSVC.
  static volatile size_t GranularityCached;
  size_t Granularity = GranularityCached;
  if (Granularity == 0) {
    Granularity = getAllocationGranularity();
    GranularityCached = Granularity;
  }

  const size_t NumBlocks = (NumBytes+Granularity-1)/Granularity;

  uintptr_t Start = NearBlock ? reinterpret_cast<uintptr_t>(NearBlock->base()) +
                                NearBlock->size()
                           : 0;

  // If the requested address is not aligned to the allocation granularity,
  // round up to get beyond NearBlock. VirtualAlloc would have rounded down.
  if (Start && Start % Granularity != 0)
    Start += Granularity - Start % Granularity;

  DWORD Protect = getWindowsProtectionFlags(Flags);

  void *PA = ::VirtualAlloc(reinterpret_cast<void*>(Start),
                            NumBlocks*Granularity,
                            MEM_RESERVE | MEM_COMMIT, Protect);
  if (PA == NULL) {
    if (NearBlock) {
      // Try again without the NearBlock hint
      return allocateMappedMemory(NumBytes, NULL, Flags, EC);
    }
    EC = mapWindowsError(::GetLastError());
    return MemoryBlock();
  }

  MemoryBlock Result;
  Result.Address = PA;
  Result.Size = NumBlocks*Granularity;

  if (Flags & MF_EXEC)
    Memory::InvalidateInstructionCache(Result.Address, Result.Size);

  return Result;
}

  std::error_code Memory::releaseMappedMemory(MemoryBlock &M) {
  if (M.Address == 0 || M.Size == 0)
    return std::error_code();

  if (!VirtualFree(M.Address, 0, MEM_RELEASE))
    return mapWindowsError(::GetLastError());

  M.Address = 0;
  M.Size = 0;

  return std::error_code();
}

  std::error_code Memory::protectMappedMemory(const MemoryBlock &M,
                                       unsigned Flags) {
  if (M.Address == 0 || M.Size == 0)
    return std::error_code();

  DWORD Protect = getWindowsProtectionFlags(Flags);

  DWORD OldFlags;
  if (!VirtualProtect(M.Address, M.Size, Protect, &OldFlags))
    return mapWindowsError(::GetLastError());

  if (Flags & MF_EXEC)
    Memory::InvalidateInstructionCache(M.Address, M.Size);

  return std::error_code();
}

/// InvalidateInstructionCache - Before the JIT can run a block of code
/// that has been emitted it must invalidate the instruction cache on some
/// platforms.
void Memory::InvalidateInstructionCache(
    const void *Addr, size_t Len) {
  FlushInstructionCache(GetCurrentProcess(), Addr, Len);
}


MemoryBlock Memory::AllocateRWX(size_t NumBytes,
                                const MemoryBlock *NearBlock,
                                std::string *ErrMsg) {
  MemoryBlock MB;
  std::error_code EC;
  MB = allocateMappedMemory(NumBytes, NearBlock,
                            MF_READ|MF_WRITE|MF_EXEC, EC);
  if (EC != std::error_code() && ErrMsg) {
    MakeErrMsg(ErrMsg, EC.message());
  }
  return MB;
}

bool Memory::ReleaseRWX(MemoryBlock &M, std::string *ErrMsg) {
  std::error_code EC = releaseMappedMemory(M);
  if (EC == std::error_code())
    return false;
  MakeErrMsg(ErrMsg, EC.message());
  return true;
}

static DWORD getProtection(const void *addr) {
  MEMORY_BASIC_INFORMATION info;
  if (sizeof(info) == ::VirtualQuery(addr, &info, sizeof(info))) {
    return info.Protect;
  }
  return 0;
}

bool Memory::setWritable(MemoryBlock &M, std::string *ErrMsg) {
  if (!setRangeWritable(M.Address, M.Size)) {
    return MakeErrMsg(ErrMsg, "Cannot set memory to writeable");
  }
  return true;
}

bool Memory::setExecutable(MemoryBlock &M, std::string *ErrMsg) {
  if (!setRangeExecutable(M.Address, M.Size)) {
    return MakeErrMsg(ErrMsg, "Cannot set memory to executable");
  }
  return true;
}

bool Memory::setRangeWritable(const void *Addr, size_t Size) {
  DWORD prot = getProtection(Addr);
  if (!prot)
    return false;

  if (prot == PAGE_EXECUTE || prot == PAGE_EXECUTE_READ) {
    prot = PAGE_EXECUTE_READWRITE;
  } else if (prot == PAGE_NOACCESS || prot == PAGE_READONLY) {
    prot = PAGE_READWRITE;
  }

  DWORD oldProt;
  Memory::InvalidateInstructionCache(Addr, Size);
  return ::VirtualProtect(const_cast<LPVOID>(Addr), Size, prot, &oldProt)
            == TRUE;
}

bool Memory::setRangeExecutable(const void *Addr, size_t Size) {
  DWORD prot = getProtection(Addr);
  if (!prot)
    return false;

  if (prot == PAGE_NOACCESS) {
    prot = PAGE_EXECUTE;
  } else if (prot == PAGE_READONLY) {
    prot = PAGE_EXECUTE_READ;
  } else if (prot == PAGE_READWRITE) {
    prot = PAGE_EXECUTE_READWRITE;
  }

  DWORD oldProt;
  Memory::InvalidateInstructionCache(Addr, Size);
  return ::VirtualProtect(const_cast<LPVOID>(Addr), Size, prot, &oldProt)
            == TRUE;
}

} // namespace sys
} // namespace llvm_ks
