<!-- generated from devices/rb3d/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 4 -->
<!-- input sha256 9bbc7124c5c41069a98513ea953dc08a33aaca0f429eb5e4385d8eaaedbf9edb -->

# colour buffer registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `rb3d`, macro prefix `R300_RB3D`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `cctl` | 0x4e00 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |
| `blendcntl` | 0x4e04 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |
| `ablendcntl` | 0x4e08 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |
| `color_channel_mask` | 0x4e0c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 14 |
| `constant_color` | 0x4e10 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |
| `color_clear_value` | 0x4e14 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |
| `ropcntl` | 0x4e18 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 16 |
| `clrcmp_flipe` | 0x4e1c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |
| `clrcmp_clr` | 0x4e20 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |
| `clrcmp_msk` | 0x4e24 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |
| `coloroffset` | 0x4e28 | rw | 32 | 4 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |
| `colorpitch` | 0x4e38 | rw | 32 | 4 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |
| `dstcache_ctlstat` | 0x4e4c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |
| `dither_ctl` | 0x4e50 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |
| `cmask_offset` | 0x4e54 | rw | 32 | 4 |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_RB3D_CMASK_OFFSET0 to 3 |
| `cmask_pitch` | 0x4e64 | rw | 32 | 4 |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_RB3D_CMASK_PITCH0 to 3 |
| `cmask_wrindex` | 0x4e74 | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_RB3D_CMASK_WRINDEX |
| `cmask_dword` | 0x4e78 | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_RB3D_CMASK_DWORD |
| `cmask_rdindex` | 0x4e7c | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_RB3D_CMASK_RDINDEX |
| `aaresolve_offset` | 0x4e80 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |
| `aaresolve_pitch` | 0x4e84 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |
| `aaresolve_ctl` | 0x4e88 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |

### Register `cctl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 10 | `reserved` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |  |
| 9 | `aa_compression_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |  |
| 7 | `clrcmp_flipe_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |  |
| 6:5 | `num_multiwrites` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |  |

### Register `blendcntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:24 | `destblend` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |
| 21:16 | `srcblend` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |
| 14:12 | `comb_fcn` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |
| 5:3 | `discard_src_pixels` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |
| 2 | `read_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |
| 1 | `separate_alpha_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |
| 0 | `alpha_blend_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 8 |  |

### Register `ablendcntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:24 | `destblend` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |
| 21:16 | `srcblend` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |
| 14:12 | `comb_fcn` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |

### Register `color_channel_mask`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 3 | `alpha_mask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 14 |  |
| 2 | `red_mask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 14 |  |
| 1 | `green_mask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 14 |  |
| 0 | `blue_mask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 14 |  |

### Register `constant_color`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:24 | `alpha` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |
| 23:16 | `red` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |
| 15:8 | `green` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |
| 7:0 | `blue` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |

### Register `color_clear_value`

### Register `ropcntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 11:8 | `rop` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 16 |  |
| 2 | `rop_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 16 |  |

### Register `clrcmp_flipe`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `clrcmp_flipe` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |

### Register `clrcmp_clr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `clrcmp_clr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 12 |  |

### Register `clrcmp_msk`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `clrcmp_msk` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |

### Register `coloroffset`

Array of 4 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:5 | `coloroffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |

### Register `colorpitch`

Array of 4 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 24:21 | `colorformat` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |
| 20:19 | `colorendian` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |
| 18:17 | `colormicrotile` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |
| 16 | `colortile` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |
| 13:1 | `colorpitch` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 13 |  |

### Register `dstcache_ctlstat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 4 | `dc_finish` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |
| 3:2 | `dc_free` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |
| 1:0 | `dc_flush` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |

### Register `dither_ctl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 3:2 | `alpha_dither_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |
| 1:0 | `dither_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 15 |  |

### Register `cmask_offset`

Array of 4 registers, stride 4.

### Register `cmask_pitch`

Array of 4 registers, stride 4.

### Register `cmask_wrindex`

### Register `cmask_dword`

### Register `cmask_rdindex`

### Register `aaresolve_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:5 | `aaresolve_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |

### Register `aaresolve_pitch`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 13:1 | `aaresolve_pitch` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |

### Register `aaresolve_ctl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 1 | `aaresolve_gamma` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |
| 0 | `aaresolve_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 5 |  |
