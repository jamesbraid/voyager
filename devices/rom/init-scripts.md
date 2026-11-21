# Option ROM register scripts, 6.5.22 images

The register-initialisation tables the 6.5.22 `sg2.bin` and `sg3.bin` hand to the ROM's script interpreters, decoded entry by entry, and what changed against the 6.5.30 images. The order in which the init code runs these tables is in [init-sequence.md](init-sequence.md); the image layout is in [images-and-tables.md](images-and-tables.md).

Grades: **established** is read from the image bytes; **software expectation** is a name or layout taken from the public Linux radeon driver (`drivers/gpu/drm/radeon/radeon_reg.h` at the pinned commit of `references/code/linux`); **inferred** and **unknown** are as in [README.md](README.md#grades).

## How the tables are read

**Established.** The interpreters are byte for byte the same code as in the 6.5.30 images (their bodies match instruction for instruction once addresses are ignored), so the opcode meanings recorded in [option-roms.md](../../software/ucode/option-roms.md#routines-of-the-init-path) hold here:

- Register script (`0x6b6c` in sg2, `0x6b2a` in sg3): a word with bit 15 clear names a register in bits 12:0. Bit 13 set means the direct window (`P` plus the low byte of the offset), clear means the index and data ports (`P+0` and `P+4`). Bit 14 set means read, AND with the first dword, OR with the second, write back; clear means write the dword that follows. Bit 15 set with bit 13 clear is a wait of the following word in timer ticks. A zero word ends the table and writes 0 to `P+8`. `P` is the card's I/O base.
- PLL script (`0x7096` in sg2, `0x7054` in sg3): a byte with bit 7 set is a wait or poll code (1 is 0x168 ticks, 2 is five times 0x952 ticks, 3 and 4 poll PLL register 0x14, 5 is a conditional reset sequence); a byte with bit 6 set is a lane read-modify-write (lane byte, AND byte and OR byte follow); a plain byte is a dword write to the PLL register in its low six bits. PLL registers go through `P+8` (index, with bit 7 set) and `P+0xc` (data).

The decode below was produced by `retools/tools/voyager/option_rom.py walk`, which uses the same layout, and spot-checked against the machine code and against a CPU emulation of the ROM's own code ([init-sequence.md](init-sequence.md#method)): the emulated run issues exactly these writes, in this order. The "Linux name" column is the public name of the offset in the pinned `radeon_reg.h` (**software expectation**); a blank means the pinned header has no name for that offset. `R300_MC_IND_*` is the memory-controller indirect window: the index register takes the target in its low bits and the data register carries the value.

PLL index names are the public Linux ones (`RADEON_*` PLL indices). A PLL index the table lists without a name is not named in the pinned header.

## sg2.bin (FireGL X1, PCI 1002:4e47), 6.5.22

### ASIC init 1 (header slot +0x0c): table at 0x2a7, 46 entries, run first

| op | register | Linux name | access | value |
|---|---|---|---|---|
| write | 0x30 | BUS_CNTL | direct | 0x5133a2a0 |
| rmw | 0x30 | BUS_CNTL | direct | AND 0xffffffef, OR 0x0 |
| write | 0xec |  | indexed | 0x444f |
| write | 0x50 | CRTC_GEN_CNTL | direct | 0x4000000 |
| rmw | 0x50 | CRTC_GEN_CNTL | direct | AND 0xffffffff, OR 0x0 |
| write | 0x58 | DAC_CNTL | direct | 0xff000002 |
| write | 0x280 | DAC_EXT_CNTL | indexed | 0x0 |
| write | 0x7c | DAC_CNTL2 | direct | 0x0 |
| write | 0x888 | TV_PRE_DAC_MUX_CNTL | indexed | 0x0 |
| rmw | 0x58 | DAC_CNTL | direct | AND 0xffffffff, OR 0x0 |
| rmw | 0x168 |  | indexed | AND 0x7fffffff, OR 0x0 |
| rmw | 0x188 |  | indexed | AND 0xffffffff, OR 0x923def |
| write | 0x178 |  | indexed | 0x7020 |
| write | 0x17c | R300_MC_READ_CNTL_AB | indexed | 0xcb30cb3 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x124 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0xcb30cb3 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x118 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x4f460d6 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x119 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x9999aaaa |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11b |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x9999aaaa |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11d |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x9999aaaa |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11f |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x9999aaaa |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x121 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x9249 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11a |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x141557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11c |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x141557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11e |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x141557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x120 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x141557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x126 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x40001303 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x12f |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x6db6db |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x0 |
| rmw | 0xd00 | DISP_MISC_CNTL | indexed | AND 0xffffff, OR 0x5b000000 |
| rmw | 0x1c0 | SEPROM_CNTL1 | indexed | AND 0xffffff, OR 0x6000000 |
| write | 0xaa0 |  | indexed | 0x60012375 |
| write | 0x118 |  | indexed | 0x8bbbb |
| rmw | 0x1c0 | SEPROM_CNTL1 | indexed | AND 0xffffff, OR 0x6000000 |

### ASIC init 2 (slot +0x4e): table at 0x3de, 32 entries

| op | register | Linux name | access | value |
|---|---|---|---|---|
| write | 0x140 | MEM_CNTL | indexed | 0x2a |
| write | 0x184 |  | indexed | 0x1e3c78f |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x122 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x554f |
| write | 0x14c | MC_AGP_LOCATION | indexed | 0x27ff2000 |
| write | 0x148 | MC_FB_LOCATION | indexed | 0x1fff0000 |
| write | 0x180 |  | indexed | 0x3000000 |
| write | 0x154 | MEM_INIT_LAT_TIMER | indexed | 0x20000000 |
| write | 0x18c |  | indexed | 0x2f302f30 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x123 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x2f302f30 |
| write | 0x144 | MEM_TIMING_CNTL | indexed | 0x1a292b13 |
| write | 0x188 |  | indexed | 0x923def |
| rmw | 0x188 |  | indexed | AND 0xfffeffff, OR 0x0 |
| write | 0x158 | SDRAM_MODE_REG | indexed | 0x31420042 |
| write | 0x910 | FCP_CNTL | indexed | 0x4 |
| write | 0x3e8 |  | indexed | 0xf4474 |
| rmw | 0x10 | BIOS_0_SCRATCH | indexed | AND 0xfffffffb, OR 0x4 |
| rmw | 0xd64 | DISP_OUTPUT_CNTL | indexed | AND 0xfffffbff, OR 0x0 |
| write | 0x2a4 | TMDS_TRANSMITTER_CNTL | indexed | 0x10000040 |
| write | 0x2a8 | TMDS_PLL_CNTL | indexed | 0xb01d7 |
| rmw | 0xd64 | DISP_OUTPUT_CNTL | indexed | AND 0xffffffff, OR 0xa |
| rmw | 0x800 | TV_MASTER_CNTL | indexed | AND 0xffffffff, OR 0x40000000 |
| rmw | 0xd10 |  | indexed | AND 0xefffffff, OR 0x10000000 |
| rmw | 0x4dc | OV0_FLAG_CNTL | indexed | AND 0xfffffeff, OR 0x100 |
| rmw | 0x88c | TV_DAC_CNTL | indexed | AND 0xff00ffff, OR 0x780000 |
| rmw | 0xd04 | DAC_MACRO_CNTL | indexed | AND 0xfffff0f0, OR 0x808 |
| write | 0x2f0 | GRPH_BUFFER_CNTL | indexed | 0x20204f4f |
| write | 0x3f0 | GRPH2_BUFFER_CNTL | indexed | 0x20204f4f |
| rmw | 0x1a0 | GPIOPAD_EN | indexed | AND 0xffffffff, OR 0x1 |
| rmw | 0x198 | GPIOPAD_MASK | indexed | AND 0xffffffff, OR 0x1 |
| rmw | 0x19c | GPIOPAD_A | indexed | AND 0xffffffff, OR 0x1 |

### Memory-controller trim, "init 4": table at 0x4d2, 25 entries (no header slot; the memory-mode sequence runs it)

| op | register | Linux name | access | value |
|---|---|---|---|---|
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11a |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x151557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11c |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x151557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11e |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x151557ff |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x120 |
| write | 0x1fc | R300_MC_IND_DATA | indexed | 0x151557ff |
| wait | | | 0xa ticks |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11a |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11c |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11e |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x120 |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11a |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11c |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x11e |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |
| write | 0x1f8 | R300_MC_IND_INDEX | indexed | 0x120 |
| rmw | 0x1fc | R300_MC_IND_DATA | indexed | AND 0xfcffffff, OR 0x0 |

### PLL init (slot +0x46): table at 0x589, 64 entries

| op | PLL index | Linux name | value |
|---|---|---|---|
| write | 0x1 | CLK_PIN_CNTL | 0x8004 |
| write | 0xd | SCLK_CNTL | 0x0 |
| write | 0x35 |  | 0x707 |
| write | 0x12 | MCLK_CNTL | 0xaa3f0000 |
| write | 0x8 | VCLK_ECP_CNTL | 0x0 |
| write | 0x2d |  | 0x2040000 |
| write | 0x1f | MCLK_MISC | 0x3000 |
| script code 2 | | | |
| write | 0x3 | PPLL_REF_DIV | 0xc |
| write | 0xa | M_SPLL_REF_FB_DIV | 0x1302904 |
| write | 0x24 |  | 0x1 |
| write | 0x25 |  | 0x0 |
| write | 0xe | MPLL_CNTL | 0x4007c03 |
| write | 0xc | SPLL_CNTL | 0x400bc33 |
| write | 0x2 | PPLL_CNTL | 0xa403 |
| write | 0x10 |  | 0xff |
| script code 2 | | | |
| rmw lane 0 | 0xe | MPLL_CNTL | AND 0xfd, OR 0x0 |
| script code 1 | | | |
| script code 2 | | | |
| rmw lane 0 | 0xe | MPLL_CNTL | AND 0xfe, OR 0x0 |
| script code 2 | | | |
| write | 0x12 | MCLK_CNTL | 0xaa3f1212 |
| script code 2 | | | |
| rmw lane 0 | 0x10 |  | AND 0xfe, OR 0x0 |
| script code 1 | | | |
| rmw lane 0 | 0x10 |  | AND 0xfd, OR 0x0 |
| script code 2 | | | |
| rmw lane 0 | 0x10 |  | AND 0xfb, OR 0x0 |
| script code 1 | | | |
| rmw lane 0 | 0x10 |  | AND 0xf7, OR 0x0 |
| script code 2 | | | |
| rmw lane 0 | 0x10 |  | AND 0xef, OR 0x0 |
| script code 1 | | | |
| rmw lane 0 | 0x10 |  | AND 0xdf, OR 0x0 |
| script code 2 | | | |
| rmw lane 0 | 0x10 |  | AND 0xbf, OR 0x0 |
| script code 1 | | | |
| rmw lane 0 | 0x10 |  | AND 0x7f, OR 0x0 |
| script code 2 | | | |
| script code 2 | | | |
| rmw lane 0 | 0xc | SPLL_CNTL | AND 0xfe, OR 0x0 |
| script code 1 | | | |
| script code 2 | | | |
| rmw lane 0 | 0xc | SPLL_CNTL | AND 0xfd, OR 0x0 |
| script code 2 | | | |
| write | 0x15 |  | 0xe1000007 |
| write | 0xd | SCLK_CNTL | 0x2 |
| script code 2 | | | |
| rmw lane 0 | 0x8 | VCLK_ECP_CNTL | AND 0x3c, OR 0x0 |
| rmw lane 0 | 0x2 | PPLL_CNTL | AND 0xff, OR 0x3 |
| write | 0x4 | PPLL_DIV_0 | 0x3005a |
| write | 0x5 | PPLL_DIV_1 | 0x30065 |
| write | 0x6 | PPLL_DIV_2 | 0x30065 |
| write | 0x7 | PPLL_DIV_3 | 0x30065 |
| rmw lane 0 | 0x2 | PPLL_CNTL | AND 0xfd, OR 0x0 |
| script code 1 | | | |
| script code 2 | | | |
| rmw lane 0 | 0x2 | PPLL_CNTL | AND 0xfe, OR 0x0 |
| script code 2 | | | |
| rmw lane 0 | 0x8 | VCLK_ECP_CNTL | AND 0x3c, OR 0x3 |
| script code 2 | | | |
| rmw lane 2 | 0x2d |  | AND 0xff, OR 0x4 |
| rmw lane 0 | 0x1 | CLK_PIN_CNTL | AND 0xcf, OR 0x10 |

### Dynamic clock script (slot +0x52): table at 0x65b, 9 entries

| op | PLL index | Linux name | value |
|---|---|---|---|
| write | 0x14 |  | 0xa0001100 |
| rmw lane 1 | 0x1 | CLK_PIN_CNTL | AND 0xff, OR 0x80 |
| rmw lane 1 | 0x35 |  | AND 0xfc, OR 0x2 |
| rmw lane 1 | 0x35 |  | AND 0xff, OR 0x4 |
| script code 2 | | | |
| write | 0x2d |  | 0xefc80 |
| write | 0x8 | VCLK_ECP_CNTL | 0x3 |
| rmw lane 0 | 0x1f | MCLK_MISC | AND 0xff, OR 0x1 |
| script code 2 | | | |

Wait entries in the PLL tables appear as "script code N" rows (codes as listed above); the lane read-modify-write rows carry the lane in the first column.

## What differs in sg3.bin, 6.5.22

**Established.** Against the sg2 tables above, the sg3 tables differ only in these values (the structure is the same; sg3's PLL init has one extra entry):

| Table | Entry | sg2 | sg3 |
|---|---|---|---|
| ASIC init 1 | register 0x17c and indirect data at index 0x124 | 0xcb30cb3 | 0xdb30db3 |
| ASIC init 1 | indirect data at indexes 0x119, 0x11b, 0x11d, 0x11f | 0x9999aaaa | 0x9999555e |
| ASIC init 1 | indirect data at indexes 0x11a, 0x11c, 0x11e, 0x120 | 0x141557ff | 0x161557ff |
| ASIC init 1 | register 0xaa0 | 0x60012375 | 0x6000037d |
| Init 4 | indirect data at indexes 0x11a, 0x11c, 0x11e, 0x120, first pass | 0x151557ff | 0x171557ff |
| Init 4 | the second pass (AND 0xfcffffff) | OR 0 | OR 0x2000000 |
| PLL init | index 0xa (`M_SPLL_REF_FB_DIV`) | 0x1302904 | 0x1382f04 |
| PLL init | index 0x2d | not written | one extra write of 0x2040000 |
| Dynamic clock | index 0x2d | 0xefc80 | 0x771efcc0 |

ASIC init 2 is identical in both 6.5.22 images (including the `DAC_MACRO_CNTL` (0xd04) OR value of 0x808, which becomes 0xa0a only in the 6.5.30 sg3). The values of the memory-controller indirect registers are the memory configuration of the board; what each field means is **unknown**. The indexes are not register numbers of their own: xf86-video-ati 6.14.6 `radeon_reg.h` (lines 1127 to 1130) gives `R300_MC_IND_INDEX` an address mask of 0x3f and a write-enable bit 8, so the ROM's indexes 0x118 to 0x12f write the indirect registers 0x18 to 0x2f with write-enable set, and the final index 0 clears it (**established** for the encoding as the public driver defines it; the ROM's use is the same shape, **inferred**). One of them has a public name: the same header (line 1133) calls indirect register 0x24 `R300_MC_READ_CNTL_CD_mcind`, the counterpart of the direct `R300_MC_READ_CNTL_AB` (0x17c), and the ROM writes both with one value (0xcb30cb3 in the 6.5.22 sg2, 0xdb30db3 in sg3), so index 0x124 is that register (**inferred**: the name is public, the pairing is the ROM's). The direct 0x180 is the public `R300_MC_INIT_MISC_LAT_TIMER` (line 1063; the pinned Linux header lacks it). The other indirect registers (0x18 to 0x23 and 0x25 to 0x2f) and the direct 0xec, 0x118, 0x168, 0x178, 0x184, 0x188, 0x18c, 0x2f4, 0x3e8, 0xaa0 and 0xd10 have no name in any source searched: the AMD R3xx 3D guide rev 1.0 and the R5xx *Acceleration* guide rev 1.1 to 1.5 list only 3D, command-processor and packet registers; the M56 register reference lists other registers at 0x118 and 0x178 (`MC_PT0_*` indirect registers of its own, a later memory controller), so its offsets are not the R300's; and the Linux, Mesa, xf86-video-ati (6.8.2 and 6.14.6), radeonhd and avivo headers have no entry. They stay **unknown**: no shipped software or published source names them.

## What changed from 6.5.22 to 6.5.30

**Established**, by decoding the same tables in the 6.5.30 images:

| Table | Entry | 6.5.22 | 6.5.30 |
|---|---|---|---|
| ASIC init 1 (both) | register 0x30 (`BUS_CNTL` in the public header) | 0x5133a2a0 | 0x1133a2a0 (bit 30 clear) |
| ASIC init 1 (sg3 only) | register 0x188 | one read-modify-write, OR 0x923def | a write of 0x923def, then OR 0x10000 |
| ASIC init 2 (both) | register 0x910 (`FCP_CNTL`) | 0x4 | 0x0 |
| ASIC init 2 (both) | the internal TMDS block | `TMDS_TRANSMITTER_CNTL` (0x2a4) = 0x10000040; `TMDS_PLL_CNTL` (0x2a8) = 0xb01d7; `DISP_OUTPUT_CNTL` (0xd64) OR 0xa | removed; replaced by register 0x27c AND 0xffffffcf, `FP_GEN_CNTL` (0x284) = 0, `FP_HORZ_STRETCH` (0x28c) = 0, `FP_VERT_STRETCH` (0x290) = 0 |
| ASIC init 2 (sg3 only) | `DAC_MACRO_CNTL` (0xd04) OR | 0x808 | 0xa0a |

Everything else in the five tables is unchanged. **Inferred:** the 6.5.30 ROM stops programming the chip's internal TMDS transmitter and PLL at power-up and leaves the flat-panel registers cleared; the 6.5.22 ROM sets the transmitter and the PLL value 0xb01d7, which is also the value its DFP table lists for both of its clock ranges ([images-and-tables.md](images-and-tables.md#dfp-info-slot-0x34-6522-only)) and the value its VBE mode set writes to `TMDS_PLL_CNTL` ([int10-vesa-services.md](int10-vesa-services.md#vbe-function-0x02-set-mode)). Why the later ROM drops it is **unknown**.
