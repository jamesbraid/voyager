/* generated from devices/su/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 27e3a56aa0329a5f09ed7dc6f590fcc82a75e49b2b88a9c924ec399bc0eb3377 */
/* setup unit registers of the R300 and R350 3D engine */
#ifndef R300_SU_GEN_H
#define R300_SU_GEN_H

#include <stdint.h>


/* tex_wrap: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 45 */
#define R300_SU_TEX_WRAP_OFFSET                      0x42a0u /* established */
#define R300_SU_TEX_WRAP_T7C3_SHIFT                  31 /* established */
#define R300_SU_TEX_WRAP_T7C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T7C3_INPLACE (R300_SU_TEX_WRAP_T7C3_MASK << R300_SU_TEX_WRAP_T7C3_SHIFT)
#define R300_SU_TEX_WRAP_T7C2_SHIFT                  30 /* established */
#define R300_SU_TEX_WRAP_T7C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T7C2_INPLACE (R300_SU_TEX_WRAP_T7C2_MASK << R300_SU_TEX_WRAP_T7C2_SHIFT)
#define R300_SU_TEX_WRAP_T7C1_SHIFT                  29 /* established */
#define R300_SU_TEX_WRAP_T7C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T7C1_INPLACE (R300_SU_TEX_WRAP_T7C1_MASK << R300_SU_TEX_WRAP_T7C1_SHIFT)
#define R300_SU_TEX_WRAP_T7C0_SHIFT                  28 /* established */
#define R300_SU_TEX_WRAP_T7C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T7C0_INPLACE (R300_SU_TEX_WRAP_T7C0_MASK << R300_SU_TEX_WRAP_T7C0_SHIFT)
#define R300_SU_TEX_WRAP_T6C3_SHIFT                  27 /* established */
#define R300_SU_TEX_WRAP_T6C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T6C3_INPLACE (R300_SU_TEX_WRAP_T6C3_MASK << R300_SU_TEX_WRAP_T6C3_SHIFT)
#define R300_SU_TEX_WRAP_T6C2_SHIFT                  26 /* established */
#define R300_SU_TEX_WRAP_T6C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T6C2_INPLACE (R300_SU_TEX_WRAP_T6C2_MASK << R300_SU_TEX_WRAP_T6C2_SHIFT)
#define R300_SU_TEX_WRAP_T6C1_SHIFT                  25 /* established */
#define R300_SU_TEX_WRAP_T6C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T6C1_INPLACE (R300_SU_TEX_WRAP_T6C1_MASK << R300_SU_TEX_WRAP_T6C1_SHIFT)
#define R300_SU_TEX_WRAP_T6C0_SHIFT                  24 /* established */
#define R300_SU_TEX_WRAP_T6C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T6C0_INPLACE (R300_SU_TEX_WRAP_T6C0_MASK << R300_SU_TEX_WRAP_T6C0_SHIFT)
#define R300_SU_TEX_WRAP_T5C3_SHIFT                  23 /* established */
#define R300_SU_TEX_WRAP_T5C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T5C3_INPLACE (R300_SU_TEX_WRAP_T5C3_MASK << R300_SU_TEX_WRAP_T5C3_SHIFT)
#define R300_SU_TEX_WRAP_T5C2_SHIFT                  22 /* established */
#define R300_SU_TEX_WRAP_T5C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T5C2_INPLACE (R300_SU_TEX_WRAP_T5C2_MASK << R300_SU_TEX_WRAP_T5C2_SHIFT)
#define R300_SU_TEX_WRAP_T5C1_SHIFT                  21 /* established */
#define R300_SU_TEX_WRAP_T5C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T5C1_INPLACE (R300_SU_TEX_WRAP_T5C1_MASK << R300_SU_TEX_WRAP_T5C1_SHIFT)
#define R300_SU_TEX_WRAP_T5C0_SHIFT                  20 /* established */
#define R300_SU_TEX_WRAP_T5C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T5C0_INPLACE (R300_SU_TEX_WRAP_T5C0_MASK << R300_SU_TEX_WRAP_T5C0_SHIFT)
#define R300_SU_TEX_WRAP_T4C3_SHIFT                  19 /* established */
#define R300_SU_TEX_WRAP_T4C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T4C3_INPLACE (R300_SU_TEX_WRAP_T4C3_MASK << R300_SU_TEX_WRAP_T4C3_SHIFT)
#define R300_SU_TEX_WRAP_T4C2_SHIFT                  18 /* established */
#define R300_SU_TEX_WRAP_T4C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T4C2_INPLACE (R300_SU_TEX_WRAP_T4C2_MASK << R300_SU_TEX_WRAP_T4C2_SHIFT)
#define R300_SU_TEX_WRAP_T4C1_SHIFT                  17 /* established */
#define R300_SU_TEX_WRAP_T4C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T4C1_INPLACE (R300_SU_TEX_WRAP_T4C1_MASK << R300_SU_TEX_WRAP_T4C1_SHIFT)
#define R300_SU_TEX_WRAP_T4C0_SHIFT                  16 /* established */
#define R300_SU_TEX_WRAP_T4C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T4C0_INPLACE (R300_SU_TEX_WRAP_T4C0_MASK << R300_SU_TEX_WRAP_T4C0_SHIFT)
#define R300_SU_TEX_WRAP_T3C3_SHIFT                  15 /* established */
#define R300_SU_TEX_WRAP_T3C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T3C3_INPLACE (R300_SU_TEX_WRAP_T3C3_MASK << R300_SU_TEX_WRAP_T3C3_SHIFT)
#define R300_SU_TEX_WRAP_T3C2_SHIFT                  14 /* established */
#define R300_SU_TEX_WRAP_T3C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T3C2_INPLACE (R300_SU_TEX_WRAP_T3C2_MASK << R300_SU_TEX_WRAP_T3C2_SHIFT)
#define R300_SU_TEX_WRAP_T3C1_SHIFT                  13 /* established */
#define R300_SU_TEX_WRAP_T3C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T3C1_INPLACE (R300_SU_TEX_WRAP_T3C1_MASK << R300_SU_TEX_WRAP_T3C1_SHIFT)
#define R300_SU_TEX_WRAP_T3C0_SHIFT                  12 /* established */
#define R300_SU_TEX_WRAP_T3C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T3C0_INPLACE (R300_SU_TEX_WRAP_T3C0_MASK << R300_SU_TEX_WRAP_T3C0_SHIFT)
#define R300_SU_TEX_WRAP_T2C3_SHIFT                  11 /* established */
#define R300_SU_TEX_WRAP_T2C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T2C3_INPLACE (R300_SU_TEX_WRAP_T2C3_MASK << R300_SU_TEX_WRAP_T2C3_SHIFT)
#define R300_SU_TEX_WRAP_T2C2_SHIFT                  10 /* established */
#define R300_SU_TEX_WRAP_T2C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T2C2_INPLACE (R300_SU_TEX_WRAP_T2C2_MASK << R300_SU_TEX_WRAP_T2C2_SHIFT)
#define R300_SU_TEX_WRAP_T2C1_SHIFT                  9 /* established */
#define R300_SU_TEX_WRAP_T2C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T2C1_INPLACE (R300_SU_TEX_WRAP_T2C1_MASK << R300_SU_TEX_WRAP_T2C1_SHIFT)
#define R300_SU_TEX_WRAP_T2C0_SHIFT                  8 /* established */
#define R300_SU_TEX_WRAP_T2C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T2C0_INPLACE (R300_SU_TEX_WRAP_T2C0_MASK << R300_SU_TEX_WRAP_T2C0_SHIFT)
#define R300_SU_TEX_WRAP_T1C3_SHIFT                  7 /* established */
#define R300_SU_TEX_WRAP_T1C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T1C3_INPLACE (R300_SU_TEX_WRAP_T1C3_MASK << R300_SU_TEX_WRAP_T1C3_SHIFT)
#define R300_SU_TEX_WRAP_T1C2_SHIFT                  6 /* established */
#define R300_SU_TEX_WRAP_T1C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T1C2_INPLACE (R300_SU_TEX_WRAP_T1C2_MASK << R300_SU_TEX_WRAP_T1C2_SHIFT)
#define R300_SU_TEX_WRAP_T1C1_SHIFT                  5 /* established */
#define R300_SU_TEX_WRAP_T1C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T1C1_INPLACE (R300_SU_TEX_WRAP_T1C1_MASK << R300_SU_TEX_WRAP_T1C1_SHIFT)
#define R300_SU_TEX_WRAP_T1C0_SHIFT                  4 /* established */
#define R300_SU_TEX_WRAP_T1C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T1C0_INPLACE (R300_SU_TEX_WRAP_T1C0_MASK << R300_SU_TEX_WRAP_T1C0_SHIFT)
#define R300_SU_TEX_WRAP_T0C3_SHIFT                  3 /* established */
#define R300_SU_TEX_WRAP_T0C3_MASK                   0x1u
#define R300_SU_TEX_WRAP_T0C3_INPLACE (R300_SU_TEX_WRAP_T0C3_MASK << R300_SU_TEX_WRAP_T0C3_SHIFT)
#define R300_SU_TEX_WRAP_T0C2_SHIFT                  2 /* established */
#define R300_SU_TEX_WRAP_T0C2_MASK                   0x1u
#define R300_SU_TEX_WRAP_T0C2_INPLACE (R300_SU_TEX_WRAP_T0C2_MASK << R300_SU_TEX_WRAP_T0C2_SHIFT)
#define R300_SU_TEX_WRAP_T0C1_SHIFT                  1 /* established */
#define R300_SU_TEX_WRAP_T0C1_MASK                   0x1u
#define R300_SU_TEX_WRAP_T0C1_INPLACE (R300_SU_TEX_WRAP_T0C1_MASK << R300_SU_TEX_WRAP_T0C1_SHIFT)
#define R300_SU_TEX_WRAP_T0C0_SHIFT                  0 /* established */
#define R300_SU_TEX_WRAP_T0C0_MASK                   0x1u
#define R300_SU_TEX_WRAP_T0C0_INPLACE (R300_SU_TEX_WRAP_T0C0_MASK << R300_SU_TEX_WRAP_T0C0_SHIFT)

