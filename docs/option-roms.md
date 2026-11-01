# Option ROM images

The three video option ROM images of the IRIX 6.5.30 Onyx4 install: `sg2.bin` (FireGL X1, R300), `sg3.bin` and `sg3a.bin` (FireGL X2, R350). All offsets are byte offsets into the image. `scripts/option_rom.py` reproduces every table below from the images alone (`dump`, `walk`, `diff`).

Labels: **established** (read in the image, or in the whole body of a routine), **inferred** (a reading, with its reasoning), **unknown**. The layouts come from public sources, so a decoded meaning is a cross-check from the public chips, not proof of what the board or the IRIX driver does: the PCI Local Bus Specification's expansion ROM structures as written in EDK2 `Pci22.h`, the Linux radeon driver's `radeon_combios.c` and `radeon_bios.c` (the ATI table header and tables), and Linux `uapi/video/uvesafb.h` (the VESA information block); see [sources/INDEX.md](sources/INDEX.md). No part of an image is copied into this repository.

## The three images

**established.** Every image is 40960 bytes (80 sectors of 512), the byte sum of the whole file is 0 modulo 256, bytes 0x55 0xaa open it, and the last 3 KB or so are 0xff padding (content ends at 0x938e in sg2, 0x969e in sg3 and 0x968e in sg3a).

| | `sg2.bin` | `sg3.bin` | `sg3a.bin` |
|---|---|---|---|
| PCI vendor, device | 0x1002, 0x4e47 | 0x1002, 0x4e4b | 0x1002, 0x4e4b |
| Public name of that device | R300 GL, FireGL X1 | R350 GL, FireGL X2 AGP Pro | same as sg3 |
| Date string (0x50) | 2004/05/04 11:32 | 2004/05/06 15:15 | 2005/04/06 15:21 |
| Title string (0x82) | `SGI-ATI FireGL X1-256p  FGL 9700 113-99002-114 BIOS` | `SGI-ATI FireGL X2-256p  FGL 9800 113-A10503-110 BIOS` | `SGI-ATI FireGL X2-256p FGL 9800 BIOS` |
| Version string | `BK-GER VER001.114.039.001` | `BK-GER VER001.110.039.000` | `BK-GER VER201.211.039.000` |
| Build tag | ` nga_0206.256 v611 ` (0xf7) | ` nkA_I35W.256 v611 ` (0xf8) | ` nka_i35w.002 v611 ` (0xe8) |
| Product string | `FireGL X1-256pAGP DGD1UN` (0x10b) | `FireGL X2-256pAGP DGD1UN` (0x10c) | `FireGL X2-256pAGP DGD1UN` (0xfc) |
| VESA OEM string | `ATI FireGL X1-256p` (0x1ac) | `ATI FireGL X2-256p` (0x1ac) | `ATI FireGL X2-256p` (0x19c) |
| PCI data structure | 0x194 | 0x194 | 0x184 |
| ATI table header | 0x128 | 0x128 | 0x118 |
| Init entry (jump target) | 0x6c8 | 0x6d3 | 0x6c3 |

- **established.** All three carry the string ` 761295520` at 0x30 and the copyright line `(C) 1988-2003, ATI Technologies Inc.` followed by the version string, at 0xb8 (sg2), 0xb9 (sg3) and 0xa9 (sg3a). The version string has the form `VERaaa.bbb.ccc.ddd`; the flash tool reads it with `sscanf("VER%d.%d.%d.%d")` (below), giving 1.114.39.1, 1.110.39.0 and 201.211.39.0.
- **established.** The title carries a part number in sg2 (113-99002-114) and sg3 (113-A10503-110) and none in sg3a. The strings name the boards "256p": 256 MB, matching the memory size the tables give (below), is an **inferred** reading of "256".
- **established.** The product string names the board "AGP" in all three images. Whether the Onyx4 boards attach by AGP, PCI or PCI-X is **unknown**; see `open-questions.md`.

## PCI expansion ROM structure

- **established.** Offset 0x18 holds a 16-bit pointer to the PCI data structure: 0x194, 0x194, 0x184. The structure reads, field by field as in `Pci22.h`: signature `PCIR`; vendor 0x1002; device 0x4e47 (sg2) or 0x4e4b (sg3, sg3a); device-list pointer 0; length 0x18; revision 0; class code bytes `00 00 03` (programming interface 0, subclass 0, base class 3, a VGA-compatible display controller); image length 0x50 sectors; code revision 0x0172 (sg2), 0x016e (sg3), 0xc9d3 (sg3a); code type 0; indicator 0x80.
- **established.** `file(1)` reports "ProgIF=3" for these images. It reads the class code in the wrong order; the base class is 3 and the programming interface is 0.
- **established.** Code type 0 is the x86 PC-AT image type (`PCI_CODE_TYPE_PCAT_IMAGE` in `Pci22.h`). Each image holds this one image and no other: indicator bit 7 (last image) is set, the image length equals the file length, and `PCIR` occurs once. No Open Firmware (FCode) image and no EFI image is present in any of the three.
- **established.** The 3-byte init entry at offset 3 is a near jump (`e9`, 16-bit displacement): sg2 jumps to 0x6c8, sg3 to 0x6d3, sg3a to 0x6c3. The stub saves the registers, calls the PCI BIOS function through `int 0x1a` (ax = 0xb109 and 0xb10c), writes through I/O ports at an offset of 0x14, 0x16 and 0x2e from a base it read, and falls into the card's set-up. It uses 16-bit real-mode instructions throughout (the images disassemble as 16-bit x86 and contain `pushad`/`popad` forms with the operand-size prefix). The whole init path is read in [BIOS code](#bios-code).
- **established.** The code writes into its own image: it stores 0x1234 at 0x634a (sg2) and switches to a stack that ends at 0x6552 only if the word reads back as 0x1234. The image holds 0x3412 there, so from a ROM mapping the store is lost, the test fails and the caller's stack stays; from a RAM copy the stack moves into the zero-filled run of 0x206 bytes that starts at 0x634c (sg3 and sg3a have the same run, 0x207 bytes long, at 0x665b and 0x664b) and is switched back at exit. The scratch use of the hole is **inferred**. The host side does shadow the image; see the section on the IRIX software. [BIOS code](#bios-code) has the sequence.

## ATI table header

**established.** The 16-bit word at 0x48 points to the ATI table header (0x128, 0x128, 0x118). It is not an ATOM BIOS: the four bytes at header+4 are not `ATOM` or `MOTA` (they are the second revision word and the length, see below). The images are the older table-driven kind that the Linux radeon driver reads as a "COMBIOS", the form of the R300 and R350 era. The header is 0x6a bytes long (the byte at header+6, which Linux also reads as the length) and ends two bytes before the PCI data structure.

