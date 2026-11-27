/* generated from devices/crtc/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 8de5d72a19c60f074396ab93989685d8a6b14d2556e8c6fa2415d67524c77b30 */
/* second CRTC, cursor, palette and DAC registers of the R3xx-class FireGL
 * boards */
/* Names are R300_CRTC_*; name source: public (Linux
 * drivers/gpu/drm/radeon/radeon_reg.h). */
#ifndef HW_SGI_GPU_R300_CRTC_REGS_H
#define HW_SGI_GPU_R300_CRTC_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_CRTC_PALETTE_INDEX, 0xb0) /* inferred */

REG32(R300_CRTC_PALETTE_DATA, 0xb4) /* inferred */

REG32(R300_CRTC_CRTC_VLINE_CRNT_VLINE, 0x210) /* inferred */

REG32(R300_CRTC_CRTC_CRNT_FRAME, 0x214) /* inferred */

REG32(R300_CRTC_CRTC_GUI_TRIG_VLINE, 0x218) /* inferred */

REG32(R300_CRTC_CRTC_OFFSET_RIGHT, 0x220) /* inferred */

REG32(R300_CRTC_CRTC_OFFSET, 0x224) /* inferred */

REG32(R300_CRTC_CRTC_PITCH, 0x22c) /* inferred */

REG32(R300_CRTC_CUR_OFFSET, 0x260) /* inferred */

REG32(R300_CRTC_CUR_HORZ_VERT_POSN, 0x264) /* inferred */

REG32(R300_CRTC_CUR_HORZ_VERT_OFF, 0x268) /* inferred */

REG32(R300_CRTC_CUR_CLR0, 0x26c) /* inferred */

REG32(R300_CRTC_CUR_CLR1, 0x270) /* inferred */

REG32(R300_CRTC_FP_GEN_CNTL, 0x284) /* inferred */

REG32(R300_CRTC_FP_HORZ_STRETCH, 0x28c) /* inferred */

REG32(R300_CRTC_FP_VERT_STRETCH, 0x290) /* inferred */

REG32(R300_CRTC_FP_H_SYNC_STRT_WID, 0x2c4) /* inferred */

REG32(R300_CRTC_FP_V_SYNC_STRT_WID, 0x2c8) /* inferred */

REG32(R300_CRTC_CRTC2_H_TOTAL_DISP, 0x300) /* inferred */

REG32(R300_CRTC_CRTC2_H_SYNC_STRT_WID, 0x304) /* inferred */

REG32(R300_CRTC_CRTC2_V_TOTAL_DISP, 0x308) /* inferred */

REG32(R300_CRTC_CRTC2_V_SYNC_STRT_WID, 0x30c) /* inferred */

REG32(R300_CRTC_CRTC2_VLINE_CRNT_VLINE, 0x310) /* inferred */

REG32(R300_CRTC_CRTC2_CRNT_FRAME, 0x314) /* inferred */

REG32(R300_CRTC_CRTC2_GUI_TRIG_VLINE, 0x318) /* inferred */

REG32(R300_CRTC_CRTC2_OFFSET, 0x324) /* inferred */

REG32(R300_CRTC_CRTC2_OFFSET_CNTL, 0x328) /* inferred */

REG32(R300_CRTC_CRTC2_PITCH, 0x32c) /* inferred */

REG32(R300_CRTC_CUR2_OFFSET, 0x360) /* inferred */

REG32(R300_CRTC_CUR2_HORZ_VERT_POSN, 0x364) /* inferred */

REG32(R300_CRTC_CUR2_HORZ_VERT_OFF, 0x368) /* inferred */

REG32(R300_CRTC_CUR2_CLR0, 0x36c) /* inferred */

REG32(R300_CRTC_CUR2_CLR1, 0x370) /* inferred */

REG32(R300_CRTC_CRTC2_STATUS, 0x3fc) /* inferred */

REG32(R300_CRTC_DISP_MISC_CNTL, 0xd00) /* inferred */

REG32(R300_CRTC_DAC_MACRO_CNTL, 0xd04) /* inferred */

REG32(R300_CRTC_DISP_PWR_MAN, 0xd08) /* inferred */

REG32(R300_CRTC_DISP_OUTPUT_CNTL, 0xd64) /* inferred */

#endif /* HW_SGI_GPU_R300_CRTC_REGS_H */
