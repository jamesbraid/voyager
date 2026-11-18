/* generated from devices/zb/registers.toml by defs-gen - do not edit, change the source */
/* SPDX-License-Identifier: BSD-3-Clause */
/* defs-gen 2 */
/* input sha256 eed73ffdc42030ce14850ecd8ff9b1a241d2c785d53276b348bfbdff9a247780 */
/* Z buffer and hierarchical Z registers of the R300 and R350 3D engine */
/* Names are R300_ZB_*; name source: public (AMD Radeon R3xx 3D Register Reference, revision 1.0). */
#ifndef HW_SGI_GPU_R300_ZB_REGS_H
#define HW_SGI_GPU_R300_ZB_REGS_H

#include "hw/core/registerfields.h"

REG32(R300_ZB_CNTL, 0x4f00) /* established */
FIELD(R300_ZB_CNTL, STENCIL_FRONT_BACK, 4, 1) /* established */
FIELD(R300_ZB_CNTL, ZSIGNED_COMPARE, 3, 1) /* established */
FIELD(R300_ZB_CNTL, ZWRITEENABLE, 2, 1) /* established */
FIELD(R300_ZB_CNTL, Z_ENABLE, 1, 1) /* established */
FIELD(R300_ZB_CNTL, STENCIL_ENABLE, 0, 1) /* established */

REG32(R300_ZB_ZSTENCILCNTL, 0x4f04) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILZFAIL_BF, 24, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILZPASS_BF, 21, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILFAIL_BF, 18, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILFUNC_BF, 15, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILZFAIL, 12, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILZPASS, 9, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILFAIL, 6, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, STENCILFUNC, 3, 3) /* established */
FIELD(R300_ZB_ZSTENCILCNTL, ZFUNC, 0, 3) /* established */

REG32(R300_ZB_STENCILREFMASK, 0x4f08) /* established */
FIELD(R300_ZB_STENCILREFMASK, STENCILWRITEMASK, 16, 8) /* established */
FIELD(R300_ZB_STENCILREFMASK, STENCILMASK, 8, 8) /* established */
FIELD(R300_ZB_STENCILREFMASK, STENCILREF, 0, 8) /* established */

REG32(R300_ZB_FORMAT, 0x4f10) /* established */
FIELD(R300_ZB_FORMAT, PEQ8, 5, 1) /* established */
FIELD(R300_ZB_FORMAT, INVERT, 4, 1) /* established */
FIELD(R300_ZB_FORMAT, DEPTHFORMAT, 0, 4) /* established */

REG32(R300_ZB_ZTOP, 0x4f14) /* established */
FIELD(R300_ZB_ZTOP, ZTOP, 0, 1) /* established */

REG32(R300_ZB_ZCACHE_CTLSTAT, 0x4f18) /* established */
FIELD(R300_ZB_ZCACHE_CTLSTAT, ZC_BUSY, 31, 1) /* established */
FIELD(R300_ZB_ZCACHE_CTLSTAT, ZC_FREE, 1, 1) /* established */
FIELD(R300_ZB_ZCACHE_CTLSTAT, ZC_FLUSH, 0, 1) /* established */

REG32(R300_ZB_DEPTHOFFSET, 0x4f20) /* established */
FIELD(R300_ZB_DEPTHOFFSET, DEPTHOFFSET, 5, 27) /* established */

REG32(R300_ZB_DEPTHPITCH, 0x4f24) /* established */
FIELD(R300_ZB_DEPTHPITCH, DEPTHENDIAN, 19, 2) /* established */
FIELD(R300_ZB_DEPTHPITCH, DEPTHMICROTILE, 17, 2) /* established */
FIELD(R300_ZB_DEPTHPITCH, DEPTHMACROTILE, 16, 1) /* established */
FIELD(R300_ZB_DEPTHPITCH, DEPTHPITCH, 2, 12) /* established */

REG32(R300_ZB_DEPTHCLEARVALUE, 0x4f28) /* established */
FIELD(R300_ZB_DEPTHCLEARVALUE, DEPTHCLEARVALUE, 0, 32) /* established */

REG32(R300_ZB_ZMASK_OFFSET, 0x4f30) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_ZB_ZMASK_PITCH, 0x4f34) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_ZB_ZMASK_WRINDEX, 0x4f38) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_ZB_ZMASK_DWORD, 0x4f3c) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_ZB_ZMASK_RDINDEX, 0x4f40) /* inferred; name source: public (Mesa 20.3.5 r300 driver, r300_reg.h) */

REG32(R300_ZB_DEPTHXY_OFFSET, 0x4f60) /* established */
FIELD(R300_ZB_DEPTHXY_OFFSET, DEPTHY_OFFSET, 17, 11) /* established */
FIELD(R300_ZB_DEPTHXY_OFFSET, DEPTHX_OFFSET, 1, 11) /* established */

#endif /* HW_SGI_GPU_R300_ZB_REGS_H */
