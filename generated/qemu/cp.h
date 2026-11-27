/* generated from devices/cp/registers.toml by defs-gen - do not edit, change
 * the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 4 */
/* input sha256 292f6629f6377b5166461499fbd6206ddb0589ceeaf9ddb855fae73fe3716ed5 */
/* command processor registers of the R3xx-class FireGL boards */
/* Names are R300_CP_*; name source: public (AMD Radeon R5xx Acceleration,
 * revision 1.5). */
#ifndef HW_SGI_GPU_R300_CP_REGS_H
#define HW_SGI_GPU_R300_CP_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_CP_RB_RPTR_WR, 0x71c) /* established */
FIELD(R300_CP_RB_RPTR_WR, RB_RPTR_WR, 0, 23) /* established */

REG32(R300_CP_GUI_SRC_ADDR, 0x720) /* established */
FIELD(R300_CP_GUI_SRC_ADDR, CP_GUI_SRC_ADDR, 0, 32) /* established */

REG32(R300_CP_GUI_DST_ADDR, 0x724) /* established */
FIELD(R300_CP_GUI_DST_ADDR, CP_GUI_DST_ADDR, 0, 32) /* established */

REG32(R300_CP_GUI_COMMAND, 0x728) /* established */
FIELD(R300_CP_GUI_COMMAND, CP_GUI_COMMAND, 0, 32) /* established */

REG32(R300_CP_IB2_BASE, 0x730) /* established */
FIELD(R300_CP_IB2_BASE, IB2_BASE, 2, 30) /* established */

REG32(R300_CP_IB2_BUFSZ, 0x734) /* established */
FIELD(R300_CP_IB2_BUFSZ, IB2_BUFSZ, 0, 23) /* established */

REG32(R300_CP_IB_BASE, 0x738) /* established */
FIELD(R300_CP_IB_BASE, IB_BASE, 2, 30) /* established */

REG32(R300_CP_IB_BUFSZ, 0x73c) /* established */
FIELD(R300_CP_IB_BUFSZ, IB_BUFSZ, 0, 23) /* established */

REG32(R300_CP_CSQ_MODE, 0x744) /* established */
FIELD(R300_CP_CSQ_MODE, CSQ_PRIMARY_ENABLE, 31, 1) /* established */
FIELD(R300_CP_CSQ_MODE, CSQ_PRIMARY_MODE, 30, 1) /* established */
FIELD(R300_CP_CSQ_MODE, CSQ_INDIRECT1_ENABLE, 29, 1) /* established */
FIELD(R300_CP_CSQ_MODE, CSQ_INDIRECT1_MODE, 28, 1) /* established */
FIELD(R300_CP_CSQ_MODE, CSQ_INDIRECT2_ENABLE, 27, 1) /* established */
FIELD(R300_CP_CSQ_MODE, CSQ_INDIRECT2_MODE, 26, 1) /* established */
FIELD(R300_CP_CSQ_MODE, INDIRECT1_START, 8, 7) /* established */
FIELD(R300_CP_CSQ_MODE, INDIRECT2_START, 0, 7) /* established */

REG32(R300_CP_RESYNC_ADDR, 0x778) /* established */
FIELD(R300_CP_RESYNC_ADDR, RESYNC_ADDR, 0, 3) /* established */

REG32(R300_CP_RESYNC_DATA, 0x77c) /* established */
FIELD(R300_CP_RESYNC_DATA, RESYNC_DATA, 0, 32) /* established */

REG32(R300_CP_CSQ_AVAIL, 0x7b8) /* established */
FIELD(R300_CP_CSQ_AVAIL, CSQ_CNT_INDIRECT2, 20, 10) /* established */
FIELD(R300_CP_CSQ_AVAIL, CSQ_CNT_INDIRECT, 10, 10) /* established */
FIELD(R300_CP_CSQ_AVAIL, CSQ_CNT_PRIMARY, 0, 10) /* established */