/* poly_offset_front_scale: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 44 */
#define R300_SU_POLY_OFFSET_FRONT_SCALE_OFFSET       0x42a4u /* established */
#define R300_SU_POLY_OFFSET_FRONT_SCALE_SCALE_SHIFT  0 /* established */
#define R300_SU_POLY_OFFSET_FRONT_SCALE_SCALE_MASK   0xffffffffu
#define R300_SU_POLY_OFFSET_FRONT_SCALE_SCALE_INPLACE (R300_SU_POLY_OFFSET_FRONT_SCALE_SCALE_MASK << R300_SU_POLY_OFFSET_FRONT_SCALE_SCALE_SHIFT)

/* poly_offset_front_offset: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 44 */
#define R300_SU_POLY_OFFSET_FRONT_OFFSET_OFFSET      0x42a8u /* established */
#define R300_SU_POLY_OFFSET_FRONT_OFFSET_OFFSET_SHIFT 0 /* established */
#define R300_SU_POLY_OFFSET_FRONT_OFFSET_OFFSET_MASK 0xffffffffu
#define R300_SU_POLY_OFFSET_FRONT_OFFSET_OFFSET_INPLACE (R300_SU_POLY_OFFSET_FRONT_OFFSET_OFFSET_MASK << R300_SU_POLY_OFFSET_FRONT_OFFSET_OFFSET_SHIFT)

