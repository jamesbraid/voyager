<!-- generated from devices/us/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 80becab3c0b740e55268ba2bbbe58a6b232c7a30e094a0abfae67f17f4dc7017 -->

# fragment shader (unified shader) registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `us`, macro prefix `R300_US`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `config` | 0x4600 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |
| `pixsize` | 0x4604 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |
| `code_offset` | 0x4608 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |
| `code_addr` | 0x4610 | rw | 32 | 4 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |
| `tex_inst` | 0x4620 | rw | 32 | 32 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |
| `out_fmt` | 0x46a4 | rw | 32 | 4 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |
| `w_fmt` | 0x46b4 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |
| `alu_rgb_addr` | 0x46c0 | rw | 32 | 64 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |
| `alu_alpha_addr` | 0x47c0 | rw | 32 | 64 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |
| `alu_rgb_inst` | 0x48c0 | rw | 32 | 64 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |
| `alu_alpha_inst` | 0x49c0 | rw | 32 | 64 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |
| `alu_const_r` | 0x4c00 | rw | 32 | 32 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 70 |
| `alu_const_g` | 0x4c04 | rw | 32 | 32 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |
| `alu_const_b` | 0x4c08 | rw | 32 | 32 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |
| `alu_const_a` | 0x4c0c | rw | 32 | 32 |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |

### Register `config`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 3 | `first_tex` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 2:0 | `nlevel` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |

### Register `pixsize`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 4:0 | `pix_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |  |

### Register `code_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:18 | `tex_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 17:13 | `tex_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 12:6 | `alu_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 5:0 | `alu_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |

### Register `code_addr`

Array of 4 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23 | `w_out` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 22 | `rgba_out` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 21:17 | `tex_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 16:12 | `tex_start` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 11:6 | `alu_size` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |
| 5:0 | `alu_start` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 66 |  |

### Register `tex_inst`

Array of 32 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 18 | `omod` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |  |
| 17:15 | `inst` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |  |
| 14:11 | `tex_id` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |  |
| 10:6 | `dst_addr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |  |
| 4:0 | `src_addr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 68 |  |

### Register `out_fmt`

Array of 4 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 19:16 | `out_sign` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |  |
| 15:14 | `c3_sel` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |  |
| 13:12 | `c2_sel` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |  |
| 11:10 | `c1_sel` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |  |
| 9:8 | `c0_sel` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |  |
| 4:0 | `out_fmt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 67 |  |

### Register `w_fmt`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 2 | `w_src` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |  |
| 1:0 | `w_fmt` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |  |

### Register `alu_rgb_addr`

Array of 64 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 30:29 | `target` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |
| 28:26 | `omask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |
| 25:23 | `wmask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |
| 22:18 | `addrd` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |
| 17:12 | `addr2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |
| 11:6 | `addr1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |
| 5:0 | `addr0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 61 |  |

### Register `alu_alpha_addr`

Array of 64 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:28 | `stat_we` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 27 | `omask_w` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 26:25 | `target` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 24 | `omask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 23 | `wmask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 22:18 | `addrd` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 17:12 | `addr2` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 11:6 | `addr1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |
| 5:0 | `addr0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 58 |  |

### Register `alu_rgb_inst`

Array of 64 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `nop` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 30 | `clamp` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 29:27 | `omod` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 26:23 | `op` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 22:21 | `srcp_op` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 20:19 | `mod_c` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 18:14 | `sel_c` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 13:12 | `mod_b` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 11:7 | `sel_b` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 6:5 | `mod_a` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |
| 4:0 | `sel_a` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 62 |  |

### Register `alu_alpha_inst`

Array of 64 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 30 | `clamp` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 29:27 | `omod` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 26:23 | `op` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 22:21 | `srcp_op` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 20:19 | `mod_c` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 18:14 | `sel_c` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 13:12 | `mod_b` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 11:7 | `sel_b` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 6:5 | `mod_a` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |
| 4:0 | `sel_a` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 59 |  |

### Register `alu_const_r`

Array of 32 registers, stride 16.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:0 | `kr` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 70 |  |

### Register `alu_const_g`

Array of 32 registers, stride 16.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:0 | `kg` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |  |

### Register `alu_const_b`

Array of 32 registers, stride 16.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:0 | `kb` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |  |

### Register `alu_const_a`

Array of 32 registers, stride 16.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:0 | `ka` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 69 |  |
