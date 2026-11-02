# Register offsets against AMD's published references

Every register offset that `fglrx.o` and `fglrx_drv.so` reach through the register aperture
([registers.md](registers.md), [inventory/mmio.tsv](inventory/mmio.tsv)), looked up in two AMD documents. The
full result, one row per offset, is [amd-register-match.tsv](amd-register-match.tsv): the earlier name, the AMD
register, its offset and aperture, width, access, field layout, page, and a verdict.

## Sources

- **R3xx**: *Radeon R3xx 3D Register Reference Guide*, revision 1.0, 25 February 2008 (AMD, file
  `R3xx_3D_Registers.pdf`, 99 pages). It lists 207 registers of the 3D block of the R300 family (blocks VAP, GB,
  GA, SU, SC, RS, US, TX, FG, CB, ZB and others), each with `MMReg` offset, width, access and a field table. It
  is the document for this chip. It has no display, clock, bus, interrupt or 2D registers.
- **M56**: *M56 Register Reference Guide, Technical Reference Manual*, rev 0.03o, P/N RRG-216M56-03oOEM
  (AMD, 2007, 460 pages). M56 is a later part (the R5xx generation, PCI Express). Its registers carry an aperture
  name and offset (`HIDEC`, `VIPDEC`, `DISPDEC`, `CGDEC`, `MCIND`, `PCIEIND`) rather than the single `MMReg` form,
  and the page numbers in the table are the printed ones (chapter 2).

Both are listed in [sources/INDEX.md](sources/INDEX.md).

## How a row was matched

The offset of each of the 201 rows of `mmio.tsv` was looked up in the R3xx document (an offset inside one of its
register ranges) and in the M56 document (a register at the same offset in `HIDEC`, `VIPDEC`, `DISPDEC`,
`MCDEC` or `CGDEC`), and the earlier name was looked up by name in both. The access sites were then read against
the field layout in the disassembly of `fglrx_drv.so`, with the routines named in [registers.md](registers.md).

M56 is not the R300 or R350. The same offset can hold a different register in it, and a register the R3xx kept at
one offset can live elsewhere. So an M56 entry counts for a row only when its name and offset both agree with the
earlier name, and a disagreement is recorded as a difference between generations, not as a contradiction.

## Result

| | rows |
|---|---|
| Offsets examined | 201 |
| Same name and offset in a document | 16 |
| Promoted: name, layout and the IRIX access agree | 11 |
| Matched but not promoted: the access or the generation does not fit | 5 |
| Offset listed under a name the earlier lane did not have, access not confirmed (0x194) | 1 |
| Another register at the offset in the later part (0x300 to 0x32c in part, 0x350 to 0x358) | 10 |
| Earlier name found at a different offset in the later part | 9 |
| Not listed in either document | 165 |

Promoted:

- Documented by the R3xx guide, so for this chip: `GB_TILE_CONFIG` 0x4018 (page 30), `GA_SOFT_RESET` 0x429c (page 24),
  `VAP_CNTL_STATUS` 0x2140 (page 72).
- Documented by M56 only, so the layout is a later part's: `I2C_CNTL_1` 0x94 (page 2-118), `CONFIG_MEMSIZE` 0xf8 (2-59),
  `GPIOPAD_MASK` 0x198, `GPIOPAD_A` 0x19c, `GPIOPAD_EN` 0x1a0 and `GPIOPAD_Y` 0x1a4 (all 2-147), `CAP0_TRIG_CNTL`
  0x950 (2-129), `VIPH_CONTROL` 0xc40 (2-122).

A promotion of an M56 register says the name and field layout match and nothing IRIX does with it contradicts
them. It does not show the R300 or R350 has identical reset values or reserved bits.

## What the documents settle

- **0x4018 `GB_TILE_CONFIG`** (R3xx page 30). `fglrx_attach` stores 0x17: ENABLE (bit 0) = 1, PIPE_COUNT (3:1) = 3, which
  the document lists as R300 (0 is RV350), and TILE_SIZE (5:4) = 1, 16 pixels. The document lists only R300 (3) and RV350 (0) for the
  pipe count, so it does not say what an R350 takes.
- **0x429c `GA_SOFT_RESET`** (R3xx page 24): SOFT_RESET_COUNT (15:0), the cycles reset is asserted, default 256, and it also
  resets the colour-buffer block. The store of 1024 asks for 1024 cycles. The earlier entry rested on Mesa's comment;
  the AMD document now says the same.
- **0x2140 `VAP_CNTL_STATUS`** (R3xx page 72): this settles the two-name conflict. The Linux R300 table says
  `VAP_CNTL_STATUS`, `radeon_reg.h` says `SE_CNTL_STATUS` (the R200 name). The R3xx document has only `VAP_CNTL_STATUS`:
  VC_SWAP (1:0, the endian swap), PVS_BYPASS (8) and read-only busy bits (11, 24 to 31). `FGLInitCP`'s store of zero clears
  the swap and the bypass and leaves the busy bits alone. This is the one earlier name corrected.
