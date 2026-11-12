# per-pipe select and Z-buffer registers of the R3xx-class FireGL boards

<!-- generated from defs/pipes.toml by defs-gen - do not edit, change the source -->

Per-pipe destination select, occlusion counters and the hierarchical Z RAM of the R3xx-class boards. The chip has two pixel pipes; the registers below decide which of them a write reaches.

Unit `pipes`, macro prefix `VOYAGER`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `su_reg_dest` | 0x42c8 | rw | 32 |  |  | 0xf | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |
| `zb_bw_cntl` | 0x4f1c | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 92 |
| `zb_hiz_offset` | 0x4f44 | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |
| `zb_hiz_wrindex` | 0x4f48 | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |
| `zb_hiz_dword` | 0x4f4c | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |
| `zb_hiz_rdindex` | 0x4f50 | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |
| `zb_hiz_pitch` | 0x4f54 | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |
| `zb_zpass_data` | 0x4f58 | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97-98 |
| `zb_zpass_addr` | 0x4f5c | rw | 32 |  |  | 0x0 | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 |

### Register `su_reg_dest`

Selects the pixel pipes that receive register writes. Writes reach both pipes unless this register restricts them.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 3 | `pipe1` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |
| 0 | `pipe0` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 |  |

### Register `zb_bw_cntl`

Z buffer bandwidth control. Hierarchical Z is switched on and off here.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 1 | `hiz_min` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 92 |  |
| 0 | `hiz_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 92 |  |

### Register `zb_hiz_offset`

Base of the hierarchical Z RAM in each pipe, in dwords. The Z RAM address of pixel (x, y) is the base in bits 16:3, plus the Y block index times the pitch, plus the X block index. One dword holds an 8-bit Z value for each of four 4x4 blocks.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 16:2 | `hiz_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |  |

### Register `zb_hiz_wrindex`

Dword index for writes to the Z RAM data port. Each write to the data port advances it by two dwords, because the data goes to both pipes.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 16:2 | `index` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |  |

### Register `zb_hiz_dword`

Z RAM data port. One write carries four 8-bit values for a 2x2 group of 4x4 blocks; the byte for block (X, Y) sits at bit 16 times X bit 2 plus 8 times Y bit 2.

### Register `zb_hiz_rdindex`

Dword index for reads of the Z RAM data port. Each read advances it by two dwords.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 16:2 | `index` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |  |

### Register `zb_hiz_pitch`

Row pitch of the hierarchical Z RAM, used with the base to address a block.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 13:4 | `pitch` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |  |

### Register `zb_zpass_data`

Count of samples that passed the Z test since this register was last written. A write sets the count to the value written. Each pipe keeps its own count.

### Register `zb_zpass_addr`

Writing a dword address makes each selected pipe write its occlusion count to memory at that address. A write that reaches both pipes makes both write to the same address in no guaranteed order, so a driver selects one pipe at a time.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:2 | `address` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 |  |
