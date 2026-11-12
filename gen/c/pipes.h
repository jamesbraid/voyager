/* generated from defs/pipes.toml by defs-gen - do not edit, change the source */
/* per-pipe select and Z-buffer registers of the R3xx-class FireGL boards */
#ifndef VOYAGER_GEN_H
#define VOYAGER_GEN_H

#include <stdint.h>


/*
 * Selects the pixel pipes that receive register writes. Writes reach both pipes unless this register restricts them.
 */
/* su_reg_dest: rw32, reset 0xf; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 45 */
#define VOYAGER_SU_REG_DEST_OFFSET                   0x42c8u /* established */
#define VOYAGER_SU_REG_DEST_PIPE1_SHIFT              3 /* established */
#define VOYAGER_SU_REG_DEST_PIPE1_MASK               0x1u
#define VOYAGER_SU_REG_DEST_PIPE1_INPLACE            (VOYAGER_SU_REG_DEST_PIPE1_MASK << VOYAGER_SU_REG_DEST_PIPE1_SHIFT)
#define VOYAGER_SU_REG_DEST_PIPE0_SHIFT              0 /* established */
#define VOYAGER_SU_REG_DEST_PIPE0_MASK               0x1u
#define VOYAGER_SU_REG_DEST_PIPE0_INPLACE            (VOYAGER_SU_REG_DEST_PIPE0_MASK << VOYAGER_SU_REG_DEST_PIPE0_SHIFT)

/*
 * Z buffer bandwidth control. Hierarchical Z is switched on and off here.
 */
/* zb_bw_cntl: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 92 */
#define VOYAGER_ZB_BW_CNTL_OFFSET                    0x4f1cu /* established */
#define VOYAGER_ZB_BW_CNTL_HIZ_MIN_SHIFT             1 /* established */
#define VOYAGER_ZB_BW_CNTL_HIZ_MIN_MASK              0x1u
#define VOYAGER_ZB_BW_CNTL_HIZ_MIN_INPLACE           (VOYAGER_ZB_BW_CNTL_HIZ_MIN_MASK << VOYAGER_ZB_BW_CNTL_HIZ_MIN_SHIFT)
#define VOYAGER_ZB_BW_CNTL_HIZ_ENABLE_SHIFT          0 /* established */
#define VOYAGER_ZB_BW_CNTL_HIZ_ENABLE_MASK           0x1u
#define VOYAGER_ZB_BW_CNTL_HIZ_ENABLE_INPLACE        (VOYAGER_ZB_BW_CNTL_HIZ_ENABLE_MASK << VOYAGER_ZB_BW_CNTL_HIZ_ENABLE_SHIFT)

/*
 * Base of the hierarchical Z RAM in each pipe, in dwords. The Z RAM address of pixel (x, y) is the base in bits 16:3, plus the Y block index times the pitch, plus the X block index. One dword holds an 8-bit Z value for each of four 4x4 blocks.
 */
/* zb_hiz_offset: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 */
#define VOYAGER_ZB_HIZ_OFFSET_OFFSET                 0x4f44u /* established */
#define VOYAGER_ZB_HIZ_OFFSET_HIZ_OFFSET_SHIFT       2 /* established */
#define VOYAGER_ZB_HIZ_OFFSET_HIZ_OFFSET_MASK        0x7fffu
#define VOYAGER_ZB_HIZ_OFFSET_HIZ_OFFSET_INPLACE     (VOYAGER_ZB_HIZ_OFFSET_HIZ_OFFSET_MASK << VOYAGER_ZB_HIZ_OFFSET_HIZ_OFFSET_SHIFT)

/*
 * Dword index for writes to the Z RAM data port. Each write to the data port advances it by two dwords, because the data goes to both pipes.
 */
/* zb_hiz_wrindex: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 */
#define VOYAGER_ZB_HIZ_WRINDEX_OFFSET                0x4f48u /* established */
#define VOYAGER_ZB_HIZ_WRINDEX_INDEX_SHIFT           2 /* established */
#define VOYAGER_ZB_HIZ_WRINDEX_INDEX_MASK            0x7fffu
#define VOYAGER_ZB_HIZ_WRINDEX_INDEX_INPLACE         (VOYAGER_ZB_HIZ_WRINDEX_INDEX_MASK << VOYAGER_ZB_HIZ_WRINDEX_INDEX_SHIFT)

/*
 * Z RAM data port. One write carries four 8-bit values for a 2x2 group of 4x4 blocks; the byte for block (X, Y) sits at bit 16 times X bit 2 plus 8 times Y bit 2.
 */
/* zb_hiz_dword: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 95 */
#define VOYAGER_ZB_HIZ_DWORD_OFFSET                  0x4f4cu /* established */

/*
 * Dword index for reads of the Z RAM data port. Each read advances it by two dwords.
 */
/* zb_hiz_rdindex: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 */
#define VOYAGER_ZB_HIZ_RDINDEX_OFFSET                0x4f50u /* established */
#define VOYAGER_ZB_HIZ_RDINDEX_INDEX_SHIFT           2 /* established */
#define VOYAGER_ZB_HIZ_RDINDEX_INDEX_MASK            0x7fffu
#define VOYAGER_ZB_HIZ_RDINDEX_INDEX_INPLACE         (VOYAGER_ZB_HIZ_RDINDEX_INDEX_MASK << VOYAGER_ZB_HIZ_RDINDEX_INDEX_SHIFT)

/*
 * Row pitch of the hierarchical Z RAM, used with the base to address a block.
 */
/* zb_hiz_pitch: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 96 */
#define VOYAGER_ZB_HIZ_PITCH_OFFSET                  0x4f54u /* established */
#define VOYAGER_ZB_HIZ_PITCH_PITCH_SHIFT             4 /* established */
#define VOYAGER_ZB_HIZ_PITCH_PITCH_MASK              0x3ffu
#define VOYAGER_ZB_HIZ_PITCH_PITCH_INPLACE           (VOYAGER_ZB_HIZ_PITCH_PITCH_MASK << VOYAGER_ZB_HIZ_PITCH_PITCH_SHIFT)

/*
 * Count of samples that passed the Z test since this register was last written. A write sets the count to the value written. Each pipe keeps its own count.
 */
/* zb_zpass_data: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97-98 */
#define VOYAGER_ZB_ZPASS_DATA_OFFSET                 0x4f58u /* established */

/*
 * Writing a dword address makes each selected pipe write its occlusion count to memory at that address. A write that reaches both pipes makes both write to the same address in no guaranteed order, so a driver selects one pipe at a time.
 */
/* zb_zpass_addr: rw32, reset 0x0; AMD Radeon R3xx 3D Register Reference, revision 1.0, p. 97 */
#define VOYAGER_ZB_ZPASS_ADDR_OFFSET                 0x4f5cu /* established */
#define VOYAGER_ZB_ZPASS_ADDR_ADDRESS_SHIFT          2 /* established */
#define VOYAGER_ZB_ZPASS_ADDR_ADDRESS_MASK           0x3fffffffu
#define VOYAGER_ZB_ZPASS_ADDR_ADDRESS_INPLACE        (VOYAGER_ZB_ZPASS_ADDR_ADDRESS_MASK << VOYAGER_ZB_ZPASS_ADDR_ADDRESS_SHIFT)

#endif /* VOYAGER_GEN_H */
