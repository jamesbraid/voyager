// generated from onyx4-r300 3c632f25fa17 VOYAGER_DECODE.h - do not edit, regenerate in onyx4-r300
//!
//! Display, interrupt and engine registers of the R3xx-class
//! FireGL boards.
//!
//! Grades on each item say what is known about it: `established` is what the
//! shipped driver software does, read in full; `inferred` is a reasoned
//! reading; `unknown` is not derived. None of them is a measurement of the
//! silicon.

#![allow(dead_code)]

/// inferred.
pub const PM4_OPCODE_CP_SET_SCISSORS: u32 = 30;

/// Register-aperture register `clock_cntl_index`: read/write, 32-bit; reset unknown; inferred.
pub const REG_CLOCK_CNTL_INDEX: u32 = 0x0008;
pub const REG_CLOCK_CNTL_INDEX_WIDTH: u32 = 32;
/// Register-aperture register `clock_cntl_data`: read/write, 32-bit; reset unknown; inferred.
pub const REG_CLOCK_CNTL_DATA: u32 = 0x000c;
pub const REG_CLOCK_CNTL_DATA_WIDTH: u32 = 32;
/// Register-aperture register `bios_6_scratch`: read/write, 32-bit; reset unknown; inferred.
pub const REG_BIOS_6_SCRATCH: u32 = 0x0028;
pub const REG_BIOS_6_SCRATCH_WIDTH: u32 = 32;
/// Register-aperture register `gen_int_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_GEN_INT_CNTL: u32 = 0x0040;
pub const REG_GEN_INT_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `gen_int_status`: read/write, 32-bit; reset unknown; inferred.
pub const REG_GEN_INT_STATUS: u32 = 0x0044;
pub const REG_GEN_INT_STATUS_WIDTH: u32 = 32;
/// Register-aperture register `crtc_gen_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_CRTC_GEN_CNTL: u32 = 0x0050;
pub const REG_CRTC_GEN_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `dac_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_DAC_CNTL: u32 = 0x0058;
pub const REG_DAC_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `crtc_status`: read, 32-bit; reset unknown; inferred.
pub const REG_CRTC_STATUS: u32 = 0x005c;
pub const REG_CRTC_STATUS_WIDTH: u32 = 32;
/// Register-aperture register `dac_cntl2`: read/write, 32-bit; reset unknown; inferred.
pub const REG_DAC_CNTL2: u32 = 0x007c;
pub const REG_DAC_CNTL2_WIDTH: u32 = 32;
/// Register-aperture register `config_xstrap`: read, 32-bit; reset unknown; inferred.
pub const REG_CONFIG_XSTRAP: u32 = 0x00e4;
pub const REG_CONFIG_XSTRAP_WIDTH: u32 = 32;
/// Register-aperture register `rbbm_soft_reset`: read/write, 32-bit; reset unknown; inferred.
pub const REG_RBBM_SOFT_RESET: u32 = 0x00f0;
pub const REG_RBBM_SOFT_RESET_WIDTH: u32 = 32;
/// Register-aperture register `mc_status`: read, 32-bit; reset unknown; inferred.
pub const REG_MC_STATUS: u32 = 0x0150;
pub const REG_MC_STATUS_WIDTH: u32 = 32;
/// Register-aperture register `crtc_h_total_disp`: read/write, 32-bit; reset unknown; established.
pub const REG_CRTC_H_TOTAL_DISP: u32 = 0x0200;
pub const REG_CRTC_H_TOTAL_DISP_WIDTH: u32 = 32;
/// Register-aperture register `crtc_h_sync_strt_wid`: read/write, 32-bit; reset unknown; established.
pub const REG_CRTC_H_SYNC_STRT_WID: u32 = 0x0204;
pub const REG_CRTC_H_SYNC_STRT_WID_WIDTH: u32 = 32;
/// Register-aperture register `crtc_v_total_disp`: read/write, 32-bit; reset unknown; established.
pub const REG_CRTC_V_TOTAL_DISP: u32 = 0x0208;
pub const REG_CRTC_V_TOTAL_DISP_WIDTH: u32 = 32;
/// Register-aperture register `crtc_v_sync_strt_wid`: read/write, 32-bit; reset unknown; established.
pub const REG_CRTC_V_SYNC_STRT_WID: u32 = 0x020c;
pub const REG_CRTC_V_SYNC_STRT_WID_WIDTH: u32 = 32;
/// Register-aperture register `crtc_offset_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_CRTC_OFFSET_CNTL: u32 = 0x0228;
pub const REG_CRTC_OFFSET_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `crtc_more_cntl`: read/write, 32-bit; reset unknown; established.
pub const REG_CRTC_MORE_CNTL: u32 = 0x027c;
pub const REG_CRTC_MORE_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `fp2_gen_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_FP2_GEN_CNTL: u32 = 0x0288;
pub const REG_FP2_GEN_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `unnamed_0294`: read/write, 32-bit; reset unknown; inferred.
pub const REG_UNNAMED_0294: u32 = 0x0294;
pub const REG_UNNAMED_0294_WIDTH: u32 = 32;
/// Register-aperture register `crtc2_gen_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_CRTC2_GEN_CNTL: u32 = 0x03f8;
pub const REG_CRTC2_GEN_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `ov0_scale_cntl`: read/write, 32-bit; reset unknown; inferred.
pub const REG_OV0_SCALE_CNTL: u32 = 0x0420;
pub const REG_OV0_SCALE_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `subpic_cntl`: read/write, 32-bit; reset unknown; established.
pub const REG_SUBPIC_CNTL: u32 = 0x0540;
pub const REG_SUBPIC_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `cp_stat`: read, 32-bit; reset unknown; inferred.
pub const REG_CP_STAT: u32 = 0x07c0;
pub const REG_CP_STAT_WIDTH: u32 = 32;
/// Register-aperture register `cap0_trig_cntl`: read/write, 32-bit; reset unknown; established.
pub const REG_CAP0_TRIG_CNTL: u32 = 0x0950;
pub const REG_CAP0_TRIG_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `cap1_trig_cntl`: read/write, 32-bit; reset unknown; established.
pub const REG_CAP1_TRIG_CNTL: u32 = 0x09c0;
pub const REG_CAP1_TRIG_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `viph_control`: read/write, 32-bit; reset unknown; established.
pub const REG_VIPH_CONTROL: u32 = 0x0c40;
pub const REG_VIPH_CONTROL_WIDTH: u32 = 32;
/// Register-aperture register `disp_merge_cntl`: read/write, 32-bit; reset unknown; established.
pub const REG_DISP_MERGE_CNTL: u32 = 0x0d60;
pub const REG_DISP_MERGE_CNTL_WIDTH: u32 = 32;
/// Register-aperture register `rbbm_status`: read, 32-bit; reset unknown; inferred.
pub const REG_RBBM_STATUS: u32 = 0x0e40;
pub const REG_RBBM_STATUS_WIDTH: u32 = 32;
/// Register-aperture register `scratch_reg5`: read/write, 32-bit; reset unknown; inferred.
pub const REG_SCRATCH_REG5: u32 = 0x15f4;
pub const REG_SCRATCH_REG5_WIDTH: u32 = 32;
/// Register-aperture register `dstcache_ctlstat`: read/write, 32-bit; reset unknown; inferred.
pub const REG_DSTCACHE_CTLSTAT: u32 = 0x1714;
pub const REG_DSTCACHE_CTLSTAT_WIDTH: u32 = 32;
/// Register-aperture register `wait_until`: read/write, 32-bit; reset unknown; inferred.
pub const REG_WAIT_UNTIL: u32 = 0x1720;
pub const REG_WAIT_UNTIL_WIDTH: u32 = 32;
/// Register-aperture register `vap_cntl_status`: read/write, 32-bit; reset unknown; inferred.
pub const REG_VAP_CNTL_STATUS: u32 = 0x2140;
pub const REG_VAP_CNTL_STATUS_WIDTH: u32 = 32;
/// Register-aperture register `rb2d_dstcache_ctlstat`: read/write, 32-bit; reset unknown; inferred.
pub const REG_RB2D_DSTCACHE_CTLSTAT: u32 = 0x342c;
pub const REG_RB2D_DSTCACHE_CTLSTAT_WIDTH: u32 = 32;
/// Register-aperture register `gb_tile_config`: read/write, 32-bit; reset unknown; inferred.
pub const REG_GB_TILE_CONFIG: u32 = 0x4018;
pub const REG_GB_TILE_CONFIG_WIDTH: u32 = 32;
/// Register-aperture register `ga_soft_reset`: read/write, 32-bit; reset unknown; inferred.
pub const REG_GA_SOFT_RESET: u32 = 0x429c;
pub const REG_GA_SOFT_RESET_WIDTH: u32 = 32;

