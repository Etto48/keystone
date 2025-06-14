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
extern const MCRegisterClass SPMCRegisterClasses[];

namespace SP {
enum {
  NoRegister,
  CANRESTORE = 1,
  CANSAVE = 2,
  CLEANWIN = 3,
  CWP = 4,
  FSR = 5,
  ICC = 6,
  OTHERWIN = 7,
  PIL = 8,
  PSR = 9,
  PSTATE = 10,
  TBA = 11,
  TBR = 12,
  TICK = 13,
  TL = 14,
  TNPC = 15,
  TPC = 16,
  TSTATE = 17,
  TT = 18,
  WIM = 19,
  WSTATE = 20,
  Y = 21,
  ASR1 = 22,
  ASR2 = 23,
  ASR3 = 24,
  ASR4 = 25,
  ASR5 = 26,
  ASR6 = 27,
  ASR7 = 28,
  ASR8 = 29,
  ASR9 = 30,
  ASR10 = 31,
  ASR11 = 32,
  ASR12 = 33,
  ASR13 = 34,
  ASR14 = 35,
  ASR15 = 36,
  ASR16 = 37,
  ASR17 = 38,
  ASR18 = 39,
  ASR19 = 40,
  ASR20 = 41,
  ASR21 = 42,
  ASR22 = 43,
  ASR23 = 44,
  ASR24 = 45,
  ASR25 = 46,
  ASR26 = 47,
  ASR27 = 48,
  ASR28 = 49,
  ASR29 = 50,
  ASR30 = 51,
  ASR31 = 52,
  D0 = 53,
  D1 = 54,
  D2 = 55,
  D3 = 56,
  D4 = 57,
  D5 = 58,
  D6 = 59,
  D7 = 60,
  D8 = 61,
  D9 = 62,
  D10 = 63,
  D11 = 64,
  D12 = 65,
  D13 = 66,
  D14 = 67,
  D15 = 68,
  D16 = 69,
  D17 = 70,
  D18 = 71,
  D19 = 72,
  D20 = 73,
  D21 = 74,
  D22 = 75,
  D23 = 76,
  D24 = 77,
  D25 = 78,
  D26 = 79,
  D27 = 80,
  D28 = 81,
  D29 = 82,
  D30 = 83,
  D31 = 84,
  F0 = 85,
  F1 = 86,
  F2 = 87,
  F3 = 88,
  F4 = 89,
  F5 = 90,
  F6 = 91,
  F7 = 92,
  F8 = 93,
  F9 = 94,
  F10 = 95,
  F11 = 96,
  F12 = 97,
  F13 = 98,
  F14 = 99,
  F15 = 100,
  F16 = 101,
  F17 = 102,
  F18 = 103,
  F19 = 104,
  F20 = 105,
  F21 = 106,
  F22 = 107,
  F23 = 108,
  F24 = 109,
  F25 = 110,
  F26 = 111,
  F27 = 112,
  F28 = 113,
  F29 = 114,
  F30 = 115,
  F31 = 116,
  FCC0 = 117,
  FCC1 = 118,
  FCC2 = 119,
  FCC3 = 120,
  G0 = 121,
  G1 = 122,
  G2 = 123,
  G3 = 124,
  G4 = 125,
  G5 = 126,
  G6 = 127,
  G7 = 128,
  I0 = 129,
  I1 = 130,
  I2 = 131,
  I3 = 132,
  I4 = 133,
  I5 = 134,
  I6 = 135,
  I7 = 136,
  L0 = 137,
  L1 = 138,
  L2 = 139,
  L3 = 140,
  L4 = 141,
  L5 = 142,
  L6 = 143,
  L7 = 144,
  O0 = 145,
  O1 = 146,
  O2 = 147,
  O3 = 148,
  O4 = 149,
  O5 = 150,
  O6 = 151,
  O7 = 152,
  Q0 = 153,
  Q1 = 154,
  Q2 = 155,
  Q3 = 156,
  Q4 = 157,
  Q5 = 158,
  Q6 = 159,
  Q7 = 160,
  Q8 = 161,
  Q9 = 162,
  Q10 = 163,
  Q11 = 164,
  Q12 = 165,
  Q13 = 166,
  Q14 = 167,
  Q15 = 168,
  G0_G1 = 169,
  G2_G3 = 170,
  G4_G5 = 171,
  G6_G7 = 172,
  I0_I1 = 173,
  I2_I3 = 174,
  I4_I5 = 175,
  I6_I7 = 176,
  L0_L1 = 177,
  L2_L3 = 178,
  L4_L5 = 179,
  L6_L7 = 180,
  O0_O1 = 181,
  O2_O3 = 182,
  O4_O5 = 183,
  O6_O7 = 184,
  NUM_TARGET_REGS 	// 185
};
}

// Register classes
namespace SP {
enum {
  FCCRegsRegClassID = 0,
  ASRRegsRegClassID = 1,
  FPRegsRegClassID = 2,
  IntRegsRegClassID = 3,
  DFPRegsRegClassID = 4,
  I64RegsRegClassID = 5,
  DFPRegs_with_sub_evenRegClassID = 6,
  IntPairRegClassID = 7,
  PRRegsRegClassID = 8,
  QFPRegsRegClassID = 9,
  QFPRegs_with_sub_evenRegClassID = 10,

  };
}

