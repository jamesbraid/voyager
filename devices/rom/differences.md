# Option ROM differences: sg2 against sg3, and 6.5.22 against 6.5.30

What differs between the FireGL X1 image (`sg2.bin`) and the FireGL X2 image (`sg3.bin`) of IRIX 6.5.22, and what differs between the 6.5.22 and 6.5.30 images of each board. The tables and routines behind each line are in [images-and-tables.md](images-and-tables.md), [init-scripts.md](init-scripts.md), [init-sequence.md](init-sequence.md) and [int10-vesa-services.md](int10-vesa-services.md). The three 6.5.30 images against each other (sg2, sg3, `sg3a.bin`) are in [option-roms.md](../../software/ucode/option-roms.md#how-the-images-differ).

Grades are explained in [README.md](README.md#grades). The routine comparison used below is a match of each routine's instruction sequence with addresses and immediate values ignored, over the routines reachable from the init entry and from the entries of the video interrupt, VBE and vendor function tables (475 routines in sg2 6.5.22, 472 in sg3 6.5.22, 388 in sg2 6.5.30, 400 in sg3 6.5.30): **established** for the counts, with the limit that a changed constant does not show in it.

## sg2 against sg3

### In 6.5.22

**Established.**

| | `sg2.bin` | `sg3.bin` |
|---|---|---|
| PCI device | 0x4e47 (R300 GL, FireGL X1) | 0x4e4b (R350 GL, FireGL X2) |
| Date, part number, version | 2003/12/02, 113-99002-113, VER001.113.039.000 | 2003/12/30, 113-A10503-107, VER001.107.039.005 |
| Title and product strings | `FGL 9700`, `FireGL X1-256p` | `FGL 9800`, `FireGL X2-256p` |
| Default memory and system clock (PLL info, 10 kHz units) | 27600 and 32400 | 31700 and 37800 |
| Table values | the sg2 tables | the value changes listed in [init-scripts.md](init-scripts.md#what-differs-in-sg3bin-6522): memory-controller read control, indirect memory-controller data, one more PLL write, the index 0x2d clock word, register 0xaa0 |
| External TMDS table (slot +0x58) | absent | present, with the routine that sends it |
| DDC transfer | software bit-bang of `GPIO_VGA_DDC` and `GPIO_DVI_DDC` | the chip's second I2C engine at 0x2e0 to 0x2e8 |
| Init order of the transmitter set-up | none | after the main set-up, before the mode-3 set |

**Established.** 435 of the 475 routines reached in sg2 have an identical-shape twin in sg3 (and 40 do not). The 40 are the DDC transport and the sg3 transmitter set-up (about 30), the two entries, and a handful of routines near the mode set and the character code (`0x33c`, `0x71c2`, `0x8a03`, `0x8aab`). The mode list, the 57 mode records, the video interrupt table (with the same functions at the same positions), the VBE dispatch table (same 13 functions) and the vendor table (same 15 functions) are the same in both images. In particular **both support mode 0x107**.

**Established.** The CRT info table is identical in the two 6.5.22 images (`88 78`); in the 6.5.30 images sg3 and `sg3a.bin` hold `aa 55` and sg2 keeps `88 78`. Whether the board difference between the two images is only the memory-controller values, the clocks and the transmitter is **inferred** from the table and routine differences: the memory-controller values fit a retuned memory configuration (a different part or speed), the clocks are higher on the X2, and the external TMDS table matches the X2's second digital output. No source here states the board differences.

### In 6.5.30

The 6.5.30 pair differ in the same places as above (the 6.5.30 account is in [option-roms.md](../../software/ucode/option-roms.md#how-the-images-differ)), plus the register 0x188 split, the `DAC_MACRO_CNTL` value (0xa0a against 0x808) and the CRT info bytes. 360 of the 388 routines reached in sg2 6.5.30 have an identical-shape twin in sg3 6.5.30.

## 6.5.22 against 6.5.30

**Established**, by decoding the tables and comparing the routines; each row applies to both boards unless a board is named.

| Area | 6.5.22 | 6.5.30 |
|---|---|---|
| File size, content end | 45056 bytes, 0xa87a (sg2) and 0xa842 (sg3) | 40960 bytes, 0x938e and 0x969e |
| Build dates | 2003/12/02 (sg2), 2003/12/30 (sg3) | 2004/05/04, 2004/05/06 (and `sg3a.bin` 2005/04/06) |
| Versions | 113.039.000 (sg2), 107.039.005 (sg3) | 114.039.001, 110.039.000 (and 201.211.039.000) |
| PCIR code revision | 0x171, 0x16b | 0x172, 0x16e |
| DFP info slot (+0x34) | present (internal TMDS PLL table) | absent |
| Init, register values | [init-scripts.md](init-scripts.md#what-changed-from-6522-to-6530) | `BUS_CNTL` bit 30 cleared; `FCP_CNTL` 0; the internal TMDS block replaced by flat-panel register clears; sg3 only: register 0x188 split, `DAC_MACRO_CNTL` 0xa0a |
| Init, steps | detects the monitor over DDC (sg2: GPIO bit-bang; sg3: I2C engine); repeats a mode-3 set after the main set-up; no host bridge fix; sg3 transmitter set-up from the entry | no detection at init; no extra mode set; host bridge fix (configuration offset 0x70 bit 9 of an Intel 8086:2552 device); sg3 transmitter set-up from the main set-up |
| Set mode (`int 0x10` AH = 0) | extra monitor checks | none |
| Vendor functions 0x01, 0x09, 0x0a, 0x0b | different code (0x0b calls the DDC bit-bang primitive in sg2) | different code (0x0b calls `0x5dbb`) |
| `int 0x10` handlers 0x10 (sg2), 0x03 and 0x0c (sg3), 0x1c | different code, small | |
| Unchanged | the register script and PLL script interpreters, the register accessors, the 56-mode list, the 57 mode records, the VBE handlers 0x00 to 0x0a, 0x10 and 0x15 and the vendor table's real entries, the 8x16 font | |

**Established.** 345 of the 475 routines reached in sg2 6.5.22 have an identical-shape twin in sg2 6.5.30 (388 routines); in sg3, 346 of 472 against 400. Most of the unmatched routines are the DDC and detection code (49 in the init path of sg2 6.5.22, see [init-sequence.md](init-sequence.md#monitor-detection-6522-only)), and the 6.5.30 side's own DDC transport (a routine group around `0x5a02` to `0x5dbb` in sg2 6.5.30). The pieces of the mode set and several scroll and text routines near `0x1d20` and `0x2000` are changed in small ways that were not read.

**Inferred.** The size drop of 4 KB to 5 KB is the removal of the 6.5.22 detection and bit-bang DDC code and of the DFP table, together with rework of the DDC read that remains for VBE function 0x15. The reason for any of the changes is **unknown**: nothing in the images or the install states it. The README shipped with the patch that carries the 6.5.22 images (patch SG0005448, a roll-up) lists among its fixes "New card version support" and, from the earlier patches it replaces, "sg2flash fails" and "DDC probing broken for channel 0"; none of these entries names a ROM revision or a table, so they are context only and tie nothing here to a cause (**unknown**).

**Unknown.** Which of the changes a board depends on: whether the 6.5.22 init's monitor detection affects the mode IRIX gets (the kernel sets 0x107 whatever the monitor), and what the removed internal TMDS and PLL programming does on a digital output (the 6.5.30 ROM still sets the external transmitter on the X2).
