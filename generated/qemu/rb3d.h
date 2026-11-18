/* generated from devices/rb3d/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 9bbc7124c5c41069a98513ea953dc08a33aaca0f429eb5e4385d8eaaedbf9edb */
/* colour buffer registers of the R300 and R350 3D engine */
/* Names are R300_RB3D_*; name source: public (AMD Radeon R3xx 3D Register Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_RB3D_REGS_H
#define HW_SGI_GPU_R300_RB3D_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_RB3D_CCTL, 0x4e00) /* established */
FIELD(R300_RB3D_CCTL, RESERVED, 10, 1) /* established */
FIELD(R300_RB3D_CCTL, AA_COMPRESSION_ENABLE, 9, 1) /* established */
FIELD(R300_RB3D_CCTL, CLRCMP_FLIPE_ENABLE, 7, 1) /* established */
FIELD(R300_RB3D_CCTL, NUM_MULTIWRITES, 5, 2) /* established */

REG32(R300_RB3D_BLENDCNTL, 0x4e04) /* established */
FIELD(R300_RB3D_BLENDCNTL, DESTBLEND, 24, 6) /* established */
FIELD(R300_RB3D_BLENDCNTL, SRCBLEND, 16, 6) /* established */
FIELD(R300_RB3D_BLENDCNTL, COMB_FCN, 12, 3) /* established */
FIELD(R300_RB3D_BLENDCNTL, DISCARD_SRC_PIXELS, 3, 3) /* established */
FIELD(R300_RB3D_BLENDCNTL, READ_ENABLE, 2, 1) /* established */
FIELD(R300_RB3D_BLENDCNTL, SEPARATE_ALPHA_ENABLE, 1, 1) /* established */
FIELD(R300_RB3D_BLENDCNTL, ALPHA_BLEND_ENABLE, 0, 1) /* established */

REG32(R300_RB3D_ABLENDCNTL, 0x4e08) /* established */
FIELD(R300_RB3D_ABLENDCNTL, DESTBLEND, 24, 6) /* established */
FIELD(R300_RB3D_ABLENDCNTL, SRCBLEND, 16, 6) /* established */
FIELD(R300_RB3D_ABLENDCNTL, COMB_FCN, 12, 3) /* established */

REG32(R300_RB3D_COLOR_CHANNEL_MASK, 0x4e0c) /* established */
FIELD(R300_RB3D_COLOR_CHANNEL_MASK, ALPHA_MASK, 3, 1) /* established */
FIELD(R300_RB3D_COLOR_CHANNEL_MASK, RED_MASK, 2, 1) /* established */
FIELD(R300_RB3D_COLOR_CHANNEL_MASK, GREEN_MASK, 1, 1) /* established */
FIELD(R300_RB3D_COLOR_CHANNEL_MASK, BLUE_MASK, 0, 1) /* established */

REG32(R300_RB3D_CONSTANT_COLOR, 0x4e10) /* established */
FIELD(R300_RB3D_CONSTANT_COLOR, ALPHA, 24, 8) /* established */
FIELD(R300_RB3D_CONSTANT_COLOR, RED, 16, 8) /* established */
FIELD(R300_RB3D_CONSTANT_COLOR, GREEN, 8, 8) /* established */
FIELD(R300_RB3D_CONSTANT_COLOR, BLUE, 0, 8) /* established */

REG32(R300_RB3D_COLOR_CLEAR_VALUE, 0x4e14) /* established */

REG32(R300_RB3D_ROPCNTL, 0x4e18) /* established */
FIELD(R300_RB3D_ROPCNTL, ROP, 8, 4) /* established */
FIELD(R300_RB3D_ROPCNTL, ROP_ENABLE, 2, 1) /* established */

REG32(R300_RB3D_CLRCMP_FLIPE, 0x4e1c) /* established */
FIELD(R300_RB3D_CLRCMP_FLIPE, CLRCMP_FLIPE, 0, 32) /* established */

REG32(R300_RB3D_CLRCMP_CLR, 0x4e20) /* established */
FIELD(R300_RB3D_CLRCMP_CLR, CLRCMP_CLR, 0, 32) /* established */

REG32(R300_RB3D_CLRCMP_MSK, 0x4e24) /* established */
FIELD(R300_RB3D_CLRCMP_MSK, CLRCMP_MSK, 0, 32) /* established */

REG32(R300_RB3D_COLOROFFSET, 0x4e28) /* established */
#define R300_RB3D_COLOROFFSET_COUNT 4
#define R300_RB3D_COLOROFFSET_STRIDE 0x4
FIELD(R300_RB3D_COLOROFFSET, COLOROFFSET, 5, 27) /* established */

REG32(R300_RB3D_COLORPITCH, 0x4e38) /* established */
#define R300_RB3D_COLORPITCH_COUNT 4
#define R300_RB3D_COLORPITCH_STRIDE 0x4
FIELD(R300_RB3D_COLORPITCH, COLORFORMAT, 21, 4) /* established */
FIELD(R300_RB3D_COLORPITCH, COLORENDIAN, 19, 2) /* established */
FIELD(R300_RB3D_COLORPITCH, COLORMICROTILE, 17, 2) /* established */
FIELD(R300_RB3D_COLORPITCH, COLORTILE, 16, 1) /* established */
FIELD(R300_RB3D_COLORPITCH, COLORPITCH, 1, 13) /* established */

REG32(R300_RB3D_DSTCACHE_CTLSTAT, 0x4e4c) /* established */
FIELD(R300_RB3D_DSTCACHE_CTLSTAT, DC_FINISH, 4, 1) /* established */
FIELD(R300_RB3D_DSTCACHE_CTLSTAT, DC_FREE, 2, 2) /* established */
FIELD(R300_RB3D_DSTCACHE_CTLSTAT, DC_FLUSH, 0, 2) /* established */

REG32(R300_RB3D_DITHER_CTL, 0x4e50) /* established */
FIELD(R300_RB3D_DITHER_CTL, ALPHA_DITHER_MODE, 2, 2) /* established */
FIELD(R300_RB3D_DITHER_CTL, DITHER_MODE, 0, 2) /* established */

REG32(R300_RB3D_CMASK_OFFSET, 0x4e54) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */
#define R300_RB3D_CMASK_OFFSET_COUNT 4
#define R300_RB3D_CMASK_OFFSET_STRIDE 0x4

REG32(R300_RB3D_CMASK_PITCH, 0x4e64) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */
#define R300_RB3D_CMASK_PITCH_COUNT 4
#define R300_RB3D_CMASK_PITCH_STRIDE 0x4

REG32(R300_RB3D_CMASK_WRINDEX, 0x4e74) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_RB3D_CMASK_DWORD, 0x4e78) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_RB3D_CMASK_RDINDEX, 0x4e7c) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_RB3D_AARESOLVE_OFFSET, 0x4e80) /* established */
FIELD(R300_RB3D_AARESOLVE_OFFSET, AARESOLVE_OFFSET, 5, 27) /* established */

REG32(R300_RB3D_AARESOLVE_PITCH, 0x4e84) /* established */
FIELD(R300_RB3D_AARESOLVE_PITCH, AARESOLVE_PITCH, 1, 13) /* established */

REG32(R300_RB3D_AARESOLVE_CTL, 0x4e88) /* established */
FIELD(R300_RB3D_AARESOLVE_CTL, AARESOLVE_GAMMA, 1, 1) /* established */
FIELD(R300_RB3D_AARESOLVE_CTL, AARESOLVE_MODE, 0, 1) /* established */

#endif /* HW_SGI_GPU_R300_RB3D_REGS_H */