// Subregister indices
namespace SP {
enum {
  NoSubRegister,
  sub_even,	// 1
  sub_even64,	// 2
  sub_odd,	// 3
  sub_odd64,	// 4
  sub_odd64_then_sub_even,	// 5
  sub_odd64_then_sub_odd,	// 6
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace
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

extern const MCPhysReg SparcRegDiffLists[] = {
  /* 0 */ 64976, 1, 1, 1, 0,
  /* 5 */ 32, 1, 0,
  /* 8 */ 65436, 32, 1, 65504, 33, 1, 0,
  /* 15 */ 34, 1, 0,
  /* 18 */ 65437, 34, 1, 65502, 35, 1, 0,
  /* 25 */ 36, 1, 0,
  /* 28 */ 65438, 36, 1, 65500, 37, 1, 0,
  /* 35 */ 38, 1, 0,
  /* 38 */ 65439, 38, 1, 65498, 39, 1, 0,
  /* 45 */ 40, 1, 0,
  /* 48 */ 65440, 40, 1, 65496, 41, 1, 0,
  /* 55 */ 42, 1, 0,
  /* 58 */ 65441, 42, 1, 65494, 43, 1, 0,
  /* 65 */ 44, 1, 0,
  /* 68 */ 65442, 44, 1, 65492, 45, 1, 0,
  /* 75 */ 46, 1, 0,
  /* 78 */ 65443, 46, 1, 65490, 47, 1, 0,
  /* 85 */ 65298, 1, 0,
  /* 88 */ 65302, 1, 0,
  /* 91 */ 65444, 1, 0,
  /* 94 */ 65445, 1, 0,
  /* 97 */ 65446, 1, 0,
  /* 100 */ 65447, 1, 0,
  /* 103 */ 65448, 1, 0,
  /* 106 */ 65449, 1, 0,
  /* 109 */ 65450, 1, 0,
  /* 112 */ 65451, 1, 0,
  /* 115 */ 65482, 1, 0,
  /* 118 */ 65488, 1, 0,
  /* 121 */ 65489, 1, 0,
  /* 124 */ 65490, 1, 0,
  /* 127 */ 65491, 1, 0,
  /* 130 */ 65492, 1, 0,
  /* 133 */ 65493, 1, 0,
  /* 136 */ 65494, 1, 0,
  /* 139 */ 65495, 1, 0,
  /* 142 */ 65496, 1, 0,
  /* 145 */ 65497, 1, 0,
  /* 148 */ 65498, 1, 0,
  /* 151 */ 65499, 1, 0,
  /* 154 */ 65500, 1, 0,
  /* 157 */ 65501, 1, 0,
  /* 160 */ 65502, 1, 0,
  /* 163 */ 65503, 1, 0,
  /* 166 */ 15, 0,
  /* 168 */ 32, 0,
  /* 170 */ 33, 0,
  /* 172 */ 34, 0,
  /* 174 */ 35, 0,
  /* 176 */ 36, 0,
  /* 178 */ 37, 0,
  /* 180 */ 38, 0,
  /* 182 */ 39, 0,
  /* 184 */ 40, 0,
  /* 186 */ 41, 0,
  /* 188 */ 42, 0,
  /* 190 */ 43, 0,
  /* 192 */ 44, 0,
  /* 194 */ 45, 0,
  /* 196 */ 46, 0,
  /* 198 */ 47, 0,
  /* 200 */ 48, 0,
  /* 202 */ 84, 0,
  /* 204 */ 85, 0,
  /* 206 */ 86, 0,
  /* 208 */ 87, 0,
  /* 210 */ 88, 0,
  /* 212 */ 89, 0,
  /* 214 */ 90, 0,
  /* 216 */ 91, 0,
  /* 218 */ 65488, 92, 0,
  /* 221 */ 65489, 92, 0,
  /* 224 */ 65489, 93, 0,
  /* 227 */ 65490, 93, 0,
  /* 230 */ 65491, 93, 0,
  /* 233 */ 65491, 94, 0,
  /* 236 */ 65492, 94, 0,
  /* 239 */ 65493, 94, 0,
  /* 242 */ 65493, 95, 0,
  /* 245 */ 65494, 95, 0,
  /* 248 */ 65495, 95, 0,
  /* 251 */ 65495, 96, 0,
  /* 254 */ 65496, 96, 0,
  /* 257 */ 65497, 96, 0,
  /* 260 */ 65497, 97, 0,
  /* 263 */ 65498, 97, 0,
  /* 266 */ 65499, 97, 0,
  /* 269 */ 65499, 98, 0,
  /* 272 */ 65500, 98, 0,
  /* 275 */ 65501, 98, 0,
  /* 278 */ 65501, 99, 0,
  /* 281 */ 65502, 99, 0,
  /* 284 */ 65503, 99, 0,
  /* 287 */ 65503, 100, 0,
  /* 290 */ 65504, 100, 0,
  /* 293 */ 65503, 0,
  /* 295 */ 65519, 0,
  /* 297 */ 65535, 0,
};

extern const unsigned SparcLaneMaskLists[] = {
  /* 0 */ 0x00000000, ~0u,
  /* 2 */ 0x00000001, 0x00000002, ~0u,
  /* 5 */ 0x00000001, 0x00000002, 0x00000004, 0x00000008, ~0u,
  /* 10 */ 0x00000003, 0x0000000C, ~0u,
};

extern const uint16_t SparcSubRegIdxLists[] = {
  /* 0 */ 1, 3, 0,
  /* 3 */ 2, 4, 0,
  /* 6 */ 2, 1, 3, 4, 5, 6, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_even
  { 0, 64 },	// sub_even64
  { 32, 32 },	// sub_odd
  { 64, 64 },	// sub_odd64
  { 64, 32 },	// sub_odd64_then_sub_even
  { 96, 32 },	// sub_odd64_then_sub_odd
};

extern const char SparcRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'F', '1', '0', 0,
  /* 8 */ 'Q', '1', '0', 0,
  /* 12 */ 'A', 'S', 'R', '1', '0', 0,
  /* 18 */ 'D', '2', '0', 0,
  /* 22 */ 'F', '2', '0', 0,
  /* 26 */ 'A', 'S', 'R', '2', '0', 0,
  /* 32 */ 'D', '3', '0', 0,
  /* 36 */ 'F', '3', '0', 0,
  /* 40 */ 'A', 'S', 'R', '3', '0', 0,
  /* 46 */ 'F', 'C', 'C', '0', 0,
  /* 51 */ 'D', '0', 0,
  /* 54 */ 'F', '0', 0,
  /* 57 */ 'G', '0', 0,
  /* 60 */ 'I', '0', 0,
  /* 63 */ 'L', '0', 0,
  /* 66 */ 'O', '0', 0,
  /* 69 */ 'Q', '0', 0,
  /* 72 */ 'D', '1', '1', 0,
  /* 76 */ 'F', '1', '1', 0,
  /* 80 */ 'Q', '1', '1', 0,
  /* 84 */ 'A', 'S', 'R', '1', '1', 0,
  /* 90 */ 'D', '2', '1', 0,
  /* 94 */ 'F', '2', '1', 0,
  /* 98 */ 'A', 'S', 'R', '2', '1', 0,
  /* 104 */ 'D', '3', '1', 0,
  /* 108 */ 'F', '3', '1', 0,
  /* 112 */ 'A', 'S', 'R', '3', '1', 0,
  /* 118 */ 'F', 'C', 'C', '1', 0,
  /* 123 */ 'D', '1', 0,
  /* 126 */ 'F', '1', 0,
  /* 129 */ 'G', '0', '_', 'G', '1', 0,
  /* 135 */ 'I', '0', '_', 'I', '1', 0,
  /* 141 */ 'L', '0', '_', 'L', '1', 0,
  /* 147 */ 'O', '0', '_', 'O', '1', 0,
  /* 153 */ 'Q', '1', 0,
  /* 156 */ 'A', 'S', 'R', '1', 0,
  /* 161 */ 'D', '1', '2', 0,
  /* 165 */ 'F', '1', '2', 0,
  /* 169 */ 'Q', '1', '2', 0,
  /* 173 */ 'A', 'S', 'R', '1', '2', 0,
  /* 179 */ 'D', '2', '2', 0,
  /* 183 */ 'F', '2', '2', 0,
  /* 187 */ 'A', 'S', 'R', '2', '2', 0,
  /* 193 */ 'F', 'C', 'C', '2', 0,
  /* 198 */ 'D', '2', 0,
  /* 201 */ 'F', '2', 0,
  /* 204 */ 'G', '2', 0,
  /* 207 */ 'I', '2', 0,
  /* 210 */ 'L', '2', 0,
  /* 213 */ 'O', '2', 0,
  /* 216 */ 'Q', '2', 0,
  /* 219 */ 'A', 'S', 'R', '2', 0,
  /* 224 */ 'D', '1', '3', 0,
  /* 228 */ 'F', '1', '3', 0,
  /* 232 */ 'Q', '1', '3', 0,
  /* 236 */ 'A', 'S', 'R', '1', '3', 0,
  /* 242 */ 'D', '2', '3', 0,
  /* 246 */ 'F', '2', '3', 0,
  /* 250 */ 'A', 'S', 'R', '2', '3', 0,
  /* 256 */ 'F', 'C', 'C', '3', 0,
  /* 261 */ 'D', '3', 0,
  /* 264 */ 'F', '3', 0,
  /* 267 */ 'G', '2', '_', 'G', '3', 0,
  /* 273 */ 'I', '2', '_', 'I', '3', 0,
  /* 279 */ 'L', '2', '_', 'L', '3', 0,
  /* 285 */ 'O', '2', '_', 'O', '3', 0,
  /* 291 */ 'Q', '3', 0,
  /* 294 */ 'A', 'S', 'R', '3', 0,
  /* 299 */ 'D', '1', '4', 0,
  /* 303 */ 'F', '1', '4', 0,
  /* 307 */ 'Q', '1', '4', 0,
  /* 311 */ 'A', 'S', 'R', '1', '4', 0,
  /* 317 */ 'D', '2', '4', 0,
  /* 321 */ 'F', '2', '4', 0,
  /* 325 */ 'A', 'S', 'R', '2', '4', 0,
  /* 331 */ 'D', '4', 0,
  /* 334 */ 'F', '4', 0,
  /* 337 */ 'G', '4', 0,
  /* 340 */ 'I', '4', 0,
  /* 343 */ 'L', '4', 0,
  /* 346 */ 'O', '4', 0,
  /* 349 */ 'Q', '4', 0,
  /* 352 */ 'A', 'S', 'R', '4', 0,
  /* 357 */ 'D', '1', '5', 0,
  /* 361 */ 'F', '1', '5', 0,
  /* 365 */ 'Q', '1', '5', 0,
  /* 369 */ 'A', 'S', 'R', '1', '5', 0,
  /* 375 */ 'D', '2', '5', 0,
  /* 379 */ 'F', '2', '5', 0,
  /* 383 */ 'A', 'S', 'R', '2', '5', 0,
  /* 389 */ 'D', '5', 0,
  /* 392 */ 'F', '5', 0,
  /* 395 */ 'G', '4', '_', 'G', '5', 0,
  /* 401 */ 'I', '4', '_', 'I', '5', 0,
  /* 407 */ 'L', '4', '_', 'L', '5', 0,
  /* 413 */ 'O', '4', '_', 'O', '5', 0,
  /* 419 */ 'Q', '5', 0,
  /* 422 */ 'A', 'S', 'R', '5', 0,
  /* 427 */ 'D', '1', '6', 0,
  /* 431 */ 'F', '1', '6', 0,
  /* 435 */ 'A', 'S', 'R', '1', '6', 0,
  /* 441 */ 'D', '2', '6', 0,
  /* 445 */ 'F', '2', '6', 0,
  /* 449 */ 'A', 'S', 'R', '2', '6', 0,
  /* 455 */ 'D', '6', 0,
  /* 458 */ 'F', '6', 0,
  /* 461 */ 'G', '6', 0,
  /* 464 */ 'I', '6', 0,
  /* 467 */ 'L', '6', 0,
  /* 470 */ 'O', '6', 0,
  /* 473 */ 'Q', '6', 0,
  /* 476 */ 'A', 'S', 'R', '6', 0,
  /* 481 */ 'D', '1', '7', 0,
  /* 485 */ 'F', '1', '7', 0,
  /* 489 */ 'A', 'S', 'R', '1', '7', 0,
  /* 495 */ 'D', '2', '7', 0,
  /* 499 */ 'F', '2', '7', 0,
  /* 503 */ 'A', 'S', 'R', '2', '7', 0,
  /* 509 */ 'D', '7', 0,
  /* 512 */ 'F', '7', 0,
  /* 515 */ 'G', '6', '_', 'G', '7', 0,
  /* 521 */ 'I', '6', '_', 'I', '7', 0,
  /* 527 */ 'L', '6', '_', 'L', '7', 0,
  /* 533 */ 'O', '6', '_', 'O', '7', 0,
  /* 539 */ 'Q', '7', 0,
  /* 542 */ 'A', 'S', 'R', '7', 0,
  /* 547 */ 'D', '1', '8', 0,
  /* 551 */ 'F', '1', '8', 0,
  /* 555 */ 'A', 'S', 'R', '1', '8', 0,
  /* 561 */ 'D', '2', '8', 0,
  /* 565 */ 'F', '2', '8', 0,
  /* 569 */ 'A', 'S', 'R', '2', '8', 0,
  /* 575 */ 'D', '8', 0,
  /* 578 */ 'F', '8', 0,
  /* 581 */ 'Q', '8', 0,
  /* 584 */ 'A', 'S', 'R', '8', 0,
  /* 589 */ 'D', '1', '9', 0,
  /* 593 */ 'F', '1', '9', 0,
  /* 597 */ 'A', 'S', 'R', '1', '9', 0,
  /* 603 */ 'D', '2', '9', 0,
  /* 607 */ 'F', '2', '9', 0,
  /* 611 */ 'A', 'S', 'R', '2', '9', 0,
  /* 617 */ 'D', '9', 0,
  /* 620 */ 'F', '9', 0,
  /* 623 */ 'Q', '9', 0,
  /* 626 */ 'A', 'S', 'R', '9', 0,
  /* 631 */ 'T', 'B', 'A', 0,
  /* 635 */ 'I', 'C', 'C', 0,
  /* 639 */ 'T', 'N', 'P', 'C', 0,
  /* 644 */ 'T', 'P', 'C', 0,
  /* 648 */ 'C', 'A', 'N', 'R', 'E', 'S', 'T', 'O', 'R', 'E', 0,
  /* 659 */ 'P', 'S', 'T', 'A', 'T', 'E', 0,
  /* 666 */ 'T', 'S', 'T', 'A', 'T', 'E', 0,
  /* 673 */ 'W', 'S', 'T', 'A', 'T', 'E', 0,
  /* 680 */ 'C', 'A', 'N', 'S', 'A', 'V', 'E', 0,
  /* 688 */ 'T', 'I', 'C', 'K', 0,
  /* 693 */ 'P', 'I', 'L', 0,
  /* 697 */ 'T', 'L', 0,
  /* 700 */ 'W', 'I', 'M', 0,
  /* 704 */ 'C', 'L', 'E', 'A', 'N', 'W', 'I', 'N', 0,
  /* 713 */ 'O', 'T', 'H', 'E', 'R', 'W', 'I', 'N', 0,
  /* 722 */ 'C', 'W', 'P', 0,
  /* 726 */ 'T', 'B', 'R', 0,
  /* 730 */ 'F', 'S', 'R', 0,
  /* 734 */ 'P', 'S', 'R', 0,
  /* 738 */ 'T', 'T', 0,
  /* 741 */ 'Y', 0,
};

extern const MCRegisterDesc SparcRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 648, 4, 4, 2, 4753, 0 },
  { 680, 4, 4, 2, 4753, 0 },
  { 704, 4, 4, 2, 4753, 0 },
  { 722, 4, 4, 2, 4753, 0 },
  { 730, 4, 4, 2, 4753, 0 },
  { 635, 4, 4, 2, 4753, 0 },
  { 713, 4, 4, 2, 4753, 0 },
  { 693, 4, 4, 2, 4753, 0 },
  { 734, 4, 4, 2, 4753, 0 },
  { 659, 4, 4, 2, 4753, 0 },
  { 631, 4, 4, 2, 4753, 0 },
  { 726, 4, 4, 2, 4753, 0 },
  { 688, 4, 4, 2, 4753, 0 },
  { 697, 4, 4, 2, 4753, 0 },
  { 639, 4, 4, 2, 4753, 0 },
  { 644, 4, 4, 2, 4753, 0 },
  { 666, 4, 4, 2, 4753, 0 },
  { 738, 4, 4, 2, 4753, 0 },
  { 700, 4, 4, 2, 4753, 0 },
  { 673, 4, 4, 2, 4753, 0 },
  { 741, 4, 4, 2, 4753, 0 },
  { 156, 4, 4, 2, 4753, 0 },
  { 219, 4, 4, 2, 4753, 0 },
  { 294, 4, 4, 2, 4753, 0 },
  { 352, 4, 4, 2, 4753, 0 },
  { 422, 4, 4, 2, 4753, 0 },
  { 476, 4, 4, 2, 4753, 0 },
  { 542, 4, 4, 2, 4753, 0 },
  { 584, 4, 4, 2, 4753, 0 },
  { 626, 4, 4, 2, 4753, 0 },
  { 12, 4, 4, 2, 4753, 0 },
  { 84, 4, 4, 2, 4753, 0 },
  { 173, 4, 4, 2, 4753, 0 },
  { 236, 4, 4, 2, 4753, 0 },
  { 311, 4, 4, 2, 4753, 0 },
  { 369, 4, 4, 2, 4753, 0 },
  { 435, 4, 4, 2, 4753, 0 },
  { 489, 4, 4, 2, 4753, 0 },
  { 555, 4, 4, 2, 4753, 0 },
  { 597, 4, 4, 2, 4753, 0 },
  { 26, 4, 4, 2, 4753, 0 },
  { 98, 4, 4, 2, 4753, 0 },
  { 187, 4, 4, 2, 4753, 0 },
  { 250, 4, 4, 2, 4753, 0 },
  { 325, 4, 4, 2, 4753, 0 },
  { 383, 4, 4, 2, 4753, 0 },
  { 449, 4, 4, 2, 4753, 0 },
  { 503, 4, 4, 2, 4753, 0 },
  { 569, 4, 4, 2, 4753, 0 },
  { 611, 4, 4, 2, 4753, 0 },
  { 40, 4, 4, 2, 4753, 0 },
  { 112, 4, 4, 2, 4753, 0 },
  { 51, 5, 288, 0, 1842, 2 },
  { 123, 12, 279, 0, 1842, 2 },
  { 198, 15, 279, 0, 1842, 2 },
  { 261, 22, 270, 0, 1842, 2 },
  { 331, 25, 270, 0, 1842, 2 },
  { 389, 32, 261, 0, 1842, 2 },
  { 455, 35, 261, 0, 1842, 2 },
  { 509, 42, 252, 0, 1842, 2 },
  { 575, 45, 252, 0, 1842, 2 },
  { 617, 52, 243, 0, 1842, 2 },
  { 0, 55, 243, 0, 1842, 2 },
  { 72, 62, 234, 0, 1842, 2 },
  { 161, 65, 234, 0, 1842, 2 },
  { 224, 72, 225, 0, 1842, 2 },
  { 299, 75, 225, 0, 1842, 2 },
  { 357, 82, 219, 0, 1842, 2 },
  { 427, 4, 219, 2, 2657, 0 },
  { 481, 4, 216, 2, 2657, 0 },
  { 547, 4, 216, 2, 2657, 0 },
  { 589, 4, 214, 2, 2657, 0 },
  { 18, 4, 214, 2, 2657, 0 },
  { 90, 4, 212, 2, 2657, 0 },
  { 179, 4, 212, 2, 2657, 0 },
  { 242, 4, 210, 2, 2657, 0 },
  { 317, 4, 210, 2, 2657, 0 },
  { 375, 4, 208, 2, 2657, 0 },
  { 441, 4, 208, 2, 2657, 0 },
  { 495, 4, 206, 2, 2657, 0 },
  { 561, 4, 206, 2, 2657, 0 },
  { 603, 4, 204, 2, 2657, 0 },
  { 32, 4, 204, 2, 2657, 0 },
  { 104, 4, 202, 2, 2657, 0 },
  { 54, 4, 290, 2, 4689, 0 },
  { 126, 4, 287, 2, 4689, 0 },
  { 201, 4, 284, 2, 4689, 0 },
  { 264, 4, 281, 2, 4689, 0 },
  { 334, 4, 281, 2, 4689, 0 },
  { 392, 4, 278, 2, 4689, 0 },
  { 458, 4, 275, 2, 4689, 0 },
  { 512, 4, 272, 2, 4689, 0 },
  { 578, 4, 272, 2, 4689, 0 },
  { 620, 4, 269, 2, 4689, 0 },
  { 4, 4, 266, 2, 4689, 0 },
  { 76, 4, 263, 2, 4689, 0 },
  { 165, 4, 263, 2, 4689, 0 },
  { 228, 4, 260, 2, 4689, 0 },
  { 303, 4, 257, 2, 4689, 0 },
  { 361, 4, 254, 2, 4689, 0 },
  { 431, 4, 254, 2, 4689, 0 },
  { 485, 4, 251, 2, 4689, 0 },
  { 551, 4, 248, 2, 4689, 0 },
  { 593, 4, 245, 2, 4689, 0 },
  { 22, 4, 245, 2, 4689, 0 },
  { 94, 4, 242, 2, 4689, 0 },
  { 183, 4, 239, 2, 4689, 0 },
  { 246, 4, 236, 2, 4689, 0 },
  { 321, 4, 236, 2, 4689, 0 },
  { 379, 4, 233, 2, 4689, 0 },
  { 445, 4, 230, 2, 4689, 0 },
  { 499, 4, 227, 2, 4689, 0 },
  { 565, 4, 227, 2, 4689, 0 },
  { 607, 4, 224, 2, 4689, 0 },
  { 36, 4, 221, 2, 4689, 0 },
  { 108, 4, 218, 2, 4689, 0 },
  { 46, 4, 4, 2, 4721, 0 },
  { 118, 4, 4, 2, 4721, 0 },
  { 193, 4, 4, 2, 4721, 0 },
  { 256, 4, 4, 2, 4721, 0 },
  { 57, 4, 200, 2, 4721, 0 },
  { 132, 4, 198, 2, 4721, 0 },
  { 204, 4, 198, 2, 4721, 0 },
  { 270, 4, 196, 2, 4721, 0 },
  { 337, 4, 196, 2, 4721, 0 },
  { 398, 4, 194, 2, 4721, 0 },
  { 461, 4, 194, 2, 4721, 0 },
  { 518, 4, 192, 2, 4721, 0 },
  { 60, 4, 192, 2, 4721, 0 },
  { 138, 4, 190, 2, 4721, 0 },
  { 207, 4, 190, 2, 4721, 0 },
  { 276, 4, 188, 2, 4721, 0 },
  { 340, 4, 188, 2, 4721, 0 },
  { 404, 4, 186, 2, 4721, 0 },
  { 464, 4, 186, 2, 4721, 0 },
  { 524, 4, 184, 2, 4721, 0 },
  { 63, 4, 184, 2, 4721, 0 },
  { 144, 4, 182, 2, 4721, 0 },
  { 210, 4, 182, 2, 4721, 0 },
  { 282, 4, 180, 2, 4721, 0 },
  { 343, 4, 180, 2, 4721, 0 },
  { 410, 4, 178, 2, 4721, 0 },
  { 467, 4, 178, 2, 4721, 0 },
  { 530, 4, 176, 2, 4721, 0 },
  { 66, 4, 176, 2, 4721, 0 },
  { 150, 4, 174, 2, 4721, 0 },
  { 213, 4, 174, 2, 4721, 0 },
  { 288, 4, 172, 2, 4721, 0 },
  { 346, 4, 172, 2, 4721, 0 },
  { 416, 4, 170, 2, 4721, 0 },
  { 470, 4, 170, 2, 4721, 0 },
  { 536, 4, 168, 2, 4721, 0 },
  { 69, 8, 4, 6, 4, 5 },
  { 153, 18, 4, 6, 4, 5 },
  { 216, 28, 4, 6, 4, 5 },
  { 291, 38, 4, 6, 4, 5 },
  { 349, 48, 4, 6, 4, 5 },
  { 419, 58, 4, 6, 4, 5 },
  { 473, 68, 4, 6, 4, 5 },
  { 539, 78, 4, 6, 4, 5 },
  { 581, 91, 4, 3, 1362, 10 },
  { 623, 94, 4, 3, 1362, 10 },
  { 8, 97, 4, 3, 1362, 10 },
  { 80, 100, 4, 3, 1362, 10 },
  { 169, 103, 4, 3, 1362, 10 },
  { 232, 106, 4, 3, 1362, 10 },
  { 307, 109, 4, 3, 1362, 10 },
  { 365, 112, 4, 3, 1362, 10 },
  { 129, 118, 4, 0, 1410, 2 },
  { 267, 121, 4, 0, 1410, 2 },
  { 395, 124, 4, 0, 1410, 2 },
  { 515, 127, 4, 0, 1410, 2 },
  { 135, 130, 4, 0, 1410, 2 },
  { 273, 133, 4, 0, 1410, 2 },
  { 401, 136, 4, 0, 1410, 2 },
  { 521, 139, 4, 0, 1410, 2 },
  { 141, 142, 4, 0, 1410, 2 },
  { 279, 145, 4, 0, 1410, 2 },
  { 407, 148, 4, 0, 1410, 2 },
  { 527, 151, 4, 0, 1410, 2 },
  { 147, 154, 4, 0, 1410, 2 },
  { 285, 157, 4, 0, 1410, 2 },
  { 413, 160, 4, 0, 1410, 2 },
  { 533, 163, 4, 0, 1410, 2 },
};