- **0x198, 0x19c, 0x1a0, 0x1a4 `GPIOPAD_*`** (M56 page 2-147): the 18 GPIO pads (bits 17:0, plus GENERICD at bit 18) as
  mask (use as GPIO), output level, output enable and a read-only input level. `SGIGLXSwapBarrierInit` sets bit 0 of
  the mask and clears bit 0 of the enable: pad 0 is made a GPIO input, which is the swap-barrier line. The routine at
  0x420f00 sets bits 13:12 of the mask and read-modify-writes bits 13:12 of the level and the enable, so pads 12 and 13
  are driven. The routine at 0x421080 clears bit 25 of `CRTC_GEN_CNTL` (0x50), waits until bit 16 of 0x1a4 reads
  clear and then set (five reads per pass), and writes bit 25 back: the CRTC is restarted on a rising edge of pad 16.
  All of these bits are inside the document's 18-bit fields, and the input register is only read.
- **0x1a4 and the ROM choice**: the document says the register is the level read back from the GPIO pads. So bits
  7:6 (bit i is pad i, inferred), which `sg2flash` uses to choose `sg3.bin` or `sg3a.bin`, are the levels of pads 7 and 6 on the board. Which strap or
  pull on the board drives them is wiring and is not in the document or the software.
- **0xf8 `CONFIG_MEMSIZE`**: a byte count the BIOS leaves for the driver, with bits 19:0 hardwired to zero. The X module
  shifts it right by 10, which gives kilobytes if the word is a byte count.

## Matched but not promoted

- **0xe0 `CONFIG_CNTL`**: IRIX reads bits 19:16 and increments them. M56 lists those bits as reserved, so the document
  gives the read no meaning.
- **0xe4 `CONFIG_XSTRAP`**: `fglrx.o` tests bit 27. M56 defines only bits 9:1.
- **0x30**: M56 calls it `PCIE_INDEX` (a PCI Express indirect index, 10:0). The earlier names are `BUS_CNTL` (the AGP-era
  register) or `PCIE_INDEX`. M56 is a PCI Express part, so it cannot choose for an R300 or R350.
- **0x3c4, 0x3c8**: M56 lists `SEQ8_IDX` and `DAC_W_INDEX`, 8-bit VGA ports. IRIX moves them as 32-bit words in the same
  save and restore group as `FP2_GEN_CNTL` (0x288) and `CRTC2_GEN_CNTL` (0x3f8). The earlier conflict between
  these and `FP_H2_SYNC_STRT_WID`, `FP_V2_SYNC_STRT_WID` stays open. The 8-bit and 3-bit fields fit poorly with whole-word
  moves, so M56's names are less likely here; the row stays `located`.
- **0x194** has `GPIO_STRENGTH` in M56 (SN 3:0, SP 7:4, page 2-147). [registers.md](registers.md) infers that name from the
  neighbouring GPIO pad registers and two access sites it traces to the aperture; the layout is a later part's, so the
  name is not proved for the R300 or R350. The row is not counted as promoted here.

## Differences between generations

Ten rows (0x300 to 0x32c in part, 0x350, 0x354, 0x358) hold another register in M56: the VGA block (`VGA_RENDER_CONTROL`
at 0x300 and so on), where the R300 family has the second CRTC. Nine more names exist in M56 at another offset:
`CLOCK_CNTL_INDEX` and `CLOCK_CNTL_DATA` at `CGDEC` 0xe008 and 0xe00c instead of 0x8 and 0xc, `GEN_INT_CNTL` and
`GEN_INT_STATUS` in the VIP block at 0x100 and 0x104 instead of 0x40 and 0x44, `CRTC_EXT_CNTL` at 0xe054, the memory
controller registers behind an index (`MCIND`) instead of 0x148 and 0x150, and `REVISION_ID` in the configuration
mirror. IRIX uses the R3xx-era offsets (it writes `GEN_INT_STATUS` at 0x44 and the PLL index at 0x8), so these are
facts about M56's layout and none of them changes an earlier name.

## Still not located

0x294, 0x878, 0x87c, 0x880, 0x884, 0x1700 and 0x26ac are in neither document. Routes tried now: both documents by offset and
by name, and the R5xx acceleration guide's text for those offsets (no match). The 2D engine and cache registers in
`mmio.tsv` (0x1404 to 0x16e8, 0x3428, 0x342c) and 0x1c3c are also in neither: the R3xx guide covers only the 3D block
and M56 has no 2D registers. *Radeon R5xx Acceleration* v1.5 is the document that covers the 2D engine; matching them
against it is the next route.
