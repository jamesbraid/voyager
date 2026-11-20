# Option ROM images, header and tables, 6.5.22 against 6.5.30

The two option ROM images that IRIX 6.5.22 ships for the Onyx4 FireGL boards (`usr/gfx/ucode/VOYAGER/sg2.bin` for the FireGL X1, `sg3.bin` for the X2), their PCI expansion ROM header, PCI data structure, ATI legacy table header and every table it points to, with the 6.5.30 images as the comparison. All offsets are byte offsets into the image. The 6.5.30 images are decoded in [option-roms.md](../../software/ucode/option-roms.md); this page records what the 6.5.22 images hold and where they differ.

Grades are explained in [README.md](README.md#grades). Layouts are the public ones: the PCI expansion ROM structures, and `radeon_combios.c` / `radeon_bios.c` of the Linux radeon driver for the ATI table (software expectation). A decoded meaning is a cross-check from the public chips, not proof of what the board or the IRIX driver does.

## The images

**Established.** Both 6.5.22 files are 45056 bytes (88 sectors of 512), open with the bytes 0x55 0xaa, and have a byte sum of 0 modulo 256. The 6.5.30 files are 40960 bytes (80 sectors). Content ends at 0xa87a (sg2) and 0xa842 (sg3), against 0x938e and 0x969e in 6.5.30; the rest of each file is 0xff padding.

| | 6.5.22 `sg2.bin` | 6.5.22 `sg3.bin` | 6.5.30 `sg2.bin` | 6.5.30 `sg3.bin` | 6.5.30 `sg3a.bin` |
|---|---|---|---|---|---|
| PCI vendor, device | 1002:4e47 | 1002:4e4b | 1002:4e47 | 1002:4e4b | 1002:4e4b |
| SHA-256 | 91ea55cf...4008 | f060d7d7...f864 | eb7c01d2...85f4 | 3510a7f2...d4a3 | 7d4520e8...03d2 |
| Date string (0x50) | 2003/12/02 16:30 | 2003/12/30 14:33 | 2004/05/04 11:32 | 2004/05/06 15:15 | 2005/04/06 15:21 |
| Title (0x82) part number | 113-99002-113 | 113-A10503-107 | 113-99002-114 | 113-A10503-110 | none |
| Version string | VER001.113.039.000 | VER001.107.039.005 | VER001.114.039.001 | VER001.110.039.000 | VER201.211.039.000 |
| Build tag (0xf7 or 0xf8) | `nga_0206.256 v611` | `nkA_I35W.256 v611` | `nga_0206.256 v611` | `nkA_I35W.256 v611` | `nka_i35w.002 v611` |
| PCIR code revision | 0x171 | 0x16b | 0x172 | 0x16e | not read here |
| Init entry (target of the jump at offset 3) | 0x6e4 | 0x6e9 | 0x6c8 | 0x6d3 | 0x6c3 |

The full hashes are the 6.5.22 ones recorded in [onyx4-bus-attach.md](../../software/kernel/onyx4-bus-attach.md); the 6.5.30 ones are shown shortened. All strings are plain ASCII at the offsets given. The product string at 0x10b or 0x10c is `FireGL X1-256pAGP DGD1UN` or `FireGL X2-256pAGP DGD1UN`; the VESA OEM string at 0x1ac is `ATI FireGL X1-256p` or `ATI FireGL X2-256p`. The copyright line `(C) 1988-2003, ATI Technologies Inc.` followed by the version string is at 0xb8 (sg2) and 0xb9 (sg3). The 6.5.22 images carry the same build tags as the 6.5.30 sg2 and sg3, so the build tag does not track the revision.

**Established.** The sg2 and sg3 images of one release differ in the title, strings, device ID and the table values listed in [differences.md](differences.md#sg2-against-sg3). The 6.5.22 pair is two revisions of the same ROM family as the 6.5.30 pair: both are 4 KB to 5 KB apart in size, and the code that the two releases share is identical instruction for instruction ([differences.md](differences.md#6522-against-6530)).

## PCI expansion ROM header

**Established.** Offset 0: 0x55 0xaa. Offset 2: the image length in 512-byte units, 0x58 (88). Offset 3: a near jump (`e9` and a 16-bit displacement) to the init entry. Offset 0x18: pointer to the PCI data structure, 0x194. Offset 0x1e: the characters `IBM`. The same layout holds in 6.5.30 (the length byte is 0x50 there, and the pointer at 0x18 is 0x184 in `sg3a.bin`). **Software expectation:** the PCI Local Bus specification's expansion ROM header puts the signature at 0, the init-entry jump at 3 and the data structure pointer at 0x18.

## PCI data structure (PCIR at 0x194)

**Established.** Signature `PCIR`, vendor 0x1002, device 0x4e47 (sg2) or 0x4e4b (sg3), vital product data pointer 0, structure length 0x18, structure revision 0, class code 0x030000 (VGA-compatible display), image length 0x58 sectors, code revision 0x171 (sg2) or 0x16b (sg3), code type 0 (x86), last-image indicator 0x80.

**Software expectation.** The public ID tables name device 0x4e47 "R300 GL, FireGL X1" and 0x4e4b "R350 GL, FireGL X2 AGP Pro" (as in the 6.5.30 pair). The code revision word is repeated at +4 of the ATI table header below.

## ATI legacy table header

**Established.** The word at offset 0x48 points to the header at 0x128 in both 6.5.22 images (0x128 as in 6.5.30; 0x118 only in `sg3a.bin`). The header is 106 bytes (the byte at +6 is 0x6a) and holds 16-bit pointers at the offsets of the public driver's table list. The word at +4 equals the PCIR code revision (0x171 in sg2, 0x16b in sg3). A pointer of zero means the table is absent.

| Slot | Public name | sg2 | sg3 | In 6.5.30? |
|---|---|---|---|---|
| +0x0c | ASIC init 1 | 0x2a7 | 0x2a7 | yes |
| +0x14 | BIOS support (product string) | 0x10b | 0x10c | yes |
| +0x2a | DAC programming | 0x7593 | 0x7556 | yes |
| +0x2c | maximum colour depth | 0x6c14 | 0x6bd2 | yes |
| +0x2e | CRTC info | 0xd87 | 0xd8f | yes |
| +0x30 | PLL info | 0x986 | 0x98e | yes |
| +0x34 | **DFP info** | **0x6c2** | **0x6c7** | **no, slot is zero** |
| +0x36 | hardware config | 0x6b0 | 0x6b5 | yes |
| +0x46 | PLL init | 0x589 | 0x589 | yes |
| +0x48 | memory config | 0x680 | 0x685 | yes |
| +0x4a | save mask | 0x7c79 | 0x7c3c | yes |
| +0x4e | ASIC init 2 | 0x3de | 0x3de | yes |
| +0x50 | connector info | 0x6ba | 0x6bf | yes |
| +0x52 | dynamic clock 1 | 0x65b | 0x660 | yes |
| +0x58 | external TMDS | absent | 0x61e4 | yes (sg3 only) |
| +0x5e | misc info | 0x1ff | 0x1ff | yes |
| +0x60 | CRT info | 0x213 | 0x213 | yes |

The slots for TV info (+0x32), multimedia (+0x38), TV standard patch (+0x3e), LCD info (+0x40), mobile info (+0x42), hard-coded EDID (+0x4c), reserved memory (+0x54), memory clock info (+0x5a), external DAC (+0x5c), integrated system info (+0x62), component video (+0x64), fan speed (+0x66) and overdrive (+0x68) are zero in both 6.5.22 images, as in 6.5.30. **Established.**

## Tables

All table contents below were read from the images (**established**); the field names and units are the public driver's (**software expectation**) and, where the driver does not read a field, the meaning is **unknown** and said so.

### PLL info (slot +0x30)

**Established.** Revision byte 10, length byte 70, reference clock word 2700 at +0x0e, reference divider 12 at +0x10, pixel-PLL output range 20000 to 40000, default memory clock word at +0x08 and system clock word at +0x0a:

| | sg2 6.5.22 | sg2 6.5.30 | sg3 6.5.22 | sg3 6.5.30 | sg3a 6.5.30 |
|---|---|---|---|---|---|
| memory clock (+0x08) | 27600 | 27600 | 31700 | 31700 | 31700 |
| system clock (+0x0a) | 32400 | 32400 | 37800 | 37800 | 37800 |
| words at +0x04 and +0x06 | 0x0966, 0x095e | 0x0982, 0x097a | 0x096e, 0x0966 | 0x0950, 0x0948 | 0x0940, 0x0938 |

**Inferred.** In the public driver's 10 kHz units the defaults are 276 MHz memory and 324 MHz system (X1) and 317 MHz and 378 MHz (X2), unchanged from 6.5.22 to 6.5.30. The two words at +0x04 and +0x06 are not read by the public driver; they fall by 8 between the two words of one image and by 0x10 to 0x32 from one X2 image to the next, in the same direction. What they hold is **unknown**; a reading as a pair of voltage or delay settings that were trimmed between revisions is a guess with nothing behind it but the direction of the change.

### Memory size (slots +0x5e and +0x48)

**Established.** Identical in content to 6.5.30: the misc info table (revision 1) holds pointers to the ASIC init 3 and init 4 tables (so its pointer words move with the code: 0x4d0 and 0x4d2 in sg2 6.5.22, 0x4d6 and 0x4d8 in sg2 6.5.30) and to the detected-memory table at 0x20c, which reads revision 0, the word 0x2a and a size of 256. The memory config table (0x680 in sg2, 0x685 in sg3) has revision byte 1 and first byte 0x80, followed by the records the memory-mode routine reads ([init-sequence.md](init-sequence.md#memory-mode-sequence)). **Inferred:** a 256 MB board, as for 6.5.30.

### Connector info (slot +0x50) and hardware config (slot +0x36)

**Established.** The connector table is the same eight bytes as in 6.5.30: header word 0x1211, entries 0x3300 and 0x3211, terminator 0x0000. The hardware config table starts with the characters `$ATI` and the bytes 0x02 0x0a 0x0f 0x00 0x00 0x02 and then the connector table's bytes (the hardware config table overlaps the connector table at 0x6b0 to 0x6ba in sg2). **Inferred:** the same two DVI-I outputs as in 6.5.30, per the public driver's entry layout (type in bits 15:12, DDC line in 11:8). The sg3 image has the same connector bytes.

### DFP info (slot +0x34, 6.5.22 only)

**Established.** Revision byte 4 at +0. The first records are 0x22 at +1, the word 0x99e8 (sg2) or 0x99ab (sg3) at +2, 0x00 at +4 and 0x02 at +5, then the doubleword 0x000b01d7 at +8 and at +0xc, the word 15500 at +0x10, the doubleword 0x000b01d7 at +0x12 and the word 20000 at +0x1a. **Software expectation:** `radeon_legacy_get_tmds_info_from_combios` reads this table for the internal TMDS PLL: a revision byte of 4, a count byte at +5 plus one, and per record a doubleword PLL value at +8 and a word frequency at +0x10 for the first record, then 6 bytes further per record. By that layout the table lists two usable PLL values, both 0x000b01d7, for pixel clocks up to 155.00 MHz and up to 200.00 MHz (10 kHz units); the third record the count byte implies would run into code (its words are not data), so the table's count is one record too high, **inferred**.

**Observed** (model run, [init-sequence.md](init-sequence.md#method)): the value 0xb01d7 that the VBE mode set writes to `TMDS_PLL_CNTL` (0x2a8) is the table's value, so the ROM's mode-set code uses this table (the word at +2 is a pointer into the ROM's writable RAM copy, an 18-byte buffer at 0x99e8 in sg2 and 0x99ab in sg3 that is zero in the file and that the monitor-detection code fills; **inferred** from the stores to it, not from the table). The word at +2 and the bytes at +1, +4, +6 and +7 have no public meaning: **unknown**. The 6.5.30 images have no DFP table and no code that reads one.

### CRTC info, DAC programming, maximum colour depth, save mask, CRT info (slots +0x2e, +0x2a, +0x2c, +0x4a, +0x60)

**Established.** These five are present. The pinned Linux driver names four of the slots and never reads them (DAC programming, maximum colour depth, CRTC info, save mask); it reads CRT info for the CRT DAC setting. Their contents match 6.5.30 except where a pointer inside them moves with the code. The CRTC info table is a list of records that each begin with a resolution identifier byte (the identifiers seen are `e2`, `e3`, `e4`, `e6`, `e1`, `12`, `6a`, `55` and `83`, the nine that the 6.5.30 vendor function 8 lists); the first record in sg2 6.5.22 is `e2 00 80 00 01 00 31 27 28 86 c0 01 8f 01 9c 01 02 00`. **Inferred:** the later bytes of a record are that mode's horizontal and vertical timing values in packed form, since the identifiers are the ones the mode records use. CRT info (slot +0x60) is `00 05 88 78 68 ...` in both 6.5.22 images; in 6.5.30 sg3 and sg3a the two bytes `88 78` are `aa 55`, in sg2 they stay `88 78`. The field meanings are **unknown**; no shipped reader of these tables was read in this pass ([open-questions.md](../../questions/open-questions.md#option-rom)).

### External TMDS info (slot +0x58, sg3 only)

**Established.** The table at 0x61e4 in the 6.5.22 sg3 is byte for byte the table of 6.5.30 (0x5f47): revision 2, length 27, slave address byte 0x70, DDC code 4, flags 0x80, then five register and value pairs (register 0x08 value 0x39, 0x0a and 0xf0, 0x0c and 0x89, 0x09 and 0x20, 0x0d and 0x90) ended by 0xffff. The routine that sends it is the same code in both releases except for the transaction primitive it calls ([init-sequence.md](init-sequence.md#sg3-external-transmitter)). The part behind address 0x70 is **unknown**, as in 6.5.30.

### Script tables

The ASIC init 1, ASIC init 2, init 4, PLL init and dynamic clock tables are decoded in [init-scripts.md](init-scripts.md). The 6.5.22 and 6.5.30 tables differ in a handful of values and in one block of three to four entries; the list is in [init-scripts.md](init-scripts.md#what-changed-from-6522-to-6530).

## VESA and protected-mode blocks

**Established.** A VESA information block template sits at 0x4e02 (sg2) and 0x4e00 (sg3): signature `VESA`, version 0x0200, OEM string pointer 0x1ac, capabilities 1, mode list pointer 0x4b8c (sg2) or 0x4b8a (sg3). The 56-entry mode list ends with 0xffff and holds the same mode numbers, in the same order, as the 6.5.30 list. The nine-byte mode records (57 of them, ending with a word of 0xffff) are at 0x4bfe (sg2) and 0x4bfc (sg3) and are byte for byte the 6.5.30 records. A `PMID` block (protected-mode information) is at 0x5a04 (sg2) and 0x5a02 (sg3). An 8x16 font table is present (the smiley-face glyph is at 0x30db in sg2 and 0x30d9 in sg3). The services built on these blocks are in [int10-vesa-services.md](int10-vesa-services.md).

## Layout of the 6.5.22 sg2 image

**Established.** Rough map, from the tables and from the code the init path and the video entry reach: header and strings 0x0 to 0x1ac; ASIC init tables 0x2a7 to 0x65b; connector, hardware config and DFP tables 0x6b0 to 0x6e0; init entry code from 0x6e4; mode-set, cursor, scroll and VBE code and the font from about 0x1000 to 0x9000; the VESA block at 0x4e02 and the mode records at 0x4bfe; I2C, DDC and monitor-detection code from about 0x5c00 and from 0x99fc to 0xa842; the PMID block at 0x5a04; a hole of zero bytes from 0x6943 to 0x6b4a that the ROM uses as its RAM copy's variables and stack. The hole and the single-byte checksum fix-up are the same mechanism as in 6.5.30.
