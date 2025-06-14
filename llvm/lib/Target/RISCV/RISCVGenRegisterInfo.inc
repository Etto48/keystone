/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm_ks {

class MCRegisterClass;
extern const MCRegisterClass RISCVMCRegisterClasses[];

namespace RISCV {
enum {
  NoRegister,
  X0 = 1,
  X1 = 2,
  X2 = 3,
  X3 = 4,
  X4 = 5,
  X5 = 6,
  X6 = 7,
  X7 = 8,
  X8 = 9,
  X9 = 10,
  X10 = 11,
  X11 = 12,
  X12 = 13,
  X13 = 14,
  X14 = 15,
  X15 = 16,
  X16 = 17,
  X17 = 18,
  X18 = 19,
  X19 = 20,
  X20 = 21,
  X21 = 22,
  X22 = 23,
  X23 = 24,
  X24 = 25,
  X25 = 26,
  X26 = 27,
  X27 = 28,
  X28 = 29,
  X29 = 30,
  X30 = 31,
  X31 = 32,
  F0_32 = 33,
  F0_64 = 34,
  F1_32 = 35,
  F1_64 = 36,
  F2_32 = 37,
  F2_64 = 38,
  F3_32 = 39,
  F3_64 = 40,
  F4_32 = 41,
  F4_64 = 42,
  F5_32 = 43,
  F5_64 = 44,
  F6_32 = 45,
  F6_64 = 46,
  F7_32 = 47,
  F7_64 = 48,
  F8_32 = 49,
  F8_64 = 50,
  F9_32 = 51,
  F9_64 = 52,
  F10_32 = 53,
  F10_64 = 54,
  F11_32 = 55,
  F11_64 = 56,
  F12_32 = 57,
  F12_64 = 58,
  F13_32 = 59,
  F13_64 = 60,
  F14_32 = 61,
  F14_64 = 62,
  F15_32 = 63,
  F15_64 = 64,
  F16_32 = 65,
  F16_64 = 66,
  F17_32 = 67,
  F17_64 = 68,
  F18_32 = 69,
  F18_64 = 70,
  F19_32 = 71,
  F19_64 = 72,
  F20_32 = 73,
  F20_64 = 74,
  F21_32 = 75,
  F21_64 = 76,
  F22_32 = 77,
  F22_64 = 78,
  F23_32 = 79,
  F23_64 = 80,
  F24_32 = 81,
  F24_64 = 82,
  F25_32 = 83,
  F25_64 = 84,
  F26_32 = 85,
  F26_64 = 86,
  F27_32 = 87,
  F27_64 = 88,
  F28_32 = 89,
  F28_64 = 90,
  F29_32 = 91,
  F29_64 = 92,
  F30_32 = 93,
  F30_64 = 94,
  F31_32 = 95,
  F31_64 = 96,
  NUM_TARGET_REGS 	// 97
};
} // end namespace RISCV

// Register classes

namespace RISCV {
enum {
  FPR32RegClassID = 0,
  GPRRegClassID = 1,
  GPRNoX0RegClassID = 2,
  GPRNoX0X2RegClassID = 3,
  GPRTCRegClassID = 4,
  FPR32CRegClassID = 5,
  GPRCRegClassID = 6,
  GPRC_and_GPRTCRegClassID = 7,
  SPRegClassID = 8,
  FPR64RegClassID = 9,
  FPR64CRegClassID = 10,

  };
} // end namespace RISCV


// Register alternate name indices

namespace RISCV {
enum {
  ABIRegAltName,	// 0
  NoRegAltName,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};
} // end namespace RISCV


// Subregister indices

namespace RISCV {
enum {
  NoSubRegister,
  sub_32,	// 1
  NUM_TARGET_SUBREGS
};
} // end namespace RISCV

} // end namespace llvm_ks

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm_ks {

extern const MCPhysReg RISCVRegDiffLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 32, 0,
  /* 4 */ 33, 0,
  /* 6 */ 34, 0,
  /* 8 */ 35, 0,
  /* 10 */ 36, 0,
  /* 12 */ 37, 0,
  /* 14 */ 38, 0,
  /* 16 */ 39, 0,
  /* 18 */ 40, 0,
  /* 20 */ 41, 0,
  /* 22 */ 42, 0,
  /* 24 */ 43, 0,
  /* 26 */ 44, 0,
  /* 28 */ 45, 0,
  /* 30 */ 46, 0,
  /* 32 */ 47, 0,
  /* 34 */ 48, 0,
  /* 36 */ 49, 0,
  /* 38 */ 50, 0,
  /* 40 */ 51, 0,
  /* 42 */ 52, 0,
  /* 44 */ 53, 0,
  /* 46 */ 54, 0,
  /* 48 */ 55, 0,
  /* 50 */ 56, 0,
  /* 52 */ 57, 0,
  /* 54 */ 58, 0,
  /* 56 */ 59, 0,
  /* 58 */ 60, 0,
  /* 60 */ 61, 0,
  /* 62 */ 62, 0,
  /* 64 */ 63, 0,
  /* 66 */ 65535, 0,
};

extern const unsigned RISCVLaneMaskLists[] = {
  /* 0 */ 0x00000000, ~0u,
  /* 2 */ 0x00000001, ~0u,
};

