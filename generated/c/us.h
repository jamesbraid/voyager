/* generated from devices/us/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 80becab3c0b740e55268ba2bbbe58a6b232c7a30e094a0abfae67f17f4dc7017 */
/* fragment shader (unified shader) registers of the R300 and R350 3D engine */
#ifndef R300_US_GEN_H
#define R300_US_GEN_H

#include <stdint.h>


/* config: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 66 */
#define R300_US_CONFIG_OFFSET                        0x4600u /* established */
#define R300_US_CONFIG_FIRST_TEX_SHIFT               3 /* established */
#define R300_US_CONFIG_FIRST_TEX_MASK                0x1u
#define R300_US_CONFIG_FIRST_TEX_INPLACE (R300_US_CONFIG_FIRST_TEX_MASK << R300_US_CONFIG_FIRST_TEX_SHIFT)
#define R300_US_CONFIG_NLEVEL_SHIFT                  0 /* established */
#define R300_US_CONFIG_NLEVEL_MASK                   0x7u
#define R300_US_CONFIG_NLEVEL_INPLACE (R300_US_CONFIG_NLEVEL_MASK << R300_US_CONFIG_NLEVEL_SHIFT)

/* pixsize: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 68 */
#define R300_US_PIXSIZE_OFFSET                       0x4604u /* established */
#define R300_US_PIXSIZE_PIX_SIZE_SHIFT               0 /* established */
#define R300_US_PIXSIZE_PIX_SIZE_MASK                0x1fu
#define R300_US_PIXSIZE_PIX_SIZE_INPLACE (R300_US_PIXSIZE_PIX_SIZE_MASK << R300_US_PIXSIZE_PIX_SIZE_SHIFT)

/* code_offset: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 66 */
#define R300_US_CODE_OFFSET_OFFSET                   0x4608u /* established */
#define R300_US_CODE_OFFSET_TEX_SIZE_SHIFT           18 /* established */
#define R300_US_CODE_OFFSET_TEX_SIZE_MASK            0x3fu
#define R300_US_CODE_OFFSET_TEX_SIZE_INPLACE (R300_US_CODE_OFFSET_TEX_SIZE_MASK << R300_US_CODE_OFFSET_TEX_SIZE_SHIFT)
#define R300_US_CODE_OFFSET_TEX_OFFSET_SHIFT         13 /* established */
#define R300_US_CODE_OFFSET_TEX_OFFSET_MASK          0x1fu
#define R300_US_CODE_OFFSET_TEX_OFFSET_INPLACE (R300_US_CODE_OFFSET_TEX_OFFSET_MASK << R300_US_CODE_OFFSET_TEX_OFFSET_SHIFT)
#define R300_US_CODE_OFFSET_ALU_SIZE_SHIFT           6 /* established */
#define R300_US_CODE_OFFSET_ALU_SIZE_MASK            0x7fu
#define R300_US_CODE_OFFSET_ALU_SIZE_INPLACE (R300_US_CODE_OFFSET_ALU_SIZE_MASK << R300_US_CODE_OFFSET_ALU_SIZE_SHIFT)
#define R300_US_CODE_OFFSET_ALU_OFFSET_SHIFT         0 /* established */
#define R300_US_CODE_OFFSET_ALU_OFFSET_MASK          0x3fu
#define R300_US_CODE_OFFSET_ALU_OFFSET_INPLACE (R300_US_CODE_OFFSET_ALU_OFFSET_MASK << R300_US_CODE_OFFSET_ALU_OFFSET_SHIFT)

