/* generated from devices/ga/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 b474daa9d295799fe8f5e5ddf58374b9d80cdb167b2acb0dfa77d323e342828f */
/* geometry assembly registers of the R300 and R350 3D engine */
#ifndef R300_GA_GEN_H
#define R300_GA_GEN_H

#include <stdint.h>


/* point_s0: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 22 */
#define R300_GA_POINT_S0_OFFSET                      0x4200u /* established */
#define R300_GA_POINT_S0_S0_SHIFT                    0 /* established */
#define R300_GA_POINT_S0_S0_MASK                     0xffffffffu
#define R300_GA_POINT_S0_S0_INPLACE (R300_GA_POINT_S0_S0_MASK << R300_GA_POINT_S0_S0_SHIFT)

/* point_t0: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 22 */
#define R300_GA_POINT_T0_OFFSET                      0x4204u /* established */
#define R300_GA_POINT_T0_T0_SHIFT                    0 /* established */
#define R300_GA_POINT_T0_T0_MASK                     0xffffffffu
#define R300_GA_POINT_T0_T0_INPLACE (R300_GA_POINT_T0_T0_MASK << R300_GA_POINT_T0_T0_SHIFT)

/* point_s1: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 22 */
#define R300_GA_POINT_S1_OFFSET                      0x4208u /* established */
#define R300_GA_POINT_S1_S1_SHIFT                    0 /* established */
#define R300_GA_POINT_S1_S1_MASK                     0xffffffffu
#define R300_GA_POINT_S1_S1_INPLACE (R300_GA_POINT_S1_S1_MASK << R300_GA_POINT_S1_S1_SHIFT)

/* point_t1: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 23 */
#define R300_GA_POINT_T1_OFFSET                      0x420cu /* established */
#define R300_GA_POINT_T1_T1_SHIFT                    0 /* established */
#define R300_GA_POINT_T1_T1_MASK                     0xffffffffu
#define R300_GA_POINT_T1_T1_INPLACE (R300_GA_POINT_T1_T1_MASK << R300_GA_POINT_T1_T1_SHIFT)

/* triangle_stipple: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 24 */
#define R300_GA_TRIANGLE_STIPPLE_OFFSET              0x4214u /* established */
#define R300_GA_TRIANGLE_STIPPLE_Y_SHIFT_SHIFT       16 /* established */
#define R300_GA_TRIANGLE_STIPPLE_Y_SHIFT_MASK        0xfu
#define R300_GA_TRIANGLE_STIPPLE_Y_SHIFT_INPLACE (R300_GA_TRIANGLE_STIPPLE_Y_SHIFT_MASK << R300_GA_TRIANGLE_STIPPLE_Y_SHIFT_SHIFT)
#define R300_GA_TRIANGLE_STIPPLE_X_SHIFT_SHIFT       0 /* established */
#define R300_GA_TRIANGLE_STIPPLE_X_SHIFT_MASK        0xfu
#define R300_GA_TRIANGLE_STIPPLE_X_SHIFT_INPLACE (R300_GA_TRIANGLE_STIPPLE_X_SHIFT_MASK << R300_GA_TRIANGLE_STIPPLE_X_SHIFT_SHIFT)

/* point_size: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 22 */
#define R300_GA_POINT_SIZE_OFFSET                    0x421cu /* established */
#define R300_GA_POINT_SIZE_WIDTH_SHIFT               16 /* established */
#define R300_GA_POINT_SIZE_WIDTH_MASK                0xffffu
#define R300_GA_POINT_SIZE_WIDTH_INPLACE (R300_GA_POINT_SIZE_WIDTH_MASK << R300_GA_POINT_SIZE_WIDTH_SHIFT)
#define R300_GA_POINT_SIZE_HEIGHT_SHIFT              0 /* established */
#define R300_GA_POINT_SIZE_HEIGHT_MASK               0xffffu
#define R300_GA_POINT_SIZE_HEIGHT_INPLACE (R300_GA_POINT_SIZE_HEIGHT_MASK << R300_GA_POINT_SIZE_HEIGHT_SHIFT)