/// Values of `pipe_count` in `GbTileConfig` that the header names.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum GbTileConfigPipeCount {
    /// inferred.
    Rv300,
    /// established.
    R300,
    /// inferred.
    R420,
    /// A value the notes do not name.
    Other(u8),
}

impl GbTileConfigPipeCount {
    pub const fn from_bits(v: u32) -> Self {
        match v {
            0x0 => Self::Rv300,
            0x3 => Self::R300,
            0x7 => Self::R420,
            _ => Self::Other(v as u8),
        }
    }

    pub const fn bits(self) -> u32 {
        match self {
            Self::Rv300 => 0x0,
            Self::R300 => 0x3,
            Self::R420 => 0x7,
            Self::Other(v) => v as u32,
        }
    }
}

/// Values of `tile_size` in `GbTileConfig` that the header names.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum GbTileConfigTileSize {
    /// inferred.
    Size8,
    /// established.
    Size16,
    /// inferred.
    Size32,
    /// A value the notes do not name.
    Other(u8),
}

impl GbTileConfigTileSize {
    pub const fn from_bits(v: u32) -> Self {
        match v {
            0x0 => Self::Size8,
            0x1 => Self::Size16,
            0x2 => Self::Size32,
            _ => Self::Other(v as u8),
        }
    }

    pub const fn bits(self) -> u32 {
        match self {
            Self::Size8 => 0x0,
            Self::Size16 => 0x1,
            Self::Size32 => 0x2,
            Self::Other(v) => v as u32,
        }
    }
}