/* code_addr: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 66 */
#define R300_US_CODE_ADDR_OFFSET                     0x4610u /* established */
#define R300_US_CODE_ADDR_COUNT                      4
#define R300_US_CODE_ADDR_STRIDE                     4
#define R300_US_CODE_ADDR_W_OUT_SHIFT                23 /* established */
#define R300_US_CODE_ADDR_W_OUT_MASK                 0x1u
#define R300_US_CODE_ADDR_W_OUT_INPLACE (R300_US_CODE_ADDR_W_OUT_MASK << R300_US_CODE_ADDR_W_OUT_SHIFT)
#define R300_US_CODE_ADDR_RGBA_OUT_SHIFT             22 /* established */
#define R300_US_CODE_ADDR_RGBA_OUT_MASK              0x1u
#define R300_US_CODE_ADDR_RGBA_OUT_INPLACE (R300_US_CODE_ADDR_RGBA_OUT_MASK << R300_US_CODE_ADDR_RGBA_OUT_SHIFT)
#define R300_US_CODE_ADDR_TEX_SIZE_SHIFT             17 /* established */
#define R300_US_CODE_ADDR_TEX_SIZE_MASK              0x1fu
#define R300_US_CODE_ADDR_TEX_SIZE_INPLACE (R300_US_CODE_ADDR_TEX_SIZE_MASK << R300_US_CODE_ADDR_TEX_SIZE_SHIFT)
#define R300_US_CODE_ADDR_TEX_START_SHIFT            12 /* established */
#define R300_US_CODE_ADDR_TEX_START_MASK             0x1fu
#define R300_US_CODE_ADDR_TEX_START_INPLACE (R300_US_CODE_ADDR_TEX_START_MASK << R300_US_CODE_ADDR_TEX_START_SHIFT)
#define R300_US_CODE_ADDR_ALU_SIZE_SHIFT             6 /* established */
#define R300_US_CODE_ADDR_ALU_SIZE_MASK              0x3fu
#define R300_US_CODE_ADDR_ALU_SIZE_INPLACE (R300_US_CODE_ADDR_ALU_SIZE_MASK << R300_US_CODE_ADDR_ALU_SIZE_SHIFT)
#define R300_US_CODE_ADDR_ALU_START_SHIFT            0 /* established */
#define R300_US_CODE_ADDR_ALU_START_MASK             0x3fu
#define R300_US_CODE_ADDR_ALU_START_INPLACE (R300_US_CODE_ADDR_ALU_START_MASK << R300_US_CODE_ADDR_ALU_START_SHIFT)

/* tex_inst: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 68 */
#define R300_US_TEX_INST_OFFSET                      0x4620u /* established */
#define R300_US_TEX_INST_COUNT                       32
#define R300_US_TEX_INST_STRIDE                      4
#define R300_US_TEX_INST_OMOD_SHIFT                  18 /* established */
#define R300_US_TEX_INST_OMOD_MASK                   0x1u
#define R300_US_TEX_INST_OMOD_INPLACE (R300_US_TEX_INST_OMOD_MASK << R300_US_TEX_INST_OMOD_SHIFT)
#define R300_US_TEX_INST_INST_SHIFT                  15 /* established */
#define R300_US_TEX_INST_INST_MASK                   0x7u
#define R300_US_TEX_INST_INST_INPLACE (R300_US_TEX_INST_INST_MASK << R300_US_TEX_INST_INST_SHIFT)
#define R300_US_TEX_INST_TEX_ID_SHIFT                11 /* established */
#define R300_US_TEX_INST_TEX_ID_MASK                 0xfu
#define R300_US_TEX_INST_TEX_ID_INPLACE (R300_US_TEX_INST_TEX_ID_MASK << R300_US_TEX_INST_TEX_ID_SHIFT)
#define R300_US_TEX_INST_DST_ADDR_SHIFT              6 /* established */
#define R300_US_TEX_INST_DST_ADDR_MASK               0x1fu
#define R300_US_TEX_INST_DST_ADDR_INPLACE (R300_US_TEX_INST_DST_ADDR_MASK << R300_US_TEX_INST_DST_ADDR_SHIFT)
#define R300_US_TEX_INST_SRC_ADDR_SHIFT              0 /* established */
#define R300_US_TEX_INST_SRC_ADDR_MASK               0x1fu
#define R300_US_TEX_INST_SRC_ADDR_INPLACE (R300_US_TEX_INST_SRC_ADDR_MASK << R300_US_TEX_INST_SRC_ADDR_SHIFT)

