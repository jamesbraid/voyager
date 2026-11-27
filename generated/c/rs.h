/* generated from devices/rs/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 edb28dd4e62253a48534c96dbcd487bceba38c394a9adcbf775935987876084e */
/* rasteriser interpolator registers of the R300 and R350 3D engine */
#ifndef R300_RS_GEN_H
#define R300_RS_GEN_H

#include <stdint.h>


/* count: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 32 */
#define R300_RS_COUNT_OFFSET                         0x4300u /* established */
#define R300_RS_COUNT_HIRES_EN_SHIFT                 18 /* established */
#define R300_RS_COUNT_HIRES_EN_MASK                  0x1u
#define R300_RS_COUNT_HIRES_EN_INPLACE (R300_RS_COUNT_HIRES_EN_MASK << R300_RS_COUNT_HIRES_EN_SHIFT)
#define R300_RS_COUNT_W_ADDR_SHIFT                   12 /* established */
#define R300_RS_COUNT_W_ADDR_MASK                    0x3fu
#define R300_RS_COUNT_W_ADDR_INPLACE (R300_RS_COUNT_W_ADDR_MASK << R300_RS_COUNT_W_ADDR_SHIFT)
#define R300_RS_COUNT_W_COUNT_SHIFT                  11 /* established */
#define R300_RS_COUNT_W_COUNT_MASK                   0x1u
#define R300_RS_COUNT_W_COUNT_INPLACE (R300_RS_COUNT_W_COUNT_MASK << R300_RS_COUNT_W_COUNT_SHIFT)
#define R300_RS_COUNT_IC_COUNT_SHIFT                 7 /* established */
#define R300_RS_COUNT_IC_COUNT_MASK                  0xfu
#define R300_RS_COUNT_IC_COUNT_INPLACE (R300_RS_COUNT_IC_COUNT_MASK << R300_RS_COUNT_IC_COUNT_SHIFT)
#define R300_RS_COUNT_IT_COUNT_SHIFT                 0 /* established */
#define R300_RS_COUNT_IT_COUNT_MASK                  0x7fu
#define R300_RS_COUNT_IT_COUNT_INPLACE (R300_RS_COUNT_IT_COUNT_MASK << R300_RS_COUNT_IT_COUNT_SHIFT)

/* inst_count: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 33 */
#define R300_RS_INST_COUNT_OFFSET                    0x4304u /* established */
#define R300_RS_INST_COUNT_TX_OFFSET_SHIFT           5 /* established */
#define R300_RS_INST_COUNT_TX_OFFSET_MASK            0x7u
#define R300_RS_INST_COUNT_TX_OFFSET_INPLACE (R300_RS_INST_COUNT_TX_OFFSET_MASK << R300_RS_INST_COUNT_TX_OFFSET_SHIFT)
#define R300_RS_INST_COUNT_W_EN_SHIFT                4 /* established */
#define R300_RS_INST_COUNT_W_EN_MASK                 0x1u
#define R300_RS_INST_COUNT_W_EN_INPLACE (R300_RS_INST_COUNT_W_EN_MASK << R300_RS_INST_COUNT_W_EN_SHIFT)
#define R300_RS_INST_COUNT_INST_COUNT_SHIFT          0 /* established */
#define R300_RS_INST_COUNT_INST_COUNT_MASK           0xfu
#define R300_RS_INST_COUNT_INST_COUNT_INPLACE (R300_RS_INST_COUNT_INST_COUNT_MASK << R300_RS_INST_COUNT_INST_COUNT_SHIFT)

/* ip: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision 1.0,
 * p. 33 */
