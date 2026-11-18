/* generated from devices/rbbm/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 121d3d64a25ddc59b53ac488a3c0da210fe1d0d5744d583b956791ca012d1ad2 */
/* register backbone manager registers of the R3xx-class FireGL boards */
#ifndef R300_RBBM_GEN_H
#define R300_RBBM_GEN_H

#include <stdint.h>


/* isync_cntl: rw32, reset unknown; Linux drivers/gpu/drm/radeon/r500_reg.h, RADEON_ISYNC_CNTL */
#define R300_RBBM_ISYNC_CNTL_OFFSET                  0x1724u /* inferred */

/* guicntl: rw32, reset unknown; Linux drivers/gpu/drm/radeon/radeon_reg.h, RADEON_RBBM_GUICNTL */
#define R300_RBBM_GUICNTL_OFFSET                     0x172cu /* inferred */
#define R300_RBBM_GUICNTL_HOST_DATA_SWAP_SHIFT       0 /* inferred */
#define R300_RBBM_GUICNTL_HOST_DATA_SWAP_MASK        0x3u
#define R300_RBBM_GUICNTL_HOST_DATA_SWAP_INPLACE     (R300_RBBM_GUICNTL_HOST_DATA_SWAP_MASK << R300_RBBM_GUICNTL_HOST_DATA_SWAP_SHIFT)

#endif /* R300_RBBM_GEN_H */