/* poly_offset_back_scale: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 44 */
#define R300_SU_POLY_OFFSET_BACK_SCALE_OFFSET        0x42acu /* established */
#define R300_SU_POLY_OFFSET_BACK_SCALE_SCALE_SHIFT   0 /* established */
#define R300_SU_POLY_OFFSET_BACK_SCALE_SCALE_MASK    0xffffffffu
#define R300_SU_POLY_OFFSET_BACK_SCALE_SCALE_INPLACE (R300_SU_POLY_OFFSET_BACK_SCALE_SCALE_MASK << R300_SU_POLY_OFFSET_BACK_SCALE_SCALE_SHIFT)

/* poly_offset_back_offset: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 43 */
#define R300_SU_POLY_OFFSET_BACK_OFFSET_OFFSET       0x42b0u /* established */
#define R300_SU_POLY_OFFSET_BACK_OFFSET_OFFSET_SHIFT 0 /* established */
#define R300_SU_POLY_OFFSET_BACK_OFFSET_OFFSET_MASK  0xffffffffu
#define R300_SU_POLY_OFFSET_BACK_OFFSET_OFFSET_INPLACE (R300_SU_POLY_OFFSET_BACK_OFFSET_OFFSET_MASK << R300_SU_POLY_OFFSET_BACK_OFFSET_OFFSET_SHIFT)

