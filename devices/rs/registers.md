<!-- generated from devices/rs/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 edb28dd4e62253a48534c96dbcd487bceba38c394a9adcbf775935987876084e -->

# rasteriser interpolator registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `rs`, macro prefix `R300_RS`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `count` | 0x4300 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |
| `inst_count` | 0x4304 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |
| `ip` | 0x4310 | rw | 32 | 8 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |
| `inst` | 0x4330 | rw | 32 | 16 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |

### Register `count`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 18 | `hires_en` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 17:12 | `w_addr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 11 | `w_count` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 10:7 | `ic_count` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 6:0 | `it_count` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |

### Register `inst_count`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 7:5 | `tx_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 4 | `w_en` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 3:0 | `inst_count` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |

### Register `ip`

Array of 8 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 24:22 | `sel_q` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 21:19 | `sel_r` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 18:16 | `sel_t` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 15:13 | `sel_s` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 12:9 | `col_fmt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 8:6 | `col_ptr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |
| 5:0 | `tex_ptr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 33 |  |

### Register `inst`

Array of 16 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 24:23 | `col_bias` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 22 | `tex_adj` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 21:17 | `col_addr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 16:14 | `col_cn` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 13:11 | `col_id` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 10:6 | `tex_addr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 5:3 | `tex_cn` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
| 2:0 | `tex_id` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 32 |  |
