<!-- generated from devices/su/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 27e3a56aa0329a5f09ed7dc6f590fcc82a75e49b2b88a9c924ec399bc0eb3377 -->

# setup unit registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `su`, macro prefix `R300_SU`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `tex_wrap` | 0x42a0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |
| `poly_offset_front_scale` | 0x42a4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |
| `poly_offset_front_offset` | 0x42a8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |
| `poly_offset_back_scale` | 0x42ac | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |
| `poly_offset_back_offset` | 0x42b0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |
| `poly_offset_enable` | 0x42b4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |
| `cull_mode` | 0x42b8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |
| `depth_scale` | 0x42c0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |
| `depth_offset` | 0x42c4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |

### Register `tex_wrap`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `t7c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 30 | `t7c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 29 | `t7c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 28 | `t7c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 27 | `t6c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 26 | `t6c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 25 | `t6c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 24 | `t6c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 23 | `t5c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 22 | `t5c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 21 | `t5c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 20 | `t5c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 19 | `t4c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 18 | `t4c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 17 | `t4c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 16 | `t4c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 15 | `t3c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 14 | `t3c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 13 | `t3c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 12 | `t3c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 11 | `t2c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 10 | `t2c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 9 | `t2c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 8 | `t2c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 7 | `t1c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 6 | `t1c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 5 | `t1c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 4 | `t1c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 3 | `t0c3` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 2 | `t0c2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 1 | `t0c1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 0 | `t0c0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |

### Register `poly_offset_front_scale`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `scale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |  |

### Register `poly_offset_front_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |  |

### Register `poly_offset_back_scale`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `scale` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |  |

### Register `poly_offset_back_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |  |

### Register `poly_offset_enable`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 2 | `para_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |  |
| 1 | `back_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |  |
| 0 | `front_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 44 |  |

### Register `cull_mode`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 2 | `face` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |  |
| 1 | `cull_back` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |  |
| 0 | `cull_front` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |  |

### Register `depth_scale`

### Register `depth_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 43 |  |
