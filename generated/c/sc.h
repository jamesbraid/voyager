/* generated from devices/sc/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 89ce7846f26fd566b7c475d2dcfe95762d0b08c56fc2d0da243a116e94ab78e4 */
/* scan converter registers (clip rectangles, scissors, Hi-Z enable) of the R300
 * and R350 3D engine */
#ifndef R300_SC_GEN_H
#define R300_SC_GEN_H

#include <stdint.h>


/* hyperz_en: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 41 */
#define R300_SC_HYPERZ_EN_OFFSET                     0x43a4u /* established */
#define R300_SC_HYPERZ_EN_HZ_Z0MAX_SHIFT             6 /* established */
#define R300_SC_HYPERZ_EN_HZ_Z0MAX_MASK              0x1u
#define R300_SC_HYPERZ_EN_HZ_Z0MAX_INPLACE (R300_SC_HYPERZ_EN_HZ_Z0MAX_MASK << R300_SC_HYPERZ_EN_HZ_Z0MAX_SHIFT)
#define R300_SC_HYPERZ_EN_HZ_Z0MIN_SHIFT             5 /* established */
#define R300_SC_HYPERZ_EN_HZ_Z0MIN_MASK              0x1u
#define R300_SC_HYPERZ_EN_HZ_Z0MIN_INPLACE (R300_SC_HYPERZ_EN_HZ_Z0MIN_MASK << R300_SC_HYPERZ_EN_HZ_Z0MIN_SHIFT)
#define R300_SC_HYPERZ_EN_HZ_ADJ_SHIFT               2 /* established */
#define R300_SC_HYPERZ_EN_HZ_ADJ_MASK                0x7u
#define R300_SC_HYPERZ_EN_HZ_ADJ_INPLACE (R300_SC_HYPERZ_EN_HZ_ADJ_MASK << R300_SC_HYPERZ_EN_HZ_ADJ_SHIFT)
#define R300_SC_HYPERZ_EN_HZ_MAX_SHIFT               1 /* established */
#define R300_SC_HYPERZ_EN_HZ_MAX_MASK                0x1u
#define R300_SC_HYPERZ_EN_HZ_MAX_INPLACE (R300_SC_HYPERZ_EN_HZ_MAX_MASK << R300_SC_HYPERZ_EN_HZ_MAX_SHIFT)
#define R300_SC_HYPERZ_EN_HZ_EN_SHIFT                0 /* established */
#define R300_SC_HYPERZ_EN_HZ_EN_MASK                 0x1u
#define R300_SC_HYPERZ_EN_HZ_EN_INPLACE (R300_SC_HYPERZ_EN_HZ_EN_MASK << R300_SC_HYPERZ_EN_HZ_EN_SHIFT)

/* edgerule: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 36 */
#define R300_SC_EDGERULE_OFFSET                      0x43a8u /* established */
#define R300_SC_EDGERULE_ER_LINE_BT_SHIFT            25 /* established */
#define R300_SC_EDGERULE_ER_LINE_BT_MASK             0x1fu
#define R300_SC_EDGERULE_ER_LINE_BT_INPLACE (R300_SC_EDGERULE_ER_LINE_BT_MASK << R300_SC_EDGERULE_ER_LINE_BT_SHIFT)
#define R300_SC_EDGERULE_ER_LINE_TB_SHIFT            20 /* established */
#define R300_SC_EDGERULE_ER_LINE_TB_MASK             0x1fu
#define R300_SC_EDGERULE_ER_LINE_TB_INPLACE (R300_SC_EDGERULE_ER_LINE_TB_MASK << R300_SC_EDGERULE_ER_LINE_TB_SHIFT)
#define R300_SC_EDGERULE_ER_LINE_RL_SHIFT            15 /* established */
#define R300_SC_EDGERULE_ER_LINE_RL_MASK             0x1fu
#define R300_SC_EDGERULE_ER_LINE_RL_INPLACE (R300_SC_EDGERULE_ER_LINE_RL_MASK << R300_SC_EDGERULE_ER_LINE_RL_SHIFT)
#define R300_SC_EDGERULE_ER_LINE_LR_SHIFT            10 /* established */
#define R300_SC_EDGERULE_ER_LINE_LR_MASK             0x1fu
#define R300_SC_EDGERULE_ER_LINE_LR_INPLACE (R300_SC_EDGERULE_ER_LINE_LR_MASK << R300_SC_EDGERULE_ER_LINE_LR_SHIFT)
#define R300_SC_EDGERULE_ER_POINT_SHIFT              5 /* established */
#define R300_SC_EDGERULE_ER_POINT_MASK               0x1fu
#define R300_SC_EDGERULE_ER_POINT_INPLACE (R300_SC_EDGERULE_ER_POINT_MASK << R300_SC_EDGERULE_ER_POINT_SHIFT)
#define R300_SC_EDGERULE_ER_TRI_SHIFT                0 /* established */
#define R300_SC_EDGERULE_ER_TRI_MASK                 0x1fu
#define R300_SC_EDGERULE_ER_TRI_INPLACE (R300_SC_EDGERULE_ER_TRI_MASK << R300_SC_EDGERULE_ER_TRI_SHIFT)

