<!-- generated from devices/crtc/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 8de5d72a19c60f074396ab93989685d8a6b14d2556e8c6fa2415d67524c77b30 -->

# second CRTC, cursor, palette and DAC registers of the R3xx-class FireGL boards

Registers of the second display head and its cursor, the palette port, DAC and panel-link registers beyond those the display unit holds. Names and offsets come from the public Linux radeon header, so the grade is inferred; bit layouts are not carried. Whether IRIX programs each one is read in the display notes where it does.

Unit `crtc`, macro prefix `R300_CRTC`.
Default source: Linux drivers/gpu/drm/radeon/radeon_reg.h.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `palette_index` | 0xb0 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_PALETTE_INDEX |
| `palette_data` | 0xb4 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_PALETTE_DATA |
| `crtc_vline_crnt_vline` | 0x210 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_VLINE_CRNT_VLINE |
| `crtc_crnt_frame` | 0x214 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_CRNT_FRAME |
| `crtc_gui_trig_vline` | 0x218 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_GUI_TRIG_VLINE |
| `crtc_offset_right` | 0x220 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_OFFSET_RIGHT |
| `crtc_offset` | 0x224 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_OFFSET |
| `crtc_pitch` | 0x22c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC_PITCH |
| `cur_offset` | 0x260 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_OFFSET |
| `cur_horz_vert_posn` | 0x264 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_HORZ_VERT_POSN |
| `cur_horz_vert_off` | 0x268 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_HORZ_VERT_OFF |
| `cur_clr0` | 0x26c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_CLR0 |
| `cur_clr1` | 0x270 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR_CLR1 |
| `fp_gen_cntl` | 0x284 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_GEN_CNTL |
| `fp_horz_stretch` | 0x28c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_HORZ_STRETCH |
| `fp_vert_stretch` | 0x290 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_VERT_STRETCH |
| `fp_h_sync_strt_wid` | 0x2c4 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_H_SYNC_STRT_WID |
| `fp_v_sync_strt_wid` | 0x2c8 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_FP_V_SYNC_STRT_WID |
| `crtc2_h_total_disp` | 0x300 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_H_TOTAL_DISP |
| `crtc2_h_sync_strt_wid` | 0x304 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_H_SYNC_STRT_WID |
| `crtc2_v_total_disp` | 0x308 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_V_TOTAL_DISP |
| `crtc2_v_sync_strt_wid` | 0x30c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_V_SYNC_STRT_WID |
| `crtc2_vline_crnt_vline` | 0x310 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_VLINE_CRNT_VLINE |
| `crtc2_crnt_frame` | 0x314 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_CRNT_FRAME |
| `crtc2_gui_trig_vline` | 0x318 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_GUI_TRIG_VLINE |
| `crtc2_offset` | 0x324 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_OFFSET |
| `crtc2_offset_cntl` | 0x328 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_OFFSET_CNTL |
| `crtc2_pitch` | 0x32c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_PITCH |
| `cur2_offset` | 0x360 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_OFFSET |
| `cur2_horz_vert_posn` | 0x364 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_HORZ_VERT_POSN |
| `cur2_horz_vert_off` | 0x368 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_HORZ_VERT_OFF |
| `cur2_clr0` | 0x36c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_CLR0 |
| `cur2_clr1` | 0x370 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CUR2_CLR1 |
| `crtc2_status` | 0x3fc | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_CRTC2_STATUS |
| `disp_misc_cntl` | 0xd00 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DISP_MISC_CNTL |
| `dac_macro_cntl` | 0xd04 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DAC_MACRO_CNTL |
| `disp_pwr_man` | 0xd08 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DISP_PWR_MAN |
| `disp_output_cntl` | 0xd64 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_DISP_OUTPUT_CNTL |

### Register `palette_index`

### Register `palette_data`

### Register `crtc_vline_crnt_vline`

### Register `crtc_crnt_frame`

### Register `crtc_gui_trig_vline`

### Register `crtc_offset_right`

### Register `crtc_offset`

### Register `crtc_pitch`

### Register `cur_offset`

### Register `cur_horz_vert_posn`

### Register `cur_horz_vert_off`

### Register `cur_clr0`

### Register `cur_clr1`

### Register `fp_gen_cntl`

### Register `fp_horz_stretch`

### Register `fp_vert_stretch`

### Register `fp_h_sync_strt_wid`

### Register `fp_v_sync_strt_wid`

### Register `crtc2_h_total_disp`

### Register `crtc2_h_sync_strt_wid`

### Register `crtc2_v_total_disp`

### Register `crtc2_v_sync_strt_wid`

### Register `crtc2_vline_crnt_vline`

### Register `crtc2_crnt_frame`

### Register `crtc2_gui_trig_vline`

### Register `crtc2_offset`

### Register `crtc2_offset_cntl`

### Register `crtc2_pitch`

### Register `cur2_offset`

### Register `cur2_horz_vert_posn`

### Register `cur2_horz_vert_off`

### Register `cur2_clr0`

### Register `cur2_clr1`

### Register `crtc2_status`

### Register `disp_misc_cntl`

### Register `dac_macro_cntl`

### Register `disp_pwr_man`

### Register `disp_output_cntl`