/* out_fmt: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 67 */
#define R300_US_OUT_FMT_OFFSET                       0x46a4u /* established */
#define R300_US_OUT_FMT_COUNT                        4
#define R300_US_OUT_FMT_STRIDE                       4
#define R300_US_OUT_FMT_OUT_SIGN_SHIFT               16 /* established */
#define R300_US_OUT_FMT_OUT_SIGN_MASK                0xfu
#define R300_US_OUT_FMT_OUT_SIGN_INPLACE (R300_US_OUT_FMT_OUT_SIGN_MASK << R300_US_OUT_FMT_OUT_SIGN_SHIFT)
#define R300_US_OUT_FMT_C3_SEL_SHIFT                 14 /* established */
#define R300_US_OUT_FMT_C3_SEL_MASK                  0x3u
#define R300_US_OUT_FMT_C3_SEL_INPLACE (R300_US_OUT_FMT_C3_SEL_MASK << R300_US_OUT_FMT_C3_SEL_SHIFT)
#define R300_US_OUT_FMT_C2_SEL_SHIFT                 12 /* established */
#define R300_US_OUT_FMT_C2_SEL_MASK                  0x3u
#define R300_US_OUT_FMT_C2_SEL_INPLACE (R300_US_OUT_FMT_C2_SEL_MASK << R300_US_OUT_FMT_C2_SEL_SHIFT)
#define R300_US_OUT_FMT_C1_SEL_SHIFT                 10 /* established */
#define R300_US_OUT_FMT_C1_SEL_MASK                  0x3u
#define R300_US_OUT_FMT_C1_SEL_INPLACE (R300_US_OUT_FMT_C1_SEL_MASK << R300_US_OUT_FMT_C1_SEL_SHIFT)
#define R300_US_OUT_FMT_C0_SEL_SHIFT                 8 /* established */
#define R300_US_OUT_FMT_C0_SEL_MASK                  0x3u
#define R300_US_OUT_FMT_C0_SEL_INPLACE (R300_US_OUT_FMT_C0_SEL_MASK << R300_US_OUT_FMT_C0_SEL_SHIFT)
#define R300_US_OUT_FMT_OUT_FMT_SHIFT                0 /* established */
#define R300_US_OUT_FMT_OUT_FMT_MASK                 0x1fu
#define R300_US_OUT_FMT_OUT_FMT_INPLACE (R300_US_OUT_FMT_OUT_FMT_MASK << R300_US_OUT_FMT_OUT_FMT_SHIFT)

/* w_fmt: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 69 */
#define R300_US_W_FMT_OFFSET                         0x46b4u /* established */
#define R300_US_W_FMT_W_SRC_SHIFT                    2 /* established */
#define R300_US_W_FMT_W_SRC_MASK                     0x1u
#define R300_US_W_FMT_W_SRC_INPLACE (R300_US_W_FMT_W_SRC_MASK << R300_US_W_FMT_W_SRC_SHIFT)
#define R300_US_W_FMT_W_FMT_SHIFT                    0 /* established */
#define R300_US_W_FMT_W_FMT_MASK                     0x3u
#define R300_US_W_FMT_W_FMT_INPLACE (R300_US_W_FMT_W_FMT_MASK << R300_US_W_FMT_W_FMT_SHIFT)