extern const uint16_t RISCVSubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits RISCVSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
};

extern const char RISCVRegStrings[] = {
  /* 0 */ 'X', '1', '0', 0,
  /* 4 */ 'X', '2', '0', 0,
  /* 8 */ 'X', '3', '0', 0,
  /* 12 */ 'X', '0', 0,
  /* 15 */ 'X', '1', '1', 0,
  /* 19 */ 'X', '2', '1', 0,
  /* 23 */ 'X', '3', '1', 0,
  /* 27 */ 'X', '1', 0,
  /* 30 */ 'X', '1', '2', 0,
  /* 34 */ 'X', '2', '2', 0,
  /* 38 */ 'F', '1', '0', '_', '3', '2', 0,
  /* 45 */ 'F', '2', '0', '_', '3', '2', 0,
  /* 52 */ 'F', '3', '0', '_', '3', '2', 0,
  /* 59 */ 'F', '0', '_', '3', '2', 0,
  /* 65 */ 'F', '1', '1', '_', '3', '2', 0,
  /* 72 */ 'F', '2', '1', '_', '3', '2', 0,
  /* 79 */ 'F', '3', '1', '_', '3', '2', 0,
  /* 86 */ 'F', '1', '_', '3', '2', 0,
  /* 92 */ 'F', '1', '2', '_', '3', '2', 0,
  /* 99 */ 'F', '2', '2', '_', '3', '2', 0,
  /* 106 */ 'F', '2', '_', '3', '2', 0,
  /* 112 */ 'F', '1', '3', '_', '3', '2', 0,
  /* 119 */ 'F', '2', '3', '_', '3', '2', 0,
  /* 126 */ 'F', '3', '_', '3', '2', 0,
  /* 132 */ 'F', '1', '4', '_', '3', '2', 0,
  /* 139 */ 'F', '2', '4', '_', '3', '2', 0,
  /* 146 */ 'F', '4', '_', '3', '2', 0,
  /* 152 */ 'F', '1', '5', '_', '3', '2', 0,
  /* 159 */ 'F', '2', '5', '_', '3', '2', 0,
  /* 166 */ 'F', '5', '_', '3', '2', 0,
  /* 172 */ 'F', '1', '6', '_', '3', '2', 0,
  /* 179 */ 'F', '2', '6', '_', '3', '2', 0,
  /* 186 */ 'F', '6', '_', '3', '2', 0,
  /* 192 */ 'F', '1', '7', '_', '3', '2', 0,
  /* 199 */ 'F', '2', '7', '_', '3', '2', 0,
  /* 206 */ 'F', '7', '_', '3', '2', 0,
  /* 212 */ 'F', '1', '8', '_', '3', '2', 0,
  /* 219 */ 'F', '2', '8', '_', '3', '2', 0,
  /* 226 */ 'F', '8', '_', '3', '2', 0,
  /* 232 */ 'F', '1', '9', '_', '3', '2', 0,
  /* 239 */ 'F', '2', '9', '_', '3', '2', 0,
  /* 246 */ 'F', '9', '_', '3', '2', 0,
  /* 252 */ 'X', '2', 0,
  /* 255 */ 'X', '1', '3', 0,
  /* 259 */ 'X', '2', '3', 0,
  /* 263 */ 'X', '3', 0,
  /* 266 */ 'X', '1', '4', 0,
  /* 270 */ 'X', '2', '4', 0,
  /* 274 */ 'F', '1', '0', '_', '6', '4', 0,
  /* 281 */ 'F', '2', '0', '_', '6', '4', 0,
  /* 288 */ 'F', '3', '0', '_', '6', '4', 0,
  /* 295 */ 'F', '0', '_', '6', '4', 0,
  /* 301 */ 'F', '1', '1', '_', '6', '4', 0,
  /* 308 */ 'F', '2', '1', '_', '6', '4', 0,
  /* 315 */ 'F', '3', '1', '_', '6', '4', 0,
  /* 322 */ 'F', '1', '_', '6', '4', 0,
  /* 328 */ 'F', '1', '2', '_', '6', '4', 0,
  /* 335 */ 'F', '2', '2', '_', '6', '4', 0,
  /* 342 */ 'F', '2', '_', '6', '4', 0,
  /* 348 */ 'F', '1', '3', '_', '6', '4', 0,
  /* 355 */ 'F', '2', '3', '_', '6', '4', 0,
  /* 362 */ 'F', '3', '_', '6', '4', 0,
  /* 368 */ 'F', '1', '4', '_', '6', '4', 0,
  /* 375 */ 'F', '2', '4', '_', '6', '4', 0,
  /* 382 */ 'F', '4', '_', '6', '4', 0,
  /* 388 */ 'F', '1', '5', '_', '6', '4', 0,
  /* 395 */ 'F', '2', '5', '_', '6', '4', 0,
  /* 402 */ 'F', '5', '_', '6', '4', 0,
  /* 408 */ 'F', '1', '6', '_', '6', '4', 0,
  /* 415 */ 'F', '2', '6', '_', '6', '4', 0,
  /* 422 */ 'F', '6', '_', '6', '4', 0,
  /* 428 */ 'F', '1', '7', '_', '6', '4', 0,
  /* 435 */ 'F', '2', '7', '_', '6', '4', 0,
  /* 442 */ 'F', '7', '_', '6', '4', 0,
  /* 448 */ 'F', '1', '8', '_', '6', '4', 0,
  /* 455 */ 'F', '2', '8', '_', '6', '4', 0,
  /* 462 */ 'F', '8', '_', '6', '4', 0,
  /* 468 */ 'F', '1', '9', '_', '6', '4', 0,
  /* 475 */ 'F', '2', '9', '_', '6', '4', 0,
  /* 482 */ 'F', '9', '_', '6', '4', 0,
  /* 488 */ 'X', '4', 0,
  /* 491 */ 'X', '1', '5', 0,
  /* 495 */ 'X', '2', '5', 0,
  /* 499 */ 'X', '5', 0,
  /* 502 */ 'X', '1', '6', 0,
  /* 506 */ 'X', '2', '6', 0,
  /* 510 */ 'X', '6', 0,
  /* 513 */ 'X', '1', '7', 0,
  /* 517 */ 'X', '2', '7', 0,
  /* 521 */ 'X', '7', 0,
  /* 524 */ 'X', '1', '8', 0,
  /* 528 */ 'X', '2', '8', 0,
  /* 532 */ 'X', '8', 0,
  /* 535 */ 'X', '1', '9', 0,
  /* 539 */ 'X', '2', '9', 0,
  /* 543 */ 'X', '9', 0,
};

