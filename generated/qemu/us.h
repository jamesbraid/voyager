/* generated from devices/us/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 80becab3c0b740e55268ba2bbbe58a6b232c7a30e094a0abfae67f17f4dc7017 */
/* fragment shader (unified shader) registers of the R300 and R350 3D engine */
/* Names are R300_US_*; name source: public (AMD Radeon R3xx 3D Register Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_US_REGS_H
#define HW_SGI_GPU_R300_US_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_US_CONFIG, 0x4600) /* established */
FIELD(R300_US_CONFIG, FIRST_TEX, 3, 1) /* established */
FIELD(R300_US_CONFIG, NLEVEL, 0, 3) /* established */

REG32(R300_US_PIXSIZE, 0x4604) /* established */
FIELD(R300_US_PIXSIZE, PIX_SIZE, 0, 5) /* established */

REG32(R300_US_CODE_OFFSET, 0x4608) /* established */
FIELD(R300_US_CODE_OFFSET, TEX_SIZE, 18, 6) /* established */
FIELD(R300_US_CODE_OFFSET, TEX_OFFSET, 13, 5) /* established */
FIELD(R300_US_CODE_OFFSET, ALU_SIZE, 6, 7) /* established */
FIELD(R300_US_CODE_OFFSET, ALU_OFFSET, 0, 6) /* established */

REG32(R300_US_CODE_ADDR, 0x4610) /* established */
#define R300_US_CODE_ADDR_COUNT 4
#define R300_US_CODE_ADDR_STRIDE 0x4
FIELD(R300_US_CODE_ADDR, W_OUT, 23, 1) /* established */
FIELD(R300_US_CODE_ADDR, RGBA_OUT, 22, 1) /* established */
FIELD(R300_US_CODE_ADDR, TEX_SIZE, 17, 5) /* established */
FIELD(R300_US_CODE_ADDR, TEX_START, 12, 5) /* established */
FIELD(R300_US_CODE_ADDR, ALU_SIZE, 6, 6) /* established */
FIELD(R300_US_CODE_ADDR, ALU_START, 0, 6) /* established */

REG32(R300_US_TEX_INST, 0x4620) /* established */
#define R300_US_TEX_INST_COUNT 32
#define R300_US_TEX_INST_STRIDE 0x4
FIELD(R300_US_TEX_INST, OMOD, 18, 1) /* established */
FIELD(R300_US_TEX_INST, INST, 15, 3) /* established */
FIELD(R300_US_TEX_INST, TEX_ID, 11, 4) /* established */
FIELD(R300_US_TEX_INST, DST_ADDR, 6, 5) /* established */
FIELD(R300_US_TEX_INST, SRC_ADDR, 0, 5) /* established */

REG32(R300_US_OUT_FMT, 0x46a4) /* established */
#define R300_US_OUT_FMT_COUNT 4
#define R300_US_OUT_FMT_STRIDE 0x4
FIELD(R300_US_OUT_FMT, OUT_SIGN, 16, 4) /* established */
FIELD(R300_US_OUT_FMT, C3_SEL, 14, 2) /* established */
FIELD(R300_US_OUT_FMT, C2_SEL, 12, 2) /* established */
FIELD(R300_US_OUT_FMT, C1_SEL, 10, 2) /* established */
FIELD(R300_US_OUT_FMT, C0_SEL, 8, 2) /* established */
FIELD(R300_US_OUT_FMT, OUT_FMT, 0, 5) /* established */

REG32(R300_US_W_FMT, 0x46b4) /* established */
FIELD(R300_US_W_FMT, W_SRC, 2, 1) /* established */
FIELD(R300_US_W_FMT, W_FMT, 0, 2) /* established */

REG32(R300_US_ALU_RGB_ADDR, 0x46c0) /* established */
#define R300_US_ALU_RGB_ADDR_COUNT 64
#define R300_US_ALU_RGB_ADDR_STRIDE 0x4
FIELD(R300_US_ALU_RGB_ADDR, TARGET, 29, 2) /* established */
FIELD(R300_US_ALU_RGB_ADDR, OMASK, 26, 3) /* established */
FIELD(R300_US_ALU_RGB_ADDR, WMASK, 23, 3) /* established */
FIELD(R300_US_ALU_RGB_ADDR, ADDRD, 18, 5) /* established */
FIELD(R300_US_ALU_RGB_ADDR, ADDR2, 12, 6) /* established */
FIELD(R300_US_ALU_RGB_ADDR, ADDR1, 6, 6) /* established */
FIELD(R300_US_ALU_RGB_ADDR, ADDR0, 0, 6) /* established */

