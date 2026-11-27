/* generated from devices/crtc/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 8de5d72a19c60f074396ab93989685d8a6b14d2556e8c6fa2415d67524c77b30 */
/* second CRTC, cursor, palette and DAC registers of the R3xx-class FireGL
 * boards */
#ifndef R300_CRTC_GEN_H
#define R300_CRTC_GEN_H

#include <stdint.h>


/* palette_index: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_PALETTE_INDEX */
#define R300_CRTC_PALETTE_INDEX_OFFSET               0xb0u /* inferred */

/* palette_data: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_PALETTE_DATA */
#define R300_CRTC_PALETTE_DATA_OFFSET                0xb4u /* inferred */

/* crtc_vline_crnt_vline: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_VLINE_CRNT_VLINE */
#define R300_CRTC_CRTC_VLINE_CRNT_VLINE_OFFSET       0x210u /* inferred */

/* crtc_crnt_frame: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_CRNT_FRAME */
#define R300_CRTC_CRTC_CRNT_FRAME_OFFSET             0x214u /* inferred */

/* crtc_gui_trig_vline: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_GUI_TRIG_VLINE */
#define R300_CRTC_CRTC_GUI_TRIG_VLINE_OFFSET         0x218u /* inferred */

/* crtc_offset_right: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_OFFSET_RIGHT */
#define R300_CRTC_CRTC_OFFSET_RIGHT_OFFSET           0x220u /* inferred */

/* crtc_offset: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CRTC_OFFSET */
#define R300_CRTC_CRTC_OFFSET_OFFSET                 0x224u /* inferred */

/* crtc_pitch: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CRTC_PITCH */
#define R300_CRTC_CRTC_PITCH_OFFSET                  0x22cu /* inferred */

/* cur_offset: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CUR_OFFSET */
#define R300_CRTC_CUR_OFFSET_OFFSET                  0x260u /* inferred */

/* cur_horz_vert_posn: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_HORZ_VERT_POSN */
#define R300_CRTC_CUR_HORZ_VERT_POSN_OFFSET          0x264u /* inferred */

/* cur_horz_vert_off: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_HORZ_VERT_OFF */
#define R300_CRTC_CUR_HORZ_VERT_OFF_OFFSET           0x268u /* inferred */

/* cur_clr0: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CUR_CLR0 */
#define R300_CRTC_CUR_CLR0_OFFSET                    0x26cu /* inferred */

/* cur_clr1: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CUR_CLR1 */
#define R300_CRTC_CUR_CLR1_OFFSET                    0x270u /* inferred */

/* fp_gen_cntl: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_FP_GEN_CNTL */
#define R300_CRTC_FP_GEN_CNTL_OFFSET                 0x284u /* inferred */

/* fp_horz_stretch: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_HORZ_STRETCH */
#define R300_CRTC_FP_HORZ_STRETCH_OFFSET             0x28cu /* inferred */

/* fp_vert_stretch: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_VERT_STRETCH */
#define R300_CRTC_FP_VERT_STRETCH_OFFSET             0x290u /* inferred */

/* fp_h_sync_strt_wid: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_H_SYNC_STRT_WID */
#define R300_CRTC_FP_H_SYNC_STRT_WID_OFFSET          0x2c4u /* inferred */

/* fp_v_sync_strt_wid: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_V_SYNC_STRT_WID */
#define R300_CRTC_FP_V_SYNC_STRT_WID_OFFSET          0x2c8u /* inferred */

/* crtc2_h_total_disp: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_H_TOTAL_DISP */
#define R300_CRTC_CRTC2_H_TOTAL_DISP_OFFSET          0x300u /* inferred */

/* crtc2_h_sync_strt_wid: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_H_SYNC_STRT_WID */
#define R300_CRTC_CRTC2_H_SYNC_STRT_WID_OFFSET       0x304u /* inferred */

/* crtc2_v_total_disp: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_V_TOTAL_DISP */
#define R300_CRTC_CRTC2_V_TOTAL_DISP_OFFSET          0x308u /* inferred */

/* crtc2_v_sync_strt_wid: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_V_SYNC_STRT_WID */
#define R300_CRTC_CRTC2_V_SYNC_STRT_WID_OFFSET       0x30cu /* inferred */

/* crtc2_vline_crnt_vline: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_VLINE_CRNT_VLINE */
#define R300_CRTC_CRTC2_VLINE_CRNT_VLINE_OFFSET      0x310u /* inferred */

/* crtc2_crnt_frame: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_CRNT_FRAME */
#define R300_CRTC_CRTC2_CRNT_FRAME_OFFSET            0x314u /* inferred */

/* crtc2_gui_trig_vline: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_GUI_TRIG_VLINE */
#define R300_CRTC_CRTC2_GUI_TRIG_VLINE_OFFSET        0x318u /* inferred */

/* crtc2_offset: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CRTC2_OFFSET */
#define R300_CRTC_CRTC2_OFFSET_OFFSET                0x324u /* inferred */

/* crtc2_offset_cntl: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_OFFSET_CNTL */
#define R300_CRTC_CRTC2_OFFSET_CNTL_OFFSET           0x328u /* inferred */

/* crtc2_pitch: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CRTC2_PITCH */
#define R300_CRTC_CRTC2_PITCH_OFFSET                 0x32cu /* inferred */

/* cur2_offset: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CUR2_OFFSET */
#define R300_CRTC_CUR2_OFFSET_OFFSET                 0x360u /* inferred */

/* cur2_horz_vert_posn: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_HORZ_VERT_POSN */
#define R300_CRTC_CUR2_HORZ_VERT_POSN_OFFSET         0x364u /* inferred */

/* cur2_horz_vert_off: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_HORZ_VERT_OFF */
#define R300_CRTC_CUR2_HORZ_VERT_OFF_OFFSET          0x368u /* inferred */

/* cur2_clr0: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CUR2_CLR0 */
#define R300_CRTC_CUR2_CLR0_OFFSET                   0x36cu /* inferred */

/* cur2_clr1: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CUR2_CLR1 */
#define R300_CRTC_CUR2_CLR1_OFFSET                   0x370u /* inferred */

/* crtc2_status: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_CRTC2_STATUS */
#define R300_CRTC_CRTC2_STATUS_OFFSET                0x3fcu /* inferred */

/* disp_misc_cntl: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DISP_MISC_CNTL */
#define R300_CRTC_DISP_MISC_CNTL_OFFSET              0xd00u /* inferred */

/* dac_macro_cntl: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DAC_MACRO_CNTL */
#define R300_CRTC_DAC_MACRO_CNTL_OFFSET              0xd04u /* inferred */

/* disp_pwr_man: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h,
 * RADEON_DISP_PWR_MAN */
#define R300_CRTC_DISP_PWR_MAN_OFFSET                0xd08u /* inferred */

/* disp_output_cntl: rw32, reset unknown; Linux
 * drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DISP_OUTPUT_CNTL */
#define R300_CRTC_DISP_OUTPUT_CNTL_OFFSET            0xd64u /* inferred */

#endif /* R300_CRTC_GEN_H */