/* alu_rgb_addr: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 61 */
#define R300_US_ALU_RGB_ADDR_OFFSET                  0x46c0u /* established */
#define R300_US_ALU_RGB_ADDR_COUNT                   64
#define R300_US_ALU_RGB_ADDR_STRIDE                  4
#define R300_US_ALU_RGB_ADDR_TARGET_SHIFT            29 /* established */
#define R300_US_ALU_RGB_ADDR_TARGET_MASK             0x3u
#define R300_US_ALU_RGB_ADDR_TARGET_INPLACE (R300_US_ALU_RGB_ADDR_TARGET_MASK << R300_US_ALU_RGB_ADDR_TARGET_SHIFT)
#define R300_US_ALU_RGB_ADDR_OMASK_SHIFT             26 /* established */
#define R300_US_ALU_RGB_ADDR_OMASK_MASK              0x7u
#define R300_US_ALU_RGB_ADDR_OMASK_INPLACE (R300_US_ALU_RGB_ADDR_OMASK_MASK << R300_US_ALU_RGB_ADDR_OMASK_SHIFT)
#define R300_US_ALU_RGB_ADDR_WMASK_SHIFT             23 /* established */
#define R300_US_ALU_RGB_ADDR_WMASK_MASK              0x7u
#define R300_US_ALU_RGB_ADDR_WMASK_INPLACE (R300_US_ALU_RGB_ADDR_WMASK_MASK << R300_US_ALU_RGB_ADDR_WMASK_SHIFT)
#define R300_US_ALU_RGB_ADDR_ADDRD_SHIFT             18 /* established */
#define R300_US_ALU_RGB_ADDR_ADDRD_MASK              0x1fu
#define R300_US_ALU_RGB_ADDR_ADDRD_INPLACE (R300_US_ALU_RGB_ADDR_ADDRD_MASK << R300_US_ALU_RGB_ADDR_ADDRD_SHIFT)
#define R300_US_ALU_RGB_ADDR_ADDR2_SHIFT             12 /* established */
#define R300_US_ALU_RGB_ADDR_ADDR2_MASK              0x3fu
#define R300_US_ALU_RGB_ADDR_ADDR2_INPLACE (R300_US_ALU_RGB_ADDR_ADDR2_MASK << R300_US_ALU_RGB_ADDR_ADDR2_SHIFT)
#define R300_US_ALU_RGB_ADDR_ADDR1_SHIFT             6 /* established */
#define R300_US_ALU_RGB_ADDR_ADDR1_MASK              0x3fu
#define R300_US_ALU_RGB_ADDR_ADDR1_INPLACE (R300_US_ALU_RGB_ADDR_ADDR1_MASK << R300_US_ALU_RGB_ADDR_ADDR1_SHIFT)
#define R300_US_ALU_RGB_ADDR_ADDR0_SHIFT             0 /* established */
#define R300_US_ALU_RGB_ADDR_ADDR0_MASK              0x3fu
#define R300_US_ALU_RGB_ADDR_ADDR0_INPLACE (R300_US_ALU_RGB_ADDR_ADDR0_MASK << R300_US_ALU_RGB_ADDR_ADDR0_SHIFT)

/* alu_alpha_addr: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 58 */
#define R300_US_ALU_ALPHA_ADDR_OFFSET                0x47c0u /* established */
#define R300_US_ALU_ALPHA_ADDR_COUNT                 64
#define R300_US_ALU_ALPHA_ADDR_STRIDE                4
#define R300_US_ALU_ALPHA_ADDR_STAT_WE_SHIFT         28 /* established */
#define R300_US_ALU_ALPHA_ADDR_STAT_WE_MASK          0xfu
#define R300_US_ALU_ALPHA_ADDR_STAT_WE_INPLACE (R300_US_ALU_ALPHA_ADDR_STAT_WE_MASK << R300_US_ALU_ALPHA_ADDR_STAT_WE_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_OMASK_W_SHIFT         27 /* established */
#define R300_US_ALU_ALPHA_ADDR_OMASK_W_MASK          0x1u
#define R300_US_ALU_ALPHA_ADDR_OMASK_W_INPLACE (R300_US_ALU_ALPHA_ADDR_OMASK_W_MASK << R300_US_ALU_ALPHA_ADDR_OMASK_W_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_TARGET_SHIFT          25 /* established */
#define R300_US_ALU_ALPHA_ADDR_TARGET_MASK           0x3u
#define R300_US_ALU_ALPHA_ADDR_TARGET_INPLACE (R300_US_ALU_ALPHA_ADDR_TARGET_MASK << R300_US_ALU_ALPHA_ADDR_TARGET_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_OMASK_SHIFT           24 /* established */
#define R300_US_ALU_ALPHA_ADDR_OMASK_MASK            0x1u
#define R300_US_ALU_ALPHA_ADDR_OMASK_INPLACE (R300_US_ALU_ALPHA_ADDR_OMASK_MASK << R300_US_ALU_ALPHA_ADDR_OMASK_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_WMASK_SHIFT           23 /* established */
#define R300_US_ALU_ALPHA_ADDR_WMASK_MASK            0x1u
#define R300_US_ALU_ALPHA_ADDR_WMASK_INPLACE (R300_US_ALU_ALPHA_ADDR_WMASK_MASK << R300_US_ALU_ALPHA_ADDR_WMASK_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_ADDRD_SHIFT           18 /* established */
#define R300_US_ALU_ALPHA_ADDR_ADDRD_MASK            0x1fu
#define R300_US_ALU_ALPHA_ADDR_ADDRD_INPLACE (R300_US_ALU_ALPHA_ADDR_ADDRD_MASK << R300_US_ALU_ALPHA_ADDR_ADDRD_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_ADDR2_SHIFT           12 /* established */
#define R300_US_ALU_ALPHA_ADDR_ADDR2_MASK            0x3fu
#define R300_US_ALU_ALPHA_ADDR_ADDR2_INPLACE (R300_US_ALU_ALPHA_ADDR_ADDR2_MASK << R300_US_ALU_ALPHA_ADDR_ADDR2_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_ADDR1_SHIFT           6 /* established */
#define R300_US_ALU_ALPHA_ADDR_ADDR1_MASK            0x3fu
#define R300_US_ALU_ALPHA_ADDR_ADDR1_INPLACE (R300_US_ALU_ALPHA_ADDR_ADDR1_MASK << R300_US_ALU_ALPHA_ADDR_ADDR1_SHIFT)
#define R300_US_ALU_ALPHA_ADDR_ADDR0_SHIFT           0 /* established */
#define R300_US_ALU_ALPHA_ADDR_ADDR0_MASK            0x3fu
#define R300_US_ALU_ALPHA_ADDR_ADDR0_INPLACE (R300_US_ALU_ALPHA_ADDR_ADDR0_MASK << R300_US_ALU_ALPHA_ADDR_ADDR0_SHIFT)

