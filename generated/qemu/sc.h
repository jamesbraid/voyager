/* generated from devices/sc/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 89ce7846f26fd566b7c475d2dcfe95762d0b08c56fc2d0da243a116e94ab78e4 */
/* scan converter registers (clip rectangles, scissors, Hi-Z enable) of the R300
 * and R350 3D engine */
/* Names are R300_SC_*; name source: public (AMD Radeon R3xx 3D Register
 * Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_SC_REGS_H
#define HW_SGI_GPU_R300_SC_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_SC_HYPERZ_EN, 0x43a4) /* established */
FIELD(R300_SC_HYPERZ_EN, HZ_Z0MAX, 6, 1) /* established */
FIELD(R300_SC_HYPERZ_EN, HZ_Z0MIN, 5, 1) /* established */
FIELD(R300_SC_HYPERZ_EN, HZ_ADJ, 2, 3) /* established */
FIELD(R300_SC_HYPERZ_EN, HZ_MAX, 1, 1) /* established */
FIELD(R300_SC_HYPERZ_EN, HZ_EN, 0, 1) /* established */

REG32(R300_SC_EDGERULE, 0x43a8) /* established */
FIELD(R300_SC_EDGERULE, ER_LINE_BT, 25, 5) /* established */
FIELD(R300_SC_EDGERULE, ER_LINE_TB, 20, 5) /* established */
FIELD(R300_SC_EDGERULE, ER_LINE_RL, 15, 5) /* established */
FIELD(R300_SC_EDGERULE, ER_LINE_LR, 10, 5) /* established */
FIELD(R300_SC_EDGERULE, ER_POINT, 5, 5) /* established */
FIELD(R300_SC_EDGERULE, ER_TRI, 0, 5) /* established */

REG32(R300_SC_CLIP_0_A, 0x43b0) /* established */
FIELD(R300_SC_CLIP_0_A, YS0, 13, 13) /* established */
FIELD(R300_SC_CLIP_0_A, XS0, 0, 13) /* established */

REG32(R300_SC_CLIP_0_B, 0x43b4) /* established */
FIELD(R300_SC_CLIP_0_B, YS1, 13, 13) /* established */
FIELD(R300_SC_CLIP_0_B, XS1, 0, 13) /* established */

REG32(R300_SC_CLIP_1_A, 0x43b8) /* established */

REG32(R300_SC_CLIP_1_B, 0x43bc) /* established */

REG32(R300_SC_CLIP_2_A, 0x43c0) /* established */

REG32(R300_SC_CLIP_2_B, 0x43c4) /* established */

REG32(R300_SC_CLIP_3_A, 0x43c8) /* established */

REG32(R300_SC_CLIP_3_B, 0x43cc) /* established */

REG32(R300_SC_CLIP_RULE, 0x43d0) /* established */
FIELD(R300_SC_CLIP_RULE, CLIP_RULE, 0, 16) /* established */

REG32(R300_SC_SCISSOR0, 0x43e0) /* established */
FIELD(R300_SC_SCISSOR0, YS0, 13, 13) /* established */
FIELD(R300_SC_SCISSOR0, XS0, 0, 13) /* established */

REG32(R300_SC_SCISSOR1, 0x43e4) /* established */
FIELD(R300_SC_SCISSOR1, YS1, 13, 13) /* established */
FIELD(R300_SC_SCISSOR1, XS1, 0, 13) /* established */

REG32(R300_SC_SCREENDOOR, 0x43e8) /* established */
FIELD(R300_SC_SCREENDOOR, SCREENDOOR, 0, 24) /* established */

#endif /* HW_SGI_GPU_R300_SC_REGS_H */