/* point_minmax: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 22 */
#define R300_GA_POINT_MINMAX_OFFSET                  0x4230u /* established */
#define R300_GA_POINT_MINMAX_MAX_SIZE_SHIFT          16 /* established */
#define R300_GA_POINT_MINMAX_MAX_SIZE_MASK           0xffffu
#define R300_GA_POINT_MINMAX_MAX_SIZE_INPLACE (R300_GA_POINT_MINMAX_MAX_SIZE_MASK << R300_GA_POINT_MINMAX_MAX_SIZE_SHIFT)
#define R300_GA_POINT_MINMAX_MIN_SIZE_SHIFT          0 /* established */
#define R300_GA_POINT_MINMAX_MIN_SIZE_MASK           0xffffu
#define R300_GA_POINT_MINMAX_MIN_SIZE_INPLACE (R300_GA_POINT_MINMAX_MIN_SIZE_MASK << R300_GA_POINT_MINMAX_MIN_SIZE_SHIFT)

/* line_cntl: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 20 */
#define R300_GA_LINE_CNTL_OFFSET                     0x4234u /* established */
#define R300_GA_LINE_CNTL_END_TYPE_SHIFT             16 /* established */
#define R300_GA_LINE_CNTL_END_TYPE_MASK              0x3u
#define R300_GA_LINE_CNTL_END_TYPE_INPLACE (R300_GA_LINE_CNTL_END_TYPE_MASK << R300_GA_LINE_CNTL_END_TYPE_SHIFT)
#define R300_GA_LINE_CNTL_WIDTH_SHIFT                0 /* established */
#define R300_GA_LINE_CNTL_WIDTH_MASK                 0xffffu
#define R300_GA_LINE_CNTL_WIDTH_INPLACE (R300_GA_LINE_CNTL_WIDTH_MASK << R300_GA_LINE_CNTL_WIDTH_SHIFT)

/* line_stipple_config: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 21 */
#define R300_GA_LINE_STIPPLE_CONFIG_OFFSET           0x4238u /* established */
#define R300_GA_LINE_STIPPLE_CONFIG_STIPPLE_SCALE_SHIFT 2 /* established */
#define R300_GA_LINE_STIPPLE_CONFIG_STIPPLE_SCALE_MASK 0x3fffffffu
#define R300_GA_LINE_STIPPLE_CONFIG_STIPPLE_SCALE_INPLACE (R300_GA_LINE_STIPPLE_CONFIG_STIPPLE_SCALE_MASK << R300_GA_LINE_STIPPLE_CONFIG_STIPPLE_SCALE_SHIFT)
#define R300_GA_LINE_STIPPLE_CONFIG_LINE_RESET_SHIFT 0 /* established */
#define R300_GA_LINE_STIPPLE_CONFIG_LINE_RESET_MASK  0x3u
#define R300_GA_LINE_STIPPLE_CONFIG_LINE_RESET_INPLACE (R300_GA_LINE_STIPPLE_CONFIG_LINE_RESET_MASK << R300_GA_LINE_STIPPLE_CONFIG_LINE_RESET_SHIFT)

/* line_stipple_value: rw32, reset unknown; AMD Radeon R3xx 3D Register
 * Reference, revision 1.0, p. 21 */
#define R300_GA_LINE_STIPPLE_VALUE_OFFSET            0x4260u /* established */
#define R300_GA_LINE_STIPPLE_VALUE_STIPPLE_VALUE_SHIFT 0 /* established */
#define R300_GA_LINE_STIPPLE_VALUE_STIPPLE_VALUE_MASK 0xffffffffu
#define R300_GA_LINE_STIPPLE_VALUE_STIPPLE_VALUE_INPLACE (R300_GA_LINE_STIPPLE_VALUE_STIPPLE_VALUE_MASK << R300_GA_LINE_STIPPLE_VALUE_STIPPLE_VALUE_SHIFT)

/* line_s0: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 21 */
#define R300_GA_LINE_S0_OFFSET                       0x4264u /* established */
#define R300_GA_LINE_S0_S0_SHIFT                     0 /* established */
#define R300_GA_LINE_S0_S0_MASK                      0xffffffffu
#define R300_GA_LINE_S0_S0_INPLACE (R300_GA_LINE_S0_S0_MASK << R300_GA_LINE_S0_S0_SHIFT)

