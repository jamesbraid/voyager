/* generated from devices/gart/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 7a4b4167ec5845ba012d8b67a0e3e5a3042273b13933438c5f1985fdd2536629 */
/* AGP and PCI GART registers of the R3xx-class FireGL boards */
#ifndef R300_GART_GEN_H
#define R300_GART_GEN_H

#include <stdint.h>


/* agp_cntl: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AGP_CNTL */
#define R300_GART_AGP_CNTL_OFFSET                    0x174u /* inferred */
#define R300_GART_AGP_CNTL_APERTURE_SIZE_SHIFT       0 /* inferred */
#define R300_GART_AGP_CNTL_APERTURE_SIZE_MASK        0x3fu
#define R300_GART_AGP_CNTL_APERTURE_SIZE_INPLACE     (R300_GART_AGP_CNTL_APERTURE_SIZE_MASK << R300_GART_AGP_CNTL_APERTURE_SIZE_SHIFT)

/* aic_cntl: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_CNTL */
#define R300_GART_AIC_CNTL_OFFSET                    0x1d0u /* inferred */
#define R300_GART_AIC_CNTL_DIS_OUT_OF_PCI_GART_ACCESS_SHIFT 1 /* inferred */
#define R300_GART_AIC_CNTL_DIS_OUT_OF_PCI_GART_ACCESS_MASK 0x1u
#define R300_GART_AIC_CNTL_DIS_OUT_OF_PCI_GART_ACCESS_INPLACE (R300_GART_AIC_CNTL_DIS_OUT_OF_PCI_GART_ACCESS_MASK << R300_GART_AIC_CNTL_DIS_OUT_OF_PCI_GART_ACCESS_SHIFT)
#define R300_GART_AIC_CNTL_PCIGART_TRANSLATE_EN_SHIFT 0 /* inferred */
#define R300_GART_AIC_CNTL_PCIGART_TRANSLATE_EN_MASK 0x1u
#define R300_GART_AIC_CNTL_PCIGART_TRANSLATE_EN_INPLACE (R300_GART_AIC_CNTL_PCIGART_TRANSLATE_EN_MASK << R300_GART_AIC_CNTL_PCIGART_TRANSLATE_EN_SHIFT)

/* aic_pt_base: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_PT_BASE */
#define R300_GART_AIC_PT_BASE_OFFSET                 0x1d8u /* inferred */

/* aic_lo_addr: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_LO_ADDR */
#define R300_GART_AIC_LO_ADDR_OFFSET                 0x1dcu /* inferred */

/* aic_hi_addr: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_AIC_HI_ADDR */
#define R300_GART_AIC_HI_ADDR_OFFSET                 0x1e0u /* inferred */

#endif /* R300_GART_GEN_H */
