# display, interrupt and engine registers of the R3xx-class FireGL boards (publish-safe decode header)

<!-- generated from defs/display.toml by defs-gen - do not edit, change the source -->

Display, interrupt and engine registers of the R3xx-class FireGL boards.

Unit `display`, macro prefix `VOYAGER`.
Default source: public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `clock_cntl_index` | 0x8 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `clock_cntl_data` | 0xc | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `bios_4_scratch` | 0x20 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `bios_5_scratch` | 0x24 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `bios_6_scratch` | 0x28 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `bios_7_scratch` | 0x2c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gen_int_cntl` | 0x40 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gen_int_status` | 0x44 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_gen_cntl` | 0x50 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_ext_cntl` | 0x54 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dac_cntl` | 0x58 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_status` | 0x5c | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dac_cntl2` | 0x7c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `config_xstrap` | 0xe4 | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `rbbm_soft_reset` | 0xf0 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `config_memsize` | 0xf8 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `mem_cntl` | 0x140 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `mc_fb_location` | 0x148 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `mc_agp_location` | 0x14c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `mc_status` | 0x150 | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `agp_base` | 0x170 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_0178` | 0x178 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_017c` | 0x17c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gpiopad_mask` | 0x198 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gpiopad_a` | 0x19c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gpiopad_en` | 0x1a0 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gpiopad_y` | 0x1a4 | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_01a8` | 0x1a8 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `mdgpio_a` | 0x1ac | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `mdgpio_en` | 0x1b0 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_h_total_disp` | 0x200 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_h_sync_strt_wid` | 0x204 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_v_total_disp` | 0x208 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_v_sync_strt_wid` | 0x20c | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_offset_cntl` | 0x228 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `display_base_addr` | 0x23c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc_more_cntl` | 0x27c | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dac_ext_cntl` | 0x280 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `fp2_gen_cntl` | 0x288 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_0294` | 0x294 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_02e0` | 0x2e0 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_02e4` | 0x2e4 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_02e8` | 0x2e8 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `crtc2_gen_cntl` | 0x3f8 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `ov0_scale_cntl` | 0x420 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `subpic_cntl` | 0x540 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_rb_base` | 0x700 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_rb_cntl` | 0x704 | rw | 32 |  |  | 0x0 | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_rb_rptr_addr` | 0x70c | rw | 32 |  |  | 0x0 | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_rb_wptr` | 0x714 | rw | 32 |  |  | 0x0 | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_rb_wptr_delay` | 0x718 | rw | 32 |  |  | 0x0 | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_csq_cntl` | 0x740 | rw | 32 |  |  | 0x0 | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `scratch_umsk` | 0x770 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `scratch_addr` | 0x774 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_stat` | 0x7c0 | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_me_cntl` | 0x7d0 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_me_ram_addr` | 0x7d4 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_me_ram_datah` | 0x7dc | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cp_me_ram_datal` | 0x7e0 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `tv_master_cntl` | 0x800 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cap0_trig_cntl` | 0x950 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `cap1_trig_cntl` | 0x9c0 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `surface_cntl` | 0xb00 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `viph_control` | 0xc40 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `disp_merge_cntl` | 0xd60 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `rbbm_status` | 0xe40 | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_0f10` | 0xf10 | r | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dst_offset` | 0x1404 | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dst_pitch` | 0x1408 | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dst_pitch_offset` | 0x142c | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dst_y_x` | 0x1438 | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dp_gui_master_cntl` | 0x146c | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dp_brush_frgd_clr` | 0x147c | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dst_width_height` | 0x1598 | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `scratch_reg5` | 0x15f4 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dp_cntl` | 0x16c0 | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dp_write_mask` | 0x16cc | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `unnamed_1700` | 0x1700 | w | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `dstcache_ctlstat` | 0x1714 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `wait_until` | 0x1720 | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `vap_cntl_status` | 0x2140 | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `rb2d_dstcache_ctlstat` | 0x342c | rw | 32 |  |  | unknown | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `gb_tile_config` | 0x4018 | rw | 32 |  |  | 0x11 | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |
| `ga_soft_reset` | 0x429c | rw | 32 |  |  | unknown | established | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |

### Register `clock_cntl_index`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 9:8 | `pll_div_sel` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7 | `pll_wr_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5:0 | `pll_addr` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `clock_cntl_data`

### Register `bios_4_scratch`

### Register `bios_5_scratch`

### Register `bios_6_scratch`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 13 | `board_probe` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `bios_7_scratch`

