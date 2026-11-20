# Option ROM video interrupt and VESA services, 6.5.22 images

The services the 6.5.22 `sg2.bin` and `sg3.bin` install through the video interrupt: the standard `int 0x10` function table, the VBE (`ah` = 0x4f) functions, and the vendor function group (`ah` = 0xa0), with what each programs and which modes they support, mode 0x107 in particular. Where the code is the same as in the 6.5.30 images, the full account of each handler is in [option-roms.md](../../software/ucode/option-roms.md#the-video-entry-and-its-tables) and this page gives only the 6.5.22 addresses and differences.

Grades are explained in [README.md](README.md#grades). **Observed** means seen in a run of the ROM's own code under a CPU emulation with a model standing in for the chip ([init-sequence.md](init-sequence.md#method)): it shows what the ROM does with the answers the model gives (every read returns the last value written, detection reads return zero), and is not a hardware capture. Register names are the pinned Linux names (**software expectation**) unless marked otherwise.

## Vectors and entry

**Established.** The init installs the ROM's handler at cs:0x1eba (sg2) or cs:0x1eb8 (sg3) in the real-mode vectors 0x10 and 0x6d ([init-sequence.md](init-sequence.md#the-init-in-execution-order-sg2-6522-entry-0x6e4), step 5). Vector 0x42 keeps the system BIOS's handler (F000:F065) as the chain target. The handler runs `sti`, `cld` and then:

- `ah` = 0xa0: the vendor group (below), reached at 0x130a (sg2).
- `ah` = 0x4f: the VBE dispatcher at 0x4e88 (sg2) or 0x4e86 (sg3).
- Otherwise it pushes the word at `cs:[0x1306]` (the address of an `iret`), saves ds, es and all registers, and for `ah` below 0x1d jumps through the word table at 0x1ef4 (sg2) or 0x1ef2 (sg3); for a larger `ah` it restores the registers and chains to vector 0x42.

The structure is the same as the 6.5.30 handler (`0x1c72`). **Inferred:** the function names in the next table are the standard video BIOS numbering, from the position in the table.

## Video interrupt function table (`ah` = 0x00 to 0x1c)

**Established** (addresses read from the table); names **inferred**.

| ah | Function | sg2 | sg3 | Same code as 6.5.30? |
|---|---|---|---|---|
| 00 | set mode | 1f68 | 1f66 | **no** |
| 01 | cursor shape | 8fd0 | 8f93 | yes |
| 02 | cursor position | 8fe9 | 8fac | yes |
| 03 | read cursor | 9006 | 8fc9 | sg2 yes, sg3 no |
| 04 | light pen | 20e4 | 20e2 | yes |
| 05 | active page | 8591 | 8554 | yes |
| 06 | scroll up | 85be | 8581 | yes |
| 07 | scroll down | 866c | 862f | yes |
| 08 | read char | 86fb | 86be | yes |
| 09 | write char and attribute | 889a | 885d | yes |
| 0a | write char | 889e | 8861 | yes |
| 0b | palette or border | 8ca3 | 8c66 | yes |
| 0c | write pixel | 8d7a | 8d3d | sg2 yes, sg3 no |
| 0d | read pixel | 8e0c | 8dcf | yes |
| 0e | teletype | 8e82 | 8e45 | yes |
| 0f | current mode | 9022 | 8fe5 | yes |
| 10 | palette registers | 9085 | 9048 | sg2 no, sg3 yes |
| 11 | character generator | 935c | 931f | yes |
| 12 | alternate select | 25b0 | 25ae | yes |
| 13 | write string | 97ec | 97af | yes |
| 14 to 19 | return | 1eee | 1eec | yes |
| 1a | display combination | 98c0 | 9883 | yes |
| 1b | functionality information | 41aa | 41a8 | yes |
| 1c | save or restore state | 42f9 | 42f7 | no |

"Same code" means the routine body is instruction for instruction the same as the 6.5.30 routine once addresses and immediate values are ignored, in the comparison described in [differences.md](differences.md#6522-against-6530). **Established.** Where the code differs, the visible difference in function 00 (set mode) is that the 6.5.22 handler makes extra checks that call `0xa097`, `0xa0a4` and `0x63e7` and a call to `0x68bd` that 6.5.30 lacks: the monitor-detection subsystem ([init-sequence.md](init-sequence.md#monitor-detection-6522-only)). What those checks decide, and the small differences in the other four handlers, were not read: **unknown**.

## VBE (`ah` = 0x4f)

**Established.** The dispatcher (`0x4e88`; sg3 `0x4e86`) pushes the iret address, returns at once with `ax` unchanged for `al` of 0x16 or more, and otherwise jumps through the 22-word table at 0x59d4 (sg3 0x59d2). Every one of the 22 entries is a real handler or the stub at 0x5a00 (sg3 0x59fe: `mov bx,ax; ret`, which leaves AX as the caller passed it). **Software expectation:** VESA BIOS Extension numbering (the `VESA` block layout matches Linux `uapi/video/uvesafb.h`).

| al | VBE function | sg2 | sg3 | Same code as 6.5.30? |
|---|---|---|---|---|
| 00 | return controller information | 4e9d | 4e9b | yes |
| 01 | return mode information | 4f68 | 4f66 | yes |
| 02 | set mode | 5136 | 5134 | yes |
| 03 | return current mode | 5286 | 5284 | yes |
| 04 | save and restore state | 5419 | 5417 | yes |
| 05 | display window control | 52c7 | 52c5 | yes |
| 06 | logical scan line length | 54bc | 54ba | yes |
| 07 | display start | 559f | 559d | yes |
| 08 | DAC palette width | 563c | 563a | yes |
| 09 | palette data | 5673 | 5671 | yes |
| 0a | protected-mode interface | 56f9 | 56f7 | yes |
| 10 | display power management | 58c6 | 58c4 | yes |
| 15 | display data channel | 5925 | 5923 | yes |
| 0b to 0f, 11 to 14 | not supported (stub) | 5a00 | 59fe | |

**Established** by that comparison, which ignores immediate values (so a changed constant or register offset would not show): the handlers of functions 0x00 to 0x0a, 0x10 and 0x15 have the same instruction sequence as in 6.5.30, so the 6.5.30 account of what each does ([option-roms.md](../../software/ucode/option-roms.md#the-video-entry-and-its-tables)) holds for 6.5.22 up to constants; the addresses move. The services, from that account and checked in the model run, are:

| Function | What it programs (6.5.30 reading, same code) | Observed in the 6.5.22 sg2 model run |
|---|---|---|
| 4f00 | no registers; copies the 0x14-byte (or, for a `VBE2` signature, 0x22-byte) template from 0x4e02, sets the segment words, and stores the memory size in 64 KB units | returns AX = 0x004f; signature `VESA`, version 0x0200, OEM string pointer c000:01ac, capabilities 1, mode list pointer c000:4b8c (sg3 4b8a), total memory 0x1000 (256 MB); reads `CONFIG_MEMSIZE` only |
| 4f01 | no writes; fills the 0x32-byte block from the mode record, the memory size and the physical frame buffer address | per mode, [table below](#mode-information-for-mode-0x107-and-neighbours); reads `BIOS_0_SCRATCH`, `BIOS_2` to `BIOS_5` bytes, `CONFIG_MEMSIZE` and the word at 0xf12 |
| 4f02 | the mode set, below | below |
| 4f03 | none | returns the last mode in BX (0x4107 after a set of 0x4107); reads `BIOS_0_SCRATCH` |
| 4f05 | window position into the 16-bit registers at `P+0x38` (window A) and `P+0x3c` (window B) | fails with AX = 0x034f after a set with the linear frame buffer bit (0x4107); succeeds after a set of 0x107 (the 6.5.30 account: function fails with AH = 3 when bit 3 of `P+0x10` is set) |
| 4f06 | logical scan line length into register 0x22c (`CRTC_PITCH`) | a get returns 0x500 bytes and 0x500 pixels (1280) |
| 4f07 | display start into register 0x224 (`CRTC_OFFSET`) | a set writes register 0x224; a get reads it |
| 4f08 | DAC width by the vendor function 2 | a get returns BH = 6; a set to 8 leaves BH = 6 (the model's `DAC_CNTL` bit 8 stays clear: a 6-bit DAC) |
| 4f09 | palette: index to `P+0xb0` (`PALETTE_INDEX`), data to `P+0xb4` (`PALETTE_DATA`) | not exercised beyond the call; the mode set loads all 256 entries the same way |
| 4f0a | none | returns ES:DI to the block described by the PMID block and CX = 0x1b7 |
| 4f10 | vendor function 0x0a (display power states) | a capability request returns BX = 0x0710 |
| 4f15 | vendor function 0x0b (display data channel), which reaches the DDC transfer primitive | in sg2 the transfer accesses `GPIO_VGA_DDC` by byte ([init-sequence.md](init-sequence.md#monitor-detection-6522-only)) |

Function 0x04 returned AX = 0 in the model run (not 0x004f); that is the 6.5.30 behaviour when none of the first 60 interrupt vectors has a nonzero segment below 0xa000, which is the case in the model's memory, so it says nothing about the real BIOS data area.

### VBE function 0x02 (set mode)

**Observed** for mode 0x4107 and 0x107 in the sg2 model run. The register traffic is the same for the two, apart from scratch bytes that depend on earlier state: the linear frame buffer bit changes no chip register write. In order (chip accesses; VGA I/O ports are summarised after the list):

1. `CRTC_OFFSET_CNTL` (0x228) byte 1 written 0; `SURFACE_CNTL` (0xb00) byte 1 written 1 (bit 8, `SURF_TRANSLATION_DIS` in the Linux header: the surface translation is disabled).
2. `BIOS_4_SCRATCH`, `BIOS_5_SCRATCH` and `BIOS_0_SCRATCH` bytes updated; `DAC_CNTL` (0x58) byte 3 written 0xff (`DAC_MASK_ALL`) and byte 1 written 0 or 0x20; `CRTC_EXT_CNTL` (0x54) byte 3 written 0.
3. Pixel PLL for the underlying VGA mode: `VCLK_ECP_CNTL` (PLL index 8) lane 0 written 0; `PPLL_CNTL` (index 2) lane 0 written 1; `TMDS_PLL_CNTL` (0x2a8) written 0xb01d7 twice; `PPLL_CNTL` lane 1 changed from 0xa4 to 0xbc; `PPLL_DIV_3` (index 7) = 0x7078086; `PPLL_DIV_0` (index 4) lane 2 = 0x43; `PPLL_REF_DIV` (index 3) = 0x30800c; `PPLL_CNTL` lane 0 = 0; `VCLK_ECP_CNTL` lane 0 = 3. Register 0x2f4 = 0x3434 (the pinned header has no name for 0x2f4; `GRPH_BUFFER_CNTL` is 0x2f0).
4. The VGA registers of the base mode: miscellaneous output (0x3c2, 1 write), sequencer (0x3c4, 8), attribute controller (0x3c0, 45), graphics controller (0x3ce, 9), CRTC (0x3d4 and 0x3b4: 26 register writes at 0x3d4, the unlock write first), DAC mask (0x3c6) and the DAC palette (0x3c8 index and 0x3c9 data: 256 index writes and 768 data writes).
5. If bit 15 of the mode is clear, the display memory is cleared through the window registers: the 16-bit registers at `P+0x38` and `P+0x3c` are written with the window positions 0, 2, 4 up to 0x50 and then reset to 0 (observed 42 positions); `CRTC_GEN_CNTL` (0x50) byte 3 written 1.
6. The chip mode: the pixel PLL again (`VCLK_ECP_CNTL` lane 0 = 0, `PPLL_CNTL` lane 0 = 1, `TMDS_PLL_CNTL` = 0xb01d7 twice, `PPLL_CNTL` lane 1 = 0xbc, `PPLL_DIV_3` = 0x7048018, `PPLL_DIV_0` lane 2 = 0x43, `PPLL_REF_DIV` = 0x88002, `PPLL_CNTL` lane 0 = 0, `VCLK_ECP_CNTL` lane 0 = 3, lane 1 = 0), then the CRTC and flat-panel shadow timing registers: for mode 0x107, `CRTC_H_TOTAL_DISP` (0x200) = 0x9f00d2 with the shadow `FP_CRTC_H_TOTAL_DISP` (0x250) the same; `CRTC_H_SYNC_STRT_WID` (0x204) = 0xe0528 and `FP_H_SYNC_STRT_WID` (0x2c4); `CRTC_V_TOTAL_DISP` (0x208) = 0x3ff042a and `FP_CRTC_V_TOTAL_DISP` (0x254); `CRTC_V_SYNC_STRT_WID` (0x20c) = 0x30400 and `FP_V_SYNC_STRT_WID` (0x2c8); `OVR_WID_LEFT_RIGHT` (0x234), `OVR_WID_TOP_BOTTOM` (0x238) and `OVR_CLR` (0x230) = 0; `CRTC_GEN_CNTL` low word = 0x0200; `CRTC_EXT_CNTL` byte 3 = 0 and byte 1 = 0x80; `CRTC_OFFSET` (0x224) = 0; `CRTC_PITCH` (0x22c) = 0xa0; `DAC_EXT_CNTL` (0x280) = 0; `CRTC_GEN_CNTL` byte 3 = 3 (`CRTC_EXT_DISP_EN` and `CRTC_EN`); `DAC_CNTL` byte 3 = 0xff and byte 1 = 0x20 (`DAC_VGA_ADR_EN`, with `DAC_8BIT_EN` clear); `PALETTE_INDEX` = 0; 256 dword writes to `PALETTE_DATA` (the 6-bit standard colour table shifted left by 2, in the byte layout the ROM reads three bytes per entry at a time); `BIOS_0_SCRATCH` bit 7 changed.

**Established** for the structure (the 6.5.30 read of the same code); the values above are **observed** and depend on what the model returned. Decoding of the timing words against the public field layout (**software expectation**, `radeon_reg.h`: `CRTC_H_TOTAL` bits 9:0, `CRTC_H_DISP` bits 24:16, `CRTC_H_SYNC_STRT_CHAR` bits 12:3 and `CRTC_H_SYNC_WID` bits 21:16, `CRTC_V_TOTAL` bits 10:0, `CRTC_V_DISP` bits 26:16, vertical sync start in bits 10:0 and width in bits 20:16 of `CRTC_V_SYNC_STRT_WID`), with the usual stored-value-minus-one convention for characters and lines: 0x9f + 1 = 160 characters of 8 pixels displayed (1280 pixels); 0xd2 + 1 = 211 characters total (1688 pixels); horizontal sync start character 0xa5 + 1 (pixel 1328) and width 14 characters (112 pixels); 0x3ff + 1 = 1024 lines displayed; vertical sync start line 0x400 + 1 = 1025 and width 3 lines; a vertical total field of 0x42a; and `CRTC_PITCH` 0xa0 = 160 units of 8 pixels = 1280 pixels at 8 bits per pixel. **Inferred**: these are the standard 1280 by 1024 at 60 Hz numbers (1688 total, sync 1328 for 112, vertical sync 1025 for 3) and agree with the 1280 by 1024 at 8 bits per pixel that mode 0x107 names and with the mode record's video mode 0x66, resolution identifier 0x83 and 160 by 64 character grid ([below](#mode-information-for-mode-0x107-and-neighbours)); the vertical total field is 1066, i.e. 1066 or 1067 lines depending on whether the ROM stores the count or the count minus one, and which was not worked out. The pixel clock the PPLL values produce is **unknown**: the divider layout is not checked. The 6.5.22 mode set programs these from the ROM's own tables: the timing numbers are read from the CRTC info table (identifier 0x83) or computed from the mode record; which of the two is **unknown**.

The model run does not show the timing registers written for a different mode, and the run's monitor-dependent branches all take the "no monitor data" path; a run with real monitor data may differ. **Unknown:** whether the extra monitor checks in function 0 and the mode set ever change the programmed timing.

## Mode information for mode 0x107 and neighbours

**Established.** The mode list that function 0x00 reports (56 modes, ending 0xffff, at 0x4b8c in sg2 and 0x4b8a in sg3) and the 57 nine-byte mode records (at 0x4bfe in sg2 and 0x4bfc in sg3) are byte for byte the 6.5.30 data. The record for mode 0x107 is the nine bytes `07 01 66 a0 02 83 3f a0 10`: mode word 0x0107, video mode byte 0x66, class 0xa0 (graphics), depth class 2 (8 bits per pixel), resolution identifier 0x83, 64 character rows (0x3f plus 1), 160 columns (0xa0) and a cell height of 16. The depth variants of 1280 by 1024 are 0x119 (15 bits per pixel), 0x11a (16), 0x11b (24) and 0x124 (32).

**Observed** (function 0x01, sg2 6.5.22 model run, and identical in the sg2 and sg3 6.5.30 images and in `sg3a.bin`): mode 0x107 returns attributes 0x00bb (VBE numbering: bit 0 supported, bit 1 optional information, bit 3 colour, bit 4 graphics, bit 5 not VGA compatible, bit 7 linear frame buffer available), window A attributes 0x07 (relocatable, readable, writable), window B attributes 0, granularity and window size 64 KB, both window segments 0xa000, window function pointer c000:537e (a routine inside the ROM, not read here), 1280 bytes per scan line, 1280 by 1024, an 8 by 16 character cell, 1 plane, 8 bits per pixel, 1 bank, memory model 4 (packed pixel), 203 image pages, and zero in the direct-colour fields. The 32-bit physical base reads 0 in the model because the ROM derives it from the word at register 0xf12 (the pinned header's `MEM_BASE` is 0xf10) and the model returns 0; a real value is **unknown**. Two non-zero bytes at offsets 0x2e (0x14) and 0x31 (0xfb) of the returned block are not VBE 2.0 fields at those offsets; their source and meaning are **unknown**.

For the sg2 6.5.22 model run the other 1280 by 1024 modes read: 0x119 pitch 2560, 101 pages; 0x11a pitch 2560, 101 pages; 0x11b pitch 3840, 67 pages; 0x124 pitch 5120, 50 pages. The depth-8 modes 0x100, 0x101, 0x103 and 0x105 are 640 by 400, 640 by 480, 800 by 600 and 1024 by 768 and have 254, 254, 254 and 254 pages; the three planar modes 0x6a, 0x102 and 0x104 return attributes 0x001b. The full list of 56 modes is in [option-roms.md](../../software/ucode/option-roms.md#vesa-and-protected-mode-blocks). **Caveat.** The same model run on `sg3.bin` 6.5.22 returned one default record (1024 by 768, planar, 4 bits per pixel, window attributes 5 and 3) for every mode, where sg2 6.5.22 and all three 6.5.30 images return the per-mode records above. The sg3 6.5.22 init ends in the model with fewer BIOS data area fields set than the sg2 run (for example the character height and row count at 0x484 and 0x485 are not set), and the cause was not found, so the sg3 6.5.22 mode information from the run is **unknown**; the model's constant answers to the DDC probes are the likely difference, which is a guess. The sg3 list and records in the file are the same bytes as sg2's.

## The IRIX VGA layer's mode 0x107

**Established** from the kernel side ([onyx4-bus-attach.md](../../software/kernel/onyx4-bus-attach.md)): `vga_init_board` runs the ROM's init entry in its x86 emulation and `vga_set_vesa_mode` then makes two emulated `int 0x10` calls, AX = 0x4f02 (mode 0x107) and AX = 0x4f03. Both 6.5.22 images support it: it is in the mode list and has a record (the sg2 model run returns AX = 0x004f for a set of 0x107 and of 0x4107, and function 0x03 returned AX = 0x004f with BX = 0x4107 after the latter); the sg2 model run's mode set programs the 1280 by 1024 at 8 bits per pixel timing above. The sg3 mode set was not run to completion in the model. **Not established:** that the chip state the kernel's later code expects follows from this sequence on a board; the model's register file only echoes writes.

## Vendor functions (`ah` = 0xa0)

**Established.** The dispatcher at 0x130a (sg2) takes `al` below 0x20 through the word table at 0x1332 (sg3 0x133a). The same 15 functions are real in both releases: 0x00, 0x01, 0x02, 0x04 to 0x0d, 0x14 and 0x15; function 0x03 and the rest are a return stub. The addresses in sg2 6.5.22 are 0x1372, 0x137e, 0x138e, 0x13a5, 0x13ca, 0x13f1, 0x141e, 0x1436, 0x1451, 0x14e3, 0x1523, 0x1545, 0x1554, 0x1560 and 0x156a. Function 0x0b (`0x1523`) is the DDC read: in 6.5.22 it calls the DDC transfer primitive `0x6270` directly (in 6.5.30 it calls `0x5dbb`, whose transport was not read). Functions 0x01, 0x09, 0x0a and 0x0b differ in code from 6.5.30; the 6.5.22 function 0x01 calls an extra routine (`0x63e7`) when a bit pattern from `0x66ba` is set; the other differences were not read.