/* clip_0_a: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_0_A_OFFSET                      0x43b0u /* established */
#define R300_SC_CLIP_0_A_YS0_SHIFT                   13 /* established */
#define R300_SC_CLIP_0_A_YS0_MASK                    0x1fffu
#define R300_SC_CLIP_0_A_YS0_INPLACE (R300_SC_CLIP_0_A_YS0_MASK << R300_SC_CLIP_0_A_YS0_SHIFT)
#define R300_SC_CLIP_0_A_XS0_SHIFT                   0 /* established */
#define R300_SC_CLIP_0_A_XS0_MASK                    0x1fffu
#define R300_SC_CLIP_0_A_XS0_INPLACE (R300_SC_CLIP_0_A_XS0_MASK << R300_SC_CLIP_0_A_XS0_SHIFT)

/* clip_0_b: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_0_B_OFFSET                      0x43b4u /* established */
#define R300_SC_CLIP_0_B_YS1_SHIFT                   13 /* established */
#define R300_SC_CLIP_0_B_YS1_MASK                    0x1fffu
#define R300_SC_CLIP_0_B_YS1_INPLACE (R300_SC_CLIP_0_B_YS1_MASK << R300_SC_CLIP_0_B_YS1_SHIFT)
#define R300_SC_CLIP_0_B_XS1_SHIFT                   0 /* established */
#define R300_SC_CLIP_0_B_XS1_MASK                    0x1fffu
#define R300_SC_CLIP_0_B_XS1_INPLACE (R300_SC_CLIP_0_B_XS1_MASK << R300_SC_CLIP_0_B_XS1_SHIFT)

/* clip_1_a: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_1_A_OFFSET                      0x43b8u /* established */

/* clip_1_b: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_1_B_OFFSET                      0x43bcu /* established */

/* clip_2_a: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_2_A_OFFSET                      0x43c0u /* established */

/* clip_2_b: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_2_B_OFFSET                      0x43c4u /* established */

/* clip_3_a: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 35 */
#define R300_SC_CLIP_3_A_OFFSET                      0x43c8u /* established */

/* clip_3_b: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 36 */
#define R300_SC_CLIP_3_B_OFFSET                      0x43ccu /* established */

/* clip_rule: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 36 */
#define R300_SC_CLIP_RULE_OFFSET                     0x43d0u /* established */
#define R300_SC_CLIP_RULE_CLIP_RULE_SHIFT            0 /* established */
#define R300_SC_CLIP_RULE_CLIP_RULE_MASK             0xffffu
#define R300_SC_CLIP_RULE_CLIP_RULE_INPLACE (R300_SC_CLIP_RULE_CLIP_RULE_MASK << R300_SC_CLIP_RULE_CLIP_RULE_SHIFT)

/* scissor0: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 42 */
#define R300_SC_SCISSOR0_OFFSET                      0x43e0u /* established */
#define R300_SC_SCISSOR0_YS0_SHIFT                   13 /* established */
#define R300_SC_SCISSOR0_YS0_MASK                    0x1fffu
#define R300_SC_SCISSOR0_YS0_INPLACE (R300_SC_SCISSOR0_YS0_MASK << R300_SC_SCISSOR0_YS0_SHIFT)
#define R300_SC_SCISSOR0_XS0_SHIFT                   0 /* established */
#define R300_SC_SCISSOR0_XS0_MASK                    0x1fffu
#define R300_SC_SCISSOR0_XS0_INPLACE (R300_SC_SCISSOR0_XS0_MASK << R300_SC_SCISSOR0_XS0_SHIFT)

/* scissor1: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 42 */
#define R300_SC_SCISSOR1_OFFSET                      0x43e4u /* established */
#define R300_SC_SCISSOR1_YS1_SHIFT                   13 /* established */
#define R300_SC_SCISSOR1_YS1_MASK                    0x1fffu
#define R300_SC_SCISSOR1_YS1_INPLACE (R300_SC_SCISSOR1_YS1_MASK << R300_SC_SCISSOR1_YS1_SHIFT)
#define R300_SC_SCISSOR1_XS1_SHIFT                   0 /* established */
#define R300_SC_SCISSOR1_XS1_MASK                    0x1fffu
#define R300_SC_SCISSOR1_XS1_INPLACE (R300_SC_SCISSOR1_XS1_MASK << R300_SC_SCISSOR1_XS1_SHIFT)

/* screendoor: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 42 */
#define R300_SC_SCREENDOOR_OFFSET                    0x43e8u /* established */
#define R300_SC_SCREENDOOR_SCREENDOOR_SHIFT          0 /* established */
#define R300_SC_SCREENDOOR_SCREENDOOR_MASK           0xffffffu
#define R300_SC_SCREENDOOR_SCREENDOOR_INPLACE (R300_SC_SCREENDOOR_SCREENDOOR_MASK << R300_SC_SCREENDOOR_SCREENDOOR_SHIFT)

#endif /* R300_SC_GEN_H */
