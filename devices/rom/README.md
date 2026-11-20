# rom: FireGL option ROM images

The two video option ROM images that IRIX 6.5.22 ships for the Onyx4 FireGL X1 (`sg2.bin`, PCI 1002:4e47) and X2 (`sg3.bin`, PCI 1002:4e4b), read as data and as 16-bit x86 code: header and tables, the init the kernel's x86 emulation runs, the video interrupt and VESA services, and the differences between the two boards and from the 6.5.30 images. The 6.5.30 images (`sg2.bin`, `sg3.bin`, `sg3a.bin`) are described in [option-roms.md](../../software/ucode/option-roms.md); these pages add the 6.5.22 pair and the comparison, and go further than that page on the init's register sequence and the services.

The images themselves are not in this repository, and no byte dump of them is: offsets, field values and register sequences only. The 6.5.22 pair is in the IRIX 6.5.22 patch `SG0005448` (`usr/gfx/ucode/VOYAGER/`, 45056 bytes each; hashes in [onyx4-bus-attach.md](../../software/kernel/onyx4-bus-attach.md)); the 6.5.30 images are in the 6.5.30 install at the same path (40960 bytes each).

## Pages

| Page | What it covers |
|---|---|
| [images-and-tables.md](images-and-tables.md) | PCI expansion ROM header, PCI data structure, the ATI table header and every table it points to, the VESA and PMID blocks |
| [init-scripts.md](init-scripts.md) | The register and PLL script tables the init interprets, entry by entry, and what changed between 6.5.22 and 6.5.30 |
| [init-sequence.md](init-sequence.md) | The init entry in execution order: ports, registers, values, the monitor detection and the sg3 transmitter set-up |
| [int10-vesa-services.md](int10-vesa-services.md) | The `int 0x10` function table, the VBE functions, the vendor functions, the modes, and what mode 0x107 programs |
| [differences.md](differences.md) | sg2 against sg3, and 6.5.22 against 6.5.30 |

## Summary of what the images do

- **Init (offset 3), 6.5.22 sg2 (sg3 in brackets).** Reads the card's I/O BAR, records where it runs in three scratch words, clears the other BIOS scratch registers, runs the ASIC init 1 register script (bus control, CRTC and DAC control, memory-controller indirect writes), sets up the VGA ports and the real-mode vectors (0x10 and 0x6d to the ROM's handler), then the main set-up: PLL init script, ASIC init 2 script (including the internal TMDS block), a DDR-style memory-mode load through `SDRAM_MODE_REG`, the memory size literal (256 MB), a second-DAC test, the monitor detection over DDC (software bit-bang for the X1, the chip's I2C engine for the X2), the dynamic clock script, display-combination and scratch-byte set-up; for the X2 the external transmitter script (five register writes to the device at I2C address 0x70); a text mode 3 set; the title line; and a checksum fix-up. See [init-sequence.md](init-sequence.md).
- **Services.** The ROM replaces vectors 0x10 and 0x6d with a handler for the standard `int 0x10` functions 0x00 to 0x13, 0x1a, 0x1b and 0x1c, the VBE functions 0x00 to 0x0a, 0x10 and 0x15 (the rest return unchanged), and 15 vendor functions under `ah` = 0xa0. VBE mode 0x107 (1280 by 1024, 8 bits per pixel) is in the 56-mode list and the mode records, and the mode set programs the CRTC timing for 1280 by 1024 with a 256-entry palette. See [int10-vesa-services.md](int10-vesa-services.md).
- **6.5.22 against 6.5.30.** The later ROM drops the monitor detection and the internal TMDS programming and the DFP table, adds a host-bridge fix, and changes a few register values; the mode list, mode records, VBE handlers and script interpreters are unchanged. See [differences.md](differences.md).

## Grades

Every fact on these pages carries one of these grades.

- **established**: read in the image bytes (a table, a field, or the whole body of a routine), or counted from a measurement of the images (routine counts, byte comparisons).
- **observed**: seen in a run of the ROM's own x86 code under a CPU emulation, with a small model standing in for the chip (a register file that returns what was last written; the PCI configuration mechanism, the BIOS time-of-day timer and interrupt 0x1a answered by the model; I2C status registers reading as ready; every other detection read returning zero). It says what the ROM writes, and in what order, given those answers. It is model behaviour and never hardware evidence.
- **software expectation**: a name, layout or meaning taken from a public source: the PCI Local Bus specification, the VESA BIOS Extension, and the Linux radeon driver (`drivers/gpu/drm/radeon/radeon_reg.h`, `radeon_combios.c`) at the pinned commit of `references/code/linux`. A register name from there is a cross-check, not proof of what this board does.
- **inferred**: a reading with its reasoning stated.
- **unknown**: nothing read supports a value or meaning; the routes tried are named, and the entry is in [questions/open-questions.md](../../questions/open-questions.md#option-rom).

Register names in the "Linux name" columns are the public Linux names; names marked as this repository's display unit are the names of [devices/display](../display/README.md). `P` is the base of the card's I/O BAR (configuration offset 0x14), and "indexed" and "direct" are the two ways the init reaches registers through it, described in [init-sequence.md](init-sequence.md#how-the-chip-is-reached).

## Method and limits

The images were extracted from the patch's inst archive with the project's own extraction code and checked against the hashes recorded in [onyx4-bus-attach.md](../../software/kernel/onyx4-bus-attach.md). Tables were decoded with `retools/tools/voyager/option_rom.py`. Code was disassembled as 16-bit x86 with `objdump -m i8086` in the analysis container, and walked with a recursive-descent disassembler (Capstone, 16-bit mode); Ghidra was not used. The ROM's own code was run under a CPU emulation to log the real order of register accesses (see [init-sequence.md](init-sequence.md#method)); that harness is not committed here, since tools live in the shared tools checkout, and the open questions list it as a follow-up.

Limits: no hardware was read; the monitor-dependent branches, the DDC transfers and the I2C results are not reproduced by the model, and the sg3 6.5.22 mode information from the model run is unknown. Routines that no handler or init path reaches (for example the bodies behind unread callees) were not read.