extern const MCRegisterDesc RISCVRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 12, 1, 1, 1, 1057, 0 },
  { 27, 1, 1, 1, 1057, 0 },
  { 252, 1, 1, 1, 1057, 0 },
  { 263, 1, 1, 1, 1057, 0 },
  { 488, 1, 1, 1, 1057, 0 },
  { 499, 1, 1, 1, 1057, 0 },
  { 510, 1, 1, 1, 1057, 0 },
  { 521, 1, 1, 1, 1057, 0 },
  { 532, 1, 1, 1, 1057, 0 },
  { 543, 1, 1, 1, 1057, 0 },
  { 0, 1, 1, 1, 1057, 0 },
  { 15, 1, 1, 1, 1057, 0 },
  { 30, 1, 1, 1, 1057, 0 },
  { 255, 1, 1, 1, 1057, 0 },
  { 266, 1, 1, 1, 1057, 0 },
  { 491, 1, 1, 1, 1057, 0 },
  { 502, 1, 1, 1, 1057, 0 },
  { 513, 1, 1, 1, 1057, 0 },
  { 524, 1, 1, 1, 1057, 0 },
  { 535, 1, 1, 1, 1057, 0 },
  { 4, 1, 1, 1, 1057, 0 },
  { 19, 1, 1, 1, 1057, 0 },
  { 34, 1, 1, 1, 1057, 0 },
  { 259, 1, 1, 1, 1057, 0 },
  { 270, 1, 1, 1, 1057, 0 },
  { 495, 1, 1, 1, 1057, 0 },
  { 506, 1, 1, 1, 1057, 0 },
  { 517, 1, 1, 1, 1057, 0 },
  { 528, 1, 1, 1, 1057, 0 },
  { 539, 1, 1, 1, 1057, 0 },
  { 8, 1, 1, 1, 1057, 0 },
  { 23, 1, 1, 1, 1057, 0 },
  { 59, 1, 0, 1, 32, 0 },
  { 295, 66, 1, 0, 32, 2 },
  { 86, 1, 0, 1, 64, 0 },
  { 322, 66, 1, 0, 64, 2 },
  { 106, 1, 0, 1, 96, 0 },
  { 342, 66, 1, 0, 96, 2 },
  { 126, 1, 0, 1, 128, 0 },
  { 362, 66, 1, 0, 128, 2 },
  { 146, 1, 0, 1, 160, 0 },
  { 382, 66, 1, 0, 160, 2 },
  { 166, 1, 0, 1, 192, 0 },
  { 402, 66, 1, 0, 192, 2 },
  { 186, 1, 0, 1, 224, 0 },
  { 422, 66, 1, 0, 224, 2 },
  { 206, 1, 0, 1, 256, 0 },
  { 442, 66, 1, 0, 256, 2 },
  { 226, 1, 0, 1, 288, 0 },
  { 462, 66, 1, 0, 288, 2 },
  { 246, 1, 0, 1, 320, 0 },
  { 482, 66, 1, 0, 320, 2 },
  { 38, 1, 0, 1, 352, 0 },
  { 274, 66, 1, 0, 352, 2 },
  { 65, 1, 0, 1, 384, 0 },
  { 301, 66, 1, 0, 384, 2 },
  { 92, 1, 0, 1, 416, 0 },
  { 328, 66, 1, 0, 416, 2 },
  { 112, 1, 0, 1, 448, 0 },
  { 348, 66, 1, 0, 448, 2 },
  { 132, 1, 0, 1, 480, 0 },
  { 368, 66, 1, 0, 480, 2 },
  { 152, 1, 0, 1, 512, 0 },
  { 388, 66, 1, 0, 512, 2 },
  { 172, 1, 0, 1, 544, 0 },
  { 408, 66, 1, 0, 544, 2 },
  { 192, 1, 0, 1, 576, 0 },
  { 428, 66, 1, 0, 576, 2 },
  { 212, 1, 0, 1, 608, 0 },
  { 448, 66, 1, 0, 608, 2 },
  { 232, 1, 0, 1, 640, 0 },
  { 468, 66, 1, 0, 640, 2 },
  { 45, 1, 0, 1, 672, 0 },
  { 281, 66, 1, 0, 672, 2 },
  { 72, 1, 0, 1, 704, 0 },
  { 308, 66, 1, 0, 704, 2 },
  { 99, 1, 0, 1, 736, 0 },
  { 335, 66, 1, 0, 736, 2 },
  { 119, 1, 0, 1, 768, 0 },
  { 355, 66, 1, 0, 768, 2 },
  { 139, 1, 0, 1, 800, 0 },
  { 375, 66, 1, 0, 800, 2 },
  { 159, 1, 0, 1, 832, 0 },
  { 395, 66, 1, 0, 832, 2 },
  { 179, 1, 0, 1, 864, 0 },
  { 415, 66, 1, 0, 864, 2 },
  { 199, 1, 0, 1, 896, 0 },
  { 435, 66, 1, 0, 896, 2 },
  { 219, 1, 0, 1, 928, 0 },
  { 455, 66, 1, 0, 928, 2 },
  { 239, 1, 0, 1, 960, 0 },
  { 475, 66, 1, 0, 960, 2 },
  { 52, 1, 0, 1, 992, 0 },
  { 288, 66, 1, 0, 992, 2 },
  { 79, 1, 0, 1, 1024, 0 },
  { 315, 66, 1, 0, 1024, 2 },
};