REG32(R300_CP_VID_SRC_ADDR, 0x7c4) /* established */
FIELD(R300_CP_VID_SRC_ADDR, CP_VID_SRC_ADDR, 0, 32) /* established */

REG32(R300_CP_VID_DST_ADDR, 0x7c8) /* established */
FIELD(R300_CP_VID_DST_ADDR, CP_VID_DST_ADDR, 0, 32) /* established */

REG32(R300_CP_VID_COMMAND, 0x7cc) /* established */
FIELD(R300_CP_VID_COMMAND, CP_VID_COMMAND, 0, 32) /* established */

REG32(R300_CP_ME_RAM_RADDR, 0x7d8) /* established */
FIELD(R300_CP_ME_RAM_RADDR, ME_RAM_RADDR, 0, 8) /* established */

REG32(R300_CP_VP_ADDR_CNTL, 0x7e8) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, RING_VP_FETCH, 9, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, INDR1_VP_FETCH, 8, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, INDR2_VP_FETCH, 7, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, GUIDMA_VP_RD, 6, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, GUIDMA_VP_WR, 5, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, VIDDMA_VP_RD, 4, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, VIDDMA_VP_WR, 3, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, RPTR_VP_UPDATE, 2, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, SCRATCH_VP_WR, 1, 1) /* established */
FIELD(R300_CP_VP_ADDR_CNTL, SCRATCH_ALT_VP_WR, 0, 1) /* established */

REG32(R300_CP_CSQ_ADDR, 0x7f0) /* established */
FIELD(R300_CP_CSQ_ADDR, CSQ_ADDR, 2, 10) /* established */

REG32(R300_CP_CSQ_DATA, 0x7f4) /* established */
FIELD(R300_CP_CSQ_DATA, CSQ_DATA, 0, 32) /* established */

REG32(R300_CP_CSQ_STAT, 0x7f8) /* established */
FIELD(R300_CP_CSQ_STAT, CSQ_RPTR_INDIRECT, 20, 10) /* established */
FIELD(R300_CP_CSQ_STAT, CSQ_WPTR_PRIMARY, 10, 10) /* established */
FIELD(R300_CP_CSQ_STAT, CSQ_RPTR_PRIMARY, 0, 10) /* established */

REG32(R300_CP_CSQ2_STAT, 0x7fc) /* established */
FIELD(R300_CP_CSQ2_STAT, CSQ_WPTR_INDIRECT2, 20, 10) /* established */
FIELD(R300_CP_CSQ2_STAT, CSQ_RPTR_INDIRECT2, 10, 10) /* established */
FIELD(R300_CP_CSQ2_STAT, CSQ_WPTR_INDIRECT, 0, 10) /* established */

REG32(R300_CP_CSQ_APER_PRIMARY, 0x1000) /* established */
#define R300_CP_CSQ_APER_PRIMARY_COUNT 128
#define R300_CP_CSQ_APER_PRIMARY_STRIDE 0x4
FIELD(R300_CP_CSQ_APER_PRIMARY, CP_CSQ_APER_PRIMARY, 0, 32) /* established */

REG32(R300_CP_CSQ_APER_INDIRECT2, 0x1200) /* established */
#define R300_CP_CSQ_APER_INDIRECT2_COUNT 64
#define R300_CP_CSQ_APER_INDIRECT2_STRIDE 0x4
FIELD(R300_CP_CSQ_APER_INDIRECT2, CP_CSQ_APER_INDIRECT2, 0, 32) /* established */

REG32(R300_CP_CSQ_APER_INDIRECT, 0x1300) /* established */
#define R300_CP_CSQ_APER_INDIRECT_COUNT 64
#define R300_CP_CSQ_APER_INDIRECT_STRIDE 0x4
FIELD(R300_CP_CSQ_APER_INDIRECT, CP_CSQ_APER_INDIRECT, 0, 32) /* established */

#endif /* HW_SGI_GPU_R300_CP_REGS_H */