### Register `gen_int_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `viddma` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 30 | `guidma` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 29 | `dvi_i2c_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 28 | `hdcp_authorized_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 27 | `geyserville` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 25 | `sw_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 24 | `viph_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 19 | `gui_idle` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 17 | `i2c_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `dma_viph3_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 14 | `dma_viph2_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `dma_viph1_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12 | `dma_viph0_int_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11 | `vsync_diff_over_limit` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10 | `fp2_detect` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `crtc2_vblank` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7 | `snapshot2` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 6 | `crtc2_vsync` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5 | `crtc2_vline` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `fp_detect` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `snapshot` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `crtc_vsync` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `crtc_vline` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `crtc_vblank` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `gen_int_status`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `viddma_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 30 | `guidma_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 29 | `dvi_i2c_int_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 28 | `hdcp_authorized_int_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 27 | `geyserville_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 26 | `sw_int_set` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 25 | `sw_int` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 24 | `viph_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 19 | `gui_idle_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 17 | `i2c_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `dma_viph3_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 14 | `dma_viph2_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `dma_viph1_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12 | `dma_viph0_int` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11 | `vsync_diff_over_limit_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10 | `fp2_detect_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `crtc2_vblank_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 8 | `cap0_int_active` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7 | `snapshot2_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 6 | `crtc2_vsync_stat` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5 | `crtc2_vline_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `fp_detect_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `snapshot_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `crtc_vsync_stat` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `crtc_vline_stat` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `crtc_vblank_stat` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_gen_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 26 | `crtc_disp_req_en_b` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 25 | `crtc_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 24 | `crtc_ext_disp_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 22:20 | `crtc_cur_mode` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 18:17 | `crtc_vstat_mode` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 16 | `crtc_cur_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `crtc_icon_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11:8 | `crtc_pix_width` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `crtc_c_sync_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `crtc_interlace_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `crtc_dbl_scan_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_ext_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 15 | `crtc_crt_on` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `dac_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:24 | `dac_mask_all` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `dac_pdwn` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `dac_vga_adr_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 8 | `dac_8bit_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `dac_cmp_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `dac_blanking` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1:0 | `dac_range_cntl` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_status`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 0 | `crtc_vblank_cur` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `dac_cntl2`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 7 | `dac2_cmp_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5 | `dac2_palette_acc_ctl` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `dac2_dac2_clk_sel` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `dac2_dac_clk_sel` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `config_xstrap`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 27 | `board_strap` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `rbbm_soft_reset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 14 | `soft_reset_idct` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `soft_reset_ga` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12 | `soft_reset_cg` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11 | `soft_reset_disp` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10 | `soft_reset_vip` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `soft_reset_aic` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 8 | `soft_reset_mc` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7 | `soft_reset_hdp` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 6 | `soft_reset_rb` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5 | `soft_reset_e2` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `soft_reset_pp` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `soft_reset_re` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `soft_reset_geometry` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `soft_reset_hi` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `soft_reset_cp` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `config_memsize`

### Register `mem_cntl`

### Register `mc_fb_location`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `mc_fb_top` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15:0 | `mc_fb_start` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `mc_agp_location`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `mc_agp_top` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15:0 | `mc_agp_start` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `mc_status`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 4 | `mc_idle_r300` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `mc_idle` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `agp_base`

### Register `unnamed_0178`

### Register `unnamed_017c`

### Register `gpiopad_mask`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 0 | `pad0` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `gpiopad_a`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 0 | `pad0` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `gpiopad_en`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 0 | `pad0` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `gpiopad_y`

### Register `unnamed_01a8`

### Register `mdgpio_a`

### Register `mdgpio_en`

### Register `crtc_h_total_disp`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 24:16 | `crtc_h_disp` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9:0 | `crtc_h_total` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_h_sync_strt_wid`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23 | `crtc_h_sync_pol` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 21:16 | `crtc_h_sync_wid` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12:3 | `crtc_h_sync_strt_char` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2:0 | `crtc_h_sync_strt_pix` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_v_total_disp`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 26:16 | `crtc_v_disp` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10:0 | `crtc_v_total` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_v_sync_strt_wid`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23 | `crtc_v_sync_pol` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 20:16 | `crtc_v_sync_wid` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10:0 | `crtc_v_sync_strt` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `crtc_offset_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 20 | `stereo_aux` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 17 | `crtc_stereo_offset_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 16 | `crtc_offset_flip_cntl` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `crtc_tile_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `crtc_micro_tile_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `crtc_xy_mode_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `display_base_addr`