/* line_s1: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 21 */
#define R300_GA_LINE_S1_OFFSET                       0x4268u /* established */
#define R300_GA_LINE_S1_S1_SHIFT                     0 /* established */
#define R300_GA_LINE_S1_S1_MASK                      0xffffffffu
#define R300_GA_LINE_S1_S1_INPLACE (R300_GA_LINE_S1_S1_MASK << R300_GA_LINE_S1_S1_SHIFT)

/* enhance: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 20 */
#define R300_GA_ENHANCE_OFFSET                       0x4274u /* established */
#define R300_GA_ENHANCE_FASTSYNC_CNTL_SHIFT          1 /* established */
#define R300_GA_ENHANCE_FASTSYNC_CNTL_MASK           0x1u
#define R300_GA_ENHANCE_FASTSYNC_CNTL_INPLACE (R300_GA_ENHANCE_FASTSYNC_CNTL_MASK << R300_GA_ENHANCE_FASTSYNC_CNTL_SHIFT)
#define R300_GA_ENHANCE_DEADLOCK_CNTL_SHIFT          0 /* established */
#define R300_GA_ENHANCE_DEADLOCK_CNTL_MASK           0x1u
#define R300_GA_ENHANCE_DEADLOCK_CNTL_INPLACE (R300_GA_ENHANCE_DEADLOCK_CNTL_MASK << R300_GA_ENHANCE_DEADLOCK_CNTL_SHIFT)

/* color_control: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 19 */
#define R300_GA_COLOR_CONTROL_OFFSET                 0x4278u /* established */
#define R300_GA_COLOR_CONTROL_PROVOKING_VERTEX_SHIFT 16 /* established */
#define R300_GA_COLOR_CONTROL_PROVOKING_VERTEX_MASK  0x3u
#define R300_GA_COLOR_CONTROL_PROVOKING_VERTEX_INPLACE (R300_GA_COLOR_CONTROL_PROVOKING_VERTEX_MASK << R300_GA_COLOR_CONTROL_PROVOKING_VERTEX_SHIFT)
#define R300_GA_COLOR_CONTROL_ALPHA3_SHADING_SHIFT   14 /* established */
#define R300_GA_COLOR_CONTROL_ALPHA3_SHADING_MASK    0x3u
#define R300_GA_COLOR_CONTROL_ALPHA3_SHADING_INPLACE (R300_GA_COLOR_CONTROL_ALPHA3_SHADING_MASK << R300_GA_COLOR_CONTROL_ALPHA3_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_RGB3_SHADING_SHIFT     12 /* established */
#define R300_GA_COLOR_CONTROL_RGB3_SHADING_MASK      0x3u
#define R300_GA_COLOR_CONTROL_RGB3_SHADING_INPLACE (R300_GA_COLOR_CONTROL_RGB3_SHADING_MASK << R300_GA_COLOR_CONTROL_RGB3_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_ALPHA2_SHADING_SHIFT   10 /* established */
#define R300_GA_COLOR_CONTROL_ALPHA2_SHADING_MASK    0x3u
#define R300_GA_COLOR_CONTROL_ALPHA2_SHADING_INPLACE (R300_GA_COLOR_CONTROL_ALPHA2_SHADING_MASK << R300_GA_COLOR_CONTROL_ALPHA2_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_RGB2_SHADING_SHIFT     8 /* established */
#define R300_GA_COLOR_CONTROL_RGB2_SHADING_MASK      0x3u
#define R300_GA_COLOR_CONTROL_RGB2_SHADING_INPLACE (R300_GA_COLOR_CONTROL_RGB2_SHADING_MASK << R300_GA_COLOR_CONTROL_RGB2_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_ALPHA1_SHADING_SHIFT   6 /* established */
#define R300_GA_COLOR_CONTROL_ALPHA1_SHADING_MASK    0x3u
#define R300_GA_COLOR_CONTROL_ALPHA1_SHADING_INPLACE (R300_GA_COLOR_CONTROL_ALPHA1_SHADING_MASK << R300_GA_COLOR_CONTROL_ALPHA1_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_RGB1_SHADING_SHIFT     4 /* established */
#define R300_GA_COLOR_CONTROL_RGB1_SHADING_MASK      0x3u
#define R300_GA_COLOR_CONTROL_RGB1_SHADING_INPLACE (R300_GA_COLOR_CONTROL_RGB1_SHADING_MASK << R300_GA_COLOR_CONTROL_RGB1_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_ALPHA0_SHADING_SHIFT   2 /* established */
#define R300_GA_COLOR_CONTROL_ALPHA0_SHADING_MASK    0x3u
#define R300_GA_COLOR_CONTROL_ALPHA0_SHADING_INPLACE (R300_GA_COLOR_CONTROL_ALPHA0_SHADING_MASK << R300_GA_COLOR_CONTROL_ALPHA0_SHADING_SHIFT)
#define R300_GA_COLOR_CONTROL_RGB0_SHADING_SHIFT     0 /* established */
#define R300_GA_COLOR_CONTROL_RGB0_SHADING_MASK      0x3u
#define R300_GA_COLOR_CONTROL_RGB0_SHADING_INPLACE (R300_GA_COLOR_CONTROL_RGB0_SHADING_MASK << R300_GA_COLOR_CONTROL_RGB0_SHADING_SHIFT)

