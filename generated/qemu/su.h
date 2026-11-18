/* generated from devices/su/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 27e3a56aa0329a5f09ed7dc6f590fcc82a75e49b2b88a9c924ec399bc0eb3377 */
/* setup unit registers of the R300 and R350 3D engine */
/* Names are R300_SU_*; name source: public (AMD Radeon R3xx 3D Register Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_SU_REGS_H
#define HW_SGI_GPU_R300_SU_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_SU_TEX_WRAP, 0x42a0) /* established */
FIELD(R300_SU_TEX_WRAP, T7C3, 31, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T7C2, 30, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T7C1, 29, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T7C0, 28, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T6C3, 27, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T6C2, 26, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T6C1, 25, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T6C0, 24, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T5C3, 23, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T5C2, 22, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T5C1, 21, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T5C0, 20, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T4C3, 19, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T4C2, 18, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T4C1, 17, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T4C0, 16, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T3C3, 15, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T3C2, 14, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T3C1, 13, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T3C0, 12, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T2C3, 11, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T2C2, 10, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T2C1, 9, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T2C0, 8, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T1C3, 7, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T1C2, 6, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T1C1, 5, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T1C0, 4, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T0C3, 3, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T0C2, 2, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T0C1, 1, 1) /* established */
FIELD(R300_SU_TEX_WRAP, T0C0, 0, 1) /* established */

REG32(R300_SU_POLY_OFFSET_FRONT_SCALE, 0x42a4) /* established */
FIELD(R300_SU_POLY_OFFSET_FRONT_SCALE, SCALE, 0, 32) /* established */

REG32(R300_SU_POLY_OFFSET_FRONT_OFFSET, 0x42a8) /* established */
FIELD(R300_SU_POLY_OFFSET_FRONT_OFFSET, OFFSET, 0, 32) /* established */

REG32(R300_SU_POLY_OFFSET_BACK_SCALE, 0x42ac) /* established */
FIELD(R300_SU_POLY_OFFSET_BACK_SCALE, SCALE, 0, 32) /* established */

REG32(R300_SU_POLY_OFFSET_BACK_OFFSET, 0x42b0) /* established */
FIELD(R300_SU_POLY_OFFSET_BACK_OFFSET, OFFSET, 0, 32) /* established */

REG32(R300_SU_POLY_OFFSET_ENABLE, 0x42b4) /* established */
FIELD(R300_SU_POLY_OFFSET_ENABLE, PARA_ENABLE, 2, 1) /* established */
FIELD(R300_SU_POLY_OFFSET_ENABLE, BACK_ENABLE, 1, 1) /* established */
FIELD(R300_SU_POLY_OFFSET_ENABLE, FRONT_ENABLE, 0, 1) /* established */

REG32(R300_SU_CULL_MODE, 0x42b8) /* established */
FIELD(R300_SU_CULL_MODE, FACE, 2, 1) /* established */
FIELD(R300_SU_CULL_MODE, CULL_BACK, 1, 1) /* established */
FIELD(R300_SU_CULL_MODE, CULL_FRONT, 0, 1) /* established */

REG32(R300_SU_DEPTH_SCALE, 0x42c0) /* established */

REG32(R300_SU_DEPTH_OFFSET, 0x42c4) /* established */
FIELD(R300_SU_DEPTH_OFFSET, OFFSET, 0, 32) /* established */

#endif /* HW_SGI_GPU_R300_SU_REGS_H */
