/* generated from devices/rbbm/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 121d3d64a25ddc59b53ac488a3c0da210fe1d0d5744d583b956791ca012d1ad2 */
/* register backbone manager registers of the R3xx-class FireGL boards */
/* Names are R300_RBBM_*; name source: public (Linux
 * drivers/gpu/drm/radeon/radeon_reg.h). */
#ifndef HW_SGI_GPU_R300_RBBM_REGS_H
#define HW_SGI_GPU_R300_RBBM_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_RBBM_ISYNC_CNTL, 0x1724) /* inferred */

REG32(R300_RBBM_GUICNTL, 0x172c) /* inferred */
FIELD(R300_RBBM_GUICNTL, HOST_DATA_SWAP, 0, 2) /* inferred */

#endif /* HW_SGI_GPU_R300_RBBM_REGS_H */