extern const MCPhysReg SparcRegUnitRoots[][2] = {
  { SP::CANRESTORE },
  { SP::CANSAVE },
  { SP::CLEANWIN },
  { SP::CWP },
  { SP::FSR },
  { SP::ICC },
  { SP::OTHERWIN },
  { SP::PIL },
  { SP::PSR },
  { SP::PSTATE },
  { SP::TBA },
  { SP::TBR },
  { SP::TICK },
  { SP::TL },
  { SP::TNPC },
  { SP::TPC },
  { SP::TSTATE },
  { SP::TT },
  { SP::WIM },
  { SP::WSTATE },
  { SP::Y },
  { SP::ASR1 },
  { SP::ASR2 },
  { SP::ASR3 },
  { SP::ASR4 },
  { SP::ASR5 },
  { SP::ASR6 },
  { SP::ASR7 },
  { SP::ASR8 },
  { SP::ASR9 },
  { SP::ASR10 },
  { SP::ASR11 },
  { SP::ASR12 },
  { SP::ASR13 },
  { SP::ASR14 },
  { SP::ASR15 },
  { SP::ASR16 },
  { SP::ASR17 },
  { SP::ASR18 },
  { SP::ASR19 },
  { SP::ASR20 },
  { SP::ASR21 },
  { SP::ASR22 },
  { SP::ASR23 },
  { SP::ASR24 },
  { SP::ASR25 },
  { SP::ASR26 },
  { SP::ASR27 },
  { SP::ASR28 },
  { SP::ASR29 },
  { SP::ASR30 },
  { SP::ASR31 },
  { SP::F0 },
  { SP::F1 },
  { SP::F2 },
  { SP::F3 },
  { SP::F4 },
  { SP::F5 },
  { SP::F6 },
  { SP::F7 },
  { SP::F8 },
  { SP::F9 },
  { SP::F10 },
  { SP::F11 },
  { SP::F12 },
  { SP::F13 },
  { SP::F14 },
  { SP::F15 },
  { SP::F16 },
  { SP::F17 },
  { SP::F18 },
  { SP::F19 },
  { SP::F20 },
  { SP::F21 },
  { SP::F22 },
  { SP::F23 },
  { SP::F24 },
  { SP::F25 },
  { SP::F26 },
  { SP::F27 },
  { SP::F28 },
  { SP::F29 },
  { SP::F30 },
  { SP::F31 },
  { SP::D16 },
  { SP::D17 },
  { SP::D18 },
  { SP::D19 },
  { SP::D20 },
  { SP::D21 },
  { SP::D22 },
  { SP::D23 },
  { SP::D24 },
  { SP::D25 },
  { SP::D26 },
  { SP::D27 },
  { SP::D28 },
  { SP::D29 },
  { SP::D30 },
  { SP::D31 },
  { SP::FCC0 },
  { SP::FCC1 },
  { SP::FCC2 },
  { SP::FCC3 },
  { SP::G0 },
  { SP::G1 },
  { SP::G2 },
  { SP::G3 },
  { SP::G4 },
  { SP::G5 },
  { SP::G6 },
  { SP::G7 },
  { SP::I0 },
  { SP::I1 },
  { SP::I2 },
  { SP::I3 },
  { SP::I4 },
  { SP::I5 },
  { SP::I6 },
  { SP::I7 },
  { SP::L0 },
  { SP::L1 },
  { SP::L2 },
  { SP::L3 },
  { SP::L4 },
  { SP::L5 },
  { SP::L6 },
  { SP::L7 },
  { SP::O0 },
  { SP::O1 },
  { SP::O2 },
  { SP::O3 },
  { SP::O4 },
  { SP::O5 },
  { SP::O6 },
  { SP::O7 },
};