/* solid_rg: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 24 */
#define R300_GA_SOLID_RG_OFFSET                      0x427cu /* established */
#define R300_GA_SOLID_RG_COLOR_RED_SHIFT             16 /* established */
#define R300_GA_SOLID_RG_COLOR_RED_MASK              0xffffu
#define R300_GA_SOLID_RG_COLOR_RED_INPLACE (R300_GA_SOLID_RG_COLOR_RED_MASK << R300_GA_SOLID_RG_COLOR_RED_SHIFT)
#define R300_GA_SOLID_RG_COLOR_GREEN_SHIFT           0 /* established */
#define R300_GA_SOLID_RG_COLOR_GREEN_MASK            0xffffu
#define R300_GA_SOLID_RG_COLOR_GREEN_INPLACE (R300_GA_SOLID_RG_COLOR_GREEN_MASK << R300_GA_SOLID_RG_COLOR_GREEN_SHIFT)

/* solid_ba: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 24 */
#define R300_GA_SOLID_BA_OFFSET                      0x4280u /* established */
#define R300_GA_SOLID_BA_COLOR_BLUE_SHIFT            16 /* established */
#define R300_GA_SOLID_BA_COLOR_BLUE_MASK             0xffffu
#define R300_GA_SOLID_BA_COLOR_BLUE_INPLACE (R300_GA_SOLID_BA_COLOR_BLUE_MASK << R300_GA_SOLID_BA_COLOR_BLUE_SHIFT)
#define R300_GA_SOLID_BA_COLOR_ALPHA_SHIFT           0 /* established */
#define R300_GA_SOLID_BA_COLOR_ALPHA_MASK            0xffffu
#define R300_GA_SOLID_BA_COLOR_ALPHA_INPLACE (R300_GA_SOLID_BA_COLOR_ALPHA_MASK << R300_GA_SOLID_BA_COLOR_ALPHA_SHIFT)

/* poly_mode: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 23 */
#define R300_GA_POLY_MODE_OFFSET                     0x4288u /* established */
#define R300_GA_POLY_MODE_BACK_PTYPE_SHIFT           7 /* established */
#define R300_GA_POLY_MODE_BACK_PTYPE_MASK            0x7u
#define R300_GA_POLY_MODE_BACK_PTYPE_INPLACE (R300_GA_POLY_MODE_BACK_PTYPE_MASK << R300_GA_POLY_MODE_BACK_PTYPE_SHIFT)
#define R300_GA_POLY_MODE_FRONT_PTYPE_SHIFT          4 /* established */
#define R300_GA_POLY_MODE_FRONT_PTYPE_MASK           0x7u
#define R300_GA_POLY_MODE_FRONT_PTYPE_INPLACE (R300_GA_POLY_MODE_FRONT_PTYPE_MASK << R300_GA_POLY_MODE_FRONT_PTYPE_SHIFT)
#define R300_GA_POLY_MODE_POLY_MODE_SHIFT            0 /* established */
#define R300_GA_POLY_MODE_POLY_MODE_MASK             0x3u
#define R300_GA_POLY_MODE_POLY_MODE_INPLACE (R300_GA_POLY_MODE_POLY_MODE_MASK << R300_GA_POLY_MODE_POLY_MODE_SHIFT)

