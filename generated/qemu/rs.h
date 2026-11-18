/* generated from devices/rs/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 edb28dd4e62253a48534c96dbcd487bceba38c394a9adcbf775935987876084e */
/* rasteriser interpolator registers of the R300 and R350 3D engine */
/* Names are R300_RS_*; name source: public (AMD Radeon R3xx 3D Register Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_RS_REGS_H
#define HW_SGI_GPU_R300_RS_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_RS_COUNT, 0x4300) /* established */
FIELD(R300_RS_COUNT, HIRES_EN, 18, 1) /* established */
FIELD(R300_RS_COUNT, W_ADDR, 12, 6) /* established */
FIELD(R300_RS_COUNT, W_COUNT, 11, 1) /* established */
FIELD(R300_RS_COUNT, IC_COUNT, 7, 4) /* established */
FIELD(R300_RS_COUNT, IT_COUNT, 0, 7) /* established */

REG32(R300_RS_INST_COUNT, 0x4304) /* established */
FIELD(R300_RS_INST_COUNT, TX_OFFSET, 5, 3) /* established */
FIELD(R300_RS_INST_COUNT, W_EN, 4, 1) /* established */
FIELD(R300_RS_INST_COUNT, INST_COUNT, 0, 4) /* established */

REG32(R300_RS_IP, 0x4310) /* established */
#define R300_RS_IP_COUNT 8
#define R300_RS_IP_STRIDE 0x4
FIELD(R300_RS_IP, SEL_Q, 22, 3) /* established */
FIELD(R300_RS_IP, SEL_R, 19, 3) /* established */
FIELD(R300_RS_IP, SEL_T, 16, 3) /* established */
FIELD(R300_RS_IP, SEL_S, 13, 3) /* established */
FIELD(R300_RS_IP, COL_FMT, 9, 4) /* established */
FIELD(R300_RS_IP, COL_PTR, 6, 3) /* established */
FIELD(R300_RS_IP, TEX_PTR, 0, 6) /* established */

REG32(R300_RS_INST, 0x4330) /* established */
#define R300_RS_INST_COUNT 16
#define R300_RS_INST_STRIDE 0x4
FIELD(R300_RS_INST, COL_BIAS, 23, 2) /* established */
FIELD(R300_RS_INST, TEX_ADJ, 22, 1) /* established */
FIELD(R300_RS_INST, COL_ADDR, 17, 5) /* established */
FIELD(R300_RS_INST, COL_CN, 14, 3) /* established */
FIELD(R300_RS_INST, COL_ID, 11, 3) /* established */
FIELD(R300_RS_INST, TEX_ADDR, 6, 5) /* established */
FIELD(R300_RS_INST, TEX_CN, 3, 3) /* established */
FIELD(R300_RS_INST, TEX_ID, 0, 3) /* established */

#endif /* HW_SGI_GPU_R300_RS_REGS_H */
