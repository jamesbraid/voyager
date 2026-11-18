/* generated from devices/tx/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 3182bec562aa83900a02fc72f4b5bb6a3ce852f0d98aaeaf2f0e8b15f70b0ef8 */
/* texture unit registers of the R300 and R350 3D engine */
/* Names are R300_TX_*; name source: public (AMD Radeon R3xx 3D Register Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_TX_REGS_H
#define HW_SGI_GPU_R300_TX_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_TX_INVALTAGS, 0x4100) /* established */

REG32(R300_TX_ENABLE, 0x4104) /* established */
FIELD(R300_TX_ENABLE, TEX_15_ENABLE, 15, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_14_ENABLE, 14, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_13_ENABLE, 13, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_12_ENABLE, 12, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_11_ENABLE, 11, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_10_ENABLE, 10, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_9_ENABLE, 9, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_8_ENABLE, 8, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_7_ENABLE, 7, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_6_ENABLE, 6, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_5_ENABLE, 5, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_4_ENABLE, 4, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_3_ENABLE, 3, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_2_ENABLE, 2, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_1_ENABLE, 1, 1) /* established */
FIELD(R300_TX_ENABLE, TEX_0_ENABLE, 0, 1) /* established */

REG32(R300_TX_FILTER0, 0x4400) /* established */
#define R300_TX_FILTER0_COUNT 16
#define R300_TX_FILTER0_STRIDE 0x4
FIELD(R300_TX_FILTER0, ID, 28, 4) /* established */
FIELD(R300_TX_FILTER0, MAX_MIP_LEVEL, 17, 4) /* established */
FIELD(R300_TX_FILTER0, VOL_FILTER, 15, 2) /* established */
FIELD(R300_TX_FILTER0, MIP_FILTER, 13, 2) /* established */
FIELD(R300_TX_FILTER0, MIN_FILTER, 11, 2) /* established */
FIELD(R300_TX_FILTER0, MAG_FILTER, 9, 2) /* established */
FIELD(R300_TX_FILTER0, CLAMP_R, 6, 3) /* established */
FIELD(R300_TX_FILTER0, CLAMP_T, 3, 3) /* established */
FIELD(R300_TX_FILTER0, CLAMP_S, 0, 3) /* established */

REG32(R300_TX_FILTER1, 0x4440) /* established */
#define R300_TX_FILTER1_COUNT 16
#define R300_TX_FILTER1_STRIDE 0x4
FIELD(R300_TX_FILTER1, MC_COORD_TRUNCATE, 14, 1) /* established */
FIELD(R300_TX_FILTER1, LOD_BIAS, 3, 10) /* established */
FIELD(R300_TX_FILTER1, MC_ROUND, 2, 1) /* established */
FIELD(R300_TX_FILTER1, CHROMA_KEY_MODE, 0, 2) /* established */

REG32(R300_TX_FORMAT0, 0x4480) /* established */
#define R300_TX_FORMAT0_COUNT 16
#define R300_TX_FORMAT0_STRIDE 0x4
FIELD(R300_TX_FORMAT0, TXPITCH_EN, 31, 1) /* established */
FIELD(R300_TX_FORMAT0, PROJECTED, 30, 1) /* established */
FIELD(R300_TX_FORMAT0, NUM_LEVELS, 26, 4) /* established */
FIELD(R300_TX_FORMAT0, TXDEPTH, 22, 4) /* established */
FIELD(R300_TX_FORMAT0, TXHEIGHT, 11, 11) /* established */
FIELD(R300_TX_FORMAT0, TXWIDTH, 0, 11) /* established */

REG32(R300_TX_FORMAT1, 0x44c0) /* established */
#define R300_TX_FORMAT1_COUNT 16
#define R300_TX_FORMAT1_STRIDE 0x4
FIELD(R300_TX_FORMAT1, CACHE, 27, 5) /* established */
FIELD(R300_TX_FORMAT1, TEX_COORD_TYPE, 25, 2) /* established */
FIELD(R300_TX_FORMAT1, SWAP_YUV, 24, 1) /* established */
FIELD(R300_TX_FORMAT1, YUV_TO_RGB, 22, 2) /* established */
FIELD(R300_TX_FORMAT1, GAMMA, 21, 1) /* established */
FIELD(R300_TX_FORMAT1, SEL_BLUE, 18, 3) /* established */
FIELD(R300_TX_FORMAT1, SEL_GREEN, 15, 3) /* established */
FIELD(R300_TX_FORMAT1, SEL_RED, 12, 3) /* established */
FIELD(R300_TX_FORMAT1, SEL_ALPHA, 9, 3) /* established */
FIELD(R300_TX_FORMAT1, SIGNED_COMP3, 8, 1) /* established */
FIELD(R300_TX_FORMAT1, SIGNED_COMP2, 7, 1) /* established */
FIELD(R300_TX_FORMAT1, SIGNED_COMP1, 6, 1) /* established */
FIELD(R300_TX_FORMAT1, SIGNED_COMP0, 5, 1) /* established */
FIELD(R300_TX_FORMAT1, TXFORMAT, 0, 5) /* established */

REG32(R300_TX_FORMAT2, 0x4500) /* established */
#define R300_TX_FORMAT2_COUNT 16
#define R300_TX_FORMAT2_STRIDE 0x4
FIELD(R300_TX_FORMAT2, TXPITCH, 0, 14) /* established */

REG32(R300_TX_OFFSET, 0x4540) /* established */
#define R300_TX_OFFSET_COUNT 16
#define R300_TX_OFFSET_STRIDE 0x4
FIELD(R300_TX_OFFSET, TXOFFSET, 5, 27) /* established */
FIELD(R300_TX_OFFSET, MICRO_TILE, 3, 2) /* established */
FIELD(R300_TX_OFFSET, MACRO_TILE, 2, 1) /* established */
FIELD(R300_TX_OFFSET, ENDIAN_SWAP, 0, 2) /* established */

REG32(R300_TX_CHROMA_KEY, 0x4580) /* established */
#define R300_TX_CHROMA_KEY_COUNT 16
#define R300_TX_CHROMA_KEY_STRIDE 0x4
FIELD(R300_TX_CHROMA_KEY, CHROMA_KEY, 0, 32) /* established */

REG32(R300_TX_BORDER_COLOR, 0x45c0) /* established */
#define R300_TX_BORDER_COLOR_COUNT 16
#define R300_TX_BORDER_COLOR_STRIDE 0x4
FIELD(R300_TX_BORDER_COLOR, BORDER_COLOR, 0, 32) /* established */

#endif /* HW_SGI_GPU_R300_TX_REGS_H */
