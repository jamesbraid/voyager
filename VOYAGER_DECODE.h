/*
 * VOYAGER_DECODE.h - display, interrupt and engine registers of the R3xx-class FireGL boards (publish-safe decode header)
 *
 *   REG:   <BLOCK>.<name> <offset> <acc><width> [count=<n>] reset=<v> <grade>
 *   FIELD: <BLOCK>.<name>.<field> <hi>:<lo> <grade>
 *   ENUM:  <target> <value> <label> <grade>
 *   TESTVEC: <value> as <BLOCK.name> => field=val, ...
 *
 * Offsets. A REG offset is the byte offset from the start of the 64 KB
 * register aperture (the second base address register of the board). Every
 * register is a 32-bit word. Narrow accesses are lanes of the word they sit in.
 *
 * Derivation. Names and bit positions come from the public Linux radeon and
 * X.Org register headers and from Mesa's R300 header, compared against what
 * the shipped graphics driver and kernel module do to the same offsets. A
 * field is "established" when the shipped code touches that bit and the public
 * layout agrees with the touch (the mask or value it uses), "inferred" when
 * only the public layout describes it, and "unknown" is never listed. Public
 * names describe the public chips, not necessarily this board, so a name is a
 * label for the offset, not proof of the behaviour. Reset values were not
 * observed and are all unknown.
 *
 * Scope. Only registers the shipped code reaches, and within them the fields
 * the public headers define. Registers outside the list are not claimed.
 */
#ifndef VOYAGER_DECODE_H
#define VOYAGER_DECODE_H

#include <stdint.h>


/* PLL index. */
/* REG: VOYAGER.clock_cntl_index 0x8 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.clock_cntl_index.pll_addr 5:0 established */
#define VOYAGER_CLOCK_CNTL_INDEX_PLL_ADDR_SHIFT 0
#define VOYAGER_CLOCK_CNTL_INDEX_PLL_ADDR_MASK  0x3fu
/* FIELD: VOYAGER.clock_cntl_index.pll_wr_en 7:7 established */
#define VOYAGER_CLOCK_CNTL_INDEX_PLL_WR_EN_SHIFT 7
#define VOYAGER_CLOCK_CNTL_INDEX_PLL_WR_EN_MASK  0x1u
/* FIELD: VOYAGER.clock_cntl_index.pll_div_sel 9:8 inferred */
#define VOYAGER_CLOCK_CNTL_INDEX_PLL_DIV_SEL_SHIFT 8
#define VOYAGER_CLOCK_CNTL_INDEX_PLL_DIV_SEL_MASK  0x3u

/* PLL data. */
/* REG: VOYAGER.clock_cntl_data 0xc rw32 reset=unknown inferred */

/* Firmware scratch word 6. */
/* REG: VOYAGER.bios_6_scratch 0x28 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.bios_6_scratch.board_probe 13:13 established */
#define VOYAGER_BIOS_6_SCRATCH_BOARD_PROBE_SHIFT 13
#define VOYAGER_BIOS_6_SCRATCH_BOARD_PROBE_MASK  0x1u

/* General interrupt enables. */
/* REG: VOYAGER.gen_int_cntl 0x40 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.gen_int_cntl.crtc_vblank 0:0 established */
#define VOYAGER_GEN_INT_CNTL_CRTC_VBLANK_SHIFT 0
#define VOYAGER_GEN_INT_CNTL_CRTC_VBLANK_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.crtc_vline 1:1 inferred */
#define VOYAGER_GEN_INT_CNTL_CRTC_VLINE_SHIFT 1
#define VOYAGER_GEN_INT_CNTL_CRTC_VLINE_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.crtc_vsync 2:2 established */
#define VOYAGER_GEN_INT_CNTL_CRTC_VSYNC_SHIFT 2
#define VOYAGER_GEN_INT_CNTL_CRTC_VSYNC_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.snapshot 3:3 inferred */
#define VOYAGER_GEN_INT_CNTL_SNAPSHOT_SHIFT 3
#define VOYAGER_GEN_INT_CNTL_SNAPSHOT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.fp_detect 4:4 inferred */
#define VOYAGER_GEN_INT_CNTL_FP_DETECT_SHIFT 4
#define VOYAGER_GEN_INT_CNTL_FP_DETECT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.crtc2_vline 5:5 inferred */
#define VOYAGER_GEN_INT_CNTL_CRTC2_VLINE_SHIFT 5
#define VOYAGER_GEN_INT_CNTL_CRTC2_VLINE_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.crtc2_vsync 6:6 established */
#define VOYAGER_GEN_INT_CNTL_CRTC2_VSYNC_SHIFT 6
#define VOYAGER_GEN_INT_CNTL_CRTC2_VSYNC_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.snapshot2 7:7 inferred */
#define VOYAGER_GEN_INT_CNTL_SNAPSHOT2_SHIFT 7
#define VOYAGER_GEN_INT_CNTL_SNAPSHOT2_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.crtc2_vblank 9:9 inferred */
#define VOYAGER_GEN_INT_CNTL_CRTC2_VBLANK_SHIFT 9
#define VOYAGER_GEN_INT_CNTL_CRTC2_VBLANK_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.fp2_detect 10:10 inferred */
#define VOYAGER_GEN_INT_CNTL_FP2_DETECT_SHIFT 10
#define VOYAGER_GEN_INT_CNTL_FP2_DETECT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.vsync_diff_over_limit 11:11 inferred */
#define VOYAGER_GEN_INT_CNTL_VSYNC_DIFF_OVER_LIMIT_SHIFT 11
#define VOYAGER_GEN_INT_CNTL_VSYNC_DIFF_OVER_LIMIT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.dma_viph0_int_en 12:12 inferred */
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH0_INT_EN_SHIFT 12
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH0_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.dma_viph1_int_en 13:13 inferred */
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH1_INT_EN_SHIFT 13
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH1_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.dma_viph2_int_en 14:14 inferred */
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH2_INT_EN_SHIFT 14
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH2_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.dma_viph3_int_en 15:15 inferred */
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH3_INT_EN_SHIFT 15
#define VOYAGER_GEN_INT_CNTL_DMA_VIPH3_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.i2c_int_en 17:17 inferred */
#define VOYAGER_GEN_INT_CNTL_I2C_INT_EN_SHIFT 17
#define VOYAGER_GEN_INT_CNTL_I2C_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.gui_idle 19:19 inferred */
#define VOYAGER_GEN_INT_CNTL_GUI_IDLE_SHIFT 19
#define VOYAGER_GEN_INT_CNTL_GUI_IDLE_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.viph_int_en 24:24 inferred */
#define VOYAGER_GEN_INT_CNTL_VIPH_INT_EN_SHIFT 24
#define VOYAGER_GEN_INT_CNTL_VIPH_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.sw_int_en 25:25 inferred */
#define VOYAGER_GEN_INT_CNTL_SW_INT_EN_SHIFT 25
#define VOYAGER_GEN_INT_CNTL_SW_INT_EN_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.geyserville 27:27 inferred */
#define VOYAGER_GEN_INT_CNTL_GEYSERVILLE_SHIFT 27
#define VOYAGER_GEN_INT_CNTL_GEYSERVILLE_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.hdcp_authorized_int 28:28 inferred */
#define VOYAGER_GEN_INT_CNTL_HDCP_AUTHORIZED_INT_SHIFT 28
#define VOYAGER_GEN_INT_CNTL_HDCP_AUTHORIZED_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.dvi_i2c_int 29:29 inferred */
#define VOYAGER_GEN_INT_CNTL_DVI_I2C_INT_SHIFT 29
#define VOYAGER_GEN_INT_CNTL_DVI_I2C_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.guidma 30:30 inferred */
#define VOYAGER_GEN_INT_CNTL_GUIDMA_SHIFT 30
#define VOYAGER_GEN_INT_CNTL_GUIDMA_MASK  0x1u
/* FIELD: VOYAGER.gen_int_cntl.viddma 31:31 inferred */
#define VOYAGER_GEN_INT_CNTL_VIDDMA_SHIFT 31
#define VOYAGER_GEN_INT_CNTL_VIDDMA_MASK  0x1u