extern const MCPhysReg RISCVRegUnitRoots[][2] = {
  { RISCV::X0 },
  { RISCV::X1 },
  { RISCV::X2 },
  { RISCV::X3 },
  { RISCV::X4 },
  { RISCV::X5 },
  { RISCV::X6 },
  { RISCV::X7 },
  { RISCV::X8 },
  { RISCV::X9 },
  { RISCV::X10 },
  { RISCV::X11 },
  { RISCV::X12 },
  { RISCV::X13 },
  { RISCV::X14 },
  { RISCV::X15 },
  { RISCV::X16 },
  { RISCV::X17 },
  { RISCV::X18 },
  { RISCV::X19 },
  { RISCV::X20 },
  { RISCV::X21 },
  { RISCV::X22 },
  { RISCV::X23 },
  { RISCV::X24 },
  { RISCV::X25 },
  { RISCV::X26 },
  { RISCV::X27 },
  { RISCV::X28 },
  { RISCV::X29 },
  { RISCV::X30 },
  { RISCV::X31 },
  { RISCV::F0_32 },
  { RISCV::F1_32 },
  { RISCV::F2_32 },
  { RISCV::F3_32 },
  { RISCV::F4_32 },
  { RISCV::F5_32 },
  { RISCV::F6_32 },
  { RISCV::F7_32 },
  { RISCV::F8_32 },
  { RISCV::F9_32 },
  { RISCV::F10_32 },
  { RISCV::F11_32 },
  { RISCV::F12_32 },
  { RISCV::F13_32 },
  { RISCV::F14_32 },
  { RISCV::F15_32 },
  { RISCV::F16_32 },
  { RISCV::F17_32 },
  { RISCV::F18_32 },
  { RISCV::F19_32 },
  { RISCV::F20_32 },
  { RISCV::F21_32 },
  { RISCV::F22_32 },
  { RISCV::F23_32 },
  { RISCV::F24_32 },
  { RISCV::F25_32 },
  { RISCV::F26_32 },
  { RISCV::F27_32 },
  { RISCV::F28_32 },
  { RISCV::F29_32 },
  { RISCV::F30_32 },
  { RISCV::F31_32 },
};

namespace {     // Register classes...
  // FPR32 Register Class...
  const MCPhysReg FPR32[] = {
    RISCV::F0_32, RISCV::F1_32, RISCV::F2_32, RISCV::F3_32, RISCV::F4_32, RISCV::F5_32, RISCV::F6_32, RISCV::F7_32, RISCV::F10_32, RISCV::F11_32, RISCV::F12_32, RISCV::F13_32, RISCV::F14_32, RISCV::F15_32, RISCV::F16_32, RISCV::F17_32, RISCV::F28_32, RISCV::F29_32, RISCV::F30_32, RISCV::F31_32, RISCV::F8_32, RISCV::F9_32, RISCV::F18_32, RISCV::F19_32, RISCV::F20_32, RISCV::F21_32, RISCV::F22_32, RISCV::F23_32, RISCV::F24_32, RISCV::F25_32, RISCV::F26_32, RISCV::F27_32, 
  };