/// The `clock_cntl_index` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ClockCntlIndex(u32);

impl ClockCntlIndex {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 5:0, established.
    pub const fn pll_addr(self) -> u32 {
        self.0 & 0x3f
    }

    /// Bit 7, established.
    pub const fn pll_wr_en(self) -> bool {
        (self.0 >> 7) & 1 != 0
    }

    /// Bits 9:8, inferred.
    pub const fn pll_div_sel(self) -> u32 {
        (self.0 >> 8) & 0x3
    }
}

/// The `bios_6_scratch` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Bios6Scratch(u32);

impl Bios6Scratch {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 13, established.
    pub const fn board_probe(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }
}

/// The `gen_int_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct GenIntCntl(u32);

impl GenIntCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, established.
    pub const fn crtc_vblank(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn crtc_vline(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 2, established.
    pub const fn crtc_vsync(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, inferred.
    pub const fn snapshot(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 4, inferred.
    pub const fn fp_detect(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bit 5, inferred.
    pub const fn crtc2_vline(self) -> bool {
        (self.0 >> 5) & 1 != 0
    }

    /// Bit 6, established.
    pub const fn crtc2_vsync(self) -> bool {
        (self.0 >> 6) & 1 != 0
    }

    /// Bit 7, inferred.
    pub const fn snapshot2(self) -> bool {
        (self.0 >> 7) & 1 != 0
    }

    /// Bit 9, inferred.
    pub const fn crtc2_vblank(self) -> bool {
        (self.0 >> 9) & 1 != 0
    }

    /// Bit 10, inferred.
    pub const fn fp2_detect(self) -> bool {
        (self.0 >> 10) & 1 != 0
    }

    /// Bit 11, inferred.
    pub const fn vsync_diff_over_limit(self) -> bool {
        (self.0 >> 11) & 1 != 0
    }

    /// Bit 12, inferred.
    pub const fn dma_viph0_int_en(self) -> bool {
        (self.0 >> 12) & 1 != 0
    }

    /// Bit 13, inferred.
    pub const fn dma_viph1_int_en(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }

    /// Bit 14, inferred.
    pub const fn dma_viph2_int_en(self) -> bool {
        (self.0 >> 14) & 1 != 0
    }

    /// Bit 15, inferred.
    pub const fn dma_viph3_int_en(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 17, inferred.
    pub const fn i2c_int_en(self) -> bool {
        (self.0 >> 17) & 1 != 0
    }

    /// Bit 19, inferred.
    pub const fn gui_idle(self) -> bool {
        (self.0 >> 19) & 1 != 0
    }

    /// Bit 24, inferred.
    pub const fn viph_int_en(self) -> bool {
        (self.0 >> 24) & 1 != 0
    }

    /// Bit 25, inferred.
    pub const fn sw_int_en(self) -> bool {
        (self.0 >> 25) & 1 != 0
    }

    /// Bit 27, inferred.
    pub const fn geyserville(self) -> bool {
        (self.0 >> 27) & 1 != 0
    }

    /// Bit 28, inferred.
    pub const fn hdcp_authorized_int(self) -> bool {
        (self.0 >> 28) & 1 != 0
    }

    /// Bit 29, inferred.
    pub const fn dvi_i2c_int(self) -> bool {
        (self.0 >> 29) & 1 != 0
    }

    /// Bit 30, inferred.
    pub const fn guidma(self) -> bool {
        (self.0 >> 30) & 1 != 0
    }

    /// Bit 31, inferred.
    pub const fn viddma(self) -> bool {
        (self.0 >> 31) & 1 != 0
    }
}

/// The `gen_int_status` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct GenIntStatus(u32);

impl GenIntStatus {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, established.
    pub const fn crtc_vblank_stat(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn crtc_vline_stat(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 2, established.
    pub const fn crtc_vsync_stat(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, inferred.
    pub const fn snapshot_stat(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 4, inferred.
    pub const fn fp_detect_stat(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bit 5, inferred.
    pub const fn crtc2_vline_stat(self) -> bool {
        (self.0 >> 5) & 1 != 0
    }

    /// Bit 6, established.
    pub const fn crtc2_vsync_stat(self) -> bool {
        (self.0 >> 6) & 1 != 0
    }

    /// Bit 7, inferred.
    pub const fn snapshot2_stat(self) -> bool {
        (self.0 >> 7) & 1 != 0
    }

    /// Bit 8, inferred.
    pub const fn cap0_int_active(self) -> bool {
        (self.0 >> 8) & 1 != 0
    }

    /// Bit 9, inferred.
    pub const fn crtc2_vblank_stat(self) -> bool {
        (self.0 >> 9) & 1 != 0
    }

    /// Bit 10, inferred.
    pub const fn fp2_detect_stat(self) -> bool {
        (self.0 >> 10) & 1 != 0
    }

    /// Bit 11, inferred.
    pub const fn vsync_diff_over_limit_stat(self) -> bool {
        (self.0 >> 11) & 1 != 0
    }

    /// Bit 12, inferred.
    pub const fn dma_viph0_int(self) -> bool {
        (self.0 >> 12) & 1 != 0
    }

    /// Bit 13, inferred.
    pub const fn dma_viph1_int(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }

    /// Bit 14, inferred.
    pub const fn dma_viph2_int(self) -> bool {
        (self.0 >> 14) & 1 != 0
    }

    /// Bit 15, inferred.
    pub const fn dma_viph3_int(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 17, inferred.
    pub const fn i2c_int(self) -> bool {
        (self.0 >> 17) & 1 != 0
    }

    /// Bit 19, inferred.
    pub const fn gui_idle_stat(self) -> bool {
        (self.0 >> 19) & 1 != 0
    }

    /// Bit 24, inferred.
    pub const fn viph_int(self) -> bool {
        (self.0 >> 24) & 1 != 0
    }

    /// Bit 25, inferred.
    pub const fn sw_int(self) -> bool {
        (self.0 >> 25) & 1 != 0
    }

    /// Bit 26, inferred.
    pub const fn sw_int_set(self) -> bool {
        (self.0 >> 26) & 1 != 0
    }

    /// Bit 27, inferred.
    pub const fn geyserville_stat(self) -> bool {
        (self.0 >> 27) & 1 != 0
    }

    /// Bit 28, inferred.
    pub const fn hdcp_authorized_int_stat(self) -> bool {
        (self.0 >> 28) & 1 != 0
    }

    /// Bit 29, inferred.
    pub const fn dvi_i2c_int_stat(self) -> bool {
        (self.0 >> 29) & 1 != 0
    }

    /// Bit 30, inferred.
    pub const fn guidma_stat(self) -> bool {
        (self.0 >> 30) & 1 != 0
    }

    /// Bit 31, inferred.
    pub const fn viddma_stat(self) -> bool {
        (self.0 >> 31) & 1 != 0
    }
}

/// The `crtc_gen_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcGenCntl(u32);

impl CrtcGenCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, inferred.
    pub const fn crtc_dbl_scan_en(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn crtc_interlace_en(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 4, inferred.
    pub const fn crtc_c_sync_en(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bits 11:8, inferred.
    pub const fn crtc_pix_width(self) -> u32 {
        (self.0 >> 8) & 0xf
    }

    /// Bit 15, inferred.
    pub const fn crtc_icon_en(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 16, established.
    pub const fn crtc_cur_en(self) -> bool {
        (self.0 >> 16) & 1 != 0
    }

    /// Bits 18:17, inferred.
    pub const fn crtc_vstat_mode(self) -> u32 {
        (self.0 >> 17) & 0x3
    }

    /// Bits 22:20, inferred.
    pub const fn crtc_cur_mode(self) -> u32 {
        (self.0 >> 20) & 0x7
    }

    /// Bit 24, inferred.
    pub const fn crtc_ext_disp_en(self) -> bool {
        (self.0 >> 24) & 1 != 0
    }

    /// Bit 25, established.
    pub const fn crtc_en(self) -> bool {
        (self.0 >> 25) & 1 != 0
    }

    /// Bit 26, inferred.
    pub const fn crtc_disp_req_en_b(self) -> bool {
        (self.0 >> 26) & 1 != 0
    }
}

/// The `dac_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DacCntl(u32);

impl DacCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 1:0, inferred.
    pub const fn dac_range_cntl(self) -> u32 {
        self.0 & 0x3
    }

    /// Bit 2, inferred.
    pub const fn dac_blanking(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, inferred.
    pub const fn dac_cmp_en(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 8, established.
    pub const fn dac_8bit_en(self) -> bool {
        (self.0 >> 8) & 1 != 0
    }

    /// Bit 13, inferred.
    pub const fn dac_vga_adr_en(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }

    /// Bit 15, inferred.
    pub const fn dac_pdwn(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bits 31:24, inferred.
    pub const fn dac_mask_all(self) -> u32 {
        self.0 >> 24
    }
}

/// The `crtc_status` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcStatus(u32);

impl CrtcStatus {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, established.
    pub const fn crtc_vblank_cur(self) -> bool {
        self.0 & 1 != 0
    }
}

/// The `dac_cntl2` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DacCntl2(u32);

impl DacCntl2 {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, inferred.
    pub const fn dac2_dac_clk_sel(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn dac2_dac2_clk_sel(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 5, established.
    pub const fn dac2_palette_acc_ctl(self) -> bool {
        (self.0 >> 5) & 1 != 0
    }

    /// Bit 7, inferred.
    pub const fn dac2_cmp_en(self) -> bool {
        (self.0 >> 7) & 1 != 0
    }
}

/// The `config_xstrap` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ConfigXstrap(u32);

impl ConfigXstrap {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 27, established.
    pub const fn board_strap(self) -> bool {
        (self.0 >> 27) & 1 != 0
    }
}

/// The `rbbm_soft_reset` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct RbbmSoftReset(u32);

impl RbbmSoftReset {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, established.
    pub const fn soft_reset_cp(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn soft_reset_hi(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 2, inferred.
    pub const fn soft_reset_geometry(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, established.
    pub const fn soft_reset_re(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 4, established.
    pub const fn soft_reset_pp(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bit 5, established.
    pub const fn soft_reset_e2(self) -> bool {
        (self.0 >> 5) & 1 != 0
    }

    /// Bit 6, established.
    pub const fn soft_reset_rb(self) -> bool {
        (self.0 >> 6) & 1 != 0
    }

    /// Bit 7, inferred.
    pub const fn soft_reset_hdp(self) -> bool {
        (self.0 >> 7) & 1 != 0
    }

    /// Bit 8, inferred.
    pub const fn soft_reset_mc(self) -> bool {
        (self.0 >> 8) & 1 != 0
    }

    /// Bit 9, inferred.
    pub const fn soft_reset_aic(self) -> bool {
        (self.0 >> 9) & 1 != 0
    }

    /// Bit 10, inferred.
    pub const fn soft_reset_vip(self) -> bool {
        (self.0 >> 10) & 1 != 0
    }

    /// Bit 11, inferred.
    pub const fn soft_reset_disp(self) -> bool {
        (self.0 >> 11) & 1 != 0
    }

    /// Bit 12, inferred.
    pub const fn soft_reset_cg(self) -> bool {
        (self.0 >> 12) & 1 != 0
    }

    /// Bit 13, inferred.
    pub const fn soft_reset_ga(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }

    /// Bit 14, inferred.
    pub const fn soft_reset_idct(self) -> bool {
        (self.0 >> 14) & 1 != 0
    }
}

/// The `mc_status` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct McStatus(u32);

impl McStatus {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 2, established.
    pub const fn mc_idle(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 4, established.
    pub const fn mc_idle_r300(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }
}

/// The `crtc_h_total_disp` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcHTotalDisp(u32);

impl CrtcHTotalDisp {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 9:0, inferred.
    pub const fn crtc_h_total(self) -> u32 {
        self.0 & 0x3ff
    }

    /// Bits 24:16, inferred.
    pub const fn crtc_h_disp(self) -> u32 {
        (self.0 >> 16) & 0x1ff
    }
}

/// The `crtc_h_sync_strt_wid` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcHSyncStrtWid(u32);

impl CrtcHSyncStrtWid {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 2:0, inferred.
    pub const fn crtc_h_sync_strt_pix(self) -> u32 {
        self.0 & 0x7
    }

    /// Bits 12:3, inferred.
    pub const fn crtc_h_sync_strt_char(self) -> u32 {
        (self.0 >> 3) & 0x3ff
    }

    /// Bits 21:16, inferred.
    pub const fn crtc_h_sync_wid(self) -> u32 {
        (self.0 >> 16) & 0x3f
    }

    /// Bit 23, inferred.
    pub const fn crtc_h_sync_pol(self) -> bool {
        (self.0 >> 23) & 1 != 0
    }
}

/// The `crtc_v_total_disp` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcVTotalDisp(u32);

impl CrtcVTotalDisp {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 10:0, inferred.
    pub const fn crtc_v_total(self) -> u32 {
        self.0 & 0x7ff
    }

    /// Bits 26:16, inferred.
    pub const fn crtc_v_disp(self) -> u32 {
        (self.0 >> 16) & 0x7ff
    }
}

/// The `crtc_v_sync_strt_wid` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcVSyncStrtWid(u32);

impl CrtcVSyncStrtWid {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 10:0, inferred.
    pub const fn crtc_v_sync_strt(self) -> u32 {
        self.0 & 0x7ff
    }

    /// Bits 20:16, inferred.
    pub const fn crtc_v_sync_wid(self) -> u32 {
        (self.0 >> 16) & 0x1f
    }

    /// Bit 23, inferred.
    pub const fn crtc_v_sync_pol(self) -> bool {
        (self.0 >> 23) & 1 != 0
    }
}

/// The `crtc_offset_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcOffsetCntl(u32);

impl CrtcOffsetCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 15, inferred.
    pub const fn crtc_tile_en(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 16, inferred.
    pub const fn crtc_offset_flip_cntl(self) -> bool {
        (self.0 >> 16) & 1 != 0
    }

    /// Bit 17, established.
    pub const fn crtc_stereo_offset_en(self) -> bool {
        (self.0 >> 17) & 1 != 0
    }

    /// Bit 20, inferred.
    pub const fn stereo_aux(self) -> bool {
        (self.0 >> 20) & 1 != 0
    }
}

/// The `crtc_more_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CrtcMoreCntl(u32);

impl CrtcMoreCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 2, inferred.
    pub const fn crtc_auto_horz_center_en(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, inferred.
    pub const fn crtc_auto_vert_center_en(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 4, inferred.
    pub const fn crtc_h_cutoff_active_en(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bit 5, inferred.
    pub const fn crtc_v_cutoff_active_en(self) -> bool {
        (self.0 >> 5) & 1 != 0
    }
}

/// The `fp2_gen_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Fp2GenCntl(u32);

impl Fp2GenCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 25, established.
    pub const fn fp2_dvo_en(self) -> bool {
        (self.0 >> 25) & 1 != 0
    }
}

/// The `unnamed_0294` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Unnamed0294(u32);

impl Unnamed0294 {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 3:0, inferred.
    pub const fn mode_nibble(self) -> u32 {
        self.0 & 0xf
    }

    /// Bits 13:12, established.
    pub const fn stereo_sel(self) -> u32 {
        (self.0 >> 12) & 0x3
    }
}

/// The `crtc2_gen_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Crtc2GenCntl(u32);

impl Crtc2GenCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, inferred.
    pub const fn crtc2_dbl_scan_en(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn crtc2_interlace_en(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 4, inferred.
    pub const fn crtc2_sync_tristate(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bit 5, inferred.
    pub const fn crtc2_hsync_tristate(self) -> bool {
        (self.0 >> 5) & 1 != 0
    }

    /// Bit 6, inferred.
    pub const fn crtc2_vsync_tristate(self) -> bool {
        (self.0 >> 6) & 1 != 0
    }

    /// Bit 7, inferred.
    pub const fn crt2_on(self) -> bool {
        (self.0 >> 7) & 1 != 0
    }

    /// Bits 11:8, inferred.
    pub const fn crtc2_pix_width(self) -> u32 {
        (self.0 >> 8) & 0xf
    }

    /// Bit 15, inferred.
    pub const fn crtc2_icon_en(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 16, established.
    pub const fn crtc2_cur_en(self) -> bool {
        (self.0 >> 16) & 1 != 0
    }

    /// Bits 22:20, inferred.
    pub const fn crtc2_cur_mode(self) -> u32 {
        (self.0 >> 20) & 0x7
    }

    /// Bit 23, inferred.
    pub const fn crtc2_display_dis(self) -> bool {
        (self.0 >> 23) & 1 != 0
    }

    /// Bit 25, established.
    pub const fn crtc2_en(self) -> bool {
        (self.0 >> 25) & 1 != 0
    }

    /// Bit 26, inferred.
    pub const fn crtc2_disp_req_en_b(self) -> bool {
        (self.0 >> 26) & 1 != 0
    }

    /// Bit 27, inferred.
    pub const fn crtc2_c_sync_en(self) -> bool {
        (self.0 >> 27) & 1 != 0
    }

    /// Bit 28, inferred.
    pub const fn crtc2_hsync_dis(self) -> bool {
        (self.0 >> 28) & 1 != 0
    }

    /// Bit 29, inferred.
    pub const fn crtc2_vsync_dis(self) -> bool {
        (self.0 >> 29) & 1 != 0
    }
}

/// The `ov0_scale_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Ov0ScaleCntl(u32);

impl Ov0ScaleCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 1, inferred.
    pub const fn ov0_no_read_behind_scan(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 2, inferred.
    pub const fn ov0_horz_pick_nearest(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, inferred.
    pub const fn ov0_vert_pick_nearest(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 4, inferred.
    pub const fn ov0_signed_uv(self) -> bool {
        (self.0 >> 4) & 1 != 0
    }

    /// Bits 7:5, inferred.
    pub const fn ov0_gamma_sel(self) -> u32 {
        (self.0 >> 5) & 0x7
    }

    /// Bits 11:8, inferred.
    pub const fn ov0_surface_format(self) -> u32 {
        (self.0 >> 8) & 0xf
    }

    /// Bit 12, inferred.
    pub const fn ov0_adaptive_deint(self) -> bool {
        (self.0 >> 12) & 1 != 0
    }

    /// Bit 14, inferred.
    pub const fn ov0_crtc_sel(self) -> bool {
        (self.0 >> 14) & 1 != 0
    }

    /// Bits 22:16, inferred.
    pub const fn ov0_burst_per_plane(self) -> u32 {
        (self.0 >> 16) & 0x7f
    }

    /// Bit 24, inferred.
    pub const fn ov0_double_buffer_regs(self) -> bool {
        (self.0 >> 24) & 1 != 0
    }

    /// Bit 26, inferred.
    pub const fn ov0_bandwidth(self) -> bool {
        (self.0 >> 26) & 1 != 0
    }

    /// Bit 28, inferred.
    pub const fn ov0_lin_trans_bypass(self) -> bool {
        (self.0 >> 28) & 1 != 0
    }

    /// Bit 29, inferred.
    pub const fn ov0_int_emu(self) -> bool {
        (self.0 >> 29) & 1 != 0
    }

    /// Bit 30, established.
    pub const fn ov0_overlay_en(self) -> bool {
        (self.0 >> 30) & 1 != 0
    }

    /// Bit 31, inferred.
    pub const fn ov0_soft_reset(self) -> bool {
        (self.0 >> 31) & 1 != 0
    }
}

/// The `cp_stat` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CpStat(u32);

impl CpStat {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, inferred.
    pub const fn mru_busy(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bit 1, inferred.
    pub const fn mwu_busy(self) -> bool {
        (self.0 >> 1) & 1 != 0
    }

    /// Bit 2, inferred.
    pub const fn rsiu_busy(self) -> bool {
        (self.0 >> 2) & 1 != 0
    }

    /// Bit 3, inferred.
    pub const fn rciu_busy(self) -> bool {
        (self.0 >> 3) & 1 != 0
    }

    /// Bit 9, inferred.
    pub const fn csf_primary_busy(self) -> bool {
        (self.0 >> 9) & 1 != 0
    }

    /// Bit 10, inferred.
    pub const fn csf_indirect_busy(self) -> bool {
        (self.0 >> 10) & 1 != 0
    }

    /// Bit 11, inferred.
    pub const fn csq_primary_busy(self) -> bool {
        (self.0 >> 11) & 1 != 0
    }

    /// Bit 12, inferred.
    pub const fn csq_indirect_busy(self) -> bool {
        (self.0 >> 12) & 1 != 0
    }

    /// Bit 13, inferred.
    pub const fn csi_busy(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }

    /// Bit 14, inferred.
    pub const fn csf_indirect2_busy(self) -> bool {
        (self.0 >> 14) & 1 != 0
    }

    /// Bit 15, inferred.
    pub const fn csq_indirect2_busy(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 28, inferred.
    pub const fn guidma_busy(self) -> bool {
        (self.0 >> 28) & 1 != 0
    }

    /// Bit 29, inferred.
    pub const fn viddma_busy(self) -> bool {
        (self.0 >> 29) & 1 != 0
    }

    /// Bit 30, established.
    pub const fn cmdstrm_busy(self) -> bool {
        (self.0 >> 30) & 1 != 0
    }

    /// Bit 31, inferred.
    pub const fn cp_busy(self) -> bool {
        (self.0 >> 31) & 1 != 0
    }
}

/// The `viph_control` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ViphControl(u32);

impl ViphControl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 21, inferred.
    pub const fn viph_en(self) -> bool {
        (self.0 >> 21) & 1 != 0
    }
}

/// The `disp_merge_cntl` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DispMergeCntl(u32);

impl DispMergeCntl {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 1:0, inferred.
    pub const fn disp_alpha_mode(self) -> u32 {
        self.0 & 0x3
    }

    /// Bit 8, inferred.
    pub const fn disp_rgb_offset_en(self) -> bool {
        (self.0 >> 8) & 1 != 0
    }

    /// Bit 9, inferred.
    pub const fn disp_lin_trans_bypass(self) -> bool {
        (self.0 >> 9) & 1 != 0
    }

    /// Bits 23:16, inferred.
    pub const fn disp_grph_alpha_mask(self) -> u32 {
        (self.0 >> 16) & 0xff
    }

    /// Bits 31:24, inferred.
    pub const fn disp_ov0_alpha_mask(self) -> u32 {
        self.0 >> 24
    }
}

/// The `rbbm_status` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct RbbmStatus(u32);

impl RbbmStatus {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 6:0, established.
    pub const fn cmdfifo_avail(self) -> u32 {
        self.0 & 0x7f
    }

    /// Bit 8, inferred.
    pub const fn hirq_on_rbb(self) -> bool {
        (self.0 >> 8) & 1 != 0
    }

    /// Bit 9, inferred.
    pub const fn cprq_on_rbb(self) -> bool {
        (self.0 >> 9) & 1 != 0
    }

    /// Bit 10, inferred.
    pub const fn cfrq_on_rbb(self) -> bool {
        (self.0 >> 10) & 1 != 0
    }

    /// Bit 11, inferred.
    pub const fn hirq_in_rtbuf(self) -> bool {
        (self.0 >> 11) & 1 != 0
    }

    /// Bit 12, inferred.
    pub const fn cprq_in_rtbuf(self) -> bool {
        (self.0 >> 12) & 1 != 0
    }

    /// Bit 13, inferred.
    pub const fn cfrq_in_rtbuf(self) -> bool {
        (self.0 >> 13) & 1 != 0
    }

    /// Bit 14, inferred.
    pub const fn cf_pipe_busy(self) -> bool {
        (self.0 >> 14) & 1 != 0
    }

    /// Bit 15, inferred.
    pub const fn eng_ev_busy(self) -> bool {
        (self.0 >> 15) & 1 != 0
    }

    /// Bit 16, inferred.
    pub const fn cp_cmdstrm_busy(self) -> bool {
        (self.0 >> 16) & 1 != 0
    }

    /// Bit 17, inferred.
    pub const fn e2_busy(self) -> bool {
        (self.0 >> 17) & 1 != 0
    }

    /// Bit 18, inferred.
    pub const fn rb2d_busy(self) -> bool {
        (self.0 >> 18) & 1 != 0
    }

    /// Bit 19, inferred.
    pub const fn rb3d_busy(self) -> bool {
        (self.0 >> 19) & 1 != 0
    }

    /// Bit 20, inferred.
    pub const fn geometry_busy(self) -> bool {
        (self.0 >> 20) & 1 != 0
    }

    /// Bit 21, inferred.
    pub const fn re_busy(self) -> bool {
        (self.0 >> 21) & 1 != 0
    }

    /// Bit 22, inferred.
    pub const fn tam_busy(self) -> bool {
        (self.0 >> 22) & 1 != 0
    }

    /// Bit 23, inferred.
    pub const fn tdm_busy(self) -> bool {
        (self.0 >> 23) & 1 != 0
    }

    /// Bit 24, inferred.
    pub const fn pb_busy(self) -> bool {
        (self.0 >> 24) & 1 != 0
    }

    /// Bit 25, inferred.
    pub const fn tim_busy(self) -> bool {
        (self.0 >> 25) & 1 != 0
    }

    /// Bit 26, inferred.
    pub const fn ga_busy(self) -> bool {
        (self.0 >> 26) & 1 != 0
    }

    /// Bit 27, inferred.
    pub const fn cba2d_busy(self) -> bool {
        (self.0 >> 27) & 1 != 0
    }

    /// Bit 31, established.
    pub const fn gui_active(self) -> bool {
        (self.0 >> 31) & 1 != 0
    }
}

/// The `dstcache_ctlstat` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DstcacheCtlstat(u32);

impl DstcacheCtlstat {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 1:0, inferred.
    pub const fn dc_flush(self) -> u32 {
        self.0 & 0x3
    }

    /// Bits 3:2, inferred.
    pub const fn dc_free(self) -> u32 {
        (self.0 >> 2) & 0x3
    }
}

/// The `wait_until` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct WaitUntil(u32);

impl WaitUntil {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 18, inferred.
    pub const fn wait_host_idleclean(self) -> bool {
        (self.0 >> 18) & 1 != 0
    }
}

/// The `vap_cntl_status` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct VapCntlStatus(u32);

impl VapCntlStatus {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 1:0, inferred.
    pub const fn vc_swap(self) -> u32 {
        self.0 & 0x3
    }

    /// Bit 8, inferred.
    pub const fn pvs_bypass(self) -> bool {
        (self.0 >> 8) & 1 != 0
    }

    /// Bit 11, inferred.
    pub const fn busy_mid(self) -> bool {
        (self.0 >> 11) & 1 != 0
    }

    /// Bits 31:24, inferred.
    pub const fn busy_top(self) -> u32 {
        self.0 >> 24
    }
}

/// The `rb2d_dstcache_ctlstat` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Rb2dDstcacheCtlstat(u32);

impl Rb2dDstcacheCtlstat {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 1:0, established.
    pub const fn dc_flush(self) -> u32 {
        self.0 & 0x3
    }

    /// Bits 3:2, established.
    pub const fn dc_free(self) -> u32 {
        (self.0 >> 2) & 0x3
    }

    /// Bit 31, established.
    pub const fn dc_busy(self) -> bool {
        (self.0 >> 31) & 1 != 0
    }
}

/// The `gb_tile_config` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct GbTileConfig(u32);

impl GbTileConfig {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bit 0, established.
    pub const fn enable(self) -> bool {
        self.0 & 1 != 0
    }

    /// Bits 3:1, established.
    pub const fn pipe_count(self) -> GbTileConfigPipeCount {
        GbTileConfigPipeCount::from_bits((self.0 >> 1) & 0x7)
    }

    /// Bits 5:4, established.
    pub const fn tile_size(self) -> GbTileConfigTileSize {
        GbTileConfigTileSize::from_bits((self.0 >> 4) & 0x3)
    }
}

/// The `ga_soft_reset` register word.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct GaSoftReset(u32);

impl GaSoftReset {
    pub const fn new(word: u32) -> Self {
        Self(word)
    }

    pub const fn raw(self) -> u32 {
        self.0
    }

    /// Bits 15:0, inferred.
    pub const fn soft_reset_count(self) -> u32 {
        self.0 & 0xffff
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testvec_voyager_gb_tile_config_17() {
        let w = GbTileConfig::new(0x17);
        assert_eq!(w.enable() as u32, 1, "enable");
        assert_eq!(w.pipe_count().bits(), 3, "pipe_count");
        assert_eq!(w.tile_size().bits(), 1, "tile_size");
    }

    #[test]
    fn testvec_voyager_rbbm_soft_reset_79() {
        let w = RbbmSoftReset::new(0x79);
        assert_eq!(w.soft_reset_cp() as u32, 1, "soft_reset_cp");
        assert_eq!(w.soft_reset_re() as u32, 1, "soft_reset_re");
        assert_eq!(w.soft_reset_pp() as u32, 1, "soft_reset_pp");
        assert_eq!(w.soft_reset_e2() as u32, 1, "soft_reset_e2");
        assert_eq!(w.soft_reset_rb() as u32, 1, "soft_reset_rb");
        assert_eq!(w.soft_reset_geometry() as u32, 0, "soft_reset_geometry");
    }

    #[test]
    fn testvec_voyager_unnamed_0294_3000() {
        let w = Unnamed0294::new(0x3000);
        assert_eq!(w.stereo_sel(), 3, "stereo_sel");
        assert_eq!(w.mode_nibble(), 0, "mode_nibble");
    }

    #[test]
    fn testvec_voyager_crtc_offset_cntl_120000() {
        let w = CrtcOffsetCntl::new(0x120000);
        assert_eq!(w.crtc_tile_en() as u32, 0, "crtc_tile_en");
        assert_eq!(w.crtc_offset_flip_cntl() as u32, 0, "crtc_offset_flip_cntl");
        assert_eq!(w.crtc_stereo_offset_en() as u32, 1, "crtc_stereo_offset_en");
        assert_eq!(w.stereo_aux() as u32, 1, "stereo_aux");
    }
}
