<!-- generated from devices/ga/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 4 -->
<!-- input sha256 b474daa9d295799fe8f5e5ddf58374b9d80cdb167b2acb0dfa77d323e342828f -->

# geometry assembly registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `ga`, macro prefix `R300_GA`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `point_s0` | 0x4200 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |
| `point_t0` | 0x4204 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |
| `point_s1` | 0x4208 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |
| `point_t1` | 0x420c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |
| `triangle_stipple` | 0x4214 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |
| `point_size` | 0x421c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |
| `point_minmax` | 0x4230 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |
| `line_cntl` | 0x4234 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |
| `line_stipple_config` | 0x4238 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |
| `line_stipple_value` | 0x4260 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |
| `line_s0` | 0x4264 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |
| `line_s1` | 0x4268 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |
| `enhance` | 0x4274 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |
| `color_control` | 0x4278 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |
| `solid_rg` | 0x427c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |
| `solid_ba` | 0x4280 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |
| `poly_mode` | 0x4288 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |
| `round_mode` | 0x428c | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |
| `offset` | 0x4290 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |
| `fog_scale` | 0x4294 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |
| `fog_offset` | 0x4298 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |

### Register `point_s0`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `s0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |

### Register `point_t0`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `t0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |

### Register `point_s1`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `s1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |

### Register `point_t1`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `t1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |

### Register `triangle_stipple`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 19:16 | `y_shift` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |  |
| 3:0 | `x_shift` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |  |

### Register `point_size`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `width` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |
| 15:0 | `height` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |

### Register `point_minmax`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `max_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |
| 15:0 | `min_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |

### Register `line_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 17:16 | `end_type` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |  |
| 15:0 | `width` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |  |

### Register `line_stipple_config`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:2 | `stipple_scale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |  |
| 1:0 | `line_reset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |  |

### Register `line_stipple_value`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `stipple_value` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |  |

### Register `line_s0`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `s0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |  |

### Register `line_s1`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `s1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 21 |  |

### Register `enhance`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 1 | `fastsync_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |  |
| 0 | `deadlock_cntl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |  |

### Register `color_control`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 17:16 | `provoking_vertex` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 15:14 | `alpha3_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 13:12 | `rgb3_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 11:10 | `alpha2_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 9:8 | `rgb2_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 7:6 | `alpha1_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 5:4 | `rgb1_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 3:2 | `alpha0_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |
| 1:0 | `rgb0_shading` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 19 |  |

### Register `solid_rg`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `color_red` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |  |
| 15:0 | `color_green` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |  |

### Register `solid_ba`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `color_blue` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |  |
| 15:0 | `color_alpha` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 24 |  |

### Register `poly_mode`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 9:7 | `back_ptype` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |
| 6:4 | `front_ptype` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |
| 1:0 | `poly_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |

### Register `round_mode`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 5 | `alpha_clamp` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |
| 4 | `rgb_clamp` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |
| 3:2 | `color_round` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |
| 1:0 | `geometry_round` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 23 |  |

### Register `offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:16 | `y_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |
| 15:0 | `x_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 22 |  |

### Register `fog_scale`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `value` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |  |

### Register `fog_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `value` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 20 |  |
