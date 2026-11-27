/* generated from devices/pipes/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 e34450f0e3a1cdb6a394d0c3d5325db659d980425921c14e955301c3fb584e8d */
/* per-pipe select and Z-buffer registers of the R3xx-class FireGL boards */
/* Names are R300_PIPES_*; name source: imported-unchecked. */
#ifndef HW_SGI_GPU_R300_PIPES_REGS_H
#define HW_SGI_GPU_R300_PIPES_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_PIPES_SU_REG_DEST, 0x42c8) /* established */
FIELD(R300_PIPES_SU_REG_DEST, PIPE1, 3, 1) /* established */
FIELD(R300_PIPES_SU_REG_DEST, PIPE0, 0, 1) /* established */

REG32(R300_PIPES_ZB_BW_CNTL, 0x4f1c) /* established */
FIELD(R300_PIPES_ZB_BW_CNTL, HIZ_MIN, 1, 1) /* established */
FIELD(R300_PIPES_ZB_BW_CNTL, HIZ_ENABLE, 0, 1) /* established */

REG32(R300_PIPES_ZB_HIZ_OFFSET, 0x4f44) /* established */
FIELD(R300_PIPES_ZB_HIZ_OFFSET, HIZ_OFFSET, 2, 15) /* established */

REG32(R300_PIPES_ZB_HIZ_WRINDEX, 0x4f48) /* established */
FIELD(R300_PIPES_ZB_HIZ_WRINDEX, INDEX, 2, 15) /* established */

REG32(R300_PIPES_ZB_HIZ_DWORD, 0x4f4c) /* established */

REG32(R300_PIPES_ZB_HIZ_RDINDEX, 0x4f50) /* established */
FIELD(R300_PIPES_ZB_HIZ_RDINDEX, INDEX, 2, 15) /* established */

REG32(R300_PIPES_ZB_HIZ_PITCH, 0x4f54) /* established */
FIELD(R300_PIPES_ZB_HIZ_PITCH, PITCH, 4, 10) /* established */

REG32(R300_PIPES_ZB_ZPASS_DATA, 0x4f58) /* established */

REG32(R300_PIPES_ZB_ZPASS_ADDR, 0x4f5c) /* established */
FIELD(R300_PIPES_ZB_ZPASS_ADDR, ADDRESS, 2, 30) /* established */

#endif /* HW_SGI_GPU_R300_PIPES_REGS_H */