/* alu_rgb_inst: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 62 */
#define R300_US_ALU_RGB_INST_OFFSET                  0x48c0u /* established */
#define R300_US_ALU_RGB_INST_COUNT                   64
#define R300_US_ALU_RGB_INST_STRIDE                  4
#define R300_US_ALU_RGB_INST_NOP_SHIFT               31 /* established */
#define R300_US_ALU_RGB_INST_NOP_MASK                0x1u
#define R300_US_ALU_RGB_INST_NOP_INPLACE (R300_US_ALU_RGB_INST_NOP_MASK << R300_US_ALU_RGB_INST_NOP_SHIFT)
#define R300_US_ALU_RGB_INST_CLAMP_SHIFT             30 /* established */
#define R300_US_ALU_RGB_INST_CLAMP_MASK              0x1u
#define R300_US_ALU_RGB_INST_CLAMP_INPLACE (R300_US_ALU_RGB_INST_CLAMP_MASK << R300_US_ALU_RGB_INST_CLAMP_SHIFT)
#define R300_US_ALU_RGB_INST_OMOD_SHIFT              27 /* established */
#define R300_US_ALU_RGB_INST_OMOD_MASK               0x7u
#define R300_US_ALU_RGB_INST_OMOD_INPLACE (R300_US_ALU_RGB_INST_OMOD_MASK << R300_US_ALU_RGB_INST_OMOD_SHIFT)
#define R300_US_ALU_RGB_INST_OP_SHIFT                23 /* established */
#define R300_US_ALU_RGB_INST_OP_MASK                 0xfu
#define R300_US_ALU_RGB_INST_OP_INPLACE (R300_US_ALU_RGB_INST_OP_MASK << R300_US_ALU_RGB_INST_OP_SHIFT)
#define R300_US_ALU_RGB_INST_SRCP_OP_SHIFT           21 /* established */
#define R300_US_ALU_RGB_INST_SRCP_OP_MASK            0x3u
#define R300_US_ALU_RGB_INST_SRCP_OP_INPLACE (R300_US_ALU_RGB_INST_SRCP_OP_MASK << R300_US_ALU_RGB_INST_SRCP_OP_SHIFT)
#define R300_US_ALU_RGB_INST_MOD_C_SHIFT             19 /* established */
#define R300_US_ALU_RGB_INST_MOD_C_MASK              0x3u
#define R300_US_ALU_RGB_INST_MOD_C_INPLACE (R300_US_ALU_RGB_INST_MOD_C_MASK << R300_US_ALU_RGB_INST_MOD_C_SHIFT)
#define R300_US_ALU_RGB_INST_SEL_C_SHIFT             14 /* established */
#define R300_US_ALU_RGB_INST_SEL_C_MASK              0x1fu
#define R300_US_ALU_RGB_INST_SEL_C_INPLACE (R300_US_ALU_RGB_INST_SEL_C_MASK << R300_US_ALU_RGB_INST_SEL_C_SHIFT)
#define R300_US_ALU_RGB_INST_MOD_B_SHIFT             12 /* established */
#define R300_US_ALU_RGB_INST_MOD_B_MASK              0x3u
#define R300_US_ALU_RGB_INST_MOD_B_INPLACE (R300_US_ALU_RGB_INST_MOD_B_MASK << R300_US_ALU_RGB_INST_MOD_B_SHIFT)
#define R300_US_ALU_RGB_INST_SEL_B_SHIFT             7 /* established */
#define R300_US_ALU_RGB_INST_SEL_B_MASK              0x1fu
#define R300_US_ALU_RGB_INST_SEL_B_INPLACE (R300_US_ALU_RGB_INST_SEL_B_MASK << R300_US_ALU_RGB_INST_SEL_B_SHIFT)
#define R300_US_ALU_RGB_INST_MOD_A_SHIFT             5 /* established */
#define R300_US_ALU_RGB_INST_MOD_A_MASK              0x3u
#define R300_US_ALU_RGB_INST_MOD_A_INPLACE (R300_US_ALU_RGB_INST_MOD_A_MASK << R300_US_ALU_RGB_INST_MOD_A_SHIFT)
#define R300_US_ALU_RGB_INST_SEL_A_SHIFT             0 /* established */
#define R300_US_ALU_RGB_INST_SEL_A_MASK              0x1fu
#define R300_US_ALU_RGB_INST_SEL_A_INPLACE (R300_US_ALU_RGB_INST_SEL_A_MASK << R300_US_ALU_RGB_INST_SEL_A_SHIFT)

