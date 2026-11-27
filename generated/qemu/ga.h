/* generated from devices/ga/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 b474daa9d295799fe8f5e5ddf58374b9d80cdb167b2acb0dfa77d323e342828f */
/* geometry assembly registers of the R300 and R350 3D engine */
/* Names are R300_GA_*; name source: public (AMD Radeon R3xx 3D Register
 * Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_GA_REGS_H
#define HW_SGI_GPU_R300_GA_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_GA_POINT_S0, 0x4200) /* established */
FIELD(R300_GA_POINT_S0, S0, 0, 32) /* established */

REG32(R300_GA_POINT_T0, 0x4204) /* established */
FIELD(R300_GA_POINT_T0, T0, 0, 32) /* established */

REG32(R300_GA_POINT_S1, 0x4208) /* established */
FIELD(R300_GA_POINT_S1, S1, 0, 32) /* established */

REG32(R300_GA_POINT_T1, 0x420c) /* established */
FIELD(R300_GA_POINT_T1, T1, 0, 32) /* established */

REG32(R300_GA_TRIANGLE_STIPPLE, 0x4214) /* established */
FIELD(R300_GA_TRIANGLE_STIPPLE, Y_SHIFT, 16, 4) /* established */
FIELD(R300_GA_TRIANGLE_STIPPLE, X_SHIFT, 0, 4) /* established */

REG32(R300_GA_POINT_SIZE, 0x421c) /* established */
FIELD(R300_GA_POINT_SIZE, WIDTH, 16, 16) /* established */
FIELD(R300_GA_POINT_SIZE, HEIGHT, 0, 16) /* established */

REG32(R300_GA_POINT_MINMAX, 0x4230) /* established */
FIELD(R300_GA_POINT_MINMAX, MAX_SIZE, 16, 16) /* established */
FIELD(R300_GA_POINT_MINMAX, MIN_SIZE, 0, 16) /* established */

REG32(R300_GA_LINE_CNTL, 0x4234) /* established */
FIELD(R300_GA_LINE_CNTL, END_TYPE, 16, 2) /* established */
FIELD(R300_GA_LINE_CNTL, WIDTH, 0, 16) /* established */

REG32(R300_GA_LINE_STIPPLE_CONFIG, 0x4238) /* established */
FIELD(R300_GA_LINE_STIPPLE_CONFIG, STIPPLE_SCALE, 2, 30) /* established */
FIELD(R300_GA_LINE_STIPPLE_CONFIG, LINE_RESET, 0, 2) /* established */

REG32(R300_GA_LINE_STIPPLE_VALUE, 0x4260) /* established */
FIELD(R300_GA_LINE_STIPPLE_VALUE, STIPPLE_VALUE, 0, 32) /* established */

REG32(R300_GA_LINE_S0, 0x4264) /* established */
FIELD(R300_GA_LINE_S0, S0, 0, 32) /* established */

REG32(R300_GA_LINE_S1, 0x4268) /* established */
FIELD(R300_GA_LINE_S1, S1, 0, 32) /* established */

REG32(R300_GA_ENHANCE, 0x4274) /* established */
FIELD(R300_GA_ENHANCE, FASTSYNC_CNTL, 1, 1) /* established */
FIELD(R300_GA_ENHANCE, DEADLOCK_CNTL, 0, 1) /* established */

REG32(R300_GA_COLOR_CONTROL, 0x4278) /* established */
FIELD(R300_GA_COLOR_CONTROL, PROVOKING_VERTEX, 16, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, ALPHA3_SHADING, 14, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, RGB3_SHADING, 12, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, ALPHA2_SHADING, 10, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, RGB2_SHADING, 8, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, ALPHA1_SHADING, 6, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, RGB1_SHADING, 4, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, ALPHA0_SHADING, 2, 2) /* established */
FIELD(R300_GA_COLOR_CONTROL, RGB0_SHADING, 0, 2) /* established */

REG32(R300_GA_SOLID_RG, 0x427c) /* established */
FIELD(R300_GA_SOLID_RG, COLOR_RED, 16, 16) /* established */
FIELD(R300_GA_SOLID_RG, COLOR_GREEN, 0, 16) /* established */

REG32(R300_GA_SOLID_BA, 0x4280) /* established */
FIELD(R300_GA_SOLID_BA, COLOR_BLUE, 16, 16) /* established */
FIELD(R300_GA_SOLID_BA, COLOR_ALPHA, 0, 16) /* established */

REG32(R300_GA_POLY_MODE, 0x4288) /* established */
FIELD(R300_GA_POLY_MODE, BACK_PTYPE, 7, 3) /* established */
FIELD(R300_GA_POLY_MODE, FRONT_PTYPE, 4, 3) /* established */
FIELD(R300_GA_POLY_MODE, POLY_MODE, 0, 2) /* established */

REG32(R300_GA_ROUND_MODE, 0x428c) /* established */
FIELD(R300_GA_ROUND_MODE, ALPHA_CLAMP, 5, 1) /* established */
FIELD(R300_GA_ROUND_MODE, RGB_CLAMP, 4, 1) /* established */
FIELD(R300_GA_ROUND_MODE, COLOR_ROUND, 2, 2) /* established */
FIELD(R300_GA_ROUND_MODE, GEOMETRY_ROUND, 0, 2) /* established */

REG32(R300_GA_OFFSET, 0x4290) /* established */
FIELD(R300_GA_OFFSET, Y_OFFSET, 16, 16) /* established */
FIELD(R300_GA_OFFSET, X_OFFSET, 0, 16) /* established */

REG32(R300_GA_FOG_SCALE, 0x4294) /* established */
FIELD(R300_GA_FOG_SCALE, VALUE, 0, 32) /* established */

REG32(R300_GA_FOG_OFFSET, 0x4298) /* established */
FIELD(R300_GA_FOG_OFFSET, VALUE, 0, 32) /* established */

#endif /* HW_SGI_GPU_R300_GA_REGS_H */