/* poly_offset_enable: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 44 */
#define R300_SU_POLY_OFFSET_ENABLE_OFFSET            0x42b4u /* established */
#define R300_SU_POLY_OFFSET_ENABLE_PARA_ENABLE_SHIFT 2 /* established */
#define R300_SU_POLY_OFFSET_ENABLE_PARA_ENABLE_MASK  0x1u
#define R300_SU_POLY_OFFSET_ENABLE_PARA_ENABLE_INPLACE (R300_SU_POLY_OFFSET_ENABLE_PARA_ENABLE_MASK << R300_SU_POLY_OFFSET_ENABLE_PARA_ENABLE_SHIFT)
#define R300_SU_POLY_OFFSET_ENABLE_BACK_ENABLE_SHIFT 1 /* established */
#define R300_SU_POLY_OFFSET_ENABLE_BACK_ENABLE_MASK  0x1u
#define R300_SU_POLY_OFFSET_ENABLE_BACK_ENABLE_INPLACE (R300_SU_POLY_OFFSET_ENABLE_BACK_ENABLE_MASK << R300_SU_POLY_OFFSET_ENABLE_BACK_ENABLE_SHIFT)
#define R300_SU_POLY_OFFSET_ENABLE_FRONT_ENABLE_SHIFT 0 /* established */
#define R300_SU_POLY_OFFSET_ENABLE_FRONT_ENABLE_MASK 0x1u
#define R300_SU_POLY_OFFSET_ENABLE_FRONT_ENABLE_INPLACE (R300_SU_POLY_OFFSET_ENABLE_FRONT_ENABLE_MASK << R300_SU_POLY_OFFSET_ENABLE_FRONT_ENABLE_SHIFT)

/* cull_mode: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 43 */
#define R300_SU_CULL_MODE_OFFSET                     0x42b8u /* established */
#define R300_SU_CULL_MODE_FACE_SHIFT                 2 /* established */
#define R300_SU_CULL_MODE_FACE_MASK                  0x1u
#define R300_SU_CULL_MODE_FACE_INPLACE (R300_SU_CULL_MODE_FACE_MASK << R300_SU_CULL_MODE_FACE_SHIFT)
#define R300_SU_CULL_MODE_CULL_BACK_SHIFT            1 /* established */
#define R300_SU_CULL_MODE_CULL_BACK_MASK             0x1u
#define R300_SU_CULL_MODE_CULL_BACK_INPLACE (R300_SU_CULL_MODE_CULL_BACK_MASK << R300_SU_CULL_MODE_CULL_BACK_SHIFT)
#define R300_SU_CULL_MODE_CULL_FRONT_SHIFT           0 /* established */
#define R300_SU_CULL_MODE_CULL_FRONT_MASK            0x1u
#define R300_SU_CULL_MODE_CULL_FRONT_INPLACE (R300_SU_CULL_MODE_CULL_FRONT_MASK << R300_SU_CULL_MODE_CULL_FRONT_SHIFT)

/* depth_scale: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 43 */
#define R300_SU_DEPTH_SCALE_OFFSET                   0x42c0u /* established */

/* depth_offset: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 43 */
#define R300_SU_DEPTH_OFFSET_OFFSET                  0x42c4u /* established */
#define R300_SU_DEPTH_OFFSET_OFFSET_SHIFT            0 /* established */
#define R300_SU_DEPTH_OFFSET_OFFSET_MASK             0xffffffffu
#define R300_SU_DEPTH_OFFSET_OFFSET_INPLACE (R300_SU_DEPTH_OFFSET_OFFSET_MASK << R300_SU_DEPTH_OFFSET_OFFSET_SHIFT)

#endif /* R300_SU_GEN_H */