/* General interrupt status and acknowledge. */
/* REG: VOYAGER.gen_int_status 0x44 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.gen_int_status.crtc_vblank_stat 0:0 established */
#define VOYAGER_GEN_INT_STATUS_CRTC_VBLANK_STAT_SHIFT 0
#define VOYAGER_GEN_INT_STATUS_CRTC_VBLANK_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.crtc_vline_stat 1:1 inferred */
#define VOYAGER_GEN_INT_STATUS_CRTC_VLINE_STAT_SHIFT 1
#define VOYAGER_GEN_INT_STATUS_CRTC_VLINE_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.crtc_vsync_stat 2:2 established */
#define VOYAGER_GEN_INT_STATUS_CRTC_VSYNC_STAT_SHIFT 2
#define VOYAGER_GEN_INT_STATUS_CRTC_VSYNC_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.snapshot_stat 3:3 inferred */
#define VOYAGER_GEN_INT_STATUS_SNAPSHOT_STAT_SHIFT 3
#define VOYAGER_GEN_INT_STATUS_SNAPSHOT_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.fp_detect_stat 4:4 inferred */
#define VOYAGER_GEN_INT_STATUS_FP_DETECT_STAT_SHIFT 4
#define VOYAGER_GEN_INT_STATUS_FP_DETECT_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.crtc2_vline_stat 5:5 inferred */
#define VOYAGER_GEN_INT_STATUS_CRTC2_VLINE_STAT_SHIFT 5
#define VOYAGER_GEN_INT_STATUS_CRTC2_VLINE_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.crtc2_vsync_stat 6:6 established */
#define VOYAGER_GEN_INT_STATUS_CRTC2_VSYNC_STAT_SHIFT 6
#define VOYAGER_GEN_INT_STATUS_CRTC2_VSYNC_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.snapshot2_stat 7:7 inferred */
#define VOYAGER_GEN_INT_STATUS_SNAPSHOT2_STAT_SHIFT 7
#define VOYAGER_GEN_INT_STATUS_SNAPSHOT2_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.cap0_int_active 8:8 inferred */
#define VOYAGER_GEN_INT_STATUS_CAP0_INT_ACTIVE_SHIFT 8
#define VOYAGER_GEN_INT_STATUS_CAP0_INT_ACTIVE_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.crtc2_vblank_stat 9:9 inferred */
#define VOYAGER_GEN_INT_STATUS_CRTC2_VBLANK_STAT_SHIFT 9
#define VOYAGER_GEN_INT_STATUS_CRTC2_VBLANK_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.fp2_detect_stat 10:10 inferred */
#define VOYAGER_GEN_INT_STATUS_FP2_DETECT_STAT_SHIFT 10
#define VOYAGER_GEN_INT_STATUS_FP2_DETECT_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.vsync_diff_over_limit_stat 11:11 inferred */
#define VOYAGER_GEN_INT_STATUS_VSYNC_DIFF_OVER_LIMIT_STAT_SHIFT 11
#define VOYAGER_GEN_INT_STATUS_VSYNC_DIFF_OVER_LIMIT_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.dma_viph0_int 12:12 inferred */
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH0_INT_SHIFT 12
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH0_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.dma_viph1_int 13:13 inferred */
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH1_INT_SHIFT 13
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH1_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.dma_viph2_int 14:14 inferred */
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH2_INT_SHIFT 14
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH2_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.dma_viph3_int 15:15 inferred */
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH3_INT_SHIFT 15
#define VOYAGER_GEN_INT_STATUS_DMA_VIPH3_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.i2c_int 17:17 inferred */
#define VOYAGER_GEN_INT_STATUS_I2C_INT_SHIFT 17
#define VOYAGER_GEN_INT_STATUS_I2C_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.gui_idle_stat 19:19 inferred */
#define VOYAGER_GEN_INT_STATUS_GUI_IDLE_STAT_SHIFT 19
#define VOYAGER_GEN_INT_STATUS_GUI_IDLE_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.viph_int 24:24 inferred */
#define VOYAGER_GEN_INT_STATUS_VIPH_INT_SHIFT 24
#define VOYAGER_GEN_INT_STATUS_VIPH_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.sw_int 25:25 inferred */
#define VOYAGER_GEN_INT_STATUS_SW_INT_SHIFT 25
#define VOYAGER_GEN_INT_STATUS_SW_INT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.sw_int_set 26:26 inferred */
#define VOYAGER_GEN_INT_STATUS_SW_INT_SET_SHIFT 26
#define VOYAGER_GEN_INT_STATUS_SW_INT_SET_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.geyserville_stat 27:27 inferred */
#define VOYAGER_GEN_INT_STATUS_GEYSERVILLE_STAT_SHIFT 27
#define VOYAGER_GEN_INT_STATUS_GEYSERVILLE_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.hdcp_authorized_int_stat 28:28 inferred */
#define VOYAGER_GEN_INT_STATUS_HDCP_AUTHORIZED_INT_STAT_SHIFT 28
#define VOYAGER_GEN_INT_STATUS_HDCP_AUTHORIZED_INT_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.dvi_i2c_int_stat 29:29 inferred */
#define VOYAGER_GEN_INT_STATUS_DVI_I2C_INT_STAT_SHIFT 29
#define VOYAGER_GEN_INT_STATUS_DVI_I2C_INT_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.guidma_stat 30:30 inferred */
#define VOYAGER_GEN_INT_STATUS_GUIDMA_STAT_SHIFT 30
#define VOYAGER_GEN_INT_STATUS_GUIDMA_STAT_MASK  0x1u
/* FIELD: VOYAGER.gen_int_status.viddma_stat 31:31 inferred */
#define VOYAGER_GEN_INT_STATUS_VIDDMA_STAT_SHIFT 31
#define VOYAGER_GEN_INT_STATUS_VIDDMA_STAT_MASK  0x1u