/* alu_alpha_inst: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 59 */
#define R300_US_ALU_ALPHA_INST_OFFSET                0x49c0u /* established */
#define R300_US_ALU_ALPHA_INST_COUNT                 64
#define R300_US_ALU_ALPHA_INST_STRIDE                4
#define R300_US_ALU_ALPHA_INST_CLAMP_SHIFT           30 /* established */
#define R300_US_ALU_ALPHA_INST_CLAMP_MASK            0x1u
#define R300_US_ALU_ALPHA_INST_CLAMP_INPLACE (R300_US_ALU_ALPHA_INST_CLAMP_MASK << R300_US_ALU_ALPHA_INST_CLAMP_SHIFT)
#define R300_US_ALU_ALPHA_INST_OMOD_SHIFT            27 /* established */
#define R300_US_ALU_ALPHA_INST_OMOD_MASK             0x7u
#define R300_US_ALU_ALPHA_INST_OMOD_INPLACE (R300_US_ALU_ALPHA_INST_OMOD_MASK << R300_US_ALU_ALPHA_INST_OMOD_SHIFT)
#define R300_US_ALU_ALPHA_INST_OP_SHIFT              23 /* established */
#define R300_US_ALU_ALPHA_INST_OP_MASK               0xfu
#define R300_US_ALU_ALPHA_INST_OP_INPLACE (R300_US_ALU_ALPHA_INST_OP_MASK << R300_US_ALU_ALPHA_INST_OP_SHIFT)
#define R300_US_ALU_ALPHA_INST_SRCP_OP_SHIFT         21 /* established */
#define R300_US_ALU_ALPHA_INST_SRCP_OP_MASK          0x3u
#define R300_US_ALU_ALPHA_INST_SRCP_OP_INPLACE (R300_US_ALU_ALPHA_INST_SRCP_OP_MASK << R300_US_ALU_ALPHA_INST_SRCP_OP_SHIFT)
#define R300_US_ALU_ALPHA_INST_MOD_C_SHIFT           19 /* established */
#define R300_US_ALU_ALPHA_INST_MOD_C_MASK            0x3u
#define R300_US_ALU_ALPHA_INST_MOD_C_INPLACE (R300_US_ALU_ALPHA_INST_MOD_C_MASK << R300_US_ALU_ALPHA_INST_MOD_C_SHIFT)
#define R300_US_ALU_ALPHA_INST_SEL_C_SHIFT           14 /* established */
#define R300_US_ALU_ALPHA_INST_SEL_C_MASK            0x1fu
#define R300_US_ALU_ALPHA_INST_SEL_C_INPLACE (R300_US_ALU_ALPHA_INST_SEL_C_MASK << R300_US_ALU_ALPHA_INST_SEL_C_SHIFT)
#define R300_US_ALU_ALPHA_INST_MOD_B_SHIFT           12 /* established */
#define R300_US_ALU_ALPHA_INST_MOD_B_MASK            0x3u
#define R300_US_ALU_ALPHA_INST_MOD_B_INPLACE (R300_US_ALU_ALPHA_INST_MOD_B_MASK << R300_US_ALU_ALPHA_INST_MOD_B_SHIFT)
#define R300_US_ALU_ALPHA_INST_SEL_B_SHIFT           7 /* established */
#define R300_US_ALU_ALPHA_INST_SEL_B_MASK            0x1fu
#define R300_US_ALU_ALPHA_INST_SEL_B_INPLACE (R300_US_ALU_ALPHA_INST_SEL_B_MASK << R300_US_ALU_ALPHA_INST_SEL_B_SHIFT)
#define R300_US_ALU_ALPHA_INST_MOD_A_SHIFT           5 /* established */
#define R300_US_ALU_ALPHA_INST_MOD_A_MASK            0x3u
#define R300_US_ALU_ALPHA_INST_MOD_A_INPLACE (R300_US_ALU_ALPHA_INST_MOD_A_MASK << R300_US_ALU_ALPHA_INST_MOD_A_SHIFT)
#define R300_US_ALU_ALPHA_INST_SEL_A_SHIFT           0 /* established */
#define R300_US_ALU_ALPHA_INST_SEL_A_MASK            0x1fu
#define R300_US_ALU_ALPHA_INST_SEL_A_INPLACE (R300_US_ALU_ALPHA_INST_SEL_A_MASK << R300_US_ALU_ALPHA_INST_SEL_A_SHIFT)