Fields:

- **established.** header+0x00: 0xa008 in all three. Unknown purpose.
- **established.** header+0x02 and +0x04 (two words, stored high byte first, unlike every other field of the header and the PCI data structure, which are little-endian): 0x0172 and 0x0172 (sg2, bytes `01 72 01 72`), 0x016e and 0x016e (sg3), 0x010a and 0xc9d3 (sg3a, bytes `01 0a c9 d3`). Read that way the second word equals the PCI data structure's code revision (little-endian there) in each image. What the first word means: **unknown**.
- **established.** header+0x08 and +0x0a: pointers (0x1c73, 0x56e6), (0x1c4b, 0x56be), (0x1c3b, 0x56ae). The second points at the `PMID` block in each image. The first points into code (bytes `fc 80 fc a0 0f 84 ...`): **established** as the second byte of the video interrupt handler, the `cld` after `sti` ([BIOS code](#the-video-entry-and-its-tables)); the slot is the handler address plus one.
- **established.** header+0x10 points at the build tag, header+0x12 at the line break before the title string (0x80), header+0x14 at the product string (0x10b, 0x10c, 0xfc). The public driver names the slot at +0x14 the "BIOS support" table; here it holds the product string.
- **established.** header+0x18 and +0x1a: 0xc000 and 0xf000. **inferred**: real-mode segments (the legacy video ROM segment and the system BIOS segment).
- **established.** header+0x1c, +0x1e and +0x20 are 0x1002, 0x0152 and the device ID (0x4e47 or 0x4e4b), the same in the PCI data structure's device field. **inferred.** The first two form a vendor and device pair, 1002:0152, that matches the second word of the entries for 4e47 and 4e4b in the kernel driver's ID tables, which have the form of a subsystem vendor and device pair ([kernel-attach.md](kernel-attach.md#which-cards-the-driver-claims)). So the ROM would state the subsystem ID of both boards as 1002:0152. Nothing reads that pair, so this is a match of values only.
- **established.** header+0x0e points to a block (0x1bf, 0x1bf, 0x1af) of a 32-bit value, four bytes of 0xff, a 16-bit value and two more bytes, then four bytes of 0xff, repeated 0x20 bytes later: 0xd5a899e7 and 0x026a (sg2), 0x61f25c69 and 0xb003 (sg3), 0x5691f6e8 and 0xb73a (sg3a). The first copy in sg2 has 0x0201 in the two extra bytes; every other copy has 0. The values differ in every image and look like per-image signature words. **unknown.**

### Table slots

**established.** The slots below hold 16-bit absolute offsets (0 means absent). The offsets are Linux's slot numbers for the legacy table format; each non-zero target below was checked by reading it.

| Slot | Name (public driver) | sg2 | sg3 | sg3a |
|---|---|---|---|---|
| +0x0c | ASIC init 1 | 0x2a7 | 0x2a7 | 0x297 |
| +0x14 | BIOS support (holds the product string) | 0x10b | 0x10c | 0xfc |
| +0x2a | DAC programming | 0x6f40 | 0x7250 | 0x7240 |
| +0x2c | maximum colour depth | 0x661c | 0x692c | 0x691c |
| +0x2e | CRTC info | 0xd23 | 0xcf1 | 0xce1 |
| +0x30 | PLL info | 0x9a2 | 0x970 | 0x960 |
| +0x36 | hardware config | 0x6b6 | 0x6c1 | 0x6b1 |
| +0x46 | PLL init | 0x58f | 0x595 | 0x585 |
| +0x48 | memory config | 0x686 | 0x691 | 0x681 |
| +0x4a | save mask | 0x75df | 0x78ef | 0x78df |
| +0x4e | ASIC init 2 | 0x3de | 0x3e4 | 0x3d4 |
| +0x50 | connector info | 0x6c0 | 0x6cb | 0x6bb |
| +0x52 | dynamic clock 1 | 0x661 | 0x66c | 0x65c |
| +0x58 | external TMDS info | absent | 0x5f47 | 0x5f37 |
| +0x5e | misc info | 0x1ff | 0x1ff | 0x1ef |
| +0x60 | CRT info | 0x213 | 0x213 | 0x203 |

- **established.** The slots for TV info, DFP info, multimedia, TV standard patch, LCD info, mobile info, hard-coded EDID, reserved memory, memory-clock info, external DAC, integrated system, component video, fan speed and overdrive are 0 in all three images.
- **established.** The slots at +0x6a and beyond are outside the header (its length is 0x6a).
- **established.** The hardware-config target begins with the four bytes `$ATI`, then `02 0a 0f 00 00 02`, and the connector table starts exactly ten bytes after it in every image (0x6b6+10 = 0x6c0, 0x6c1+10 = 0x6cb, 0x6b1+10 = 0x6bb). The public driver does not read the hardware-config table; its contents beyond that are **unknown**.
- **established.** The DAC programming, maximum colour depth, CRTC info and save mask tables are present, and their first 16 bytes are identical across the three images. The public driver does not read any of the four; their layouts and use by the IRIX driver are **unknown**. The maximum-colour-depth table looks like records of seven bytes (`40 00 80 03 4b 00 06`, `50 00 80 03 5a 00 06`, ...); **unknown**.

## Tables decoded

All of these follow the public driver's layout (`radeon_combios.c`); every number below was read from the image.

### PLL info (slot +0x30)

- **established.** Revision byte 10, length byte 70. Reference clock word 2700, reference divider 12, pixel-PLL output range 20000 to 40000 and input range 40 to 3000 (+0x36 and +0x3a), system-PLL and memory-PLL reference divider 4 and output range 30000 to 80000. These are the same in all three.
- **established.** The default system clock word (+0x0a) and memory clock word (+0x08): 32400 and 27600 (sg2); 37800 and 31700 (sg3 and sg3a).
- **inferred.** The public driver's units are 10 kHz. That gives a 27.00 MHz reference clock, a 200 to 400 MHz pixel-PLL output range, and default clocks of 324 MHz system and 276 MHz memory (X1) and 378 MHz and 317 MHz (X2). The two X2 images agree.
- **established.** The public driver reads the system-PLL and memory-PLL input ranges only for revisions above 10, so it does not read those fields here; the bytes after +0x46 are not part of the table (the next block is code).

### Memory size (slots +0x5e and +0x48)

- **established.** The misc info table (revision 1) points at the detected-memory table (0x20c, 0x20c, 0x1fc). It reads: revision 0, a 32-bit word 0x2a, a 16-bit size of 256. The memory config table has revision byte 1 and its first byte is 0x80 (128).
- **inferred.** The public driver reads the first as 256 MB, and would read the second (used only when the first is absent) as 128 doubled, 256 MB: the two agree in all three images, so each board is a 256 MB card, matching "256p" in the names.

### Connector info (slot +0x50)

- **established.** The same four bytes in all three: a header word 0x1211, then two entries 0x3300 and 0x3211, then 0x0000.
- **inferred.** The public driver reads each entry as: connector type in bits 15:12 (3 = DVI-I), DDC line in 11:8, bit 4 = second digital output (the external-transmitter path), bit 0 = second analogue DAC. Entry 0x3300 is a DVI-I connector with DDC line 3 (VGA line), first DAC, internal TMDS. Entry 0x3211 is a DVI-I connector with DDC line 2 (DVI line), second DAC, external TMDS. That is two DVI-I outputs, which fits a two-head board; the IRIX driver's own reading is **unknown** (`fglrx_drv.so` prints "Connector Layout from BIOS", not read).
- **established.** The X1 image has the connector entries but no external TMDS table (below).

### External TMDS info (slot +0x58, sg3 and sg3a only)

- **established.** Revision byte 2, length byte 27, an 8-bit slave address byte 0x70 at +6, a DDC code byte 4 at +7, a flags byte 0x80 at +9, then a script from +10 to a 0xffff terminator: five two-byte ids of type 6 (a byte written to a register of the transmitter over I2C) with register and value pairs 0x08 / 0x39, 0x0a / 0xf0, 0x0c / 0x89, 0x09 / 0x20, 0x0d / 0x90. 10 + 5 x 3 + 2 = 27 bytes, so the length byte covers the whole table. The two images carry identical tables.
- **inferred.** The 0x70 address is the 8-bit form of a 7-bit address 0x38. The part is **unknown**; the public driver hard-codes the same address for one transmitter family on integrated chipsets, which is not evidence for this board.

### ASIC init, memory-controller and clock scripts

- **established.** The two ASIC init tables, the two misc-info tables (ASIC init 3 is empty), the PLL init table and the dynamic clock table all walk to their zero terminators with the public driver's decoding, and each ends within one byte of where the next table starts, so the boundaries are consistent. Counts of entries:

| Table | sg2 | sg3 | sg3a |
|---|---|---|---|
| ASIC init 1 | 46 | 47 | 47 |
| ASIC init 2 | 33 | 33 | 33 |
| ASIC init 3 | 0 | 0 | 0 |
| ASIC init 4 | 25 | 25 | 25 |
| PLL init | 64 | 65 | 65 |
| dynamic clock 1 | 9 | 9 | 9 |

- **inferred.** The MMIO tables write registers by offset; in the public headers the offsets used most are the indirect memory-controller index and data pair (0x1f8 and 0x1fc, in the R300 header) and the memory timing, framebuffer location, latency-timer and SDRAM mode registers at 0x140 to 0x158. The remaining offsets include bus control (0x30), CRTC and DAC control (0x50, 0x58, 0x7c), GPIO pad registers (0x198 to 0x1a0), display output (0xd00 to 0xd64) and the graphics buffer controls (0x2f0, 0x3f0). The names are the public header's; this chapter has not checked each against AMD's register reference.

## VESA and protected-mode blocks

- **established.** The image holds a VESA information block template (at 0x4ae4, 0x4abc and 0x4aac) whose fields match the layout of `struct vbe_ib` in `uvesafb.h`: signature `VESA`, version 0x0200, the OEM string pointer (0x1ac, 0x1ac, 0x19c, which does point at the OEM string), capabilities 1, a mode list pointer (0x486e, 0x4846, 0x4836), total memory 0 (filled at run time), software revision 0x0100, and pointers to the vendor name `ATI Technologies Inc.`, the product name (`FireGL X1-256p` or `FireGL X2-256p`) and the product revision `01.00`. All three pointers hit their strings in each image.
- **established.** The mode list holds 56 mode numbers ending in 0xffff, the same list in all three images: 0x6a, 0x102, 0x104, 0x182, 0x10d to 0x10f, 0x120, 0x192 to 0x196, 0x1a2 to 0x1a6, 0x1b2 to 0x1b6, 0x1c2 to 0x1c6, 0x100, 0x183 to 0x186, 0x101, 0x110 to 0x112, 0x121, 0x103, 0x113 to 0x115, 0x122, 0x105, 0x116 to 0x118, 0x123, 0x107, 0x119 to 0x11b, 0x124, 0x109, 0x10a, 0x130.
- **established.** A `PMID` block (the VESA protected-mode information block) sits at 0x56e6, 0x56be and 0x56ae with the standard selectors 0xa000, 0xb000, 0xb800 and 0xc000 after the entry and init offsets.
- **inferred.** An 8x16 character font table is in the image (one glyph checked): the glyph bytes `7e 81 a5 81 81 bd 99 81 81 7e` (a smiling face in the standard PC character set) occur once, at 0x2e39, 0x2e11 and 0x2e01.

## How the images differ

**established.** sg2 and sg3 are different boards, so the differences are table content. Beyond the identity strings and the device ID:

- The PLL info table gives different default clocks (above).
- sg3 has the external TMDS table; sg2 has none.
- The memory-controller scripts differ in values: the indirect registers at index 0x119, 0x11b, 0x11d and 0x11f are written 0x9999aaaa in sg2 and 0x9999555e in sg3; indexes 0x11a, 0x11c, 0x11e and 0x120 are written 0x141557ff in sg2 and 0x161557ff in sg3 (and the ASIC init 4 pass writes 0x151557ff and 0x171557ff); the memory timing register (0x144) is 0x1a292b13 in both, but the value ORed into the DAC macro control register (0xd04) is 0x808 in sg2 and 0xa0a in sg3; the first PLL-init write to index 10 holds 0x1302904 in sg2 and 0x1382f04 in sg3; and the dynamic clock table's write to index 45 holds 0xefc80 in sg2 and 0x771efcc0 in sg3 (sg3 also writes index 45 once more, in the PLL init table).
- ASIC init 1 has 46 entries in sg2 and 47 in sg3: sg3 writes 0x923def to register 0x188 and then ORs in 0x10000, where sg2 ORs in 0x923def in one step.
- The ASIC init 4 script clears bits 25:24 of indirect registers 0x11a, 0x11c, 0x11e and 0x120 twice in sg2; in sg3 and sg3a the second pass sets bit 25 instead.
- The CRT info table differs in two bytes (`88 78` against `aa 55`).

**established.** sg3a is sg3 with the title, version and part-number strings changed, a shorter string area (everything from the product string on moves down by 0x10 bytes) and a small number of content changes. After removing the 0x10-byte shift, `option_rom.py diff` leaves only the differences below over the compared range (0x19c to 0x9000, about 36 KB); the rest is identical apart from the pointers the shift moves. The two X2 images agree on the default clocks, the connector table, the external TMDS script and the DAC macro value.

| Where (sg3a offset) | sg3 | sg3a | What |
|---|---|---|---|
| 0x2fb to 0x30d | register 0x178 = 0x7020; 0x17c and index 0x124 of the indirect set = 0x0db30db3 | 0x4026; 0x39933993 | memory-controller read control values (ASIC init 1) |
| 0x362 to 0x388 | indexes 0x11a, 0x11c, 0x11e, 0x120 = 0x161557ff | 0x141551ff | four indirect-register writes |
| 0x3e9 | index 0x122 = 0x554f | 0x4f | one indirect-register write (ASIC init 2) |
| 0x418 to 0x41a | memory timing (0x144) = 0x1a292b13 | 0x1a49a222 | memory timing register |
| 0x4d7 to 0x4fd | values 0x171557ff (ASIC init 4) | 0x151551ff | four indirect-register writes |
| 0x595d to 0x5962, 0x71fb to 0x7200 | `push cx; mov cx,2; jmp` | `push bx; mov bx,2; jmp` | one small x86 helper, in two copies; the behaviour is unknown |

- **inferred.** The X2 changes are memory-controller and memory-timing values, which fits a retuned memory configuration, such as a different memory part or speed. That is a reading from the values; the registers' fields are not decoded here and no manual names a reason. The default clocks (317 MHz memory, 378 MHz system) are the same in both.
- **established.** The version string has a different leading field (001 in sg3, 201 in sg3a) and a later date (2005/04/06 against 2004/05/06). The flash tool's records (below) list `sg3a.bin` and `sg3b.bin` for the same PCI device as `sg3.bin`, and select between them by two bits on the card.

## BIOS code

The init entry and every routine it reaches were read as 16-bit x86 code (the call graph from the entry has 65 routines in `sg2.bin` and 72 in `sg3.bin` and `sg3a.bin`; far calls wrap inside the 64 KB segment, so `call 0x8b6d` at 0x7e6 reaches 0x9356). **established** means the whole body was read. Register names are the public names from X.Org `radeon_reg.h` (xf86-video-ati 6.14.6): a cross-check, not proof of what the board does. There is no ATOM table in these images (see above), so an ATOM disassembler has nothing to decode. The video entry's handlers (below) are located, not read.

### How the chip's registers are reached

**established.** Nothing in the init path touches the chip through memory addresses. Every register access goes through the card's I/O BAR (configuration offset 0x14: the BAR the early console sets to I/O address 0x400, see [kernel-attach.md](kernel-attach.md)). Its base `P` is kept in `cs:[0x142]`. Three access forms occur:

- Indexed: write the register offset to `P+0` (the public `MM_INDEX`), then read or write the value at `P+4` (`MM_DATA`). The accessor saves the old index and writes it back afterwards. Whole dword: `5913` reads register bx, `586a` writes it. Single byte or word of the dword (lane in cl, 0 to 3): `5898` reads lane 0, `58a7` reads lane 3, `57f3`, `57f8` and `5802` write a byte to lane 0, 1 and 3, and `5835` writes a word to lane 0.
- Direct: the first 256 registers are used at `P+offset`, for example the BIOS scratch registers 0x10 to 0x2c, `BUS_CNTL` (0x30), `CRTC_GEN_CNTL` (0x50), `I2C_CNTL_0` (0x90). `5720` writes ax, `5727` reads al and `572e` reads ax at `P` plus the low byte of dx; `5735` forms that address.
- PLL: write 0x80 OR (index and 0x3f) to `P+8` (`CLOCK_CNTL_INDEX`), read or write the data at `P+0xc` (`CLOCK_CNTL_DATA`), then write 0 to `P+8`. Bits 7:6 of the index byte pick the byte lane of the PLL register (data port `P+0xc` plus the lane). `6869` is read-modify-write (ch is the AND mask, ah the OR value), `684a` reads a byte, `6a32` writes a dword.

`5743` returns dx = `P` (0 if none stored) after calling `5752`, which accepts the stored base when the word at `P+0x2e` equals the PCI data structure's device ID (word at 0x19a in sg2). Otherwise it reads configuration dword 0 (ports 0xcf8 and 0xcfc, `57d6`) of each device from the bus, device and function stored at `cs:[0x13e]` upward, one device at a time up to bus 8, until it equals the vendor-and-device dword at 0x198, then takes bits 15:8 of its BAR 1 as the base (low byte 0).

### The init entry (sg2 addresses; sg3 and sg3a in the table below)

- Entry `0x6c8`: **established.** Pushes all registers; the first time only (word `cs:[0x13e]` zero) it stores ax, which holds the card's PCI bus, device and function number, there and cs at `cs:[0x140]`. It reads configuration offset 0x14 with `int 0x1a` ax = 0xb109 (PCI BIOS read word), clears bits 1:0, and if the result is zero writes 0xf000 back (ax = 0xb10c, write word) so the I/O BAR gets an address. It stores the result at `cs:[0x142]`; the compare after the store tests the stored value against itself, so the branch back to 0x6eb is never taken. Then it writes three words through the I/O window: cs to `P+0x14`, the bus/device/function to `P+0x16` and the device ID from the PCI data structure to `P+0x2e`. Those are the halves of `BIOS_1_SCRATCH` (0x14) and the upper half of `BIOS_7_SCRATCH` (0x2c): the BIOS records where it runs and which card it serves. Next it stores 0x1234 at `cs:[0x634a]` and tests that it reads back (true only for a RAM copy); if so it saves ss, sp and ax at 0x634e, 0x6350 and 0x634c and sets ss:sp to cs:0x6552, the top of the zero-filled hole (**inferred**: scratch stack). The main sequence follows: `0x888`, ASIC init 1 (`6574` with bx = 0x2a7), `0x8b4`, `0x7d8`, `0x7c0`, the bridge fix below, `0x92d`. It then pops everything and, unless `cs:[0x634a]` already holds 0x3412, restores ss:sp and stores 0x3412 there; it returns far. In sg3 and sg3a the order is the same with one more call, the external-transmitter set-up (`5f7d` and `5f6d`), after `7a7` and `797` (their `0x7d8`) and before `78f` and `77f` (their `0x7c0`).
- Bridge fix (0x75d to 0x79a): **established.** Saves the PCI configuration address register (port 0xcf8), selects bus 0, device 1, function 0, offset 0 and reads the ID dword. When it is 0x25528086 (vendor 8086, device 2552, which the public PCI ID list names "E7505/E7205 PCI-to-AGP Bridge") it reads offset 0x70 of that function, sets bit 9 and writes it back. It restores the address register. What that bit does is **unknown**. On any other ID it changes nothing.
- `0x888`: **established.** Runs the three-word table at 0x890 through `6574`: write 0 to registers 0x20, 0x24, 0x28 and 0x2c (`BIOS_4_SCRATCH` to `BIOS_7_SCRATCH`), then AND 0xfffffffb and OR 4 on register 0x10 (`BIOS_0_SCRATCH`), which sets bit 2.
- `0x8b4`: **established.** Writes 5 to the VGA miscellaneous output register (port 0x3c2), reads ports 0x3da and 0x3ba, writes 0 to the attribute port 0x3c0 and 0x2001 to the sequencer port 0x3c4. With interrupts off it then sets real-mode vectors (offsets in sg2, segment cs unless noted): vector 0x42 to F000:F065, which is the system BIOS's own video handler, kept for chaining; vector 0x1f to 0x2a14; vector 0x43 to 0x2e27; vectors 0x10 and 0x6d both to 0x1c72; the word pair at linear 0x4a8 (the video save pointer) to 0x1ce6. When the `PMID` block's in-protected-mode word (0x56f8) is zero it first stores cs in the block's code-segment selector word (0x56f6), which every later use of ds for the ROM copy reads. It then stores that segment in three words of the table at 0x1ce6 (0x1ce8, 0x1cf8, 0x1d0a), the segment halves of its pointers. **inferred:** 0x2a14 and 0x2e27 are the 8x8 upper-half and 8x16 character tables (the 8x16 smiley glyph recorded above lies at 0x2e39). Vector 0x6d is the copy the ROM's own code calls.
- `0x7d8`: **established.** The main set-up: PLL init script (`6a49` with si = 0x58f), `6552`, `6b12`, `0x9356` (below), `7766`, the dynamic clock script (`6a49` with si = 0x661), `843`, `81f`, `0x92ac` and `0x9286` (below), `f99`, `5013`; then reads register 0x1c0 (public `SEPROM_CNTL1`), replaces bits 31:24 with 0x06 and writes it back.
- `0x7c0`: **established.** Prints the title line at 0x80 with the ROM's own video entry (`int 0x6d`, ax = 0x1301 write string, attribute 7, cursor from `[0x450]`): 0x38 characters in sg2, 0x39 in sg3 and 0x29 in sg3a, the title with its line breaks.
- `0x92d`: **established.** In RAM, limits the size byte at offset 2 to 0x80, clears the byte at 0x21, sums the first 0x8000 bytes and stores the two's complement at 0x21, then sums the next (size - 0x40) x 512 bytes and stores the two's complement in the byte before 0x9350 (0x934f in sg2, 0x965f in sg3, 0x964f in sg3a). It makes the image sum 0 again after the run changed bytes of it.
- `0x9356`: **established.** Sets bit 26 of `CRTC_GEN_CNTL` (the byte at `P+0x53`, bit 2: public `CRTC_DISP_REQ_EN_B`), writes 0x2a to lane 0 of register 0x140 (`MEM_CNTL`; the detected-memory table above holds 0x2a), writes the word 0x1000 to `P+0xfa`, the upper half of the dword at 0xf8 (public `CONFIG_MEMSIZE`), then clears bit 26 and sets bit 25 (`CRTC_EN`) and waits 15 times 2 ms (`59a1`). The 0x1000 is a literal, not a probed size; **inferred:** as the upper half of a byte count it reads 0x10000000, 256 MB, which agrees with the memory-size tables above.
- `0x92ac` and `0x9286`: **established.** `92ac` builds in bx a pair of display codes (one byte 7 or 8, the other 0, 1 or 2) from bit 1 of the byte at linear 0x489, bit 0 of the miscellaneous output register (port 0x3cc), whether a CRTC answers at port 0x3b4 or 0x3d4 (`7c49`) and the low byte of the CRTC base port in the BIOS data area (`78ce`). `9286` looks the pair up, as it is and then byte-swapped, in the words that start at 0x932e (the byte at 0x932a is the loop limit, 0x10, tested with a signed less-or-equal against the running index) and stores the index it finds, or 0xff, at linear 0x48a. **inferred:** the pair is the VGA display combination code of video function 1a (7 is monochrome VGA, 8 colour VGA).

### Routines of the init path

Addresses in sg2, sg3 and sg3a. **established** for every row: the whole body was read.

| sg2 | sg3 | sg3a | What it does |
|---|---|---|---|
| 5743 / 5752 | 571b / 572a | 570b / 571a | Base lookup and validation (above). |
| 5720 / 5727 / 572e / 5735 | 56f8 / 56ff / 5706 / 570d | 56e8 / 56ef / 56f6 / 56fd | Direct port write of ax, read of al, read of ax at `P` plus dl; `5735` computes the address. |
| 57d6 | 57ae | 579e | Reads one configuration dword (ports 0xcf8, 0xcfc): bh, bl and dl hold bus, device-and-function and offset. |
| 5913 / 586a | 58eb / 5842 | 58db / 5832 | Indexed dword read and write (above). |
| 5898 / 58a7 | 5870 / 587f | 5860 / 586f | Indexed byte read, lane 0 and lane 3. |
| 57f3 / 57f8 / 5802 / 5835 | 57cb / 57d0 / 57da / 580d | 57bb / 57c0 / 57ca / 57fd | Indexed byte write to lane 0, 1, 3 and word write to lane 0. |
| 6574 | 6884 | 6874 | Register-script interpreter for every MMIO table. Word with bit 15 clear: bits 12:0 are the register; bit 13 set means direct access at `P` plus the low byte, clear means indexed; bit 14 set means read, AND with the first dword, OR with the second, write (10 bytes), clear means write the dword (6 bytes). Bit 15 set: bit 13 clear is a wait of the second word in timer ticks (`6eaa`); bit 13 set is meant to poll, but the code compares the raw high byte of the entry, which has bit 7 set, with 3 and 8, so the poll branches (PLL register 0x14 lane 2 bit 0 clear, and register 0x150 bits 1:0 set) are unreachable and the entry is skipped; no table in the images has one. Each wait entry is 4 bytes. A zero word ends the table and writes 0 to `P+8`. Types 6 and 7 take the same 4-byte step as 4 and 5; `scripts/option_rom.py` steps 2 bytes over them, but no table uses them. |
| 6a49 | 6d59 | 6d49 | PLL-script interpreter (PLL init and dynamic clock tables), at most 999 entries. A zero byte ends. Bit 7 set: low bits 1 wait 0x168 ticks, 2 wait five times 0x952, 3 poll PLL register 0x14 lane 2 until bit 0 clears, 4 poll it until bit 3 sets, 5 if PLL register 0x14 lane 3 has bit 0 set then write 0x11 to PLL register 0x12 lanes 1 and 0, wait 20 ms, clear bit 0 of PLL register 0x14 lane 3 and wait 20 ms again (other codes skip). Bit 6 set, bit 7 clear: a lane byte, an AND-mask byte and an OR byte follow (3 bytes). Both clear: a dword follows, written to the PLL register in the low six bits. |
| 6552 | 6862 | 6852 | ASIC init 2: `6574` over the slot +0x4e table (bx = 0x3de, 0x3e4 in sg3, 0x3d4 in sg3a) with interrupts off, then reads register 0x3428 (`RB2D_DSTCACHE_MODE`), ORs bit 17 and writes the result to register 0x1710 (`FLUSH_4`). Why a value read from one register goes to another is **unknown**. |
| 6b12 | 6e22 | 6e12 | Memory-mode sequence. Runs the table at 0x4d8 (sg3 0x4de, sg3a 0x4ce) through `6574`. Then reads records from the memory-config table plus 5 (0x68b; sg3 0x696; sg3a 0x686): byte 0xff ends; byte 0x0f waits until register 0x150 bits 3:0 are all set (up to 0x8000 reads); any other byte is cl and is followed by two bytes. The two bytes go to lanes 0 and 1 of register 0x158 (`SDRAM_MODE_REG`); then lane 3 is read, ANDed with 0x6f and ORed with cl, and written back. The loop runs once. After it the byte following 0xff goes into PLL register 0x15 lane 3 (AND 0x0f, OR that byte), and the table at 0x4d6 (sg3 0x4dc, sg3a 0x4cc) runs. In sg2 the records have cl of 0, 0x80 or 0x10. **inferred:** these are SDRAM mode-register writes; the bit meanings are **unknown**. |
| 7766 | 7a76 | 7a66 | Calls `774c`, then `7759`. |
| 774c / 7759 | 7a5c / 7a69 | 7a4c / 7a59 | `774c`: `7641`, then replace bits 1:0 of the byte at `P+0x20` with its result (`60c7` with ah = 3). `7759`: `7674`, then the same into the byte at `P+0x21` (`60be`). |
| 60c7 / 60be | 63d6 / 63cd | 63c6 / 63bd | Byte read-modify-write at `P+0x20` / `P+0x21`: AND with the complement of ah, OR with al. |
| 7641 | 7951 | 7941 | Saves PLL register 8 lane 0, clears its bits 7:6, calls `7603` with cl = 0xc0 and returns 2 if bit 7 of its test is set; otherwise calls it with cl = 0x40 and returns 0 if clear, 1 if set; restores PLL register 8. |
| 7603 | 7913 | 7903 | Sets bit 7 of the byte at `P+0x55` (`CRTC_EXT_CNTL` lane 1), writes 0x1b630 OR cl to register 0x280 (`DAC_EXT_CNTL`), clears bits 15 and 1:0 and sets bits 3 and 1 of the word at `P+0x58` (`DAC_CNTL`), waits 2 ms (`6ef5`), reads the byte at `P+0x58`, restores the word and the `P+0x55` byte, writes 0 to register 0x280 and returns with ZF clear when bit 7 of the byte it read is set. |
| 7674 | 7984 | 7974 | Sets bit 0 of registers 0x1a0, 0x198 and 0x19c (`GPIOPAD_EN`, `GPIOPAD_MASK`, `GPIOPAD_A`, lane 0). Saves 0x7c (`DAC_CNTL2`), 0x3f8 (`CRTC2_GEN_CNTL`), 0x280 and 0x88c (`TV_DAC_CNTL`), writes 2, 0xc0 and 0x180c3 to the first three and 0x680200 then 0x680213 to 0x88c with waits between, reads lane 3 of 0x88c, returns 2 if bits 7:5 of it are not all zero and 0 otherwise. Restores 0x88c, the low word of 0x280, 0x3f8, the low byte of 0x7c and the low byte of 0x19c; bit 0 of 0x1a0 and 0x198 stays set. Bit meanings of the DAC and TV registers: **unknown**; it has the shape of a presence test on the second DAC. |
| 843 | 812 | 802 | Reads the word at `P+0x20`; if none of bits 0xb3f is set, sets bit 1 of its low byte and writes that byte back. From the two bytes it picks ah = 2, 8, 0x20 or 0x80 and calls `6136`, which writes ah AND 0xab to the byte at `P+0x27` (the top byte of `BIOS_5_SCRATCH`). The bit meanings are **unknown**. |
| 81f | 7ee | 7de | Calls `20e2`; sets bits 4 and 0 in the byte at linear 0x489 and keeps only its bits 4, 2, 1 and 0; calls `474a` with al = 1; calls `47ff` (mono text: equipment bits 5:4 = 3, CRTC port 0x3b4 in linear 0x463, `int 0x42` ax = 7) with that byte saved around it; then `4847` (colour text: equipment bits 5:4 = 2, port 0x3d4, `int 0x6d` ax = 3). |
| 20e2 | 20ba | 20aa | If bit 1 of linear 0x489 is set: stores 0x62 and 0xfb in the word at linear 0x487 and 0x0d at linear 0x48a, calls `475a`, and when it returns nonzero stores 0xf9 in linear 0x488. Otherwise stores 0x60 and 0xf9, 0x0b, calls `4765`, and when nonzero stores 0xfb. Then sets bit 4 of linear 0x489. |
| 474a / 475a / 4765 | 4722 / 4732 / 473d | 4712 / 4722 / 472d | Set bit 0 of the VGA miscellaneous output register to al. `475a` sets it and then runs `7c49` on port 0x3b4; `4765` clears it and runs `7c49` on 0x3d4. |
| 7c49 | 7f59 | 7f49 | Saves CRTC registers 0xe and 0xf, writes 0xaa and 0x55, reads them back, restores them; returns 1 if either read back matches and 0 if neither does. |
| 78af / 78b9 / 78ce | 7bbf / 7bc9 / 7bde | 7baf / 7bb9 / 7bce | `78af`: write index al to the port in dx and read the byte from dx+1. `78b9`: load ds from the word at `cs:[0x56ee]` (sg3 `0x56c6`, sg3a `0x56b6`), the BIOS-data selector field of the `PMID` block, which holds 0 in all three images, so data accesses through it are flat linear addresses (0x487 is the BIOS data area byte at linear 0x487). `78ce`: dx = the word at linear 0x463 (the BIOS data area's CRTC base port). |
| 5013 | 4feb | 4fdb | Table patch: stores `P` and the bus/device/function in two words of the table at 0x53f1 (+8 and +0xa), then, for the 2-byte entries from the offset the table's word at +6 gives (0x0c), until a word of -1 or until cx counts out (cx is whatever the caller left), stores the high byte of `P` in each entry's high byte. The entries are 0xf010, 0xf016, 0xf054, 0xf038, 0xf03c, 0xf05c, 0xf000, 0xf004, 0xf0b0, 0xf0b2 and 0xf0b4: port numbers of the card, patched with its real base. **inferred:** the table starts with the words 0x26, 0x94, 0xe0 and 0x0c, the layout of the VESA protected-mode function table (offsets of set window, set display start and set palette, then of the port list), so the entries are its port list. |
| f99 / f17 / fc1 | f67 / ee5 / f8f | f57 / ed5 / f7f | A save and restore pair for five scratch bytes. `f17` with bl = 0 writes five (identifier, value) word pairs at es:di, identifiers 0x12, 0x6a, 0x55, 0x83, 0x84, each value being the byte at `P+0x18`, 0x19, 0x1a, 0x1b, 0x1c ORed with 0x80 (`fc1`: 0x62 and 0x12 read `P+0x18`, 0xe5 and 0x6a read `P+0x19`, 0x55, 0x83 and 0x84 the next three; any other identifier returns its own bit 7), then two zero words and two 0xffff words. bl = 1 writes the five values back to `P+0x18` to `P+0x1c`. bl = 2 returns ah = 1. bl = 3 calls `f99`, which writes the constants 0, 4, 4, 0x10 and 0 to `P+0x18` to `P+0x1c` (it builds a 0x20-byte frame holding them and runs the bl = 1 path); the main set-up calls `f99` directly for that reason. **inferred:** the identifiers are video mode numbers (0x6a and 0x183 to 0x186 are in the mode list); what the flag bytes record is **unknown**. |
| 67ee / 684a / 6861 / 6869 / 6a32 | 6afe / 6b5a / 6b71 / 6b79 / 6d42 | 6aee / 6b4a / 6b61 / 6b69 / 6d32 | PLL accessors (above). `67ee` writes 0 to the index and reads one dword. `6861` is `6869` with an AND mask of 0. |
| 6eaa | 71ba | 71aa | Waits bx timer ticks: reads timer 0 twice per loop (`6f21`) and loops while the elapsed count is below bx; a zero change reduces bx by 2 and clears bit 0 of bl. |
| 6ee3 / 6ef5 / 6f01 | 71f3 / 7205 / 7211 | 71e3 / 71f5 / 7201 | Waits of 0x168 ticks, 0x952 ticks and five times 0x952 through `6eaa`. At the standard 1.193 MHz timer clock (**inferred**, not read) that is 0.3 ms, 2 ms and 10 ms. |
| 6f21 / 6f36 | 7231 / 7246 | 7221 / 7236 | Latch and read the 16-bit count of timer 0 (ports 0x43, 0x40). |
| 598f / 59a1 | 5967 / 5979 | 5957 / 5969 | A second copy of the 2 ms wait, and 15 times it. |
| 9286 / 92ac / 9356 | 9596 / 95bc / 9666 | 9586 / 95ac / 9656 | Above. |

The 2 ms and 10 ms values are the timer-tick counts above; no routine reads the timer clock rate.

### Routines only in sg3 and sg3a: the external transmitter

**established** for the whole bodies in sg3 (sg3a is the same code 0x10 lower). The external TMDS table of slot +0x58 is used only by the X2 images. `5f7d` (sg3a `5f6d`) sets bit 10 of registers 0x1b0, 0x1a8 and 0x1ac (public `MDGPIO_EN_REG`, no public name, `MDGPIO_A_REG`), waits 15 times four ticks, and clears bit 10 of 0x1ac. For the table at 0x5f47 it then calls `5f62`, passing the slave address byte at table +6 (0x70) in cl. `5f62` reads entries from table +10: a 16-bit id whose low byte is the register, then a value byte; an id of 0xffff ends. Each entry goes to `6067`, which writes `I2C_CNTL_0` (0x90) = 0x14140327, `I2C_CNTL_1` (0x94) = 0x28030012, then the slave address, the register and the value to `I2C_DATA` (0x98), then `I2C_CNTL_0` = 0x14141300, and waits 200 times 2 ms; each pass tests bit 0 of `I2C_CNTL_0` with `test` but the `loop` that follows ignores the flag, so the wait is a fixed delay. After the entries `5f7d` writes register 0x288 = 0x1240080c and PLL register 0x2d = 0x02040000. So the five (register, value) pairs of the table decoded above are sent over the chip's I2C engine to a device at 8-bit address 0x70. The part is **unknown**.

### The video entry and its tables

- `0x1c72` (sg3 `0x1c4a`, sg3a `0x1c3a`): **established.** The handler for vectors 0x10 and 0x6d. It runs `sti`, `cld`; ah = 0xa0 goes to `0x115a`, ah = 0x4f to the VBE dispatcher at `0x4b6a`; otherwise it pushes the word at `cs:[0x1156]` (the address of an `iret` at 0x1154), saves ds, es and all registers and, for ah below 0x1d, jumps through the word table at `0x1cac`; for a larger ah it restores the registers and chains to vector 0x42. The ATI header's slot +0x08 (0x1c73) points at the `cld`, one byte after the entry. A second entry at `0x1c58` (`push cs`, `call 0x1c5d`) does the same with the `retf` at 0x1155 as the return word, for the ROM's own calls (ah = 0xa0 goes to `0x1161`, ah = 0x4f to `0x4b63`).
- Table at `0x1cac` (sg3 `0x1c84`, sg3a `0x1c74`), indexed by ah. The function names are the standard video BIOS numbering and are **inferred** from the positions; bodies are not read except entry 00 below:

| ah | sg2 | sg3 | sg3a |
|---|---|---|---|
| 00 set mode | 1d20 | 1cf8 | 1ce8 |
| 01 cursor shape | 8936 | 8c46 | 8c36 |
| 02 cursor position | 894f | 8c5f | 8c4f |
| 03 read cursor | 896c | 8c7c | 8c6c |
| 04 light pen | 1e8a | 1e62 | 1e52 |
| 05 active page | 7ef7 | 8207 | 81f7 |
| 06 scroll up | 7f24 | 8234 | 8224 |
| 07 scroll down | 7fd2 | 82e2 | 82d2 |
| 08 read char | 8061 | 8371 | 8361 |
| 09 write char and attribute | 8200 | 8510 | 8500 |
| 0a write char | 8204 | 8514 | 8504 |
| 0b palette or border | 8609 | 8919 | 8909 |
| 0c write pixel | 86e0 | 89f0 | 89e0 |
| 0d read pixel | 8772 | 8a82 | 8a72 |
| 0e teletype | 87e8 | 8af8 | 8ae8 |
| 0f current mode | 8988 | 8c98 | 8c88 |
| 10 palette registers | 89eb | 8cfb | 8ceb |
| 11 character generator | 8cc2 | 8fd2 | 8fc2 |
| 12 alternate select | 231e | 22f6 | 22e6 |
| 13 write string | 9152 | 9462 | 9452 |
| 14 return | 1ca6 | 1c7e | 1c6e |
| 15 return | 1ca6 | 1c7e | 1c6e |
| 16 return | 1ca6 | 1c7e | 1c6e |
| 17 return | 1ca6 | 1c7e | 1c6e |
| 18 return | 1ca6 | 1c7e | 1c6e |
| 19 return | 1ca6 | 1c7e | 1c6e |
| 1a display combination | 9226 | 9536 | 9526 |
| 1b functionality information | 3f08 | 3ee0 | 3ed0 |
| 1c save or restore state | 4057 | 402f | 401f |

- Entry 00 (`0x1d20`): **established** as far as read: loads ds as above, clears bits 3:2 of the byte at linear 0x487, calls `2035` and `61aa` (not read) and, for a mode number above 7 when `61aa` leaves dx equal to bx, looks the mode up in the table of 9-byte records at 0x48e0 (ends at a word of -1) and calls VBE function 0x4f02 through `0x1c58` with the record's first word as the mode, keeping bit 15 of the caller's mode; the rest of the body is not read.
- `0x115a` and `0x1161` (vendor function ah = 0xa0; `0x1161` first loads ah from the byte at 0x129): **established** as a dispatcher only: al (after `xchg bx,ax` and clearing bh, doubled; below 0x20) selects through the word table at `0x1182`, 32 entries. The entries are not read.
- `0x4b6a` and `0x4b63`: the VBE (ah = 0x4f) dispatcher. Not read.

The VESA information block, mode list and `PMID` block are decoded above. The handlers behind these tables are **located** only; see [open-questions.md](open-questions.md#option-rom).

## What the IRIX software does with the images (cross-reference)

The kernel attach path has its own reader; these are only pointers from the strings and short routines.

- **established.** `usr/gfx/VOYAGER/bin/sg2flash` (stripped, N32) carries a table of six records in `.data` at 0x100086d8. The first three are an id string, a file name and a size word: `10024E44` with `9700.bin`, `10024E47` with `sg2.bin`, `10024E4B` with no name; the size word is 0x40000 for the two named records. The next three have the id `10024E4B` and a file name, plus a mask and a value: `sg3.bin` with mask 0xc0 and value 0x40, `sg3a.bin` with mask 0xc0 and value 0, and `sg3b.bin` with mask 0 and value 0. `9700.bin` and `sg3b.bin` are not in the install. The ids read as the PCI vendor (1002) and device (4E44, 4E47, 4E4B) in hexadecimal; 0x4e44 is the public R300 Radeon 9700 device ID.
- **established.** In `do_card` the three-record loop (stride 104, three records, only those whose id equals the first-level record's) takes the register word at offset 0x1a4 of a memory mapping (a `base/2.be` file of 8192 bytes), skips a record whose mask is 0, and selects the record whose value equals the word ANDed with the mask. It prints `vippad_y = 0x%x file = %s`. So the choice between the two X2 images is made by bits 7:6 of that register word: 01 selects `sg3.bin`, 00 selects `sg3a.bin`.
- **inferred.** The offset 0x1a4 is `GPIOPAD_Y` in the public Linux header, a pad input register. The strap bits on the card that feed them are **unknown**, and what the strings' "vippad" name means for the R350 is **unknown**.
- **established.** The tool opens `config` of the device under `/hw/.id/pci/`, reads a 32-bit word with ioctl code 0x40040030 and writes it back with bit 0 set using 0x80040030 (**inferred** to be PCI configuration offset 0x30, the expansion ROM base address, with its enable bit), maps `rom.le` (0x20000 bytes), reads the image file named by the record, finds the `VER%d.%d.%d.%d` string in both, and prints both ("File version", "Card version"); `-F` forces the flash, and "Couldn't read version from rom. Force to flash." suggests an unreadable card version also leads to a flash. The image file comes from `usr/gfx/ucode/VOYAGER/` under the directory `GL_GRROOT` names. The messages name two flash types, "ST flash" and "Atmel flash", with write-enable, bulk-erase and idle-poll steps ("SFWriteST", "SFWriteATMEL").
- **inferred.** The ROM is held in a serial flash on the card, which the chip programs by register writes; `sg2flash` is how the images in this chapter get onto the card. How it compares two versions is **unknown** (the comparison was not read).
- **established.** `vga_shadow_bios` in `vga.a` (whole body read) takes a board record with a ROM pointer and a length, accepts the image when bytes 0 and 1 are 0x55 and 0xaa, or when bytes 3 and 2 are 0x55 and 0xaa (a word-swapped read), allocates kernel memory, copies the image into it, and byte-reverses each 32-bit word in the second case. The strings in `vga.a` name an x86 emulator (`xf86InitInt10`, `run_bios_int`, `setup_system_bios`) and the failures "ROM NOT PRESENT", "ROM SIG INVALID !", "ROM SHADOW failed" and "BIOS INIT FAILED". `bios_checksum` in the same archive sums bytes, **inferred** from the head of its loop to be the 8-bit sum that is 0 for all three images.
- **inferred.** This is the kernel counterpart of the init-entry code above: the host copies the ROM, runs its x86 initialisation in an emulator, and the BIOS then holds the VESA and table data. What the host does after the emulated BIOS returns (register state, mode set) is **unknown**.
- **established.** `biosemu` (usr/diags/SG/bin) names `pciba_enable_rom`, `rom.le`, a ROM shadow copy and the check "ROM SIGNATURE INVALID: 0x%x,0x%x". `libint10.so` (X module) names "Looking for BIOS at PCI:%i%i%i", `mapPciRom` and "Bad V_BIOS checksum". `libvbe.so` prints "VESA VBE OEM Product" and "OEM Product Rev", which are the strings in the VESA block above. The X module `fglrx_drv.so` names "Video BIOS not detected, using default PLL parameters!", "No Panel Info Table found in BIOS!", "Incorrect sig for BIOS TV Info block" and "Connector Layout from BIOS". None of these paths was read; they locate the consumers only.
- **established.** `fglrx_attach` in `fglrx.o` holds the messages "ROM NOT VALID", "ROM present - but sig NOT VALID" and "cannot get to ROM space", and compares two bytes read from the ROM against 0xaa and 0x55 (at offsets 0x1b8c and 0x1b98 of the object's text). Which bytes and what it does with a valid ROM are **unknown**; the attach reader owns that.

## Open

Recorded in [open-questions.md](open-questions.md): the video and VBE handlers behind the dispatch tables, the tables the public driver does not read, the strap bits, the first header words, the meaning of the register values that differ between the X2 images, and whether the IRIX driver reads any ATI table.