/* First CRTC general control. */
/* REG: VOYAGER.crtc_gen_cntl 0x50 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_dbl_scan_en 0:0 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_DBL_SCAN_EN_SHIFT 0
#define VOYAGER_CRTC_GEN_CNTL_CRTC_DBL_SCAN_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_interlace_en 1:1 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_INTERLACE_EN_SHIFT 1
#define VOYAGER_CRTC_GEN_CNTL_CRTC_INTERLACE_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_c_sync_en 4:4 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_C_SYNC_EN_SHIFT 4
#define VOYAGER_CRTC_GEN_CNTL_CRTC_C_SYNC_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_pix_width 11:8 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_PIX_WIDTH_SHIFT 8
#define VOYAGER_CRTC_GEN_CNTL_CRTC_PIX_WIDTH_MASK  0xfu
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_icon_en 15:15 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_ICON_EN_SHIFT 15
#define VOYAGER_CRTC_GEN_CNTL_CRTC_ICON_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_cur_en 16:16 established */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_CUR_EN_SHIFT 16
#define VOYAGER_CRTC_GEN_CNTL_CRTC_CUR_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_vstat_mode 18:17 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_VSTAT_MODE_SHIFT 17
#define VOYAGER_CRTC_GEN_CNTL_CRTC_VSTAT_MODE_MASK  0x3u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_cur_mode 22:20 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_CUR_MODE_SHIFT 20
#define VOYAGER_CRTC_GEN_CNTL_CRTC_CUR_MODE_MASK  0x7u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_ext_disp_en 24:24 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_EXT_DISP_EN_SHIFT 24
#define VOYAGER_CRTC_GEN_CNTL_CRTC_EXT_DISP_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_en 25:25 established */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_EN_SHIFT 25
#define VOYAGER_CRTC_GEN_CNTL_CRTC_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_gen_cntl.crtc_disp_req_en_b 26:26 inferred */
#define VOYAGER_CRTC_GEN_CNTL_CRTC_DISP_REQ_EN_B_SHIFT 26
#define VOYAGER_CRTC_GEN_CNTL_CRTC_DISP_REQ_EN_B_MASK  0x1u

/* Primary DAC control. */
/* REG: VOYAGER.dac_cntl 0x58 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.dac_cntl.dac_range_cntl 1:0 inferred */
#define VOYAGER_DAC_CNTL_DAC_RANGE_CNTL_SHIFT 0
#define VOYAGER_DAC_CNTL_DAC_RANGE_CNTL_MASK  0x3u
/* FIELD: VOYAGER.dac_cntl.dac_blanking 2:2 inferred */
#define VOYAGER_DAC_CNTL_DAC_BLANKING_SHIFT 2
#define VOYAGER_DAC_CNTL_DAC_BLANKING_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl.dac_cmp_en 3:3 inferred */
#define VOYAGER_DAC_CNTL_DAC_CMP_EN_SHIFT 3
#define VOYAGER_DAC_CNTL_DAC_CMP_EN_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl.dac_8bit_en 8:8 established */
#define VOYAGER_DAC_CNTL_DAC_8BIT_EN_SHIFT 8
#define VOYAGER_DAC_CNTL_DAC_8BIT_EN_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl.dac_vga_adr_en 13:13 inferred */
#define VOYAGER_DAC_CNTL_DAC_VGA_ADR_EN_SHIFT 13
#define VOYAGER_DAC_CNTL_DAC_VGA_ADR_EN_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl.dac_pdwn 15:15 inferred */
#define VOYAGER_DAC_CNTL_DAC_PDWN_SHIFT 15
#define VOYAGER_DAC_CNTL_DAC_PDWN_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl.dac_mask_all 31:24 inferred */
#define VOYAGER_DAC_CNTL_DAC_MASK_ALL_SHIFT 24
#define VOYAGER_DAC_CNTL_DAC_MASK_ALL_MASK  0xffu

/* First CRTC status. */
/* REG: VOYAGER.crtc_status 0x5c r32 reset=unknown inferred */
/* FIELD: VOYAGER.crtc_status.crtc_vblank_cur 0:0 established */
#define VOYAGER_CRTC_STATUS_CRTC_VBLANK_CUR_SHIFT 0
#define VOYAGER_CRTC_STATUS_CRTC_VBLANK_CUR_MASK  0x1u

/* Second DAC control. */
/* REG: VOYAGER.dac_cntl2 0x7c rw32 reset=unknown inferred */
/* FIELD: VOYAGER.dac_cntl2.dac2_dac_clk_sel 0:0 inferred */
#define VOYAGER_DAC_CNTL2_DAC2_DAC_CLK_SEL_SHIFT 0
#define VOYAGER_DAC_CNTL2_DAC2_DAC_CLK_SEL_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl2.dac2_dac2_clk_sel 1:1 inferred */
#define VOYAGER_DAC_CNTL2_DAC2_DAC2_CLK_SEL_SHIFT 1
#define VOYAGER_DAC_CNTL2_DAC2_DAC2_CLK_SEL_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl2.dac2_palette_acc_ctl 5:5 established */
#define VOYAGER_DAC_CNTL2_DAC2_PALETTE_ACC_CTL_SHIFT 5
#define VOYAGER_DAC_CNTL2_DAC2_PALETTE_ACC_CTL_MASK  0x1u
/* FIELD: VOYAGER.dac_cntl2.dac2_cmp_en 7:7 inferred */
#define VOYAGER_DAC_CNTL2_DAC2_CMP_EN_SHIFT 7
#define VOYAGER_DAC_CNTL2_DAC2_CMP_EN_MASK  0x1u

/* Strap bits. */
/* REG: VOYAGER.config_xstrap 0xe4 r32 reset=unknown inferred */
/* FIELD: VOYAGER.config_xstrap.board_strap 27:27 established */
#define VOYAGER_CONFIG_XSTRAP_BOARD_STRAP_SHIFT 27
#define VOYAGER_CONFIG_XSTRAP_BOARD_STRAP_MASK  0x1u