### Register `crtc_more_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 5 | `crtc_v_cutoff_active_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `crtc_h_cutoff_active_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `crtc_auto_vert_center_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `crtc_auto_horz_center_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `dac_ext_cntl`

### Register `fp2_gen_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 25 | `fp2_dvo_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `unnamed_0294`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 13:12 | `stereo_sel` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3:0 | `mode_nibble` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `unnamed_02e0`

### Register `unnamed_02e4`

### Register `unnamed_02e8`

### Register `crtc2_gen_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29 | `crtc2_vsync_dis` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 28 | `crtc2_hsync_dis` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 27 | `crtc2_c_sync_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 26 | `crtc2_disp_req_en_b` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 25 | `crtc2_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 23 | `crtc2_display_dis` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 22:20 | `crtc2_cur_mode` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 16 | `crtc2_cur_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `crtc2_icon_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11:8 | `crtc2_pix_width` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7 | `crt2_on` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 6 | `crtc2_vsync_tristate` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5 | `crtc2_hsync_tristate` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `crtc2_sync_tristate` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `crtc2_interlace_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `crtc2_dbl_scan_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `ov0_scale_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `ov0_soft_reset` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 30 | `ov0_overlay_en` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 29 | `ov0_int_emu` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 28 | `ov0_lin_trans_bypass` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 26 | `ov0_bandwidth` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 24 | `ov0_double_buffer_regs` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 22:16 | `ov0_burst_per_plane` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 14 | `ov0_crtc_sel` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12 | `ov0_adaptive_deint` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11:8 | `ov0_surface_format` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7:5 | `ov0_gamma_sel` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 4 | `ov0_signed_uv` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `ov0_vert_pick_nearest` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `ov0_horz_pick_nearest` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `ov0_no_read_behind_scan` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `subpic_cntl`

### Register `cp_rb_base`

### Register `cp_rb_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 27 | `rb_no_update` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 19:18 | `max_fetch` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 17:16 | `buf_swap` | established | none=0, swap_16=1, swap_32=2, swap_half_dword=3 | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13:8 | `rb_blksz` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 5:0 | `rb_bufsz` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `cp_rb_rptr_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 1:0 | `rb_rptr_swap` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `cp_rb_wptr`

### Register `cp_rb_wptr_delay`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 27:0 | `pre_write_timer` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `cp_csq_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:28 | `csq_mode` | established | pridis_inddis=0, pribm_indbm=8 | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15:8 | `csq_cnt_indirect` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 7:0 | `csq_cnt_primary` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `scratch_umsk`

Write-back mask for the scratch registers. The X module writes 0x3f when it starts the command processor.

### Register `scratch_addr`

Host address that the command processor writes scratch register values to, when the mask enables them.

### Register `cp_stat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `cp_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 30 | `cmdstrm_busy` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 29 | `viddma_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 28 | `guidma_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `csq_indirect2_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 14 | `csf_indirect2_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `csi_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12 | `csq_indirect_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11 | `csq_primary_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10 | `csf_indirect_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `csf_primary_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3 | `rciu_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 2 | `rsiu_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1 | `mwu_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `mru_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `cp_me_cntl`

### Register `cp_me_ram_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 7:0 | `ram_addr` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `cp_me_ram_datah`

### Register `cp_me_ram_datal`

### Register `tv_master_cntl`

### Register `cap0_trig_cntl`

### Register `cap1_trig_cntl`

### Register `surface_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 8 | `surf_translation_dis` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `viph_control`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 21 | `viph_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `disp_merge_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:24 | `disp_ov0_alpha_mask` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 23:16 | `disp_grph_alpha_mask` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `disp_lin_trans_bypass` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 8 | `disp_rgb_offset_en` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1:0 | `disp_alpha_mode` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `rbbm_status`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `gui_active` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 27 | `cba2d_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 26 | `ga_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 25 | `tim_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 24 | `pb_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 23 | `tdm_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 22 | `tam_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 21 | `re_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 20 | `geometry_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 19 | `rb3d_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 18 | `rb2d_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 17 | `e2_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 16 | `cp_cmdstrm_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 15 | `eng_ev_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 14 | `cf_pipe_busy` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 13 | `cfrq_in_rtbuf` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 12 | `cprq_in_rtbuf` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11 | `hirq_in_rtbuf` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 10 | `cfrq_on_rbb` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 9 | `cprq_on_rbb` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 8 | `hirq_on_rbb` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 6:0 | `cmdfifo_avail` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `unnamed_0f10`

### Register `dst_offset`

### Register `dst_pitch`

### Register `dst_pitch_offset`