namespace {     // Register classes...
  // FCCRegs Register Class...
  const MCPhysReg FCCRegs[] = {
    SP::FCC0, SP::FCC1, SP::FCC2, SP::FCC3, 
  };

  // FCCRegs Bit set.
  const uint8_t FCCRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 
  };

  // ASRRegs Register Class...
  const MCPhysReg ASRRegs[] = {
    SP::Y, SP::ASR1, SP::ASR2, SP::ASR3, SP::ASR4, SP::ASR5, SP::ASR6, SP::ASR7, SP::ASR8, SP::ASR9, SP::ASR10, SP::ASR11, SP::ASR12, SP::ASR13, SP::ASR14, SP::ASR15, SP::ASR16, SP::ASR17, SP::ASR18, SP::ASR19, SP::ASR20, SP::ASR21, SP::ASR22, SP::ASR23, SP::ASR24, SP::ASR25, SP::ASR26, SP::ASR27, SP::ASR28, SP::ASR29, SP::ASR30, SP::ASR31, 
  };

  // ASRRegs Bit set.
  const uint8_t ASRRegsBits[] = {
    0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // FPRegs Register Class...
  const MCPhysReg FPRegs[] = {
    SP::F0, SP::F1, SP::F2, SP::F3, SP::F4, SP::F5, SP::F6, SP::F7, SP::F8, SP::F9, SP::F10, SP::F11, SP::F12, SP::F13, SP::F14, SP::F15, SP::F16, SP::F17, SP::F18, SP::F19, SP::F20, SP::F21, SP::F22, SP::F23, SP::F24, SP::F25, SP::F26, SP::F27, SP::F28, SP::F29, SP::F30, SP::F31, 
  };

  // FPRegs Bit set.
  const uint8_t FPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // IntRegs Register Class...
  const MCPhysReg IntRegs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 
  };

  // DFPRegs Register Class...
  const MCPhysReg DFPRegs[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, SP::D16, SP::D17, SP::D18, SP::D19, SP::D20, SP::D21, SP::D22, SP::D23, SP::D24, SP::D25, SP::D26, SP::D27, SP::D28, SP::D29, SP::D30, SP::D31, 
  };

  // DFPRegs Bit set.
  const uint8_t DFPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // I64Regs Register Class...
  const MCPhysReg I64Regs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // I64Regs Bit set.
  const uint8_t I64RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 
  };

  // DFPRegs_with_sub_even Register Class...
  const MCPhysReg DFPRegs_with_sub_even[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, 
  };

  // DFPRegs_with_sub_even Bit set.
  const uint8_t DFPRegs_with_sub_evenBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

  // IntPair Register Class...
  const MCPhysReg IntPair[] = {
    SP::I0_I1, SP::I2_I3, SP::I4_I5, SP::I6_I7, SP::G0_G1, SP::G2_G3, SP::G4_G5, SP::G6_G7, SP::L0_L1, SP::L2_L3, SP::L4_L5, SP::L6_L7, SP::O0_O1, SP::O2_O3, SP::O4_O5, SP::O6_O7, 
  };

  // IntPair Bit set.
  const uint8_t IntPairBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x01, 
  };

  // PRRegs Register Class...
  const MCPhysReg PRRegs[] = {
    SP::TPC, SP::TNPC, SP::TSTATE, SP::TT, SP::TICK, SP::TBA, SP::PSTATE, SP::TL, SP::PIL, SP::CWP, SP::CANSAVE, SP::CANRESTORE, SP::CLEANWIN, SP::OTHERWIN, SP::WSTATE, 
  };

  // PRRegs Bit set.
  const uint8_t PRRegsBits[] = {
    0x9e, 0xed, 0x17, 
  };

  // QFPRegs Register Class...
  const MCPhysReg QFPRegs[] = {
    SP::Q0, SP::Q1, SP::Q2, SP::Q3, SP::Q4, SP::Q5, SP::Q6, SP::Q7, SP::Q8, SP::Q9, SP::Q10, SP::Q11, SP::Q12, SP::Q13, SP::Q14, SP::Q15, 
  };

  // QFPRegs Bit set.
  const uint8_t QFPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x01, 
  };

  // QFPRegs_with_sub_even Register Class...
  const MCPhysReg QFPRegs_with_sub_even[] = {
    SP::Q0, SP::Q1, SP::Q2, SP::Q3, SP::Q4, SP::Q5, SP::Q6, SP::Q7, 
  };

  // QFPRegs_with_sub_even Bit set.
  const uint8_t QFPRegs_with_sub_evenBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 
  };

}

