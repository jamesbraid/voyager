<!-- generated from devices/rbbm/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 121d3d64a25ddc59b53ac488a3c0da210fe1d0d5744d583b956791ca012d1ad2 -->

# register backbone manager registers of the R3xx-class FireGL boards

Host-visible backbone registers beyond the status, reset and wait registers the display unit already holds. Names and offsets come from the public Linux radeon header, so the grade is inferred; no shipped IRIX binary read here uses them.

Unit `rbbm`, macro prefix `R300_RBBM`.
Default source: Linux drivers/gpu/drm/radeon/radeon_reg.h.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `isync_cntl` | 0x1724 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/r500_reg.h, RADEON_ISYNC_CNTL |
| `guicntl` | 0x172c | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_RBBM_GUICNTL |

### Register `isync_cntl`

### Register `guicntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 1:0 | `host_data_swap` | inferred |  | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_RBBM_GUICNTL |  |
