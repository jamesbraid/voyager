<!-- generated from devices/tx/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 3182bec562aa83900a02fc72f4b5bb6a3ce852f0d98aaeaf2f0e8b15f70b0ef8 -->

# texture unit registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `tx`, macro prefix `R300_TX`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `invaltags` | 0x4100 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |
| `enable` | 0x4104 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |
| `filter0` | 0x4400 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |
| `filter1` | 0x4440 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 51 |
| `format0` | 0x4480 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |
| `format1` | 0x44c0 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |
| `format2` | 0x4500 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |
| `offset` | 0x4540 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |
| `chroma_key` | 0x4580 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |
| `border_color` | 0x45c0 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |

### Register `invaltags`

### Register `enable`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 15 | `tex_15_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 14 | `tex_14_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 13 | `tex_13_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 12 | `tex_12_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 11 | `tex_11_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 10 | `tex_10_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 9 | `tex_9_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 8 | `tex_8_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 7 | `tex_7_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 6 | `tex_6_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 5 | `tex_5_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 4 | `tex_4_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 3 | `tex_3_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 2 | `tex_2_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 1 | `tex_1_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
| 0 | `tex_0_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |

### Register `filter0`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:28 | `id` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 20:17 | `max_mip_level` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 16:15 | `vol_filter` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 14:13 | `mip_filter` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 12:11 | `min_filter` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 10:9 | `mag_filter` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 8:6 | `clamp_r` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 5:3 | `clamp_t` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |
| 2:0 | `clamp_s` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 50 |  |

### Register `filter1`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 14 | `mc_coord_truncate` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 51 |  |
| 12:3 | `lod_bias` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 51 |  |
| 2 | `mc_round` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 51 |  |
| 1:0 | `chroma_key_mode` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 51 |  |

### Register `format0`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `txpitch_en` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 30 | `projected` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 29:26 | `num_levels` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 25:22 | `txdepth` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 21:11 | `txheight` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 10:0 | `txwidth` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |

### Register `format1`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:27 | `cache` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 26:25 | `tex_coord_type` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 24 | `swap_yuv` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 23:22 | `yuv_to_rgb` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 21 | `gamma` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 20:18 | `sel_blue` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 17:15 | `sel_green` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 14:12 | `sel_red` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 11:9 | `sel_alpha` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 8 | `signed_comp3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 7 | `signed_comp2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 6 | `signed_comp1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 5 | `signed_comp0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |
| 4:0 | `txformat` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 52 |  |

### Register `format2`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 13:0 | `txpitch` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |  |

### Register `offset`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:5 | `txoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |  |
| 4:3 | `micro_tile` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |  |
| 2 | `macro_tile` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |  |
| 1:0 | `endian_swap` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 56 |  |

### Register `chroma_key`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `chroma_key` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |

### Register `border_color`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `border_color` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 48 |  |