/* Engine soft reset. */
/* REG: VOYAGER.rbbm_soft_reset 0xf0 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_cp 0:0 established */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_CP_SHIFT 0
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_CP_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_hi 1:1 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_HI_SHIFT 1
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_HI_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_geometry 2:2 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_GEOMETRY_SHIFT 2
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_GEOMETRY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_re 3:3 established */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_RE_SHIFT 3
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_RE_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_pp 4:4 established */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_PP_SHIFT 4
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_PP_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_e2 5:5 established */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_E2_SHIFT 5
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_E2_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_rb 6:6 established */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_RB_SHIFT 6
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_RB_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_hdp 7:7 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_HDP_SHIFT 7
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_HDP_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_mc 8:8 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_MC_SHIFT 8
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_MC_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_aic 9:9 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_AIC_SHIFT 9
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_AIC_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_vip 10:10 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_VIP_SHIFT 10
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_VIP_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_disp 11:11 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_DISP_SHIFT 11
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_DISP_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_cg 12:12 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_CG_SHIFT 12
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_CG_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_ga 13:13 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_GA_SHIFT 13
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_GA_MASK  0x1u
/* FIELD: VOYAGER.rbbm_soft_reset.soft_reset_idct 14:14 inferred */
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_IDCT_SHIFT 14
#define VOYAGER_RBBM_SOFT_RESET_SOFT_RESET_IDCT_MASK  0x1u

/* Memory controller status. */
/* REG: VOYAGER.mc_status 0x150 r32 reset=unknown inferred */
/* FIELD: VOYAGER.mc_status.mc_idle 2:2 established */
#define VOYAGER_MC_STATUS_MC_IDLE_SHIFT 2
#define VOYAGER_MC_STATUS_MC_IDLE_MASK  0x1u
/* FIELD: VOYAGER.mc_status.mc_idle_r300 4:4 established */
#define VOYAGER_MC_STATUS_MC_IDLE_R300_SHIFT 4
#define VOYAGER_MC_STATUS_MC_IDLE_R300_MASK  0x1u

/* CRTC horizontal total and displayed width. */
/* REG: VOYAGER.crtc_h_total_disp 0x200 rw32 reset=unknown established */
/* FIELD: VOYAGER.crtc_h_total_disp.crtc_h_total 9:0 inferred */
#define VOYAGER_CRTC_H_TOTAL_DISP_CRTC_H_TOTAL_SHIFT 0
#define VOYAGER_CRTC_H_TOTAL_DISP_CRTC_H_TOTAL_MASK  0x3ffu
/* FIELD: VOYAGER.crtc_h_total_disp.crtc_h_disp 24:16 inferred */
#define VOYAGER_CRTC_H_TOTAL_DISP_CRTC_H_DISP_SHIFT 16
#define VOYAGER_CRTC_H_TOTAL_DISP_CRTC_H_DISP_MASK  0x1ffu

/* CRTC horizontal sync start, width and polarity. */
/* REG: VOYAGER.crtc_h_sync_strt_wid 0x204 rw32 reset=unknown established */
/* FIELD: VOYAGER.crtc_h_sync_strt_wid.crtc_h_sync_strt_pix 2:0 inferred */
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_STRT_PIX_SHIFT 0
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_STRT_PIX_MASK  0x7u
/* FIELD: VOYAGER.crtc_h_sync_strt_wid.crtc_h_sync_strt_char 12:3 inferred */
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_STRT_CHAR_SHIFT 3
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_STRT_CHAR_MASK  0x3ffu
/* FIELD: VOYAGER.crtc_h_sync_strt_wid.crtc_h_sync_wid 21:16 inferred */
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_WID_SHIFT 16
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_WID_MASK  0x3fu
/* FIELD: VOYAGER.crtc_h_sync_strt_wid.crtc_h_sync_pol 23:23 inferred */
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_POL_SHIFT 23
#define VOYAGER_CRTC_H_SYNC_STRT_WID_CRTC_H_SYNC_POL_MASK  0x1u

/* CRTC vertical total and displayed height. */
/* REG: VOYAGER.crtc_v_total_disp 0x208 rw32 reset=unknown established */
/* FIELD: VOYAGER.crtc_v_total_disp.crtc_v_total 10:0 inferred */
#define VOYAGER_CRTC_V_TOTAL_DISP_CRTC_V_TOTAL_SHIFT 0
#define VOYAGER_CRTC_V_TOTAL_DISP_CRTC_V_TOTAL_MASK  0x7ffu
/* FIELD: VOYAGER.crtc_v_total_disp.crtc_v_disp 26:16 inferred */
#define VOYAGER_CRTC_V_TOTAL_DISP_CRTC_V_DISP_SHIFT 16
#define VOYAGER_CRTC_V_TOTAL_DISP_CRTC_V_DISP_MASK  0x7ffu

/* CRTC vertical sync start, width and polarity. */
/* REG: VOYAGER.crtc_v_sync_strt_wid 0x20c rw32 reset=unknown established */
/* FIELD: VOYAGER.crtc_v_sync_strt_wid.crtc_v_sync_strt 10:0 inferred */
#define VOYAGER_CRTC_V_SYNC_STRT_WID_CRTC_V_SYNC_STRT_SHIFT 0
#define VOYAGER_CRTC_V_SYNC_STRT_WID_CRTC_V_SYNC_STRT_MASK  0x7ffu
/* FIELD: VOYAGER.crtc_v_sync_strt_wid.crtc_v_sync_wid 20:16 inferred */
#define VOYAGER_CRTC_V_SYNC_STRT_WID_CRTC_V_SYNC_WID_SHIFT 16
#define VOYAGER_CRTC_V_SYNC_STRT_WID_CRTC_V_SYNC_WID_MASK  0x1fu
/* FIELD: VOYAGER.crtc_v_sync_strt_wid.crtc_v_sync_pol 23:23 inferred */
#define VOYAGER_CRTC_V_SYNC_STRT_WID_CRTC_V_SYNC_POL_SHIFT 23
#define VOYAGER_CRTC_V_SYNC_STRT_WID_CRTC_V_SYNC_POL_MASK  0x1u

