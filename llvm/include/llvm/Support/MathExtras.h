//===-- llvm/Support/MathExtras.h - Useful math functions -------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains some functions that are useful for math stuff.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_SUPPORT_MATHEXTRAS_H
#define LLVM_SUPPORT_MATHEXTRAS_H

#include "llvm/Support/Compiler.h"
#include "llvm/Support/SwapByteOrder.h"
#include <cassert>
#include <cstring>
#include <type_traits>
#include <cstdint>

#ifdef _MSC_VER
#include <intrin.h>
#endif

#ifdef __ANDROID_NDK__
#include <android/api-level.h>
#endif

namespace llvm_ks {
/// \brief The behavior an operation has on an input of 0.
enum ZeroBehavior {
  /// \brief The returned value is undefined.
  ZB_Undefined,
  /// \brief The returned value is numeric_limits<T>::max()
  ZB_Max,
  /// \brief The returned value is numeric_limits<T>::digits
  ZB_Width
};

namespace detail {
template <typename T, std::size_t SizeOfT> struct TrailingZerosCounter {
  static std::size_t count(T Val, ZeroBehavior) {
    if (!Val)
      return std::numeric_limits<T>::digits;
    if (Val & 0x1)
      return 0;

    // Bisection method.
    std::size_t ZeroBits = 0;
    T Shift = std::numeric_limits<T>::digits >> 1;
    T Mask = std::numeric_limits<T>::max() >> Shift;
    while (Shift) {
      if ((Val & Mask) == 0) {
        Val >>= Shift;
        ZeroBits |= Shift;
      }
      Shift >>= 1;
      Mask >>= Shift;
    }
    return ZeroBits;
  }
};

#if __GNUC__ >= 4 || defined(_MSC_VER)
template <typename T> struct TrailingZerosCounter<T, 4> {
  static std::size_t count(T Val, ZeroBehavior ZB) {
    if (ZB != ZB_Undefined && Val == 0)
      return 32;

#if __has_builtin(__builtin_ctz) || LLVM_GNUC_PREREQ(4, 0, 0)
    return __builtin_ctz(Val);
#elif defined(_MSC_VER)
    unsigned long Index;
    _BitScanForward(&Index, Val);
    return Index;
#endif
  }
};

#if !defined(_MSC_VER) || defined(_M_X64)
template <typename T> struct TrailingZerosCounter<T, 8> {
  static std::size_t count(T Val, ZeroBehavior ZB) {
    if (ZB != ZB_Undefined && Val == 0)
      return 64;

#if __has_builtin(__builtin_ctzll) || LLVM_GNUC_PREREQ(4, 0, 0)
    return __builtin_ctzll(Val);
#elif defined(_MSC_VER)
    unsigned long Index;
    _BitScanForward64(&Index, Val);
    return Index;
#endif
  }
};
#endif
#endif
} // namespace detail

/// \brief Count number of 0's from the least significant bit to the most
///   stopping at the first 1.
///
/// Only unsigned integral types are allowed.
///
/// \param ZB the behavior on an input of 0. Only ZB_Width and ZB_Undefined are
///   valid arguments.
template <typename T>
std::size_t countTrailingZeros(T Val, ZeroBehavior ZB = ZB_Width) {
  static_assert(std::numeric_limits<T>::is_integer &&
                    !std::numeric_limits<T>::is_signed,
                "Only unsigned integral types are allowed.");
  return detail::TrailingZerosCounter<T, sizeof(T)>::count(Val, ZB);
}

namespace detail {
template <typename T, std::size_t SizeOfT> struct LeadingZerosCounter {
  static std::size_t count(T Val, ZeroBehavior) {
    if (!Val)
      return std::numeric_limits<T>::digits;

    // Bisection method.
    std::size_t ZeroBits = 0;
    for (T Shift = std::numeric_limits<T>::digits >> 1; Shift; Shift >>= 1) {
      T Tmp = Val >> Shift;
      if (Tmp)
        Val = Tmp;
      else
        ZeroBits |= Shift;
    }
    return ZeroBits;
  }
};

#if __GNUC__ >= 4 || defined(_MSC_VER)
template <typename T> struct LeadingZerosCounter<T, 4> {
  static std::size_t count(T Val, ZeroBehavior ZB) {
    if (ZB != ZB_Undefined && Val == 0)
      return 32;

#if __has_builtin(__builtin_clz) || LLVM_GNUC_PREREQ(4, 0, 0)
    return __builtin_clz(Val);
#elif defined(_MSC_VER)
    unsigned long Index;
    _BitScanReverse(&Index, Val);
    return Index ^ 31;
#endif
  }
};

#if !defined(_MSC_VER) || defined(_M_X64)
template <typename T> struct LeadingZerosCounter<T, 8> {
  static std::size_t count(T Val, ZeroBehavior ZB) {
    if (ZB != ZB_Undefined && Val == 0)
      return 64;

#if __has_builtin(__builtin_clzll) || LLVM_GNUC_PREREQ(4, 0, 0)
    return __builtin_clzll(Val);
#elif defined(_MSC_VER)
    unsigned long Index;
    _BitScanReverse64(&Index, Val);
    return Index ^ 63;
#endif
  }
};
#endif
#endif
} // namespace detail

/// \brief Count number of 0's from the most significant bit to the least
///   stopping at the first 1.
///
/// Only unsigned integral types are allowed.
///
/// \param ZB the behavior on an input of 0. Only ZB_Width and ZB_Undefined are
///   valid arguments.
template <typename T>
std::size_t countLeadingZeros(T Val, ZeroBehavior ZB = ZB_Width) {
  static_assert(std::numeric_limits<T>::is_integer &&
                    !std::numeric_limits<T>::is_signed,
                "Only unsigned integral types are allowed.");
  return detail::LeadingZerosCounter<T, sizeof(T)>::count(Val, ZB);
}

/// \brief Get the index of the first set bit starting from the least
///   significant bit.
///
/// Only unsigned integral types are allowed.
///
/// \param ZB the behavior on an input of 0. Only ZB_Max and ZB_Undefined are
///   valid arguments.
template <typename T> T findFirstSet(T Val, ZeroBehavior ZB = ZB_Max) {
  if (ZB == ZB_Max && Val == 0)
    return std::numeric_limits<T>::max();

  return countTrailingZeros(Val, ZB_Undefined);
}

/// \brief Get the index of the last set bit starting from the least
///   significant bit.
///
/// Only unsigned integral types are allowed.
///
/// \param ZB the behavior on an input of 0. Only ZB_Max and ZB_Undefined are
///   valid arguments.
template <typename T> T findLastSet(T Val, ZeroBehavior ZB = ZB_Max) {
  if (ZB == ZB_Max && Val == 0)
    return std::numeric_limits<T>::max();

  // Use ^ instead of - because both gcc and llvm can remove the associated ^
  // in the __builtin_clz intrinsic on x86.
  return countLeadingZeros(Val, ZB_Undefined) ^
         (std::numeric_limits<T>::digits - 1);
}

/// \brief Macro compressed bit reversal table for 256 bits.
///
/// http://graphics.stanford.edu/~seander/bithacks.html#BitReverseTable
static const unsigned char BitReverseTable256[256] = {
#define R2(n) n, n + 2 * 64, n + 1 * 64, n + 3 * 64
#define R4(n) R2(n), R2(n + 2 * 16), R2(n + 1 * 16), R2(n + 3 * 16)
#define R6(n) R4(n), R4(n + 2 * 4), R4(n + 1 * 4), R4(n + 3 * 4)
  R6(0), R6(2), R6(1), R6(3)
#undef R2
#undef R4
#undef R6
};

/// \brief Reverse the bits in \p Val.
template <typename T>
T reverseBits(T Val) {
  unsigned char in[sizeof(Val)];
  unsigned char out[sizeof(Val)];
  std::memcpy(in, &Val, sizeof(Val));
  for (unsigned i = 0; i < sizeof(Val); ++i)
    out[(sizeof(Val) - i) - 1] = BitReverseTable256[in[i]];
  std::memcpy(&Val, out, sizeof(Val));
  return Val;
}

// NOTE: The following support functions use the _32/_64 extensions instead of
// type overloading so that signed and unsigned integers can be used without
// ambiguity.

/// Hi_32 - This function returns the high 32 bits of a 64 bit value.
inline uint32_t Hi_32(uint64_t Value) {
  return static_cast<uint32_t>(Value >> 32);
}

/// Lo_32 - This function returns the low 32 bits of a 64 bit value.
inline uint32_t Lo_32(uint64_t Value) {
  return static_cast<uint32_t>(Value);
}

/// Make_64 - This functions makes a 64-bit integer from a high / low pair of
///           32-bit integers.
inline uint64_t Make_64(uint32_t High, uint32_t Low) {
  return ((uint64_t)High << 32) | (uint64_t)Low;
}

/// isInt - Checks if an integer fits into the given bit width.
template<unsigned N>
inline bool isInt(int64_t x) {
  return N >= 64 || (-(INT64_C(1)<<(N-1)) <= x && x < (INT64_C(1)<<(N-1)));
}
// Template specializations to get better code for common cases.
template<>
inline bool isInt<8>(int64_t x) {
  return static_cast<int8_t>(x) == x;
}
template<>
inline bool isInt<16>(int64_t x) {
  return static_cast<int16_t>(x) == x;
}
template<>
inline bool isInt<32>(int64_t x) {
  return static_cast<int32_t>(x) == x;
}

/// isShiftedInt<N,S> - Checks if a signed integer is an N bit number shifted
///                     left by S.
template<unsigned N, unsigned S>
inline bool isShiftedInt(int64_t x) {
  return isInt<N+S>(x) && (x % (1<<S) == 0);
}

/// isUInt - Checks if an unsigned integer fits into the given bit width.
template<unsigned N>
inline bool isUInt(uint64_t x) {
  return N >= 64 || x < (UINT64_C(1)<<(N));
}
// Template specializations to get better code for common cases.
template<>
inline bool isUInt<8>(uint64_t x) {
  return static_cast<uint8_t>(x) == x;
}
template<>
inline bool isUInt<16>(uint64_t x) {
  return static_cast<uint16_t>(x) == x;
}
template<>
inline bool isUInt<32>(uint64_t x) {
  return static_cast<uint32_t>(x) == x;
}

/// isShiftedUInt<N,S> - Checks if a unsigned integer is an N bit number shifted
///                     left by S.
template<unsigned N, unsigned S>
inline bool isShiftedUInt(uint64_t x) {
  return isUInt<N+S>(x) && (x % (1<<S) == 0);
}

/// isUIntN - Checks if an unsigned integer fits into the given (dynamic)
/// bit width.
inline bool isUIntN(unsigned N, uint64_t x) {
  return N >= 64 || x < (UINT64_C(1)<<(N));
}

/// isIntN - Checks if an signed integer fits into the given (dynamic)
/// bit width.
inline bool isIntN(unsigned N, int64_t x) {
  return N >= 64 || (-(INT64_C(1)<<(N-1)) <= x && x < (INT64_C(1)<<(N-1)));
}

/// isMask_32 - This function returns true if the argument is a non-empty
/// sequence of ones starting at the least significant bit with the remainder
/// zero (32 bit version).  Ex. isMask_32(0x0000FFFFU) == true.
inline bool isMask_32(uint32_t Value) {
  return Value && ((Value + 1) & Value) == 0;
}

/// isMask_64 - This function returns true if the argument is a non-empty
/// sequence of ones starting at the least significant bit with the remainder
/// zero (64 bit version).
inline bool isMask_64(uint64_t Value) {
  return Value && ((Value + 1) & Value) == 0;
}

/// isShiftedMask_32 - This function returns true if the argument contains a
/// non-empty sequence of ones with the remainder zero (32 bit version.)
/// Ex. isShiftedMask_32(0x0000FF00U) == true.
inline bool isShiftedMask_32(uint32_t Value) {
  return Value && isMask_32((Value - 1) | Value);
}

/// isShiftedMask_64 - This function returns true if the argument contains a
/// non-empty sequence of ones with the remainder zero (64 bit version.)
inline bool isShiftedMask_64(uint64_t Value) {
  return Value && isMask_64((Value - 1) | Value);
}

/// isPowerOf2_32 - This function returns true if the argument is a power of
/// two > 0. Ex. isPowerOf2_32(0x00100000U) == true (32 bit edition.)
inline bool isPowerOf2_32(uint32_t Value) {
  return Value && !(Value & (Value - 1));
}

/// isPowerOf2_64 - This function returns true if the argument is a power of two
/// > 0 (64 bit edition.)
inline bool isPowerOf2_64(uint64_t Value) {
  return Value && !(Value & (Value - int64_t(1L)));
}

/// ByteSwap_16 - This function returns a byte-swapped representation of the
/// 16-bit argument, Value.
inline uint16_t ByteSwap_16(uint16_t Value) {
  return sys::SwapByteOrder_16(Value);
}

/// ByteSwap_32 - This function returns a byte-swapped representation of the
/// 32-bit argument, Value.
inline uint32_t ByteSwap_32(uint32_t Value) {
  return sys::SwapByteOrder_32(Value);
}

/// ByteSwap_64 - This function returns a byte-swapped representation of the
/// 64-bit argument, Value.
inline uint64_t ByteSwap_64(uint64_t Value) {
  return sys::SwapByteOrder_64(Value);
}

/// \brief Count the number of ones from the most significant bit to the first
/// zero bit.
///
/// Ex. CountLeadingOnes(0xFF0FFF00) == 8.
/// Only unsigned integral types are allowed.
///
/// \param ZB the behavior on an input of all ones. Only ZB_Width and
/// ZB_Undefined are valid arguments.
template <typename T>
std::size_t countLeadingOnes(T Value, ZeroBehavior ZB = ZB_Width) {
  static_assert(std::numeric_limits<T>::is_integer &&
                    !std::numeric_limits<T>::is_signed,
                "Only unsigned integral types are allowed.");
  return countLeadingZeros(~Value, ZB);
}

/// \brief Count the number of ones from the least significant bit to the first
/// zero bit.
///
/// Ex. countTrailingOnes(0x00FF00FF) == 8.
/// Only unsigned integral types are allowed.
///
/// \param ZB the behavior on an input of all ones. Only ZB_Width and
/// ZB_Undefined are valid arguments.
template <typename T>
std::size_t countTrailingOnes(T Value, ZeroBehavior ZB = ZB_Width) {
  static_assert(std::numeric_limits<T>::is_integer &&
                    !std::numeric_limits<T>::is_signed,
                "Only unsigned integral types are allowed.");
  return countTrailingZeros(~Value, ZB);
}

namespace detail {
template <typename T, std::size_t SizeOfT> struct PopulationCounter {
  static unsigned count(T Value) {
    // Generic version, forward to 32 bits.
    static_assert(SizeOfT <= 4, "Not implemented!");
#if __GNUC__ >= 4
    return __builtin_popcount(Value);
#else
    uint32_t v = Value;
    v = v - ((v >> 1) & 0x55555555);
    v = (v & 0x33333333) + ((v >> 2) & 0x33333333);
    return ((v + (v >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
#endif
  }
};

template <typename T> struct PopulationCounter<T, 8> {
  static unsigned count(T Value) {
#if __GNUC__ >= 4
    return __builtin_popcountll(Value);
#else
    uint64_t v = Value;
    v = v - ((v >> 1) & 0x5555555555555555ULL);
    v = (v & 0x3333333333333333ULL) + ((v >> 2) & 0x3333333333333333ULL);
    v = (v + (v >> 4)) & 0x0F0F0F0F0F0F0F0FULL;
    return unsigned((uint64_t)(v * 0x0101010101010101ULL) >> 56);
#endif
  }
};
} // namespace detail

/// \brief Count the number of set bits in a value.
/// Ex. countPopulation(0xF000F000) = 8
/// Returns 0 if the word is zero.
template <typename T>
inline unsigned countPopulation(T Value) {
  static_assert(std::numeric_limits<T>::is_integer &&
                    !std::numeric_limits<T>::is_signed,
                "Only unsigned integral types are allowed.");
  return detail::PopulationCounter<T, sizeof(T)>::count(Value);
}

/// Log2 - This function returns the log base 2 of the specified value
inline double Log2(double Value) {
#if defined(__ANDROID_API__) && __ANDROID_API__ < 18
  return __builtin_log(Value) / __builtin_log(2.0);
#else
  return log2(Value);
#endif
}

/// Log2_32 - This function returns the floor log base 2 of the specified value,
/// -1 if the value is zero. (32 bit edition.)
/// Ex. Log2_32(32) == 5, Log2_32(1) == 0, Log2_32(0) == -1, Log2_32(6) == 2
inline unsigned Log2_32(uint32_t Value) {
  return 31 - countLeadingZeros(Value);
}

/// Log2_64 - This function returns the floor log base 2 of the specified value,
/// -1 if the value is zero. (64 bit edition.)
inline unsigned Log2_64(uint64_t Value) {
  return 63 - countLeadingZeros(Value);
}

/// Log2_32_Ceil - This function returns the ceil log base 2 of the specified
/// value, 32 if the value is zero. (32 bit edition).
/// Ex. Log2_32_Ceil(32) == 5, Log2_32_Ceil(1) == 0, Log2_32_Ceil(6) == 3
inline unsigned Log2_32_Ceil(uint32_t Value) {
  return 32 - countLeadingZeros(Value - 1);
}

/// Log2_64_Ceil - This function returns the ceil log base 2 of the specified
/// value, 64 if the value is zero. (64 bit edition.)
inline unsigned Log2_64_Ceil(uint64_t Value) {
  return 64 - countLeadingZeros(Value - 1);
}

/// GreatestCommonDivisor64 - Return the greatest common divisor of the two
/// values using Euclid's algorithm.
inline uint64_t GreatestCommonDivisor64(uint64_t A, uint64_t B) {
  while (B) {
    uint64_t T = B;
    B = A % B;
    A = T;
  }
  return A;
}

/// BitsToDouble - This function takes a 64-bit integer and returns the bit
/// equivalent double.
inline double BitsToDouble(uint64_t Bits) {
  union {
    uint64_t L;
    double D;
  } T;
  T.L = Bits;
  return T.D;
}

/// BitsToFloat - This function takes a 32-bit integer and returns the bit
/// equivalent float.
inline float BitsToFloat(uint32_t Bits) {
  union {
    uint32_t I;
    float F;
  } T;
  T.I = Bits;
  return T.F;
}

/// DoubleToBits - This function takes a double and returns the bit
/// equivalent 64-bit integer.  Note that copying doubles around
/// changes the bits of NaNs on some hosts, notably x86, so this
/// routine cannot be used if these bits are needed.
inline uint64_t DoubleToBits(double Double) {
  union {
    uint64_t L;
    double D;
  } T;
  T.D = Double;
  return T.L;
}

/// FloatToBits - This function takes a float and returns the bit
/// equivalent 32-bit integer.  Note that copying floats around
/// changes the bits of NaNs on some hosts, notably x86, so this
/// routine cannot be used if these bits are needed.
inline uint32_t FloatToBits(float Float) {
  union {
    uint32_t I;
    float F;
  } T;
  T.F = Float;
  return T.I;
}

/// MinAlign - A and B are either alignments or offsets.  Return the minimum
/// alignment that may be assumed after adding the two together.
inline uint64_t MinAlign(uint64_t A, uint64_t B) {
  // The largest power of 2 that divides both A and B.
  //
  // Replace "-Value" by "1+~Value" in the following commented code to avoid
  // MSVC warning C4146
  //    return (A | B) & -(A | B);
  return (A | B) & (1 + ~(A | B));
}

/// \brief Aligns \c Addr to \c Alignment bytes, rounding up.
///
/// Alignment should be a power of two.  This method rounds up, so
/// alignAddr(7, 4) == 8 and alignAddr(8, 4) == 8.
inline uintptr_t alignAddr(const void *Addr, size_t Alignment) {
  assert(Alignment && isPowerOf2_64((uint64_t)Alignment) &&
         "Alignment is not a power of two!");

  assert((uintptr_t)Addr + Alignment - 1 >= (uintptr_t)Addr);

  return (((uintptr_t)Addr + Alignment - 1) & ~(uintptr_t)(Alignment - 1));
}

/// \brief Returns the necessary adjustment for aligning \c Ptr to \c Alignment
/// bytes, rounding up.
inline size_t alignmentAdjustment(const void *Ptr, size_t Alignment) {
  return alignAddr(Ptr, Alignment) - (uintptr_t)Ptr;
}

/// NextPowerOf2 - Returns the next power of two (in 64-bits)
/// that is strictly greater than A.  Returns zero on overflow.
inline uint64_t NextPowerOf2(uint64_t A) {
  A |= (A >> 1);
  A |= (A >> 2);
  A |= (A >> 4);
  A |= (A >> 8);
  A |= (A >> 16);
  A |= (A >> 32);
  return A + 1;
}

/// Returns the power of two which is less than or equal to the given value.
/// Essentially, it is a floor operation across the domain of powers of two.
inline uint64_t PowerOf2Floor(uint64_t A) {
  if (!A) return 0;
  return 1ull << (63 - countLeadingZeros(A, ZB_Undefined));
}

/// Returns the next integer (mod 2**64) that is greater than or equal to
/// \p Value and is a multiple of \p Align. \p Align must be non-zero.
///
/// If non-zero \p Skew is specified, the return value will be a minimal
/// integer that is greater than or equal to \p Value and equal to
/// \p Align * N + \p Skew for some integer N. If \p Skew is larger than
/// \p Align, its value is adjusted to '\p Skew mod \p Align'.
///
/// Examples:
/// \code
///   alignTo(5, 8) = 8
///   alignTo(17, 8) = 24
///   alignTo(~0LL, 8) = 0
///   alignTo(321, 255) = 510
///
///   alignTo(5, 8, 7) = 7
///   alignTo(17, 8, 1) = 17
///   alignTo(~0LL, 8, 3) = 3
///   alignTo(321, 255, 42) = 552
/// \endcode
inline uint64_t alignTo(uint64_t Value, uint64_t Align, uint64_t Skew = 0) {
  Skew %= Align;
  return (Value + Align - 1 - Skew) / Align * Align + Skew;
}

/// Returns the offset to the next integer (mod 2**64) that is greater than
/// or equal to \p Value and is a multiple of \p Align. \p Align must be
/// non-zero.
inline uint64_t OffsetToAlignment(uint64_t Value, uint64_t Align) {
  return alignTo(Value, Align) - Value;
}

/// SignExtend32 - Sign extend B-bit number x to 32-bit int.
/// Usage int32_t r = SignExtend32<5>(x);
template <unsigned B> inline int32_t SignExtend32(uint32_t x) {
  return int32_t(x << (32 - B)) >> (32 - B);
}

/// \brief Sign extend number in the bottom B bits of X to a 32-bit int.
/// Requires 0 < B <= 32.
inline int32_t SignExtend32(uint32_t X, unsigned B) {
  return int32_t(X << (32 - B)) >> (32 - B);
}

/// SignExtend64 - Sign extend B-bit number x to 64-bit int.
/// Usage int64_t r = SignExtend64<5>(x);
template <unsigned B> inline int64_t SignExtend64(uint64_t x) {
  return int64_t(x << (64 - B)) >> (64 - B);
}

/// \brief Sign extend number in the bottom B bits of X to a 64-bit int.
/// Requires 0 < B <= 64.
inline int64_t SignExtend64(uint64_t X, unsigned B) {
  return int64_t(X << (64 - B)) >> (64 - B);
}

/// \brief Add two unsigned integers, X and Y, of type T.
/// Clamp the result to the maximum representable value of T on overflow.
/// ResultOverflowed indicates if the result is larger than the maximum
/// representable value of type T.
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, T>::type
SaturatingAdd(T X, T Y, bool *ResultOverflowed = nullptr) {
  bool Dummy;
  bool &Overflowed = ResultOverflowed ? *ResultOverflowed : Dummy;
  // Hacker's Delight, p. 29
  T Z = X + Y;
  Overflowed = (Z < X || Z < Y);
  if (Overflowed)
    return std::numeric_limits<T>::max();
  else
    return Z;
}

/// \brief Multiply two unsigned integers, X and Y, of type T.
/// Clamp the result to the maximum representable value of T on overflow.
/// ResultOverflowed indicates if the result is larger than the maximum
/// representable value of type T.
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, T>::type
SaturatingMultiply(T X, T Y, bool *ResultOverflowed = nullptr) {
  bool Dummy;
  bool &Overflowed = ResultOverflowed ? *ResultOverflowed : Dummy;

  // Hacker's Delight, p. 30 has a different algorithm, but we don't use that
  // because it fails for uint16_t (where multiplication can have undefined
  // behavior due to promotion to int), and requires a division in addition
  // to the multiplication.

  Overflowed = false;

  // Log2(Z) would be either Log2Z or Log2Z + 1.
  // Special case: if X or Y is 0, Log2_64 gives -1, and Log2Z
  // will necessarily be less than Log2Max as desired.
  int Log2Z = Log2_64(X) + Log2_64(Y);
  const T Max = std::numeric_limits<T>::max();
  int Log2Max = Log2_64(Max);
  if (Log2Z < Log2Max) {
    return X * Y;
  }
  if (Log2Z > Log2Max) {
    Overflowed = true;
    return Max;
  }

  // We're going to use the top bit, and maybe overflow one
  // bit past it. Multiply all but the bottom bit then add
  // that on at the end.
  T Z = (X >> 1) * Y;
  if (Z & ~(Max >> 1)) {
    Overflowed = true;
    return Max;
  }
  Z <<= 1;
  if (X & 1)
    return SaturatingAdd(Z, Y, ResultOverflowed);

  return Z;
}

/// \brief Multiply two unsigned integers, X and Y, and add the unsigned
/// integer, A to the product. Clamp the result to the maximum representable
/// value of T on overflow. ResultOverflowed indicates if the result is larger
/// than the maximum representable value of type T.
/// Note that this is purely a convenience function as there is no distinction
/// where overflow occurred in a 'fused' multiply-add for unsigned numbers.
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, T>::type
SaturatingMultiplyAdd(T X, T Y, T A, bool *ResultOverflowed = nullptr) {
  bool Dummy;
  bool &Overflowed = ResultOverflowed ? *ResultOverflowed : Dummy;

  T Product = SaturatingMultiply(X, Y, &Overflowed);
  if (Overflowed)
    return Product;

  return SaturatingAdd(A, Product, &Overflowed);
}

extern const float huge_valf;
} // End llvm namespace

#endif