REG32(R300_US_ALU_ALPHA_ADDR, 0x47c0) /* established */
#define R300_US_ALU_ALPHA_ADDR_COUNT 64
#define R300_US_ALU_ALPHA_ADDR_STRIDE 0x4
FIELD(R300_US_ALU_ALPHA_ADDR, STAT_WE, 28, 4) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, OMASK_W, 27, 1) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, TARGET, 25, 2) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, OMASK, 24, 1) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, WMASK, 23, 1) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, ADDRD, 18, 5) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, ADDR2, 12, 6) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, ADDR1, 6, 6) /* established */
FIELD(R300_US_ALU_ALPHA_ADDR, ADDR0, 0, 6) /* established */

REG32(R300_US_ALU_RGB_INST, 0x48c0) /* established */
#define R300_US_ALU_RGB_INST_COUNT 64
#define R300_US_ALU_RGB_INST_STRIDE 0x4
FIELD(R300_US_ALU_RGB_INST, NOP, 31, 1) /* established */
FIELD(R300_US_ALU_RGB_INST, CLAMP, 30, 1) /* established */
FIELD(R300_US_ALU_RGB_INST, OMOD, 27, 3) /* established */
FIELD(R300_US_ALU_RGB_INST, OP, 23, 4) /* established */
FIELD(R300_US_ALU_RGB_INST, SRCP_OP, 21, 2) /* established */
FIELD(R300_US_ALU_RGB_INST, MOD_C, 19, 2) /* established */
FIELD(R300_US_ALU_RGB_INST, SEL_C, 14, 5) /* established */
FIELD(R300_US_ALU_RGB_INST, MOD_B, 12, 2) /* established */
FIELD(R300_US_ALU_RGB_INST, SEL_B, 7, 5) /* established */
FIELD(R300_US_ALU_RGB_INST, MOD_A, 5, 2) /* established */
FIELD(R300_US_ALU_RGB_INST, SEL_A, 0, 5) /* established */

REG32(R300_US_ALU_ALPHA_INST, 0x49c0) /* established */
#define R300_US_ALU_ALPHA_INST_COUNT 64
#define R300_US_ALU_ALPHA_INST_STRIDE 0x4
FIELD(R300_US_ALU_ALPHA_INST, CLAMP, 30, 1) /* established */
FIELD(R300_US_ALU_ALPHA_INST, OMOD, 27, 3) /* established */
FIELD(R300_US_ALU_ALPHA_INST, OP, 23, 4) /* established */
FIELD(R300_US_ALU_ALPHA_INST, SRCP_OP, 21, 2) /* established */
FIELD(R300_US_ALU_ALPHA_INST, MOD_C, 19, 2) /* established */
FIELD(R300_US_ALU_ALPHA_INST, SEL_C, 14, 5) /* established */
FIELD(R300_US_ALU_ALPHA_INST, MOD_B, 12, 2) /* established */
FIELD(R300_US_ALU_ALPHA_INST, SEL_B, 7, 5) /* established */
FIELD(R300_US_ALU_ALPHA_INST, MOD_A, 5, 2) /* established */
FIELD(R300_US_ALU_ALPHA_INST, SEL_A, 0, 5) /* established */

REG32(R300_US_ALU_CONST_R, 0x4c00) /* established */
#define R300_US_ALU_CONST_R_COUNT 32
#define R300_US_ALU_CONST_R_STRIDE 0x10
FIELD(R300_US_ALU_CONST_R, KR, 0, 24) /* established */

REG32(R300_US_ALU_CONST_G, 0x4c04) /* established */
#define R300_US_ALU_CONST_G_COUNT 32
#define R300_US_ALU_CONST_G_STRIDE 0x10
FIELD(R300_US_ALU_CONST_G, KG, 0, 24) /* established */

REG32(R300_US_ALU_CONST_B, 0x4c08) /* established */
#define R300_US_ALU_CONST_B_COUNT 32
#define R300_US_ALU_CONST_B_STRIDE 0x10
FIELD(R300_US_ALU_CONST_B, KB, 0, 24) /* established */

REG32(R300_US_ALU_CONST_A, 0x4c0c) /* established */
#define R300_US_ALU_CONST_A_COUNT 32
#define R300_US_ALU_CONST_A_STRIDE 0x10
FIELD(R300_US_ALU_CONST_A, KA, 0, 24) /* established */

#endif /* HW_SGI_GPU_R300_US_REGS_H */