/* First CRTC offset control. */
/* REG: VOYAGER.crtc_offset_cntl 0x228 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.crtc_offset_cntl.crtc_tile_en 15:15 inferred */
#define VOYAGER_CRTC_OFFSET_CNTL_CRTC_TILE_EN_SHIFT 15
#define VOYAGER_CRTC_OFFSET_CNTL_CRTC_TILE_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_offset_cntl.crtc_offset_flip_cntl 16:16 inferred */
#define VOYAGER_CRTC_OFFSET_CNTL_CRTC_OFFSET_FLIP_CNTL_SHIFT 16
#define VOYAGER_CRTC_OFFSET_CNTL_CRTC_OFFSET_FLIP_CNTL_MASK  0x1u
/* FIELD: VOYAGER.crtc_offset_cntl.crtc_stereo_offset_en 17:17 established */
#define VOYAGER_CRTC_OFFSET_CNTL_CRTC_STEREO_OFFSET_EN_SHIFT 17
#define VOYAGER_CRTC_OFFSET_CNTL_CRTC_STEREO_OFFSET_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_offset_cntl.stereo_aux 20:20 inferred */
#define VOYAGER_CRTC_OFFSET_CNTL_STEREO_AUX_SHIFT 20
#define VOYAGER_CRTC_OFFSET_CNTL_STEREO_AUX_MASK  0x1u

/* CRTC centring and cutoff enables. */
/* REG: VOYAGER.crtc_more_cntl 0x27c rw32 reset=unknown established */
/* FIELD: VOYAGER.crtc_more_cntl.crtc_auto_horz_center_en 2:2 inferred */
#define VOYAGER_CRTC_MORE_CNTL_CRTC_AUTO_HORZ_CENTER_EN_SHIFT 2
#define VOYAGER_CRTC_MORE_CNTL_CRTC_AUTO_HORZ_CENTER_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_more_cntl.crtc_auto_vert_center_en 3:3 inferred */
#define VOYAGER_CRTC_MORE_CNTL_CRTC_AUTO_VERT_CENTER_EN_SHIFT 3
#define VOYAGER_CRTC_MORE_CNTL_CRTC_AUTO_VERT_CENTER_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_more_cntl.crtc_h_cutoff_active_en 4:4 inferred */
#define VOYAGER_CRTC_MORE_CNTL_CRTC_H_CUTOFF_ACTIVE_EN_SHIFT 4
#define VOYAGER_CRTC_MORE_CNTL_CRTC_H_CUTOFF_ACTIVE_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc_more_cntl.crtc_v_cutoff_active_en 5:5 inferred */
#define VOYAGER_CRTC_MORE_CNTL_CRTC_V_CUTOFF_ACTIVE_EN_SHIFT 5
#define VOYAGER_CRTC_MORE_CNTL_CRTC_V_CUTOFF_ACTIVE_EN_MASK  0x1u

/* Second flat-panel and DVO control. */
/* REG: VOYAGER.fp2_gen_cntl 0x288 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.fp2_gen_cntl.fp2_dvo_en 25:25 established */
#define VOYAGER_FP2_GEN_CNTL_FP2_DVO_EN_SHIFT 25
#define VOYAGER_FP2_GEN_CNTL_FP2_DVO_EN_MASK  0x1u

/* Stereo field word (no public name). */
/* REG: VOYAGER.unnamed_0294 0x294 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.unnamed_0294.mode_nibble 3:0 inferred */
#define VOYAGER_UNNAMED_0294_MODE_NIBBLE_SHIFT 0
#define VOYAGER_UNNAMED_0294_MODE_NIBBLE_MASK  0xfu
/* FIELD: VOYAGER.unnamed_0294.stereo_sel 13:12 established */
#define VOYAGER_UNNAMED_0294_STEREO_SEL_SHIFT 12
#define VOYAGER_UNNAMED_0294_STEREO_SEL_MASK  0x3u

/* Second CRTC general control. */
/* REG: VOYAGER.crtc2_gen_cntl 0x3f8 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_dbl_scan_en 0:0 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_DBL_SCAN_EN_SHIFT 0
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_DBL_SCAN_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_interlace_en 1:1 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_INTERLACE_EN_SHIFT 1
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_INTERLACE_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_sync_tristate 4:4 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_SYNC_TRISTATE_SHIFT 4
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_SYNC_TRISTATE_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_hsync_tristate 5:5 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_HSYNC_TRISTATE_SHIFT 5
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_HSYNC_TRISTATE_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_vsync_tristate 6:6 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_VSYNC_TRISTATE_SHIFT 6
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_VSYNC_TRISTATE_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crt2_on 7:7 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRT2_ON_SHIFT 7
#define VOYAGER_CRTC2_GEN_CNTL_CRT2_ON_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_pix_width 11:8 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_PIX_WIDTH_SHIFT 8
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_PIX_WIDTH_MASK  0xfu
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_icon_en 15:15 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_ICON_EN_SHIFT 15
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_ICON_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_cur_en 16:16 established */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_CUR_EN_SHIFT 16
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_CUR_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_cur_mode 22:20 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_CUR_MODE_SHIFT 20
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_CUR_MODE_MASK  0x7u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_display_dis 23:23 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_DISPLAY_DIS_SHIFT 23
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_DISPLAY_DIS_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_en 25:25 established */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_EN_SHIFT 25
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_disp_req_en_b 26:26 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_DISP_REQ_EN_B_SHIFT 26
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_DISP_REQ_EN_B_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_c_sync_en 27:27 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_C_SYNC_EN_SHIFT 27
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_C_SYNC_EN_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_hsync_dis 28:28 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_HSYNC_DIS_SHIFT 28
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_HSYNC_DIS_MASK  0x1u
/* FIELD: VOYAGER.crtc2_gen_cntl.crtc2_vsync_dis 29:29 inferred */
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_VSYNC_DIS_SHIFT 29
#define VOYAGER_CRTC2_GEN_CNTL_CRTC2_VSYNC_DIS_MASK  0x1u

