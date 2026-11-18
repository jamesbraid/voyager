// generated from devices/crtc/registers.toml by defs-gen - do not edit, change the source
// SPDX-License-Identifier: BSD-3-Clause
// defs-gen 2
// input sha256 8de5d72a19c60f074396ab93989685d8a6b14d2556e8c6fa2415d67524c77b30
// second CRTC, cursor, palette and DAC registers of the R3xx-class FireGL boards
#![allow(dead_code)]

/// (inferred)
pub mod palette_index {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0xb0;
}
/// (inferred)
pub mod palette_data {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0xb4;
}
/// (inferred)
pub mod crtc_vline_crnt_vline {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x210;
}
/// (inferred)
pub mod crtc_crnt_frame {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x214;
}
/// (inferred)
pub mod crtc_gui_trig_vline {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x218;
}
/// (inferred)
pub mod crtc_offset_right {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x220;
}
/// (inferred)
pub mod crtc_offset {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x224;
}
/// (inferred)
pub mod crtc_pitch {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x22c;
}
/// (inferred)
pub mod cur_offset {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x260;
}
/// (inferred)
pub mod cur_horz_vert_posn {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x264;
}
/// (inferred)
pub mod cur_horz_vert_off {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x268;
}
/// (inferred)
pub mod cur_clr0 {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x26c;
}
/// (inferred)
pub mod cur_clr1 {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x270;
}
/// (inferred)
pub mod fp_gen_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x284;
}
/// (inferred)
pub mod fp_horz_stretch {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x28c;
}
/// (inferred)
pub mod fp_vert_stretch {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x290;
}
/// (inferred)
pub mod fp_h_sync_strt_wid {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x2c4;
}
/// (inferred)
pub mod fp_v_sync_strt_wid {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x2c8;
}
/// (inferred)
pub mod crtc2_h_total_disp {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x300;
}
/// (inferred)
pub mod crtc2_h_sync_strt_wid {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x304;
}
/// (inferred)
pub mod crtc2_v_total_disp {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x308;
}
/// (inferred)
pub mod crtc2_v_sync_strt_wid {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x30c;
}
/// (inferred)
pub mod crtc2_vline_crnt_vline {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x310;
}
/// (inferred)
pub mod crtc2_crnt_frame {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x314;
}
/// (inferred)
pub mod crtc2_gui_trig_vline {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x318;
}
/// (inferred)
pub mod crtc2_offset {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x324;
}
/// (inferred)
pub mod crtc2_offset_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x328;
}
/// (inferred)
pub mod crtc2_pitch {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x32c;
}
/// (inferred)
pub mod cur2_offset {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x360;
}
/// (inferred)
pub mod cur2_horz_vert_posn {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x364;
}
/// (inferred)
pub mod cur2_horz_vert_off {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x368;
}
/// (inferred)
pub mod cur2_clr0 {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x36c;
}
/// (inferred)
pub mod cur2_clr1 {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x370;
}
/// (inferred)
pub mod crtc2_status {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x3fc;
}
/// (inferred)
pub mod disp_misc_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0xd00;
}
/// (inferred)
pub mod dac_macro_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0xd04;
}
/// (inferred)
pub mod disp_pwr_man {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0xd08;
}
/// (inferred)
pub mod disp_output_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0xd64;
}
