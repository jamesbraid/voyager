<!-- generated from devices/gart/registers.toml by defs-gen - do not edit, change the source -->
<!-- SPDX-License-Identifier: BSD-3-Clause -->
<!-- defs-gen 2 -->
<!-- input sha256 7a4b4167ec5845ba012d8b67a0e3e5a3042273b13933438c5f1985fdd2536629 -->

# AGP and PCI GART registers of the R3xx-class FireGL boards

The chip-side translation of bus addresses: the AGP control word and the PCI GART table registers of the public Linux driver. The shipped IRIX driver parks the aperture and never touches the table registers, so these describe the chip for a guest that uses them, not what IRIX does.

Unit `gart`, macro prefix `R300_GART`.
Default source: Linux drivers/gpu/drm/radeon/radeon_reg.h.

Every item has a grade: established, inferred or unknown. A grade says how the item was derived from its source; it does not claim the item was measured on silicon.

## Registers

| Register | Offset | Access | Width | Count | Space | Reset | Grade | Source |
|---|---|---|---|---|---|---|---|---|
| `agp_cntl` | 0x174 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AGP_CNTL |
| `aic_cntl` | 0x1d0 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_CNTL |
| `aic_pt_base` | 0x1d8 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_PT_BASE |
| `aic_lo_addr` | 0x1dc | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_LO_ADDR |
| `aic_hi_addr` | 0x1e0 | rw | 32 |  |  | unknown | inferred | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_HI_ADDR |

### Register `agp_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 5:0 | `aperture_size` | inferred |  | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AGP_CNTL |  |

### Register `aic_cntl`

| Bits | Field | Grade | Values | Source | Description |
|---|---|---|---|---|---|
| 1 | `dis_out_of_pci_gart_access` | inferred |  | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_CNTL |  |
| 0 | `pcigart_translate_en` | inferred |  | Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_CNTL |  |

### Register `aic_pt_base`

### Register `aic_lo_addr`

### Register `aic_hi_addr`