#define R300_RS_IP_OFFSET                            0x4310u /* established */
#define R300_RS_IP_COUNT                             8
#define R300_RS_IP_STRIDE                            4
#define R300_RS_IP_SEL_Q_SHIFT                       22 /* established */
#define R300_RS_IP_SEL_Q_MASK                        0x7u
#define R300_RS_IP_SEL_Q_INPLACE (R300_RS_IP_SEL_Q_MASK << R300_RS_IP_SEL_Q_SHIFT)
#define R300_RS_IP_SEL_R_SHIFT                       19 /* established */
#define R300_RS_IP_SEL_R_MASK                        0x7u
#define R300_RS_IP_SEL_R_INPLACE (R300_RS_IP_SEL_R_MASK << R300_RS_IP_SEL_R_SHIFT)
#define R300_RS_IP_SEL_T_SHIFT                       16 /* established */
#define R300_RS_IP_SEL_T_MASK                        0x7u
#define R300_RS_IP_SEL_T_INPLACE (R300_RS_IP_SEL_T_MASK << R300_RS_IP_SEL_T_SHIFT)
#define R300_RS_IP_SEL_S_SHIFT                       13 /* established */
#define R300_RS_IP_SEL_S_MASK                        0x7u
#define R300_RS_IP_SEL_S_INPLACE (R300_RS_IP_SEL_S_MASK << R300_RS_IP_SEL_S_SHIFT)
#define R300_RS_IP_COL_FMT_SHIFT                     9 /* established */
#define R300_RS_IP_COL_FMT_MASK                      0xfu
#define R300_RS_IP_COL_FMT_INPLACE (R300_RS_IP_COL_FMT_MASK << R300_RS_IP_COL_FMT_SHIFT)
#define R300_RS_IP_COL_PTR_SHIFT                     6 /* established */
#define R300_RS_IP_COL_PTR_MASK                      0x7u
#define R300_RS_IP_COL_PTR_INPLACE (R300_RS_IP_COL_PTR_MASK << R300_RS_IP_COL_PTR_SHIFT)
#define R300_RS_IP_TEX_PTR_SHIFT                     0 /* established */
#define R300_RS_IP_TEX_PTR_MASK                      0x3fu
#define R300_RS_IP_TEX_PTR_INPLACE (R300_RS_IP_TEX_PTR_MASK << R300_RS_IP_TEX_PTR_SHIFT)

/* inst: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 32 */
#define R300_RS_INST_OFFSET                          0x4330u /* established */
#define R300_RS_INST_COUNT                           16
#define R300_RS_INST_STRIDE                          4
#define R300_RS_INST_COL_BIAS_SHIFT                  23 /* established */
#define R300_RS_INST_COL_BIAS_MASK                   0x3u
#define R300_RS_INST_COL_BIAS_INPLACE (R300_RS_INST_COL_BIAS_MASK << R300_RS_INST_COL_BIAS_SHIFT)
#define R300_RS_INST_TEX_ADJ_SHIFT                   22 /* established */
#define R300_RS_INST_TEX_ADJ_MASK                    0x1u
#define R300_RS_INST_TEX_ADJ_INPLACE (R300_RS_INST_TEX_ADJ_MASK << R300_RS_INST_TEX_ADJ_SHIFT)
#define R300_RS_INST_COL_ADDR_SHIFT                  17 /* established */
#define R300_RS_INST_COL_ADDR_MASK                   0x1fu
#define R300_RS_INST_COL_ADDR_INPLACE (R300_RS_INST_COL_ADDR_MASK << R300_RS_INST_COL_ADDR_SHIFT)
#define R300_RS_INST_COL_CN_SHIFT                    14 /* established */
#define R300_RS_INST_COL_CN_MASK                     0x7u
#define R300_RS_INST_COL_CN_INPLACE (R300_RS_INST_COL_CN_MASK << R300_RS_INST_COL_CN_SHIFT)
#define R300_RS_INST_COL_ID_SHIFT                    11 /* established */
#define R300_RS_INST_COL_ID_MASK                     0x7u
#define R300_RS_INST_COL_ID_INPLACE (R300_RS_INST_COL_ID_MASK << R300_RS_INST_COL_ID_SHIFT)
#define R300_RS_INST_TEX_ADDR_SHIFT                  6 /* established */
#define R300_RS_INST_TEX_ADDR_MASK                   0x1fu
#define R300_RS_INST_TEX_ADDR_INPLACE (R300_RS_INST_TEX_ADDR_MASK << R300_RS_INST_TEX_ADDR_SHIFT)
#define R300_RS_INST_TEX_CN_SHIFT                    3 /* established */
#define R300_RS_INST_TEX_CN_MASK                     0x7u
#define R300_RS_INST_TEX_CN_INPLACE (R300_RS_INST_TEX_CN_MASK << R300_RS_INST_TEX_CN_SHIFT)
#define R300_RS_INST_TEX_ID_SHIFT                    0 /* established */
#define R300_RS_INST_TEX_ID_MASK                     0x7u
#define R300_RS_INST_TEX_ID_INPLACE (R300_RS_INST_TEX_ID_MASK << R300_RS_INST_TEX_ID_SHIFT)

#endif /* R300_RS_GEN_H */
