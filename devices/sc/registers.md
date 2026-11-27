<!-- generated from devices/sc/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 4 -->
<!-- input sha256 89ce7846f26fd566b7c475d2dcfe95762d0b08c56fc2d0da243a116e94ab78e4 -->

# scan converter registers (clip rectangles, scissors, Hi-Z enable) of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `sc`, macro prefix `R300_SC`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `hyperz_en` | 0x43a4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 41 |
| `edgerule` | 0x43a8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |
| `clip_0_a` | 0x43b0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_0_b` | 0x43b4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_1_a` | 0x43b8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_1_b` | 0x43bc | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_2_a` | 0x43c0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_2_b` | 0x43c4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_3_a` | 0x43c8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |
| `clip_3_b` | 0x43cc | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |
| `clip_rule` | 0x43d0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |
| `scissor0` | 0x43e0 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |
| `scissor1` | 0x43e4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |
| `screendoor` | 0x43e8 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |

### Register `hyperz_en`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 6 | `hz_z0max` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 41 |  |
| 5 | `hz_z0min` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 41 |  |
| 4:2 | `hz_adj` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 41 |  |
| 1 | `hz_max` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 41 |  |
| 0 | `hz_en` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 41 |  |

### Register `edgerule`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:25 | `er_line_bt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |
| 24:20 | `er_line_tb` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |
| 19:15 | `er_line_rl` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |
| 14:10 | `er_line_lr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |
| 9:5 | `er_point` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |
| 4:0 | `er_tri` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |

### Register `clip_0_a`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 25:13 | `ys0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |  |
| 12:0 | `xs0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |  |

### Register `clip_0_b`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 25:13 | `ys1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |  |
| 12:0 | `xs1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 35 |  |

### Register `clip_1_a`

### Register `clip_1_b`

### Register `clip_2_a`

### Register `clip_2_b`

### Register `clip_3_a`

### Register `clip_3_b`

### Register `clip_rule`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 15:0 | `clip_rule` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 36 |  |

### Register `scissor0`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 25:13 | `ys0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |  |
| 12:0 | `xs0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |  |

### Register `scissor1`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 25:13 | `ys1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |  |
| 12:0 | `xs1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |  |

### Register `screendoor`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:0 | `screendoor` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 42 |  |