/* Overlay scaler control. */
/* REG: VOYAGER.ov0_scale_cntl 0x420 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_no_read_behind_scan 1:1 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_NO_READ_BEHIND_SCAN_SHIFT 1
#define VOYAGER_OV0_SCALE_CNTL_OV0_NO_READ_BEHIND_SCAN_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_horz_pick_nearest 2:2 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_HORZ_PICK_NEAREST_SHIFT 2
#define VOYAGER_OV0_SCALE_CNTL_OV0_HORZ_PICK_NEAREST_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_vert_pick_nearest 3:3 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_VERT_PICK_NEAREST_SHIFT 3
#define VOYAGER_OV0_SCALE_CNTL_OV0_VERT_PICK_NEAREST_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_signed_uv 4:4 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_SIGNED_UV_SHIFT 4
#define VOYAGER_OV0_SCALE_CNTL_OV0_SIGNED_UV_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_gamma_sel 7:5 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_GAMMA_SEL_SHIFT 5
#define VOYAGER_OV0_SCALE_CNTL_OV0_GAMMA_SEL_MASK  0x7u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_surface_format 11:8 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_SURFACE_FORMAT_SHIFT 8
#define VOYAGER_OV0_SCALE_CNTL_OV0_SURFACE_FORMAT_MASK  0xfu
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_adaptive_deint 12:12 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_ADAPTIVE_DEINT_SHIFT 12
#define VOYAGER_OV0_SCALE_CNTL_OV0_ADAPTIVE_DEINT_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_crtc_sel 14:14 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_CRTC_SEL_SHIFT 14
#define VOYAGER_OV0_SCALE_CNTL_OV0_CRTC_SEL_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_burst_per_plane 22:16 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_BURST_PER_PLANE_SHIFT 16
#define VOYAGER_OV0_SCALE_CNTL_OV0_BURST_PER_PLANE_MASK  0x7fu
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_double_buffer_regs 24:24 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_DOUBLE_BUFFER_REGS_SHIFT 24
#define VOYAGER_OV0_SCALE_CNTL_OV0_DOUBLE_BUFFER_REGS_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_bandwidth 26:26 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_BANDWIDTH_SHIFT 26
#define VOYAGER_OV0_SCALE_CNTL_OV0_BANDWIDTH_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_lin_trans_bypass 28:28 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_LIN_TRANS_BYPASS_SHIFT 28
#define VOYAGER_OV0_SCALE_CNTL_OV0_LIN_TRANS_BYPASS_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_int_emu 29:29 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_INT_EMU_SHIFT 29
#define VOYAGER_OV0_SCALE_CNTL_OV0_INT_EMU_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_overlay_en 30:30 established */
#define VOYAGER_OV0_SCALE_CNTL_OV0_OVERLAY_EN_SHIFT 30
#define VOYAGER_OV0_SCALE_CNTL_OV0_OVERLAY_EN_MASK  0x1u
/* FIELD: VOYAGER.ov0_scale_cntl.ov0_soft_reset 31:31 inferred */
#define VOYAGER_OV0_SCALE_CNTL_OV0_SOFT_RESET_SHIFT 31
#define VOYAGER_OV0_SCALE_CNTL_OV0_SOFT_RESET_MASK  0x1u

/* Sub-picture control (the public header defines no bits). */
/* REG: VOYAGER.subpic_cntl 0x540 rw32 reset=unknown established */

/* Command processor status. */
/* REG: VOYAGER.cp_stat 0x7c0 r32 reset=unknown inferred */
/* FIELD: VOYAGER.cp_stat.mru_busy 0:0 inferred */
#define VOYAGER_CP_STAT_MRU_BUSY_SHIFT 0
#define VOYAGER_CP_STAT_MRU_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.mwu_busy 1:1 inferred */
#define VOYAGER_CP_STAT_MWU_BUSY_SHIFT 1
#define VOYAGER_CP_STAT_MWU_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.rsiu_busy 2:2 inferred */
#define VOYAGER_CP_STAT_RSIU_BUSY_SHIFT 2
#define VOYAGER_CP_STAT_RSIU_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.rciu_busy 3:3 inferred */
#define VOYAGER_CP_STAT_RCIU_BUSY_SHIFT 3
#define VOYAGER_CP_STAT_RCIU_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csf_primary_busy 9:9 inferred */
#define VOYAGER_CP_STAT_CSF_PRIMARY_BUSY_SHIFT 9
#define VOYAGER_CP_STAT_CSF_PRIMARY_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csf_indirect_busy 10:10 inferred */
#define VOYAGER_CP_STAT_CSF_INDIRECT_BUSY_SHIFT 10
#define VOYAGER_CP_STAT_CSF_INDIRECT_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csq_primary_busy 11:11 inferred */
#define VOYAGER_CP_STAT_CSQ_PRIMARY_BUSY_SHIFT 11
#define VOYAGER_CP_STAT_CSQ_PRIMARY_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csq_indirect_busy 12:12 inferred */
#define VOYAGER_CP_STAT_CSQ_INDIRECT_BUSY_SHIFT 12
#define VOYAGER_CP_STAT_CSQ_INDIRECT_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csi_busy 13:13 inferred */
#define VOYAGER_CP_STAT_CSI_BUSY_SHIFT 13
#define VOYAGER_CP_STAT_CSI_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csf_indirect2_busy 14:14 inferred */
#define VOYAGER_CP_STAT_CSF_INDIRECT2_BUSY_SHIFT 14
#define VOYAGER_CP_STAT_CSF_INDIRECT2_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.csq_indirect2_busy 15:15 inferred */
#define VOYAGER_CP_STAT_CSQ_INDIRECT2_BUSY_SHIFT 15
#define VOYAGER_CP_STAT_CSQ_INDIRECT2_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.guidma_busy 28:28 inferred */
#define VOYAGER_CP_STAT_GUIDMA_BUSY_SHIFT 28
#define VOYAGER_CP_STAT_GUIDMA_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.viddma_busy 29:29 inferred */
#define VOYAGER_CP_STAT_VIDDMA_BUSY_SHIFT 29
#define VOYAGER_CP_STAT_VIDDMA_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.cmdstrm_busy 30:30 established */
#define VOYAGER_CP_STAT_CMDSTRM_BUSY_SHIFT 30
#define VOYAGER_CP_STAT_CMDSTRM_BUSY_MASK  0x1u
/* FIELD: VOYAGER.cp_stat.cp_busy 31:31 inferred */
#define VOYAGER_CP_STAT_CP_BUSY_SHIFT 31
#define VOYAGER_CP_STAT_CP_BUSY_MASK  0x1u

/* Capture unit 0 trigger control (the public header defines no bits). */
/* REG: VOYAGER.cap0_trig_cntl 0x950 rw32 reset=unknown established */

/* Capture unit 1 trigger control (the public header defines no bits). */
/* REG: VOYAGER.cap1_trig_cntl 0x9c0 rw32 reset=unknown established */

/* Video input port host interface control. */
/* REG: VOYAGER.viph_control 0xc40 rw32 reset=unknown established */
/* FIELD: VOYAGER.viph_control.viph_en 21:21 inferred */
#define VOYAGER_VIPH_CONTROL_VIPH_EN_SHIFT 21
#define VOYAGER_VIPH_CONTROL_VIPH_EN_MASK  0x1u

