/* generated from devices/gart/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 7a4b4167ec5845ba012d8b67a0e3e5a3042273b13933438c5f1985fdd2536629 */
/* AGP and PCI GART registers of the R3xx-class FireGL boards */
/* Names are R300_GART_*; name source: public (Linux drivers/gpu/drm/radeon/radeon_reg.h). */
#ifndef HW_SGI_GPU_R300_GART_REGS_H
#define HW_SGI_GPU_R300_GART_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_GART_AGP_CNTL, 0x174) /* inferred */
FIELD(R300_GART_AGP_CNTL, APERTURE_SIZE, 0, 6) /* inferred */

REG32(R300_GART_AIC_CNTL, 0x1d0) /* inferred */
FIELD(R300_GART_AIC_CNTL, DIS_OUT_OF_PCI_GART_ACCESS, 1, 1) /* inferred */
FIELD(R300_GART_AIC_CNTL, PCIGART_TRANSLATE_EN, 0, 1) /* inferred */

REG32(R300_GART_AIC_PT_BASE, 0x1d8) /* inferred */

REG32(R300_GART_AIC_LO_ADDR, 0x1dc) /* inferred */

REG32(R300_GART_AIC_HI_ADDR, 0x1e0) /* inferred */

#endif /* HW_SGI_GPU_R300_GART_REGS_H */
