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
- **established.** The 3-byte init entry at offset 3 is a near jump (`e9`, 16-bit displacement): sg2 jumps to 0x6c8, sg3 to 0x6d3, sg3a to 0x6c3. The stub saves the registers, calls the PCI BIOS function through `int 0x1a` (ax = 0xb109 and 0xb10c), writes through I/O ports at an offset of 0x14, 0x16 and 0x2e from a base it read, and falls into the card's set-up. It uses 16-bit real-mode instructions throughout (the images disassemble as 16-bit x86 and contain `pushad`/`popad` forms with the operand-size prefix). Only the first 0xb8 bytes of the stub were read; what the rest of the set-up does is **unknown**.
- **inferred.** The code writes into its own image (it stores 0x1234 at 0x634a, saves ax, ss and sp at 0x634c, 0x634e and 0x6350, then points sp at 0x6552, which is the end of a zero-filled run of 0x206 bytes starting at 0x634c in sg2; sg3 and sg3a have the same run, 0x207 bytes long, starting at 0x665b and 0x664b). That works only from a RAM copy, so the code expects to run from a shadow copy, with the hole as its scratch and stack space. The host side does shadow the image; see the section on the IRIX software.

## ATI table header

**established.** The 16-bit word at 0x48 points to the ATI table header (0x128, 0x128, 0x118). It is not an ATOM BIOS: the four bytes at header+4 are not `ATOM` or `MOTA` (they are the second revision word and the length, see below). The images are the older table-driven kind that the Linux radeon driver reads as a "COMBIOS", the form of the R300 and R350 era. The header is 0x6a bytes long (the byte at header+6, which Linux also reads as the length) and ends two bytes before the PCI data structure.

Fields:

- **established.** header+0x00: 0xa008 in all three. Unknown purpose.
- **established.** header+0x02 and +0x04 (two words, stored high byte first, unlike every other field of the header and the PCI data structure, which are little-endian): 0x0172 and 0x0172 (sg2, bytes `01 72 01 72`), 0x016e and 0x016e (sg3), 0x010a and 0xc9d3 (sg3a, bytes `01 0a c9 d3`). Read that way the second word equals the PCI data structure's code revision (little-endian there) in each image. What the first word means: **unknown**.
- **established.** header+0x08 and +0x0a: pointers (0x1c73, 0x56e6), (0x1c4b, 0x56be), (0x1c3b, 0x56ae). The second points at the `PMID` block in each image. The first points into code (bytes `fc 80 fc a0 0f 84 ...`); **inferred** to be a function-dispatch routine of the BIOS, unread.
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

Recorded in [open-questions.md](open-questions.md): the init stub and the rest of the BIOS code, the tables the public driver does not read, the strap bits, the first header words, the meaning of the register values that differ between the X2 images, and whether the IRIX driver reads any ATI table.