/* Display merge and alpha control. */
/* REG: VOYAGER.disp_merge_cntl 0xd60 rw32 reset=unknown established */
/* FIELD: VOYAGER.disp_merge_cntl.disp_alpha_mode 1:0 inferred */
#define VOYAGER_DISP_MERGE_CNTL_DISP_ALPHA_MODE_SHIFT 0
#define VOYAGER_DISP_MERGE_CNTL_DISP_ALPHA_MODE_MASK  0x3u
/* FIELD: VOYAGER.disp_merge_cntl.disp_rgb_offset_en 8:8 inferred */
#define VOYAGER_DISP_MERGE_CNTL_DISP_RGB_OFFSET_EN_SHIFT 8
#define VOYAGER_DISP_MERGE_CNTL_DISP_RGB_OFFSET_EN_MASK  0x1u
/* FIELD: VOYAGER.disp_merge_cntl.disp_lin_trans_bypass 9:9 inferred */
#define VOYAGER_DISP_MERGE_CNTL_DISP_LIN_TRANS_BYPASS_SHIFT 9
#define VOYAGER_DISP_MERGE_CNTL_DISP_LIN_TRANS_BYPASS_MASK  0x1u
/* FIELD: VOYAGER.disp_merge_cntl.disp_grph_alpha_mask 23:16 inferred */
#define VOYAGER_DISP_MERGE_CNTL_DISP_GRPH_ALPHA_MASK_SHIFT 16
#define VOYAGER_DISP_MERGE_CNTL_DISP_GRPH_ALPHA_MASK_MASK  0xffu
/* FIELD: VOYAGER.disp_merge_cntl.disp_ov0_alpha_mask 31:24 inferred */
#define VOYAGER_DISP_MERGE_CNTL_DISP_OV0_ALPHA_MASK_SHIFT 24
#define VOYAGER_DISP_MERGE_CNTL_DISP_OV0_ALPHA_MASK_MASK  0xffu

/* Engine status. */
/* REG: VOYAGER.rbbm_status 0xe40 r32 reset=unknown inferred */
/* FIELD: VOYAGER.rbbm_status.cmdfifo_avail 6:0 established */
#define VOYAGER_RBBM_STATUS_CMDFIFO_AVAIL_SHIFT 0
#define VOYAGER_RBBM_STATUS_CMDFIFO_AVAIL_MASK  0x7fu
/* FIELD: VOYAGER.rbbm_status.hirq_on_rbb 8:8 inferred */
#define VOYAGER_RBBM_STATUS_HIRQ_ON_RBB_SHIFT 8
#define VOYAGER_RBBM_STATUS_HIRQ_ON_RBB_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cprq_on_rbb 9:9 inferred */
#define VOYAGER_RBBM_STATUS_CPRQ_ON_RBB_SHIFT 9
#define VOYAGER_RBBM_STATUS_CPRQ_ON_RBB_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cfrq_on_rbb 10:10 inferred */
#define VOYAGER_RBBM_STATUS_CFRQ_ON_RBB_SHIFT 10
#define VOYAGER_RBBM_STATUS_CFRQ_ON_RBB_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.hirq_in_rtbuf 11:11 inferred */
#define VOYAGER_RBBM_STATUS_HIRQ_IN_RTBUF_SHIFT 11
#define VOYAGER_RBBM_STATUS_HIRQ_IN_RTBUF_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cprq_in_rtbuf 12:12 inferred */
#define VOYAGER_RBBM_STATUS_CPRQ_IN_RTBUF_SHIFT 12
#define VOYAGER_RBBM_STATUS_CPRQ_IN_RTBUF_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cfrq_in_rtbuf 13:13 inferred */
#define VOYAGER_RBBM_STATUS_CFRQ_IN_RTBUF_SHIFT 13
#define VOYAGER_RBBM_STATUS_CFRQ_IN_RTBUF_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cf_pipe_busy 14:14 inferred */
#define VOYAGER_RBBM_STATUS_CF_PIPE_BUSY_SHIFT 14
#define VOYAGER_RBBM_STATUS_CF_PIPE_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.eng_ev_busy 15:15 inferred */
#define VOYAGER_RBBM_STATUS_ENG_EV_BUSY_SHIFT 15
#define VOYAGER_RBBM_STATUS_ENG_EV_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cp_cmdstrm_busy 16:16 inferred */
#define VOYAGER_RBBM_STATUS_CP_CMDSTRM_BUSY_SHIFT 16
#define VOYAGER_RBBM_STATUS_CP_CMDSTRM_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.e2_busy 17:17 inferred */
#define VOYAGER_RBBM_STATUS_E2_BUSY_SHIFT 17
#define VOYAGER_RBBM_STATUS_E2_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.rb2d_busy 18:18 inferred */
#define VOYAGER_RBBM_STATUS_RB2D_BUSY_SHIFT 18
#define VOYAGER_RBBM_STATUS_RB2D_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.rb3d_busy 19:19 inferred */
#define VOYAGER_RBBM_STATUS_RB3D_BUSY_SHIFT 19
#define VOYAGER_RBBM_STATUS_RB3D_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.geometry_busy 20:20 inferred */
#define VOYAGER_RBBM_STATUS_GEOMETRY_BUSY_SHIFT 20
#define VOYAGER_RBBM_STATUS_GEOMETRY_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.re_busy 21:21 inferred */
#define VOYAGER_RBBM_STATUS_RE_BUSY_SHIFT 21
#define VOYAGER_RBBM_STATUS_RE_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.tam_busy 22:22 inferred */
#define VOYAGER_RBBM_STATUS_TAM_BUSY_SHIFT 22
#define VOYAGER_RBBM_STATUS_TAM_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.tdm_busy 23:23 inferred */
#define VOYAGER_RBBM_STATUS_TDM_BUSY_SHIFT 23
#define VOYAGER_RBBM_STATUS_TDM_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.pb_busy 24:24 inferred */
#define VOYAGER_RBBM_STATUS_PB_BUSY_SHIFT 24
#define VOYAGER_RBBM_STATUS_PB_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.tim_busy 25:25 inferred */
#define VOYAGER_RBBM_STATUS_TIM_BUSY_SHIFT 25
#define VOYAGER_RBBM_STATUS_TIM_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.ga_busy 26:26 inferred */
#define VOYAGER_RBBM_STATUS_GA_BUSY_SHIFT 26
#define VOYAGER_RBBM_STATUS_GA_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.cba2d_busy 27:27 inferred */
#define VOYAGER_RBBM_STATUS_CBA2D_BUSY_SHIFT 27
#define VOYAGER_RBBM_STATUS_CBA2D_BUSY_MASK  0x1u
/* FIELD: VOYAGER.rbbm_status.gui_active 31:31 established */
#define VOYAGER_RBBM_STATUS_GUI_ACTIVE_SHIFT 31
#define VOYAGER_RBBM_STATUS_GUI_ACTIVE_MASK  0x1u

/* Scratch register 5 (the engine-reset packets write it). */
/* REG: VOYAGER.scratch_reg5 0x15f4 rw32 reset=unknown inferred */

/* Destination cache control and status, packet-register form. */
/* REG: VOYAGER.dstcache_ctlstat 0x1714 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.dstcache_ctlstat.dc_flush 1:0 inferred */
#define VOYAGER_DSTCACHE_CTLSTAT_DC_FLUSH_SHIFT 0
#define VOYAGER_DSTCACHE_CTLSTAT_DC_FLUSH_MASK  0x3u
/* FIELD: VOYAGER.dstcache_ctlstat.dc_free 3:2 inferred */
#define VOYAGER_DSTCACHE_CTLSTAT_DC_FREE_SHIFT 2
#define VOYAGER_DSTCACHE_CTLSTAT_DC_FREE_MASK  0x3u