### Register `dst_y_x`

### Register `dp_gui_master_cntl`

### Register `dp_brush_frgd_clr`

### Register `dst_width_height`

### Register `scratch_reg5`

### Register `dp_cntl`

### Register `dp_write_mask`

### Register `unnamed_1700`

### Register `dstcache_ctlstat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 3:2 | `dc_free` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1:0 | `dc_flush` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `wait_until`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 18 | `wait_host_idleclean` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `vap_cntl_status`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:24 | `busy_top` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 11 | `busy_mid` | inferred |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 8 | `pvs_bypass` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1:0 | `vc_swap` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `rb2d_dstcache_ctlstat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `dc_busy` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3:2 | `dc_free` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 1:0 | `dc_flush` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `gb_tile_config`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 5:4 | `tile_size` | established | size_8=0, size_16=1, size_32=2 | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 3:1 | `pipe_count` | established | rv300=0, r300=3, r420=7 | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| 0 | `enable` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

### Register `ga_soft_reset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 15:0 | `soft_reset_count` | established |  | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

## Words

| Word | Width | Grade | Source |
|---|---|---|---|
| `PM4_TYPE0_HDR` | 32 | inferred | public Radeon packet encodings, checked against the packet values the shipped driver writes |
| `PM4_TYPE1_HDR` | 32 | inferred | public Radeon packet encodings (AMD Radeon R5xx Acceleration, revision 1.5, section 6.1) |
| `PM4_TYPE2_HDR` | 32 | inferred | public Radeon packet encodings (AMD Radeon R5xx Acceleration, revision 1.5, section 6.1) |
| `PM4_TYPE3_HDR` | 32 | inferred | public Radeon packet encodings, checked against the packet values the shipped driver writes |

### Word `PM4_TYPE0_HDR`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:30 | `type` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |
| 29:16 | `count` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |
| 15 | `one_reg_wr` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |
| 12:0 | `reg_index` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |

### Word `PM4_TYPE1_HDR`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:30 | `type` | inferred |  | public Radeon packet encodings (AMD Radeon R5xx Acceleration, revision 1.5, section 6.1) |  |
| 21:11 | `second_index` | inferred |  | public Radeon packet encodings (AMD Radeon R5xx Acceleration, revision 1.5, section 6.1) |  |
| 10:0 | `first_index` | inferred |  | public Radeon packet encodings (AMD Radeon R5xx Acceleration, revision 1.5, section 6.1) |  |

### Word `PM4_TYPE2_HDR`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:30 | `type` | inferred |  | public Radeon packet encodings (AMD Radeon R5xx Acceleration, revision 1.5, section 6.1) |  |

### Word `PM4_TYPE3_HDR`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:30 | `type` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |
| 29:16 | `count` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |
| 15:8 | `opcode` | inferred |  | public Radeon packet encodings, checked against the packet values the shipped driver writes |  |

## Constants

| Constant | Value | Grade | Source | Description |
|---|---|---|---|---|
| `PM4_OPCODE_BITBLT_MULTI` | 0x9b | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| `PM4_OPCODE_CP_SET_SCISSORS` | 0x1e | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |
| `PM4_OPCODE_NOP` | 0x10 | inferred | public Linux radeon and Mesa R300 register headers, and the AMD R3xx 3D register guide, checked against the shipped graphics driver |  |

## Test vectors

A vector is a value recorded from a source. An example only shows the layout.

| Target | Value | Kind | Decoded |
|---|---|---|---|
| `rbbm_soft_reset` | 0x79 | vector | soft_reset_cp=1, soft_reset_re=1, soft_reset_pp=1, soft_reset_e2=1, soft_reset_rb=1, soft_reset_geometry=0 |
| `crtc_offset_cntl` | 0x120000 | vector | crtc_tile_en=0, crtc_offset_flip_cntl=0, crtc_stereo_offset_en=1, stereo_aux=1 |
| `unnamed_0294` | 0x3000 | vector | stereo_sel=3, mode_nibble=0 |
| `gb_tile_config` | 0x17 | vector | enable=1, pipe_count=3, tile_size=1 |
| `PM4_TYPE0_HDR` | 0x1057c | vector | type=0, count=1, reg_index=1404 |
| `PM4_TYPE3_HDR` | 0xc0011e00 | vector | type=3, count=1, opcode=30 |
| `PM4_TYPE3_HDR` | 0xc0059b00 | vector | type=3, count=5, opcode=155 |
| `PM4_TYPE3_HDR` | 0xfffd1000 | vector | type=3, count=16381, opcode=16 |