  // FPR32 Bit set.
  const uint8_t FPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
  };

  // GPR Register Class...
  const MCPhysReg GPR[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X0, RISCV::X1, RISCV::X2, RISCV::X3, RISCV::X4, 
  };

  // GPR Bit set.
  const uint8_t GPRBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPRNoX0 Register Class...
  const MCPhysReg GPRNoX0[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X1, RISCV::X2, RISCV::X3, RISCV::X4, 
  };

  // GPRNoX0 Bit set.
  const uint8_t GPRNoX0Bits[] = {
    0xfc, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPRNoX0X2 Register Class...
  const MCPhysReg GPRNoX0X2[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X1, RISCV::X3, RISCV::X4, 
  };

  // GPRNoX0X2 Bit set.
  const uint8_t GPRNoX0X2Bits[] = {
    0xf4, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPRTC Register Class...
  const MCPhysReg GPRTC[] = {
    RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, 
  };

  // GPRTC Bit set.
  const uint8_t GPRTCBits[] = {
    0xc0, 0xf9, 0x07, 0xe0, 0x01, 
  };

  // FPR32C Register Class...
  const MCPhysReg FPR32C[] = {
    RISCV::F10_32, RISCV::F11_32, RISCV::F12_32, RISCV::F13_32, RISCV::F14_32, RISCV::F15_32, RISCV::F8_32, RISCV::F9_32, 
  };

  // FPR32C Bit set.
  const uint8_t FPR32CBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 
  };

  // GPRC Register Class...
  const MCPhysReg GPRC[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X8, RISCV::X9, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0x00, 0xfe, 0x01, 
  };

  // GPRC_and_GPRTC Register Class...
  const MCPhysReg GPRC_and_GPRTC[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, 
  };

  // GPRC_and_GPRTC Bit set.
  const uint8_t GPRC_and_GPRTCBits[] = {
    0x00, 0xf8, 0x01, 
  };

  // SP Register Class...
  const MCPhysReg SP[] = {
    RISCV::X2, 
  };

  // SP Bit set.
  const uint8_t SPBits[] = {
    0x08, 
  };

  // FPR64 Register Class...
  const MCPhysReg FPR64[] = {
    RISCV::F0_64, RISCV::F1_64, RISCV::F2_64, RISCV::F3_64, RISCV::F4_64, RISCV::F5_64, RISCV::F6_64, RISCV::F7_64, RISCV::F10_64, RISCV::F11_64, RISCV::F12_64, RISCV::F13_64, RISCV::F14_64, RISCV::F15_64, RISCV::F16_64, RISCV::F17_64, RISCV::F28_64, RISCV::F29_64, RISCV::F30_64, RISCV::F31_64, RISCV::F8_64, RISCV::F9_64, RISCV::F18_64, RISCV::F19_64, RISCV::F20_64, RISCV::F21_64, RISCV::F22_64, RISCV::F23_64, RISCV::F24_64, RISCV::F25_64, RISCV::F26_64, RISCV::F27_64, 
  };

  // FPR64 Bit set.
  const uint8_t FPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x01, 
  };

  // FPR64C Register Class...
  const MCPhysReg FPR64C[] = {
    RISCV::F10_64, RISCV::F11_64, RISCV::F12_64, RISCV::F13_64, RISCV::F14_64, RISCV::F15_64, RISCV::F8_64, RISCV::F9_64, 
  };

  // FPR64C Bit set.
  const uint8_t FPR64CBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x55, 0x01, 
  };

} // end anonymous namespace

extern const char RISCVRegClassStrings[] = {
  /* 0 */ 'G', 'P', 'R', 'N', 'o', 'X', '0', 0,
  /* 8 */ 'F', 'P', 'R', '3', '2', 0,
  /* 14 */ 'G', 'P', 'R', 'N', 'o', 'X', '0', 'X', '2', 0,
  /* 24 */ 'F', 'P', 'R', '6', '4', 0,
  /* 30 */ 'F', 'P', 'R', '3', '2', 'C', 0,
  /* 37 */ 'F', 'P', 'R', '6', '4', 'C', 0,
  /* 44 */ 'G', 'P', 'R', 'C', 0,
  /* 49 */ 'G', 'P', 'R', 'C', '_', 'a', 'n', 'd', '_', 'G', 'P', 'R', 'T', 'C', 0,
  /* 64 */ 'S', 'P', 0,
  /* 67 */ 'G', 'P', 'R', 0,
};

extern const MCRegisterClass RISCVMCRegisterClasses[] = {
  { FPR32, FPR32Bits, 8, 32, sizeof(FPR32Bits), RISCV::FPR32RegClassID, 1, true },
  { GPR, GPRBits, 67, 32, sizeof(GPRBits), RISCV::GPRRegClassID, 1, true },
  { GPRNoX0, GPRNoX0Bits, 0, 31, sizeof(GPRNoX0Bits), RISCV::GPRNoX0RegClassID, 1, true },
  { GPRNoX0X2, GPRNoX0X2Bits, 14, 30, sizeof(GPRNoX0X2Bits), RISCV::GPRNoX0X2RegClassID, 1, true },
  { GPRTC, GPRTCBits, 58, 15, sizeof(GPRTCBits), RISCV::GPRTCRegClassID, 1, true },
  { FPR32C, FPR32CBits, 30, 8, sizeof(FPR32CBits), RISCV::FPR32CRegClassID, 1, true },
  { GPRC, GPRCBits, 44, 8, sizeof(GPRCBits), RISCV::GPRCRegClassID, 1, true },
  { GPRC_and_GPRTC, GPRC_and_GPRTCBits, 49, 6, sizeof(GPRC_and_GPRTCBits), RISCV::GPRC_and_GPRTCRegClassID, 1, true },
  { SP, SPBits, 64, 1, sizeof(SPBits), RISCV::SPRegClassID, 1, true },
  { FPR64, FPR64Bits, 24, 32, sizeof(FPR64Bits), RISCV::FPR64RegClassID, 1, true },
  { FPR64C, FPR64CBits, 37, 8, sizeof(FPR64CBits), RISCV::FPR64CRegClassID, 1, true },
};

