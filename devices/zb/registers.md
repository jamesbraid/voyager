<!-- generated from devices/zb/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 eed73ffdc42030ce14850ecd8ff9b1a241d2c785d53276b348bfbdff9a247780 -->

# Z buffer and hierarchical Z registers of the R300 and R350 3D engine

Layout of the block from AMD's public register reference; the chip is documented as the R3xx family, which includes the R300 and R350. Registers already defined in the display or pipes unit are not repeated.

Unit `zb`, macro prefix `R300_ZB`.
Default source: AMD Radeon R3xx 3D Register Reference, revision 1.0.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `cntl` | 0x4f00 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |
| `zstencilcntl` | 0x4f04 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |
| `stencilrefmask` | 0x4f08 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |
| `format` | 0x4f10 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |
| `ztop` | 0x4f14 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 99 |
| `zcache_ctlstat` | 0x4f18 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 |
| `depthoffset` | 0x4f20 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |
| `depthpitch` | 0x4f24 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |
| `depthclearvalue` | 0x4f28 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |
| `zmask_offset` | 0x4f30 | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_ZB_ZMASK_OFFSET |
| `zmask_pitch` | 0x4f34 | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_ZB_ZMASK_PITCH |
| `zmask_wrindex` | 0x4f38 | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_ZB_ZMASK_WRINDEX |
| `zmask_dword` | 0x4f3c | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_ZB_ZMASK_DWORD |
| `zmask_rdindex` | 0x4f40 | rw | 32 |  |  | unknown | inferred | Mesa 20.3.5 r300 driver, r300_reg.h, R300_ZB_ZMASK_RDINDEX |
| `depthxy_offset` | 0x4f60 | rw | 32 |  |  | unknown | established | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |

### Register `cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 4 | `stencil_front_back` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |  |
| 3 | `zsigned_compare` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |  |
| 2 | `zwriteenable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |  |
| 1 | `z_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |  |
| 0 | `stencil_enable` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |  |

### Register `zstencilcntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 26:24 | `stencilzfail_bf` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 23:21 | `stencilzpass_bf` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 20:18 | `stencilfail_bf` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 17:15 | `stencilfunc_bf` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 14:12 | `stencilzfail` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 11:9 | `stencilzpass` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 8:6 | `stencilfail` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 5:3 | `stencilfunc` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |
| 2:0 | `zfunc` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 98 |  |

### Register `stencilrefmask`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 23:16 | `stencilwritemask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |  |
| 15:8 | `stencilmask` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |  |
| 7:0 | `stencilref` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 |  |

### Register `format`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 5 | `peq8` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |  |
| 4 | `invert` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |  |
| 3:0 | `depthformat` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 |  |

### Register `ztop`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 0 | `ztop` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 99 |  |

### Register `zcache_ctlstat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `zc_busy` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 |  |
| 1 | `zc_free` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 |  |
| 0 | `zc_flush` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 |  |

### Register `depthoffset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:5 | `depthoffset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |

### Register `depthpitch`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 20:19 | `depthendian` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |
| 18:17 | `depthmicrotile` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |
| 16 | `depthmacrotile` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |
| 13:2 | `depthpitch` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |

### Register `depthclearvalue`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `depthclearvalue` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 93 |  |

### Register `zmask_offset`

### Register `zmask_pitch`

### Register `zmask_wrindex`

### Register `zmask_dword`

### Register `zmask_rdindex`

### Register `depthxy_offset`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 27:17 | `depthy_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |
| 11:1 | `depthx_offset` | established |  | AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 94 |  |
