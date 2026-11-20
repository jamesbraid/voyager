# How the IP35 PROM brings up the PCI graphics card

What the IP35 PROM does to an Onyx4 FireGL card before any kernel code runs, read in the PROM images of IRIX 6.5.22 and IRIX 6.5.30: how it finds the card, which parts of the card's PCI configuration space it touches, the x86 interpreter it runs the card's option ROM in (memory map, port forwarding, interrupt vectors, the two calls it makes), every field of the ROM it reads, what it leaves behind for the text console, and what differs between the two releases. The kernel half of the same story is [Kernel attach path](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg); this page adds the emulator, the console and the 6.5.22 comparison, and corrects two points of that section (see [Corrections](#corrections-to-earlier-pages)). Labels follow `AGENTS.md` section 5, with the two extra grades the brief asks for: **observed** (a published capture), **software expectation** (what public driver code would do).

## Method and images

- Images: `usr/cpu/firmware/ip35prom.img` of IRIX 6.5.22 (PROM version 6.170, built 6 August 2003; image 1,477,560 bytes) and of IRIX 6.5.30 (PROM version 6.210, built 26 August 2004; 1,480,360 bytes). **Established** from the version strings in each image and the container header. A later 6.211 image (patch media) was not read.
- Layout, **established** for both: after the container header, an uncompressed node-PROM part loaded at physical 0x1fc00000 (572,336 bytes in 6.5.30, 561,536 in 6.5.22), then a gzip stream that inflates to a big-endian 64-bit MIPS image loaded at 0xc000000013000000 (entry 0x13000140). Everything graphical is in the inflated image. Addresses below are the low 32 bits of its virtual addresses; 6.5.30 first, 6.5.22 in brackets.
- Tools: **Ghidra** (headless, decompiler) for every reading, with **objdump** (MIPS64 big-endian, binary input) as the check on the constants quoted: the VESA numbers 0x4f02, 0x4f03, 0x107, 0x105, the sizes 0x500x0x400 and 0x400x0x300, the vendor 0x1002, the ROM base 0x200001 and the offsets 0x30, 0x14, 0x20000 and 0x820000 all agree between the two. Control flow, struct offsets and the 6.5.22 comparison rest on Ghidra alone.
- Comparison: the inflated images have 2,308 (6.5.30) and 2,267 (6.5.22) recovered functions; 1,843 of the 6.5.30 functions have a textually identical decompilation (after masking addresses and variable names) in 6.5.22. Every routine on the graphics path was then compared one by one; see [what differs](#what-differs-between-6522-and-6530).
- The routine names are mine; the images have no symbols. Message strings in the images are the anchors.

| Role | 6.5.30 | 6.5.22 |
|---|---|---|
| per-board entry (identify, run ROM, set mode, record result) | 0x13023dcc | 0x13024604 |
| identify and enable the card | 0x13023c3c | 0x13024474 |
| run the ROM and set the mode | 0x13023ab4 | 0x130242ec |
| ROM size probe | 0x13023a64 | 0x1302429c |
| ROM window and shadow copy | 0x130238ac | 0x130240e4 |
| legacy I/O window, VGA memory window, linear frame-buffer window | 0x130237a4, 0x13023814, 0x130231e8 | 0x13023fdc, 0x1302404c, 0x13023a20 |
| set VESA mode (4f02, 4f03) | 0x13023324 | 0x13023b5c |
| after-init graphics-controller write | 0x13023440 | 0x13023c78 |
| build the x86 context | 0x13023580 | 0x13023db8 |
| call the ROM init | 0x130234f4 | 0x13023d2c |
| interrupt dispatch | 0x13028dcc | 0x13029644 |
| private ROM-call case, PCI BIOS case, built-in video case | 0x13021110, 0x130211d4, 0x130215b0 | 0x1302172c, 0x13021824, 0x13021d34 |
| vectors, BDA and fonts into emulated RAM | 0x13022dc8, 0x13022b38 | 0x130236d0, 0x13023410 |
| I/O port hooks (six) | 0x13000f9c, 0x13000eb0, 0x13000c34, 0x13000d80, 0x13000d3c, 0x13000a74 | same addresses |
| install the graphics console | 0x130d1708 | 0x130d770c |
| KLCONFIG graphics board enumerator | 0x130ccc94 | 0x130d2c34 |
| driver open (builds the board record) | 0x1307c358 | 0x1307fbd0 |
| console ops table: set colour, set palette entry, fill rectangle, move cursor, draw glyph, init | 0x131234e0 to 0x13123518 | not located |

## 1. How the card is found and set up

### Which card, which bus (selection)

- The PROM does not scan PCI for the card in the graphics path. It takes a board record from its own configuration table (the KLCONFIG list the node PROM builds): the enumerator 0x130ccc94 walks the 128 widget slots, follows each widget's board list and collects every component of type 0x2f into one list. **Established** for the walk and for the fields it derives per component: record +0x50 the index of the slot in the 128-entry table it walks (a node or widget slot; not resolved), +0x52 a copy of the component's byte at +0x18 (the PCI device number, **inferred** from its later use as the slot), and from the halfword at component +0x24 bits 10:8 into +0x54 (**inferred** the PCI function), bits 13:12 into +0x56 (**inferred** the PCI bus number, 0 or 1) and bit 11 into +0x53 (selects the `a` or `b` path suffix). The meaning of type 0x2f as "PCI VGA graphics" is **inferred** from the component-name table at 0x1311f800 (see below) and from the use here.
- The code that creates those components from a PCI scan is **unknown**. The message `init_klcfg_vgagfx: Cannot add component` is in the node-PROM part of both images (0x1fc7e428 in 6.5.30) but no instruction sequence that builds its address was found (every lui/daddiu form, a pointer search, and decompiling all 1,022 recovered functions of that part).
- `kl_graphics_install` (0x130d1708 [0x130d770c]) picks the console card. **Established**: it returns at once if the `console` environment variable starts with `d` or `D` (serial console); otherwise it prints "Installing Graphics Console", reads `gConsoleOut`, falls back to `console`, parses the decimal pipe number that follows the first character (`g`, `g1`...), prints `graphics install: searching for pipe %d`, looks first for a non-VGA graphics board of that number (0x130ccf20) and only then for a VGA board (0x130ccc94, pipe 0 as the last resort); with none it prints `klgraphics: System has no GFX`. For a VGA board it builds the hardware-graph path `/hw/module/<module>/<brick>/xtalk/<widget>/<bus>/pci/<device>[a|b]` (the widget is bits 31:24 of the bridge address; the form without `<bus>` is used when the brick flag is clear, an `a` or `b` suffix when record +0x53 is set, `b` when +0x54 is non-zero), resolves it, prints `console is VGA(%d) <path>` and stores 1 in record byte +0x57. The environment variables are described in the IP35 PROM environment notes of the chips workspace (`platforms/ip35/prom-environment.md`).
- Record byte +0x55, the "bridge is a Bridge-family chip with a second bus naming" flag, is set when the lower-case brick-type byte at board +5 is one of `v`, `u`, `x`, `w`. **Established** as code; what those four types are is **unknown**.
- **Only the console card is brought up.** **Established** for 6.5.30 (and by the byte-identical routines for 6.5.22): the only store of 1 to record +0x57 in the whole inflated image is the one above; the driver's open routine (0x1307c358) returns the first enumerated board whose +0x57 is 1 and is the only creator of the 0xe0-byte board structure the graphics routines work on. A second Onyx4 pipe, or any card that is not the console pipe, gets no ROM run, no mode set and no window set-up from the PROM. This answers the open question in [kernel-attach.md](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg) and in the open-questions list.
- The open routine copies from the KLCONFIG record into the board structure: +8 the bridge's base address (record +0x40), +0x10 the device number (record +0x52), +0x11 the function (record +0x54), +0x12 the flag (+0x55), +0x13 the bus (+0x56), +0x22 the "bridge slot" which is the device number minus one when the flag is set (the PIC convention that its devices start at 1; **inferred** from the arithmetic and the existing [bus-attach page](../kernel/onyx4-bus-attach.md)), and +0x98 the KLCONFIG record. **Established**.

### Configuration window and the command register

All three are **established** as arithmetic; the register meanings are **inferred** where stated.

- Configuration window = bridge base + device x 0x1000 + function x 0x100 + 0x20000 for bus 0, + 0x820000 for bus 1 (0x20000 plus 0x800000). That is the layout of the Bridge family's type 0 configuration window, with the second PIC bus 8 MB above the first (**inferred**; same arithmetic as the kernel's pipe walker).
- Reads go through a window that presents each 32-bit configuration word byte-reversed. **Inferred** from the code testing the halfword at offset 2 for vendor 0x1002 and the byte at offset 0xb for the revision.
- The PROM reads vendor (offset 2), device (offset 0), revision (0xb) and the class bytes (8, 9, 0xa) and keeps them in the board structure; the 0xe6 call and the PCI BIOS emulation read them back (section 2).
- **Vendor 0x1002 only:** it writes 0x00000400 to configuration offset 0x14, the card's I/O BAR. **Inferred** consequence: the card's I/O space then decodes ports 0x400 to 0x4ff, which is where the option ROM's init code expects to find it, because the port forwarding below maps a port to the same number on the PCI I/O bus (the legacy I/O window has offset field 0). The write is skipped for any other vendor.
- **Every vendor:** it ORs 3 into the byte at window offset 7, which is the low byte of the command register (**inferred** from the reversal): I/O space and memory space decode on. It does not set bus master, SERR or parity bits here; whether anything else does is **unknown** (see [gaps](#gaps)).
- **Memory BARs:** the PROM does not size or assign BAR 0 or BAR 2. It only reads them: the linear-frame-buffer routine (0x130231e8) scans the six BAR registers (offsets 0x10 to 0x24) for the first one with bit 3 set and bits 1:0 clear (32-bit prefetchable memory) and stores its index; with none it prints `vga[%d] can't find lfb bar`. **Established.** Its Device(n) window is then set to the BAR value's bits 31:20, so the BAR must already hold an address when the PROM arrives. Where it was assigned is **unknown**: a search of the whole inflated image for the usual size-probe pattern (write all ones, read back, invert) finds exactly one routine, the ROM probe below. A 64-bit BAR 0 (bits 2:1 equal 10) would not be matched; the R300's frame-buffer BAR type is not recorded in any page here.
- **Expansion ROM BAR:** **established.** Write 0x00200001 to offset 0x30 (base 0x200000, enable); probe the size by writing all ones, reading back and restoring: size = (~readback | 0xf) + 1; read through a Device(n) window whose offset field is bits 31:20 of the ROM base (so 2) with byte swap and memory select set; accept the image if bytes 0 and 1 are 0x55 0xaa, or as a word-swapped image if bytes 3 and 2 are; copy `size` bytes into a freshly allocated shadow buffer (swapping each 32-bit word for the swapped form); then use the copy. **On success it writes 0x00200000 back to offset 0x30**: the ROM stops decoding but the base is left at 0x200000 and the previous ROM BAR value is not restored. On a bad signature it prints `vga_extract_rom: failed` and leaves the ROM enabled. The size probe's result depends on the card's ROM BAR size, which no page here records (**unknown**).

### The three windows

All **established** for the stores; the Bridge meanings are **inferred** from the public Bridge layout. The bridge's Device(n) register of slot s is at bridge base + 0x204 + 8 x s. Each window address is bridge base + 0x200000 + index x 0x100000, with index 2s for slots 0 and 1 and s + 2 for the rest (so slots 0 and 1 have 2 MB windows, the others 1 MB, **inferred**).

| Window | Device(n) bits set | Offset field | Stored |
|---|---|---|---|
| ROM | 13 and 12 | bits 31:20 of the ROM base | window address in board +0x30 |
| legacy I/O (ports) | 13 set, 12 clear | 0 | register in +0x58, address in +0x48 |
| VGA memory (0xa0000 aperture) | 13 and 12 | 0 | register in +0x70, address in +0x60 plus 0xa0000, size 0x20000 |
| linear frame buffer | 13 and 12 | bits 31:20 of the chosen BAR | register in +0x90, address in +0x78 |

Bit 13 is the device byte swap (set for all four), bit 12 selects memory over I/O (**inferred**). Before every port or VGA-memory access the PROM re-selects the right register, because one register per slot serves all windows. The values for the legacy and frame-buffer windows go into the KLCONFIG component record (+0x68 to +0x8c) where the kernel's early console picks them up unchanged ([kernel-attach.md](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg)).

## 2. The x86 interpreter

The interpreter is a general 16-bit x86 core with the usual PC-BIOS helper layer of an X server's int10 module: the messages are `xf86InitInt10`, `xf86ExecX86int10`, `xf86Int10InfoPtr`, `setup_int failed` and per-interrupt trace messages. All **established** below unless marked.

### Context and memory map

The context builder (0x13023580) allocates a 0x58-byte context, a private block of 0x28 bytes (one flag byte per 16 KB page of low memory, 0x27 pages), the RAM block of 0xf0000 bytes, and one 64 KB block shared by every context for the 0xf0000 segment. It copies **64 KB (0x10000 bytes)** from the start of the shadow ROM to offset 0xc0000 of the RAM block, whatever the ROM's own size, then sets the context's request word to 0xe6 and its code segment to 0xc000.

| Emulated address | Behaviour |
|---|---|
| 0x00000 to 0xeffff | plain RAM from the malloc'd block |
| interrupt vector table, offsets 0x000 to 0x1ff | all 128 vectors start as F000:0000; then INT 5 (0x14) = F000:FF54, INT 8 (0x20) = F000:FEA5, INT 0xe (0x38) = F000:EF57, INT 0x10 (0x40), 0x42 (0x108) and 0x6d (0x1b4) = **F000:F065**, INT 0x11 (0x44) = F000:F84D, INT 0x12 (0x48) = F000:F841, INT 0x13 (0x4c) = F000:EC59, INT 0x15 (0x54) = F000:F859, INT 0x17 (0x5c) = F000:EFD2, INT 0x1a (0x68) = F000:FF6E, INT 0x1e (0x78) = F000:EFC7, INT 0x1f (0x7c) = F000:FA6E; INT 0x1d (0x74) = 0000:0FA4 |
| 0x00400 (BDA) | all zero except the equipment word at 0x410, whose bits 5:4 are cleared (initial video type = EGA or VGA) |
| 0x00600 | one byte 0xf4 (HLT): the return target of the ROM call |
| 0x00fa4 to 0x00fff | 92 bytes copied from a table in the PROM (the video parameter table that INT 0x1d points to) |
| stack | SS = the first free 16 KB page of low memory (offset 0x4000 if the map starts clear, **inferred** as the map comes from a plain allocation), SP = 0x1000, DS = 0x40, flags 0x3200 |
| 0xa0000 to 0xbffff | not RAM: every access selects the card's VGA-memory Device(n) register and goes to the VGA memory window (byte, word and dword, little-endian composed from byte accesses) |
| 0xc0000 to 0xcffff | RAM holding the 64 KB ROM copy; writable |
| 0xf0000 to 0xfffff | the shared 64 KB block: every byte 0xf4 except the ASCII text "PCI/ISA" at 0xfffd9, a 9-byte date-sized string at 0xffff5 and the model byte 0xfc at 0xffffe |

Because the default vectors point into a block of HLT bytes, an interrupt the PROM does not service stops the emulation rather than running into the ROM image. (The "model byte 0xfc" and "PCI/ISA" readings are **established** as stores; that they mimic a PC/AT BIOS is **inferred**.)

### Port forwarding

Six hooks, byte, word and dword in and out. A fault guard (a set-jump style catch around each access) turns a bus error into all-ones on a read (0xff, 0xffff, 0xffffffff) and a dropped write.

- **Everything else** is forwarded: select the legacy-I/O Device(n) register, then perform the access at (legacy I/O window + port), with 16- and 32-bit values byte-swapped in software. There is no port filter: ports 0x3b0 to 0x3df, the BAR-1 range at 0x400 and any other port reach the card's PCI I/O space at the same number. **Established.**
- **Special cases, all intercepted before forwarding:** dword ports 0xcf8 and 0xcfc emulate PCI configuration mechanism 1 by storing the 0xcf8 value and doing a configuration dword read or write at offset (stored value and 0xff) of the card's own window, ignoring the bus, device and function fields and the enable bit; byte port 0x40 returns the low byte and then the high byte of a 16-bit software counter that advances by one per read (the access pattern of an 8254 timer channel); byte port 0x43 written with 0 reloads that counter from a free-running hardware counter divided by 0x346, with bit 0 set; word port 0x5c reads the hardware counter divided by 0xcbc. The hardware counter is the 64-bit location at offset 0x30100 of the local hub register space; **inferred** to be the hub's real-time counter, which Linux's IP27 headers name `PI_RT_COUNTER` at that offset.

### Interrupt vectors the PROM serves

An `int n` executes the dispatcher with n in the context, which behaves as follows. **Established.**

- **0xe6:** the private "call the ROM init" request. Sets AX from the board's bus (AH), device (bits 7:3) and function (bits 2:0), pushes the previous CS and IP (so a far return lands there), loads CS from the context (0xc000) and sets IP = 3. This is the usual option-ROM calling convention (**software expectation**: init entry at offset 3, bus, device and function in AX).
- **0x10, 0x42, 0x6d:** if the vector in the table is still F000:F065 the PROM handles the call itself with a built-in video BIOS subset, else the call goes to the vector. The built-in subset covers AH = 0 (set mode: loads BDA fields and reprograms the CRT controller registers from the parameter table through the forwarded ports), 1 (cursor shape), 2 (cursor position), 3 (read cursor), 5 (page), 0xb (palette or border), 0xf (read mode) and logs the rest (4, 6 to 0xa, 0xc to 0xe, 0x13) without acting. The ROM's own INT 0x10 handler, installed during init, replaces this for every later call, including the two VBE calls.
- **0x1a (PCI BIOS):** b101 (installation check): BX = 0x0210, EDX = "PCI ", CL = 0xff, carry clear; b102 (find device): succeeds only if the vendor and device the caller gives equal the board's own, index 0; b103 (find class): succeeds only if the class code equals the board's; b108, b109, b10a (read configuration byte, word, dword) and b10b, b10c, b10d (write) act on the card's own window at the register number in DI; any other function prints `int 0x1a subfunction` and the dispatcher then falls through to the vector, which is F000:FF6E and stops the emulation. The status bytes of the b101 return (AH, AL) were not decoded exactly (**unknown**).
- **0x15:** returns success immediately, registers unchanged.
- **Any other vector:** through the table. A vector whose segment is 0xf000 prints `Card BIOS on non-PC like platform not loaded` and `Halting on int 0x%2.2x!` and ends the emulation; any other target is entered like a real interrupt (push flags, CS, IP; load the vector).

### The two calls the PROM makes

1. **ROM init.** The 0xe6 request above. The PROM runs the interpreter until a halt is reached (the ROM's far return lands on the HLT at 0000:0600) and then copies the registers back. **Established** that the PROM does not look at the ROM's returned registers: the only failure it tests is the dispatcher itself refusing the request (`setup_int failed`, and then `vga[%d] BIOS init failed`). A ROM that never returns is not guarded in the run loop (no instruction count was found; **inferred**).
2. **After init, before the mode set,** the PROM writes the VGA graphics controller index 6 then data 6 through the I/O window (ports 0x3ce, 0x3cf): memory map select 01 (the 0xa0000 64 KB aperture), chain odd/even set, text mode. **Established** for the stores, **inferred** for the field names (public VGA graphics-controller layout).
3. **Mode set** (0x13023324). Pick by the bridge slot: slots 0 and 1, VESA mode 0x107, 1280 x 1024; every other slot, mode 0x105, 1024 x 768 (**inferred** from the public VBE numbering that these are the 256-colour modes, and **inferred** that the split follows the 2 MB versus 1 MB window sizes above, since 1280 x 1024 x 1 byte exceeds 1 MB). Then, with INT 0x10: AX = 0x4f02, BX = the mode; then clear BX and AX = 0x4f03. Checks, **established**:
   - after 4f02, if AL is not 0x4f it prints `vga[%d] requested VESA mode 0x%x not supported: ax=0x%x` and **carries on**; AH is never read;
   - after 4f03 it returns BX. The caller treats a **zero BX** as failure (`vga[%d] VESA mode switch failed`); it does not compare BX with the requested mode. A ROM stub therefore has to leave BX non-zero on the 4f03 call; AL after 4f03 is not tested.
4. On success the PROM scans for the frame-buffer BAR (section 1), fills the component record and returns.

## 3. Every ROM field the PROM reads

**Established** (whole routines): the PROM itself reads only

- bytes 0 and 1 (0x55, 0xaa), or bytes 3 and 2 for a word-swapped image;
- the image as raw bytes: it copies the BAR-sized amount to a shadow and the first 64 KB of that to 0xc0000;
- the ROM BAR's size, by the probe, not the ROM's own length field.

It reads no PCIR pointer, no length byte at offset 2, no checksum, no legacy-table pointer at 0x48 and no PLL, panel or connector table: it never looks at the image beyond the signature. Everything past offset 3 is executed or read by the ROM's own x86 code through the memory map above (and so by its INT 0x10 handler, whose VBE answers are the only ones the PROM checks). The kernel and X server read the tables ([option-roms.md](../ucode/option-roms.md), [onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md#does-anything-run-without-the-cards-option-rom)). Because the copy to 0xc0000 is fixed at 64 KB, a ROM longer than 64 KB would be truncated in the emulated space, and a shadow buffer smaller than 64 KB (a ROM BAR smaller than 64 KB) would be over-read: neither case is known to occur (**unknown**: the R300's ROM BAR size).

## 4. What the PROM leaves behind: console and textport

- **Frame buffer.** **Established:** a linear 8-bit-per-pixel frame buffer, pitch equal to the mode's width (the code uses the width as the row stride and never reads the card's pitch), at the frame-buffer window (+0x78), with the VGA DAC the only palette. The PROM records the mode width, height and VESA number in the component record (+0x88, +0x8a, +0x8c), width and height also in the board structure (+0xa4, +0xa6) and, through the init routine, in PROM data blocks with the marker 0x12345678 (the text console reads the marker to pick the VGA font) and points board +0x18 at a state block of the console's x and y position, colour index, width and height. The open routine hands its caller the console operations table below.
- **Console operations**, a table of function pointers at 0x131234d8 to 0x13123520 (6.5.30). **Established** for the routines: set foreground colour index (a global byte, initial 0); set a palette entry (VGA DAC: write 0xff to 0x3c6, the index to 0x3c8, then red, green and blue shifted right by 2 to 0x3c9, three writes); fill a rectangle with the colour index, row by row, rows counted from the bottom of the screen; move the cursor (x as given, y mirrored as height - y - 1); draw one 1-bit-per-pixel glyph by writing the colour index to every set pixel in 16-bit-wide strips; a stub that prints `vga_stand_pnt2i --- quite unexpected` (point-draw is not supported); a no-op; and the init (this page's per-board entry). Which caller invokes which operation, and the initial colour index's visible meaning, are **unknown**.
- **Textport.** **Established:** `kl_graphics_install` adds a `textport` graph edge under `/dev/graphics` for the card, builds `/hw/.../pci/<dev>` as the console device and writes `ConsoleOut` with that path (a PROM environment write), The text console's own set-up (0x13002ea4 [same address]) sets cell width 9 pixels and the margins, picks a built-in font and, when the VGA marker above is present, always the VGA font. **Inferred** that these are the only fonts and geometry the PROM uses for the card; the font data were not decoded.
- **Registers written by the PROM, in order** (card configuration space, then forwarded I/O, then memory): configuration 0x14 (I/O BAR, ATI only), command byte (low two bits), ROM BAR 0x30 (enable, probe, restore, then disable on success); the ROM's own register scripts via forwarded ports (**unknown** content, whatever the ROM does); graphics-controller index/data 6 (ports 0x3ce, 0x3cf); the ROM's VBE mode-set; then DAC and frame-buffer stores by the console. Nothing writes the card's memory-mapped register BAR (BAR 2) directly in the routines read.

## What differs between 6.5.22 and 6.5.30

- PROM revisions: 6.170 (6.5.22) and 6.210 (6.5.30). The graphics path is **semantically identical**: every routine in the table above has an identical or order-only different decompilation (variable layout or statement order only), constants and call sequences agree, including the `kl_graphics_install` routine, the enumerator, the board-open routine, the six port hooks, the memory-access routines, the interrupt dispatcher and its 0x1a, 0xe6 and built-in video cases, the context builder, the VBE sequence and the window routines. Only addresses move (about +0x838 for the VGA block, +0x878 for the dispatcher, and 0x3500 or so for the driver glue). **Established** for the compared routines; not compared: the console font data, and the node-PROM part.
- One real difference in the neighbourhood: the text console's set-up, which picks a font by the console board's type, treats board types 3 and 5 as their own case in 6.5.30 and lumps them with the default in 6.5.22; the VGA marker path, which overrides the choice, is the same. It does not affect the card.
- Where the decompilations differ in the emulator core they differ in typing only (byte-sized stores where 6.5.30 shows halfwords); the 0xe6 case builds the same AX in both.

## Corrections to earlier pages

1. [kernel-attach.md](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg) says a result whose AL is not 0x4f after the mode set prints `VESA mode switch failed`. Read again here, **established**: AL not 0x4f after 4f02 prints the "requested VESA mode ... not supported" message and the PROM carries on; `VESA mode switch failed` is printed when the BX returned by 4f03 is zero.
2. [onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md#does-anything-run-without-the-cards-option-rom) says "only the return value of the mode set is tested" for a minimal stub. For the PROM the tested value is BX after 4f03 (non-zero), not AL after 4f02. For the kernel's `vga_set_vesa_mode` that page's wording stands; the PROM's tests differ from the kernel's.

## Gaps

Unknown, each with the routes tried and the next one.

1. **Where the card's memory BARs (and BAR 1's value on a non-ATI card) are assigned, and who sets bus master.** The VGA routines never write BAR 0 or BAR 2 and the command write has no bus-master bit. Tried: the whole inflated image for the size-probe pattern (one hit, the ROM probe), the VGA routines in full, string searches for BAR, window and expansion text. Next: the node-PROM part (only 1,022 of its functions are recovered; its Bridge discovery, `bridge_discover`, is reached through a table the decompiler did not follow).
2. **Where the graphics KLCONFIG component is created.** `init_klcfg_vgagfx` is never referenced by any address-building sequence found. Next: decode the node-PROM's component-creation code by hand from its Bridge discovery.
3. **Which brick types are `v`, `u`, `x`, `w`** (record flag +0x55). Route: the brick-type tables of the IP35 kernel and the L1 firmware; map the lower-case bytes against them.
4. **The R300's ROM BAR size and whether the shipped images fit in 64 KB** (45,056 and 40,960 bytes are recorded in [option-roms.md](../ucode/option-roms.md), so they do, but the BAR size decides the probe).
5. **The exact AH/AL results of the 0x1a installation check, the unlogged built-in INT 0x10 functions, the font data and the callers of the console operations table.**
6. **Whether the PROM bounds the ROM run.** No instruction counter was found in the run loop.
7. **The 6.211 patch image.**