/* alu_const_r: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 70 */
#define R300_US_ALU_CONST_R_OFFSET                   0x4c00u /* established */
#define R300_US_ALU_CONST_R_COUNT                    32
#define R300_US_ALU_CONST_R_STRIDE                   16
#define R300_US_ALU_CONST_R_KR_SHIFT                 0 /* established */
#define R300_US_ALU_CONST_R_KR_MASK                  0xffffffu
#define R300_US_ALU_CONST_R_KR_INPLACE (R300_US_ALU_CONST_R_KR_MASK << R300_US_ALU_CONST_R_KR_SHIFT)

/* alu_const_g: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 69 */
#define R300_US_ALU_CONST_G_OFFSET                   0x4c04u /* established */
#define R300_US_ALU_CONST_G_COUNT                    32
#define R300_US_ALU_CONST_G_STRIDE                   16
#define R300_US_ALU_CONST_G_KG_SHIFT                 0 /* established */
#define R300_US_ALU_CONST_G_KG_MASK                  0xffffffu
#define R300_US_ALU_CONST_G_KG_INPLACE (R300_US_ALU_CONST_G_KG_MASK << R300_US_ALU_CONST_G_KG_SHIFT)

/* alu_const_b: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 69 */
#define R300_US_ALU_CONST_B_OFFSET                   0x4c08u /* established */
#define R300_US_ALU_CONST_B_COUNT                    32
#define R300_US_ALU_CONST_B_STRIDE                   16
#define R300_US_ALU_CONST_B_KB_SHIFT                 0 /* established */
#define R300_US_ALU_CONST_B_KB_MASK                  0xffffffu
#define R300_US_ALU_CONST_B_KB_INPLACE (R300_US_ALU_CONST_B_KB_MASK << R300_US_ALU_CONST_B_KB_SHIFT)

/* alu_const_a: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 69 */
#define R300_US_ALU_CONST_A_OFFSET                   0x4c0cu /* established */
#define R300_US_ALU_CONST_A_COUNT                    32
#define R300_US_ALU_CONST_A_STRIDE                   16
#define R300_US_ALU_CONST_A_KA_SHIFT                 0 /* established */
#define R300_US_ALU_CONST_A_KA_MASK                  0xffffffu
#define R300_US_ALU_CONST_A_KA_INPLACE (R300_US_ALU_CONST_A_KA_MASK << R300_US_ALU_CONST_A_KA_SHIFT)

#endif /* R300_US_GEN_H */