extern const char SparcRegClassStrings[] = {
  /* 0 */ 'D', 'F', 'P', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'e', 'v', 'e', 'n', 0,
  /* 22 */ 'Q', 'F', 'P', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'e', 'v', 'e', 'n', 0,
  /* 44 */ 'I', 'n', 't', 'P', 'a', 'i', 'r', 0,
  /* 52 */ 'I', '6', '4', 'R', 'e', 'g', 's', 0,
  /* 60 */ 'F', 'C', 'C', 'R', 'e', 'g', 's', 0,
  /* 68 */ 'D', 'F', 'P', 'R', 'e', 'g', 's', 0,
  /* 76 */ 'Q', 'F', 'P', 'R', 'e', 'g', 's', 0,
  /* 84 */ 'P', 'R', 'R', 'e', 'g', 's', 0,
  /* 91 */ 'A', 'S', 'R', 'R', 'e', 'g', 's', 0,
  /* 99 */ 'I', 'n', 't', 'R', 'e', 'g', 's', 0,
};

extern const MCRegisterClass SparcMCRegisterClasses[] = {
  { FCCRegs, FCCRegsBits, 60, 4, sizeof(FCCRegsBits), SP::FCCRegsRegClassID, 0, 0, 1, 1 },
  { ASRRegs, ASRRegsBits, 91, 32, sizeof(ASRRegsBits), SP::ASRRegsRegClassID, 4, 4, 1, 0 },
  { FPRegs, FPRegsBits, 69, 32, sizeof(FPRegsBits), SP::FPRegsRegClassID, 4, 4, 1, 1 },
  { IntRegs, IntRegsBits, 99, 32, sizeof(IntRegsBits), SP::IntRegsRegClassID, 4, 4, 1, 1 },
  { DFPRegs, DFPRegsBits, 68, 32, sizeof(DFPRegsBits), SP::DFPRegsRegClassID, 8, 8, 1, 1 },
  { I64Regs, I64RegsBits, 52, 32, sizeof(I64RegsBits), SP::I64RegsRegClassID, 8, 8, 1, 1 },
  { DFPRegs_with_sub_even, DFPRegs_with_sub_evenBits, 0, 16, sizeof(DFPRegs_with_sub_evenBits), SP::DFPRegs_with_sub_evenRegClassID, 8, 8, 1, 1 },
  { IntPair, IntPairBits, 44, 16, sizeof(IntPairBits), SP::IntPairRegClassID, 8, 8, 1, 1 },
  { PRRegs, PRRegsBits, 84, 15, sizeof(PRRegsBits), SP::PRRegsRegClassID, 8, 8, 1, 1 },
  { QFPRegs, QFPRegsBits, 76, 16, sizeof(QFPRegsBits), SP::QFPRegsRegClassID, 16, 16, 1, 1 },
  { QFPRegs_with_sub_even, QFPRegs_with_sub_evenBits, 22, 8, sizeof(QFPRegs_with_sub_evenBits), SP::QFPRegs_with_sub_evenRegClassID, 16, 16, 1, 1 },
};

// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 64U, SP::Y },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPDwarfFlavour0Dwarf2LSize = std::size(SPDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 64U, SP::Y },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPEHFlavour0Dwarf2LSize = std::size(SPEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[] = {
  { SP::Y, 64U },
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPDwarfFlavour0L2DwarfSize = std::size(SPDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[] = {
  { SP::Y, 64U },
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPEHFlavour0L2DwarfSize = std::size(SPEHFlavour0L2Dwarf);

extern const uint16_t SparcRegEncodingTable[] = {
  0,
  11,
  10,
  12,
  9,
  0,
  0,
  13,
  8,
  0,
  6,
  5,
  0,
  4,
  7,
  1,
  0,
  2,
  3,
  0,
  14,
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
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  1,
  3,
  5,
  7,
  9,
  11,
  13,
  15,
  17,
  19,
  21,
  23,
  25,
  27,
  29,
  31,
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
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  1,
  5,
  9,
  13,
  17,
  21,
  25,
  29,
  0,
  2,
  4,
  6,
  24,
  26,
  28,
  30,
  16,
  18,
  20,
  22,
  8,
  10,
  12,
  14,
};
static inline void InitSparcMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SparcRegDesc, 185, RA, PC, SparcMCRegisterClasses, 11, SparcRegUnitRoots, 136, SparcRegDiffLists, SparcLaneMaskLists, SparcRegStrings, SparcRegClassStrings, SparcSubRegIdxLists, 7,
SparcSubRegIdxRanges, SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace
#endif // GET_REGINFO_MC_DESC