/* round_mode: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 23 */
#define R300_GA_ROUND_MODE_OFFSET                    0x428cu /* established */
#define R300_GA_ROUND_MODE_ALPHA_CLAMP_SHIFT         5 /* established */
#define R300_GA_ROUND_MODE_ALPHA_CLAMP_MASK          0x1u
#define R300_GA_ROUND_MODE_ALPHA_CLAMP_INPLACE (R300_GA_ROUND_MODE_ALPHA_CLAMP_MASK << R300_GA_ROUND_MODE_ALPHA_CLAMP_SHIFT)
#define R300_GA_ROUND_MODE_RGB_CLAMP_SHIFT           4 /* established */
#define R300_GA_ROUND_MODE_RGB_CLAMP_MASK            0x1u
#define R300_GA_ROUND_MODE_RGB_CLAMP_INPLACE (R300_GA_ROUND_MODE_RGB_CLAMP_MASK << R300_GA_ROUND_MODE_RGB_CLAMP_SHIFT)
#define R300_GA_ROUND_MODE_COLOR_ROUND_SHIFT         2 /* established */
#define R300_GA_ROUND_MODE_COLOR_ROUND_MASK          0x3u
#define R300_GA_ROUND_MODE_COLOR_ROUND_INPLACE (R300_GA_ROUND_MODE_COLOR_ROUND_MASK << R300_GA_ROUND_MODE_COLOR_ROUND_SHIFT)
#define R300_GA_ROUND_MODE_GEOMETRY_ROUND_SHIFT      0 /* established */
#define R300_GA_ROUND_MODE_GEOMETRY_ROUND_MASK       0x3u
#define R300_GA_ROUND_MODE_GEOMETRY_ROUND_INPLACE (R300_GA_ROUND_MODE_GEOMETRY_ROUND_MASK << R300_GA_ROUND_MODE_GEOMETRY_ROUND_SHIFT)

/* offset: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference, revision
 * 1.0, p. 22 */
#define R300_GA_OFFSET_OFFSET                        0x4290u /* established */
#define R300_GA_OFFSET_Y_OFFSET_SHIFT                16 /* established */
#define R300_GA_OFFSET_Y_OFFSET_MASK                 0xffffu
#define R300_GA_OFFSET_Y_OFFSET_INPLACE (R300_GA_OFFSET_Y_OFFSET_MASK << R300_GA_OFFSET_Y_OFFSET_SHIFT)
#define R300_GA_OFFSET_X_OFFSET_SHIFT                0 /* established */
#define R300_GA_OFFSET_X_OFFSET_MASK                 0xffffu
#define R300_GA_OFFSET_X_OFFSET_INPLACE (R300_GA_OFFSET_X_OFFSET_MASK << R300_GA_OFFSET_X_OFFSET_SHIFT)

/* fog_scale: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 20 */
#define R300_GA_FOG_SCALE_OFFSET                     0x4294u /* established */
#define R300_GA_FOG_SCALE_VALUE_SHIFT                0 /* established */
#define R300_GA_FOG_SCALE_VALUE_MASK                 0xffffffffu
#define R300_GA_FOG_SCALE_VALUE_INPLACE (R300_GA_FOG_SCALE_VALUE_MASK << R300_GA_FOG_SCALE_VALUE_SHIFT)

/* fog_offset: rw32, reset unknown; AMD Radeon R3xx 3D Register Reference,
 * revision 1.0, p. 20 */
#define R300_GA_FOG_OFFSET_OFFSET                    0x4298u /* established */
#define R300_GA_FOG_OFFSET_VALUE_SHIFT               0 /* established */
#define R300_GA_FOG_OFFSET_VALUE_MASK                0xffffffffu
#define R300_GA_FOG_OFFSET_VALUE_INPLACE (R300_GA_FOG_OFFSET_VALUE_MASK << R300_GA_FOG_OFFSET_VALUE_SHIFT)

#endif /* R300_GA_GEN_H */