// RISCV Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair RISCVDwarfFlavour0Dwarf2L[] = {
  { 0U, RISCV::X0 },
  { 1U, RISCV::X1 },
  { 2U, RISCV::X2 },
  { 3U, RISCV::X3 },
  { 4U, RISCV::X4 },
  { 5U, RISCV::X5 },
  { 6U, RISCV::X6 },
  { 7U, RISCV::X7 },
  { 8U, RISCV::X8 },
  { 9U, RISCV::X9 },
  { 10U, RISCV::X10 },
  { 11U, RISCV::X11 },
  { 12U, RISCV::X12 },
  { 13U, RISCV::X13 },
  { 14U, RISCV::X14 },
  { 15U, RISCV::X15 },
  { 16U, RISCV::X16 },
  { 17U, RISCV::X17 },
  { 18U, RISCV::X18 },
  { 19U, RISCV::X19 },
  { 20U, RISCV::X20 },
  { 21U, RISCV::X21 },
  { 22U, RISCV::X22 },
  { 23U, RISCV::X23 },
  { 24U, RISCV::X24 },
  { 25U, RISCV::X25 },
  { 26U, RISCV::X26 },
  { 27U, RISCV::X27 },
  { 28U, RISCV::X28 },
  { 29U, RISCV::X29 },
  { 30U, RISCV::X30 },
  { 31U, RISCV::X31 },
  { 32U, RISCV::F0_64 },
  { 33U, RISCV::F1_64 },
  { 34U, RISCV::F2_64 },
  { 35U, RISCV::F3_64 },
  { 36U, RISCV::F4_64 },
  { 37U, RISCV::F5_64 },
  { 38U, RISCV::F6_64 },
  { 39U, RISCV::F7_64 },
  { 40U, RISCV::F8_64 },
  { 41U, RISCV::F9_64 },
  { 42U, RISCV::F10_64 },
  { 43U, RISCV::F11_64 },
  { 44U, RISCV::F12_64 },
  { 45U, RISCV::F13_64 },
  { 46U, RISCV::F14_64 },
  { 47U, RISCV::F15_64 },
  { 48U, RISCV::F16_64 },
  { 49U, RISCV::F17_64 },
  { 50U, RISCV::F18_64 },
  { 51U, RISCV::F19_64 },
  { 52U, RISCV::F20_64 },
  { 53U, RISCV::F21_64 },
  { 54U, RISCV::F22_64 },
  { 55U, RISCV::F23_64 },
  { 56U, RISCV::F24_64 },
  { 57U, RISCV::F25_64 },
  { 58U, RISCV::F26_64 },
  { 59U, RISCV::F27_64 },
  { 60U, RISCV::F28_64 },
  { 61U, RISCV::F29_64 },
  { 62U, RISCV::F30_64 },
  { 63U, RISCV::F31_64 },
};
extern const unsigned RISCVDwarfFlavour0Dwarf2LSize = std::size(RISCVDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVEHFlavour0Dwarf2L[] = {
  { 0U, RISCV::X0 },
  { 1U, RISCV::X1 },
  { 2U, RISCV::X2 },
  { 3U, RISCV::X3 },
  { 4U, RISCV::X4 },
  { 5U, RISCV::X5 },
  { 6U, RISCV::X6 },
  { 7U, RISCV::X7 },
  { 8U, RISCV::X8 },
  { 9U, RISCV::X9 },
  { 10U, RISCV::X10 },
  { 11U, RISCV::X11 },
  { 12U, RISCV::X12 },
  { 13U, RISCV::X13 },
  { 14U, RISCV::X14 },
  { 15U, RISCV::X15 },
  { 16U, RISCV::X16 },
  { 17U, RISCV::X17 },
  { 18U, RISCV::X18 },
  { 19U, RISCV::X19 },
  { 20U, RISCV::X20 },
  { 21U, RISCV::X21 },
  { 22U, RISCV::X22 },
  { 23U, RISCV::X23 },
  { 24U, RISCV::X24 },
  { 25U, RISCV::X25 },
  { 26U, RISCV::X26 },
  { 27U, RISCV::X27 },
  { 28U, RISCV::X28 },
  { 29U, RISCV::X29 },
  { 30U, RISCV::X30 },
  { 31U, RISCV::X31 },
  { 32U, RISCV::F0_64 },
  { 33U, RISCV::F1_64 },
  { 34U, RISCV::F2_64 },
  { 35U, RISCV::F3_64 },
  { 36U, RISCV::F4_64 },
  { 37U, RISCV::F5_64 },
  { 38U, RISCV::F6_64 },
  { 39U, RISCV::F7_64 },
  { 40U, RISCV::F8_64 },
  { 41U, RISCV::F9_64 },
  { 42U, RISCV::F10_64 },
  { 43U, RISCV::F11_64 },
  { 44U, RISCV::F12_64 },
  { 45U, RISCV::F13_64 },
  { 46U, RISCV::F14_64 },
  { 47U, RISCV::F15_64 },
  { 48U, RISCV::F16_64 },
  { 49U, RISCV::F17_64 },
  { 50U, RISCV::F18_64 },
  { 51U, RISCV::F19_64 },
  { 52U, RISCV::F20_64 },
  { 53U, RISCV::F21_64 },
  { 54U, RISCV::F22_64 },
  { 55U, RISCV::F23_64 },
  { 56U, RISCV::F24_64 },
  { 57U, RISCV::F25_64 },
  { 58U, RISCV::F26_64 },
  { 59U, RISCV::F27_64 },
  { 60U, RISCV::F28_64 },
  { 61U, RISCV::F29_64 },
  { 62U, RISCV::F30_64 },
  { 63U, RISCV::F31_64 },
};
extern const unsigned RISCVEHFlavour0Dwarf2LSize = std::size(RISCVEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVDwarfFlavour0L2Dwarf[] = {
  { RISCV::X0, 0U },
  { RISCV::X1, 1U },
  { RISCV::X2, 2U },
  { RISCV::X3, 3U },
  { RISCV::X4, 4U },
  { RISCV::X5, 5U },
  { RISCV::X6, 6U },
  { RISCV::X7, 7U },
  { RISCV::X8, 8U },
  { RISCV::X9, 9U },
  { RISCV::X10, 10U },
  { RISCV::X11, 11U },
  { RISCV::X12, 12U },
  { RISCV::X13, 13U },
  { RISCV::X14, 14U },
  { RISCV::X15, 15U },
  { RISCV::X16, 16U },
  { RISCV::X17, 17U },
  { RISCV::X18, 18U },
  { RISCV::X19, 19U },
  { RISCV::X20, 20U },
  { RISCV::X21, 21U },
  { RISCV::X22, 22U },
  { RISCV::X23, 23U },
  { RISCV::X24, 24U },
  { RISCV::X25, 25U },
  { RISCV::X26, 26U },
  { RISCV::X27, 27U },
  { RISCV::X28, 28U },
  { RISCV::X29, 29U },
  { RISCV::X30, 30U },
  { RISCV::X31, 31U },
  { RISCV::F0_32, 32U },
  { RISCV::F0_64, 32U },
  { RISCV::F1_32, 33U },
  { RISCV::F1_64, 33U },
  { RISCV::F2_32, 34U },
  { RISCV::F2_64, 34U },
  { RISCV::F3_32, 35U },
  { RISCV::F3_64, 35U },
  { RISCV::F4_32, 36U },
  { RISCV::F4_64, 36U },
  { RISCV::F5_32, 37U },
  { RISCV::F5_64, 37U },
  { RISCV::F6_32, 38U },
  { RISCV::F6_64, 38U },
  { RISCV::F7_32, 39U },
  { RISCV::F7_64, 39U },
  { RISCV::F8_32, 40U },
  { RISCV::F8_64, 40U },
  { RISCV::F9_32, 41U },
  { RISCV::F9_64, 41U },
  { RISCV::F10_32, 42U },
  { RISCV::F10_64, 42U },
  { RISCV::F11_32, 43U },
  { RISCV::F11_64, 43U },
  { RISCV::F12_32, 44U },
  { RISCV::F12_64, 44U },
  { RISCV::F13_32, 45U },
  { RISCV::F13_64, 45U },
  { RISCV::F14_32, 46U },
  { RISCV::F14_64, 46U },
  { RISCV::F15_32, 47U },
  { RISCV::F15_64, 47U },
  { RISCV::F16_32, 48U },
  { RISCV::F16_64, 48U },
  { RISCV::F17_32, 49U },
  { RISCV::F17_64, 49U },
  { RISCV::F18_32, 50U },
  { RISCV::F18_64, 50U },
  { RISCV::F19_32, 51U },
  { RISCV::F19_64, 51U },
  { RISCV::F20_32, 52U },
  { RISCV::F20_64, 52U },
  { RISCV::F21_32, 53U },
  { RISCV::F21_64, 53U },
  { RISCV::F22_32, 54U },
  { RISCV::F22_64, 54U },
  { RISCV::F23_32, 55U },
  { RISCV::F23_64, 55U },
  { RISCV::F24_32, 56U },
  { RISCV::F24_64, 56U },
  { RISCV::F25_32, 57U },
  { RISCV::F25_64, 57U },
  { RISCV::F26_32, 58U },
  { RISCV::F26_64, 58U },
  { RISCV::F27_32, 59U },
  { RISCV::F27_64, 59U },
  { RISCV::F28_32, 60U },
  { RISCV::F28_64, 60U },
  { RISCV::F29_32, 61U },
  { RISCV::F29_64, 61U },
  { RISCV::F30_32, 62U },
  { RISCV::F30_64, 62U },
  { RISCV::F31_32, 63U },
  { RISCV::F31_64, 63U },
};
extern const unsigned RISCVDwarfFlavour0L2DwarfSize = std::size(RISCVDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVEHFlavour0L2Dwarf[] = {
  { RISCV::X0, 0U },
  { RISCV::X1, 1U },
  { RISCV::X2, 2U },
  { RISCV::X3, 3U },
  { RISCV::X4, 4U },
  { RISCV::X5, 5U },
  { RISCV::X6, 6U },
  { RISCV::X7, 7U },
  { RISCV::X8, 8U },
  { RISCV::X9, 9U },
  { RISCV::X10, 10U },
  { RISCV::X11, 11U },
  { RISCV::X12, 12U },
  { RISCV::X13, 13U },
  { RISCV::X14, 14U },
  { RISCV::X15, 15U },
  { RISCV::X16, 16U },
  { RISCV::X17, 17U },
  { RISCV::X18, 18U },
  { RISCV::X19, 19U },
  { RISCV::X20, 20U },
  { RISCV::X21, 21U },
  { RISCV::X22, 22U },
  { RISCV::X23, 23U },
  { RISCV::X24, 24U },
  { RISCV::X25, 25U },
  { RISCV::X26, 26U },
  { RISCV::X27, 27U },
  { RISCV::X28, 28U },
  { RISCV::X29, 29U },
  { RISCV::X30, 30U },
  { RISCV::X31, 31U },
  { RISCV::F0_32, 32U },
  { RISCV::F0_64, 32U },
  { RISCV::F1_32, 33U },
  { RISCV::F1_64, 33U },
  { RISCV::F2_32, 34U },
  { RISCV::F2_64, 34U },
  { RISCV::F3_32, 35U },
  { RISCV::F3_64, 35U },
  { RISCV::F4_32, 36U },
  { RISCV::F4_64, 36U },
  { RISCV::F5_32, 37U },
  { RISCV::F5_64, 37U },
  { RISCV::F6_32, 38U },
  { RISCV::F6_64, 38U },
  { RISCV::F7_32, 39U },
  { RISCV::F7_64, 39U },
  { RISCV::F8_32, 40U },
  { RISCV::F8_64, 40U },
  { RISCV::F9_32, 41U },
  { RISCV::F9_64, 41U },
  { RISCV::F10_32, 42U },
  { RISCV::F10_64, 42U },
  { RISCV::F11_32, 43U },
  { RISCV::F11_64, 43U },
  { RISCV::F12_32, 44U },
  { RISCV::F12_64, 44U },
  { RISCV::F13_32, 45U },
  { RISCV::F13_64, 45U },
  { RISCV::F14_32, 46U },
  { RISCV::F14_64, 46U },
  { RISCV::F15_32, 47U },
  { RISCV::F15_64, 47U },
  { RISCV::F16_32, 48U },
  { RISCV::F16_64, 48U },
  { RISCV::F17_32, 49U },
  { RISCV::F17_64, 49U },
  { RISCV::F18_32, 50U },
  { RISCV::F18_64, 50U },
  { RISCV::F19_32, 51U },
  { RISCV::F19_64, 51U },
  { RISCV::F20_32, 52U },
  { RISCV::F20_64, 52U },
  { RISCV::F21_32, 53U },
  { RISCV::F21_64, 53U },
  { RISCV::F22_32, 54U },
  { RISCV::F22_64, 54U },
  { RISCV::F23_32, 55U },
  { RISCV::F23_64, 55U },
  { RISCV::F24_32, 56U },
  { RISCV::F24_64, 56U },
  { RISCV::F25_32, 57U },
  { RISCV::F25_64, 57U },
  { RISCV::F26_32, 58U },
  { RISCV::F26_64, 58U },
  { RISCV::F27_32, 59U },
  { RISCV::F27_64, 59U },
  { RISCV::F28_32, 60U },
  { RISCV::F28_64, 60U },
  { RISCV::F29_32, 61U },
  { RISCV::F29_64, 61U },
  { RISCV::F30_32, 62U },
  { RISCV::F30_64, 62U },
  { RISCV::F31_32, 63U },
  { RISCV::F31_64, 63U },
};
extern const unsigned RISCVEHFlavour0L2DwarfSize = std::size(RISCVEHFlavour0L2Dwarf);

extern const uint16_t RISCVRegEncodingTable[] = {
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  0,
  1,
  1,
  2,
  2,
  3,
  3,
  4,
  4,
  5,
  5,
  6,
  6,
  7,
  7,
  8,
  8,
  9,
  9,
  10,
  10,
  11,
  11,
  12,
  12,
  13,
  13,
  14,
  14,
  15,
  15,
  16,
  16,
  17,
  17,
  18,
  18,
  19,
  19,
  20,
  20,
  21,
  21,
  22,
  22,
  23,
  23,
  24,
  24,
  25,
  25,
  26,
  26,
  27,
  27,
  28,
  28,
  29,
  29,
  30,
  30,
  31,
  31,
};
static inline void InitRISCVMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(RISCVRegDesc, 97, RA, PC, RISCVMCRegisterClasses, 11, RISCVRegUnitRoots, 64, RISCVRegDiffLists, RISCVLaneMaskLists, RISCVRegStrings, RISCVRegClassStrings, RISCVSubRegIdxLists, 2,
RISCVSubRegIdxRanges, RISCVRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(RISCVDwarfFlavour0Dwarf2L, RISCVDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(RISCVEHFlavour0Dwarf2L, RISCVEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(RISCVDwarfFlavour0L2Dwarf, RISCVDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(RISCVEHFlavour0L2Dwarf, RISCVEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm_ks

#endif // GET_REGINFO_MC_DESC
