<!-- generated from devices/cp/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 4 -->
<!-- input sha256 292f6629f6377b5166461499fbd6206ddb0589ceeaf9ddb855fae73fe3716ed5 -->

# command processor registers of the R3xx-class FireGL boards

Command processor registers from AMD's public R5xx acceleration guide, whose command processor chapter is the common R3xx to R5xx design. Registers already defined in the display unit (ring, mode, microcode, status) are not repeated.

Unit `cp`, macro prefix `R300_CP`.
Default source: AMD Radeon R5xx Acceleration, revision 1.5.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `rb_rptr_wr` | 0x71c | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 153 |
| `gui_src_addr` | 0x720 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |
| `gui_dst_addr` | 0x724 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |
| `gui_command` | 0x728 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |
| `ib2_base` | 0x730 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |
| `ib2_bufsz` | 0x734 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |
| `ib_base` | 0x738 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |
| `ib_bufsz` | 0x73c | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |
| `csq_mode` | 0x744 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |
| `resync_addr` | 0x778 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 154 |
| `resync_data` | 0x77c | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 154 |
| `csq_avail` | 0x7b8 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |
| `vid_src_addr` | 0x7c4 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |
| `vid_dst_addr` | 0x7c8 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |
| `vid_command` | 0x7cc | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 154 |
| `me_ram_raddr` | 0x7d8 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 151 |
| `vp_addr_cntl` | 0x7e8 | rw | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |
| `csq_addr` | 0x7f0 | w | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |
| `csq_data` | 0x7f4 | r | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |
| `csq_stat` | 0x7f8 | r | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |
| `csq2_stat` | 0x7fc | r | 32 |  |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |
| `csq_aper_primary` | 0x1000 | rw | 32 | 128 |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |
| `csq_aper_indirect2` | 0x1200 | rw | 32 | 64 |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |
| `csq_aper_indirect` | 0x1300 | rw | 32 | 64 |  | unknown | established | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |

### Register `rb_rptr_wr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 22:0 | `rb_rptr_wr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 153 |  |

### Register `gui_src_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_gui_src_addr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |  |

### Register `gui_dst_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_gui_dst_addr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |  |

### Register `gui_command`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_gui_command` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |  |

### Register `ib2_base`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:2 | `ib2_base` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |  |

### Register `ib2_bufsz`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 22:0 | `ib2_bufsz` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |  |

### Register `ib_base`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:2 | `ib_base` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |  |

### Register `ib_bufsz`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 22:0 | `ib_bufsz` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 150 |  |

### Register `csq_mode`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31 | `csq_primary_enable` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 30 | `csq_primary_mode` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 29 | `csq_indirect1_enable` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 28 | `csq_indirect1_mode` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 27 | `csq_indirect2_enable` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 26 | `csq_indirect2_mode` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 14:8 | `indirect1_start` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 6:0 | `indirect2_start` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |

### Register `resync_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 2:0 | `resync_addr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 154 |  |

### Register `resync_data`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `resync_data` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 154 |  |

### Register `csq_avail`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:20 | `csq_cnt_indirect2` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 19:10 | `csq_cnt_indirect` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |
| 9:0 | `csq_cnt_primary` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |

### Register `vid_src_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_vid_src_addr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |

### Register `vid_dst_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_vid_dst_addr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |

### Register `vid_command`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_vid_command` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 154 |  |

### Register `me_ram_raddr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 7:0 | `me_ram_raddr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 151 |  |

### Register `vp_addr_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 9 | `ring_vp_fetch` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 8 | `indr1_vp_fetch` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 7 | `indr2_vp_fetch` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 6 | `guidma_vp_rd` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 5 | `guidma_vp_wr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 4 | `viddma_vp_rd` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 3 | `viddma_vp_wr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 2 | `rptr_vp_update` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 1 | `scratch_vp_wr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |
| 0 | `scratch_alt_vp_wr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 155 |  |

### Register `csq_addr`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 11:2 | `csq_addr` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |

### Register `csq_data`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `csq_data` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 148 |  |

### Register `csq_stat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:20 | `csq_rptr_indirect` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |  |
| 19:10 | `csq_wptr_primary` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |  |
| 9:0 | `csq_rptr_primary` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 149 |  |

### Register `csq2_stat`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 29:20 | `csq_wptr_indirect2` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |
| 19:10 | `csq_rptr_indirect2` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |
| 9:0 | `csq_wptr_indirect` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |

### Register `csq_aper_primary`

Array of 128 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_csq_aper_primary` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |

### Register `csq_aper_indirect2`

Array of 64 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_csq_aper_indirect2` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |

### Register `csq_aper_indirect`

Array of 64 registers, stride 4.

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 31:0 | `cp_csq_aper_indirect` | established |  | AMD Radeon R5xx Acceleration, revision 1.5, p. 147 |  |