/* Command processor wait-until condition. */
/* REG: VOYAGER.wait_until 0x1720 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.wait_until.wait_host_idleclean 18:18 inferred */
#define VOYAGER_WAIT_UNTIL_WAIT_HOST_IDLECLEAN_SHIFT 18
#define VOYAGER_WAIT_UNTIL_WAIT_HOST_IDLECLEAN_MASK  0x1u

/* Vertex array processor control and status. */
/* REG: VOYAGER.vap_cntl_status 0x2140 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.vap_cntl_status.vc_swap 1:0 inferred */
#define VOYAGER_VAP_CNTL_STATUS_VC_SWAP_SHIFT 0
#define VOYAGER_VAP_CNTL_STATUS_VC_SWAP_MASK  0x3u
/* FIELD: VOYAGER.vap_cntl_status.pvs_bypass 8:8 inferred */
#define VOYAGER_VAP_CNTL_STATUS_PVS_BYPASS_SHIFT 8
#define VOYAGER_VAP_CNTL_STATUS_PVS_BYPASS_MASK  0x1u
/* FIELD: VOYAGER.vap_cntl_status.busy_mid 11:11 inferred */
#define VOYAGER_VAP_CNTL_STATUS_BUSY_MID_SHIFT 11
#define VOYAGER_VAP_CNTL_STATUS_BUSY_MID_MASK  0x1u
/* FIELD: VOYAGER.vap_cntl_status.busy_top 31:24 inferred */
#define VOYAGER_VAP_CNTL_STATUS_BUSY_TOP_SHIFT 24
#define VOYAGER_VAP_CNTL_STATUS_BUSY_TOP_MASK  0xffu

/* 2D destination cache control and status. */
/* REG: VOYAGER.rb2d_dstcache_ctlstat 0x342c rw32 reset=unknown inferred */
/* FIELD: VOYAGER.rb2d_dstcache_ctlstat.dc_flush 1:0 established */
#define VOYAGER_RB2D_DSTCACHE_CTLSTAT_DC_FLUSH_SHIFT 0
#define VOYAGER_RB2D_DSTCACHE_CTLSTAT_DC_FLUSH_MASK  0x3u
/* FIELD: VOYAGER.rb2d_dstcache_ctlstat.dc_free 3:2 established */
#define VOYAGER_RB2D_DSTCACHE_CTLSTAT_DC_FREE_SHIFT 2
#define VOYAGER_RB2D_DSTCACHE_CTLSTAT_DC_FREE_MASK  0x3u
/* FIELD: VOYAGER.rb2d_dstcache_ctlstat.dc_busy 31:31 established */
#define VOYAGER_RB2D_DSTCACHE_CTLSTAT_DC_BUSY_SHIFT 31
#define VOYAGER_RB2D_DSTCACHE_CTLSTAT_DC_BUSY_MASK  0x1u

/* Tile and pipe configuration. */
/* REG: VOYAGER.gb_tile_config 0x4018 rw32 reset=unknown inferred */
/* FIELD: VOYAGER.gb_tile_config.enable 0:0 established */
#define VOYAGER_GB_TILE_CONFIG_ENABLE_SHIFT 0
#define VOYAGER_GB_TILE_CONFIG_ENABLE_MASK  0x1u
/* FIELD: VOYAGER.gb_tile_config.pipe_count 3:1 established */
#define VOYAGER_GB_TILE_CONFIG_PIPE_COUNT_SHIFT 1
#define VOYAGER_GB_TILE_CONFIG_PIPE_COUNT_MASK  0x7u
/* ENUM: VOYAGER.gb_tile_config.pipe_count 0 rv300 inferred */
#define VOYAGER_GB_TILE_CONFIG_PIPE_COUNT_RV300 0
/* ENUM: VOYAGER.gb_tile_config.pipe_count 3 r300 established */
#define VOYAGER_GB_TILE_CONFIG_PIPE_COUNT_R300 3
/* ENUM: VOYAGER.gb_tile_config.pipe_count 7 r420 inferred */
#define VOYAGER_GB_TILE_CONFIG_PIPE_COUNT_R420 7
/* FIELD: VOYAGER.gb_tile_config.tile_size 5:4 established */
#define VOYAGER_GB_TILE_CONFIG_TILE_SIZE_SHIFT 4
#define VOYAGER_GB_TILE_CONFIG_TILE_SIZE_MASK  0x3u
/* ENUM: VOYAGER.gb_tile_config.tile_size 0 size_8 inferred */
#define VOYAGER_GB_TILE_CONFIG_TILE_SIZE_SIZE_8 0
/* ENUM: VOYAGER.gb_tile_config.tile_size 1 size_16 established */
#define VOYAGER_GB_TILE_CONFIG_TILE_SIZE_SIZE_16 1
/* ENUM: VOYAGER.gb_tile_config.tile_size 2 size_32 inferred */
#define VOYAGER_GB_TILE_CONFIG_TILE_SIZE_SIZE_32 2

/* Setup engine soft reset. */
/* REG: VOYAGER.ga_soft_reset 0x429c rw32 reset=unknown inferred */
/* FIELD: VOYAGER.ga_soft_reset.soft_reset_count 15:0 inferred */
#define VOYAGER_GA_SOFT_RESET_SOFT_RESET_COUNT_SHIFT 0
#define VOYAGER_GA_SOFT_RESET_SOFT_RESET_COUNT_MASK  0xffffu

/* Packet-3 opcode the engine-reset sequence queues to set the scissor rectangle. */
#define VOYAGER_PM4_OPCODE_CP_SET_SCISSORS 0x1e /* inferred */

/*
 * TESTVEC: 0x17 as VOYAGER.gb_tile_config => enable=1, pipe_count=3, tile_size=1
 *
 * TESTVEC: 0x79 as VOYAGER.rbbm_soft_reset => soft_reset_cp=1, soft_reset_re=1, soft_reset_pp=1, soft_reset_e2=1, soft_reset_rb=1, soft_reset_geometry=0
 *
 * TESTVEC: 0x00003000 as VOYAGER.unnamed_0294 => stereo_sel=3, mode_nibble=0
 *
 * TESTVEC: 0x00120000 as VOYAGER.crtc_offset_cntl => crtc_tile_en=0, crtc_offset_flip_cntl=0, crtc_stereo_offset_en=1, stereo_aux=1
 *
 */

#endif
