# How the IP35 PROM brings up the PCI graphics card

What the IP35 PROM does to an Onyx4 FireGL card before any kernel code runs, read in the PROM images of IRIX 6.5.22 and IRIX 6.5.30: how it finds the card, which parts of the card's PCI configuration space it touches, the x86 interpreter it runs the card's option ROM in (memory map, port forwarding, interrupt vectors, the two calls it makes), every field of the ROM it reads, what it leaves behind for the text console, and what differs between the two releases. The kernel half of the same story is [Kernel attach path](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg); this page adds the emulator, the console and the 6.5.22 comparison, and corrects two points of that section (see [Corrections](#corrections-to-earlier-pages)). Labels follow `AGENTS.md` section 5, with the two extra grades the brief asks for: **observed** (a published capture), **software expectation** (what public driver code would do).

## Method and images

- Images: `usr/cpu/firmware/ip35prom.img` of IRIX 6.5.22 (PROM version 6.170, built 6 August 2003; image 1,477,560 bytes) and of IRIX 6.5.30 (PROM version 6.210, built 26 August 2004; 1,480,360 bytes). **Established** from the version strings in each image and the container header. A later 6.211 image (patch media) was not read.
- Layout, **established** for both: after the container header, an uncompressed node-PROM part loaded at physical 0x1fc00000 (572,336 bytes in 6.5.30, 561,536 in 6.5.22), then a gzip stream that inflates to a big-endian 64-bit MIPS image loaded at 0xc000000013000000 (entry 0x13000140). Everything graphical is in the inflated image. Addresses below are the low 32 bits of its virtual addresses; 6.5.30 first, 6.5.22 in brackets.
- Tools: **Ghidra** (headless, decompiler) for every reading, with **objdump** (MIPS64 big-endian, binary input) as the check on the constants quoted: the VESA numbers 0x4f02, 0x4f03, 0x107, 0x105, the sizes 0x500x0x400 and 0x400x0x300, the vendor 0x1002, the ROM base 0x200001 and the offsets 0x30, 0x14, 0x20000 and 0x820000 all agree between the two. Control flow, struct offsets and the 6.5.22 comparison rest on Ghidra alone.
- Comparison: the inflated images have 2,308 (6.5.30) and 2,267 (6.5.22) recovered functions; 1,843 of the 6.5.30 functions have a textually identical decompilation (after masking addresses and variable names) in 6.5.22. Every routine on the graphics path was then compared one by one; see [what differs](#what-differs-between-6522-and-6530).
- The routine names are descriptive and mine; the images have no symbols. Identifiers in backticks are quoted PROM message text, not routine names.

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
- The code that creates those components is the PCI scan of the node-PROM part, read in [How the PROM decides a brick holds graphics](#how-the-prom-decides-a-brick-holds-graphics-and-what-a-model-must-present). The message `init_klcfg_vgagfx: Cannot add component` (quoted from the PROM) is an unused string: the creator reaches its message through a global-pointer table, which is why no address-building sequence for the string exists.
- The console graphics installer (0x130d1708 [0x130d770c]; its messages carry the prefix `kl_graphics_install:`, quoted from the PROM) picks the console card. **Established**: it returns at once if the `console` environment variable starts with `d` or `D` (serial console); otherwise it prints "Installing Graphics Console", reads `gConsoleOut`, falls back to `console`, parses the decimal pipe number that follows the first character (`g`, `g1`...), prints `graphics install: searching for pipe %d`, looks first for a non-VGA graphics board of that number (0x130ccf20) and only then for a VGA board (0x130ccc94, pipe 0 as the last resort); with none it prints `klgraphics: System has no GFX`. For a VGA board it builds the hardware-graph path `/hw/module/<module>/<brick>/xtalk/<widget>/<bus>/pci/<device>[a|b]` (the widget is bits 31:24 of the bridge address; the form without `<bus>` is used when the brick flag is clear, an `a` or `b` suffix when record +0x53 is set, `b` when +0x54 is non-zero), resolves it, prints `console is VGA(%d) <path>` and stores 1 in record byte +0x57. The environment variables are described in the IP35 PROM environment notes of the chips workspace (`platforms/ip35/prom-environment.md`).
- Record byte +0x55 is set when the lower-case brick-type byte at board +5 is `v`, `u`, `x` or `w`, which are the board types 0x76, 0x75, 0x78 and 0x77: the PXbrick, PEbrick, CGbrick (the Onyx4 graphics brick) and IXbrick, all PIC-based I/O bricks (the type names come from the bridge-discovery routine below). **Established**; the identification of the four letters is **established** from that routine's name table.
- **Only the console card is brought up.** **Established** for 6.5.30 (and by the byte-identical routines for 6.5.22): the only store of 1 to record +0x57 in the whole inflated image is the one above; the driver's open routine (0x1307c358) returns the first enumerated board whose +0x57 is 1 and is the only creator of the 0xe0-byte board structure the graphics routines work on. A second Onyx4 pipe, or any card that is not the console pipe, gets no ROM run, no mode set and no window set-up from the PROM. This answers the open question in [kernel-attach.md](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg) and in the open-questions list.
- The open routine copies from the KLCONFIG record into the board structure: +8 the bridge's base address (record +0x40), +0x10 the device number (record +0x52), +0x11 the function (record +0x54), +0x12 the flag (+0x55), +0x13 the bus (+0x56), +0x22 the "bridge slot" which is the device number minus one when the flag is set (the PIC convention that its devices start at 1; **inferred** from the arithmetic and the existing [bus-attach page](../kernel/onyx4-bus-attach.md)), and +0x98 the KLCONFIG record. **Established**.

### Configuration window and the command register

All three are **established** as arithmetic; the register meanings are **inferred** where stated.

- Configuration window = bridge base + device x 0x1000 + function x 0x100 + 0x20000 for bus 0, + 0x820000 for bus 1 (0x20000 plus 0x800000). That is the layout of the Bridge family's type 0 configuration window, with the second PIC bus 8 MB above the first (**inferred**; same arithmetic as the kernel's pipe walker).
- Reads go through a window that presents each 32-bit configuration word byte-reversed. **Inferred** from the code testing the halfword at offset 2 for vendor 0x1002 and the byte at offset 0xb for the revision.
- The PROM reads vendor (offset 2), device (offset 0), revision (0xb) and the class bytes (8, 9, 0xa) and keeps them in the board structure; the 0xe6 call and the PCI BIOS emulation read them back (section 2).
- **Vendor 0x1002 only:** it writes 0x00000400 to configuration offset 0x14, the card's I/O BAR. **Inferred** consequence: the card's I/O space then decodes ports 0x400 to 0x4ff, which is where the option ROM's init code expects to find it, because the port forwarding below maps a port to the same number on the PCI I/O bus (the legacy I/O window has offset field 0). The write is skipped for any other vendor.
- **Every vendor:** it ORs 3 into the byte at window offset 7, which is the low byte of the command register (**inferred** from the reversal): I/O space and memory space decode on. The IO-PROM code does not set bus master, SERR or parity bits; the node PROM already set memory space and bus master during its PCI scan (see the next section), so by the time a card is used its command register holds I/O, memory and bus-master enables.
- **Memory BARs:** the IO-PROM routines never write BAR 0 or BAR 2; they only read them. The linear-frame-buffer routine (0x130231e8) scans the six BAR registers (offsets 0x10 to 0x24) for the first one with bit 3 set and bits 1:0 clear (32-bit prefetchable memory) and stores its index; with none it prints `vga[%d] can't find lfb bar`. **Established.** Its Device(n) window is then set to the BAR value's bits 31:20. BAR 0 is assigned earlier by the node PROM's scan: see below. BAR 2 (the register aperture) is assigned by nothing in either part of the PROM. **Established** for the routines read; a negative over the whole image rests on the one size-probe routine found and the node part's scan below.
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
- **Textport.** **Established:** the console graphics installer adds a `textport` graph edge under `/dev/graphics` for the card, builds `/hw/.../pci/<dev>` as the console device and writes `ConsoleOut` with that path (a PROM environment write), The text console's own set-up (0x13002ea4 [same address]) sets cell width 9 pixels and the margins, picks a built-in font and, when the VGA marker above is present, always the VGA font. **Inferred** that these are the only fonts and geometry the PROM uses for the card; the font data were not decoded.
- **Registers written by the PROM, in order** (card configuration space, then forwarded I/O, then memory): configuration 0x14 (I/O BAR, ATI only), command byte (low two bits), ROM BAR 0x30 (enable, probe, restore, then disable on success); the ROM's own register scripts via forwarded ports (**unknown** content, whatever the ROM does); graphics-controller index/data 6 (ports 0x3ce, 0x3cf); the ROM's VBE mode-set; then DAC and frame-buffer stores by the console. Nothing writes the card's memory-mapped register BAR (BAR 2) directly in the routines read.

## How the PROM decides a brick holds graphics, and what a model must present

The graphics board record the console code uses (type 0x2f) is created by the node PROM while it discovers I/O widgets, not by the console code. This section reads that chain in the node-PROM part of 6.5.30 (6.5.22 addresses in brackets; the routines are named by me). **Established** unless marked; decompilation checked by objdump on the constants listed in [Method and images](#method-and-images): the 0x2f and 0x35 stores, the 0x56 test, the type map and the class test.

### The chain, in order

1. **XIO widget scan** (0x1fc4afbc [0x1fc47e24]) walks the live ports of a node's crossbar and reads each widget's ID dword (offset 4 of the widget window). Part number = bits 27:12, manufacturer = bits 11:1. Parts 0xd002 and 0xd102 (and the older 0xc002) go to the bridge discoverer; 0xc110 is a node link; any other part prints `New Widget 0x%x connected to HUB` and is skipped (0xd000 and 0xd100 only as the entry argument). **Established.**
2. **Bridge discovery** (0x1fc4b384 [0x1fc481f0]) requires, for a PIC or XBridge, part 0xd102, 0xd112 or 0xd002 **and manufacturer 0x24** (an ID dword of 0x?d102049, 0x?d112049 or 0x?d002049, the low bit set). It then asks for the brick type (next step), and from the answer picks the board class:

   | Mapped type (character) | Board | Class type |
   |---|---|---|
   | 0x23 (`#`) | PXbrick | 0x76 |
   | 0x25 (`%`) | PEbrick | 0x75 |
   | 0x3d (`=`) | IXbrick | 0x77 |
   | 0x49 (`I`) | Ibrick | 0x71 |
   | 0x4e (`N`) | Nbrick | 0x74 |
   | 0x50 (`P`) | Pbrick | 0x72 |
   | **0x56 (`V`)** | **CGbrick** | **0x78** |
   | 0x58 (`X`) | Xbrick | 0x73 |
   | anything else | "WEIRDIO" | 0x70 |

   Before the table, the type map (0x1fc4ec80 [0x1fc4bb60]) folds raw replies: 0x26 to 0x4e, **0x30 to 0x56**, 0x34 and 0x41 to 0x49, 0x37 to 0x39 and 0x51 to 0x3d, 0x45 to 0x23, 0x59 to 0x58; every other value passes through (so a raw 0x56 stays 0x56). For the PIC it creates one board for bus A at the widget base and one for bus B at base + 0x800000, then scans both. The Nbrick type (0x74) is not scanned. **Established.**
3. **Brick type request** (0x1fc4ecf8 [0x1fc4bbd8], request 0x1fc4e494 [0x1fc4b384]): one L1 request of code 0x0003 (rack, bay and type), reply parsed into the type character; the same request is documented from the L1 side and for its timeouts in the chips workspace (`platforms/ip35/prom-l1-request-timeouts.md`, `software/firmware/snprom/l1-requests.md`). If the first attempt fails it repeats with widget argument 0. The PROM puts no widget number in the request body; the widget (and the node's board class) only chooses the destination word, **0x0ffff000** when any of these holds, **0x4ffff000** otherwise: the node's board class is 0x4000; the node's classifier is 3; the widget is 0 and the class is 0x8000 or the classifier is non-zero; the class is 0x8000 and the widget is 0xe or 0xf; the classifier is non-zero and the widget is 0xc or 0xf (widget 1 is excluded from the last two). The board class is bits 15:12 of the word at 0x9000000034000000 plus (nasid << 33); the classifier (0x1fc68ba0) is 0 for classes 0x4000, 0x8000 and 0xc000, else it is read from a request for the node's own brick type (0x37 to 1, 0x38 to 2, 0x39 to 3, 0x30 to 4, 0x51 to 5, other 0). Class 0xc000 takes a different route (rack and bay from another routine, then a "peer iobrick type" request). **Established** for the branches; whether the L1 can tell the bricks apart from the destination word alone is **unknown** (the body carries no widget).
4. **PCI scan** (0x1fc47fe8 [0x1fc44f74]), for each of devices 0 to 7 of each bus, functions 0 and, when the header-type word has bit 7 set, 1:
   - *Presence* (0x1fc47d44, identical in both): a guarded 32-bit configuration read at (bridge window, device x 0x1000 + function x 0x100 + 0x20000, or 0x820000 for bus B), a short delay, then the bridge's interrupt-status register (offset 0x104 for a PIC, 0x174 for an XBridge): bit 0x800 set means no device (the PROM clears the status by writing 0x41 to offset 0x114). The ID value itself is not tested. **Established.** An absent device must therefore master-abort and raise that bit; a model that returns all ones without the bit makes the PROM create a generic component for every empty slot (harmless to graphics).
   - *Dispatch on the ID dword* (device in the high half, vendor in the low half, read as a 32-bit value). A table of known IDs (vendors seen in the comparisons include 0x10a9, 0x1077, 0x14e4, 0x104c, 0x1045, 0x11c1 and 0x1095) is tested first; an ATI ID such as 0x4e471002 is not in it and takes the default arm. **Established.**
   - *Default arm.* Read the dword at configuration offset 8. If base class = 3, subclass = 0 and programming interface = 0 (a VGA-compatible display controller, 0x03000000 in bits 31:8), **and in 6.5.30 only** the brick type obtained for the widget is 0x56 after the map above: assign BAR 0 and enable decode (the routine below), then create the type 0x2f component (0x1fc46324 [0x1fc43128]) with the function number stored at +0x54. Otherwise (other class or other brick type) a generic type-0 component is created and no VGA board exists. **Established.**
5. **BAR and window assignment** (0x1fc4662c [0x1fc43430]), only for the matched device: slot = device minus 1 when the bridge is a PIC (part 0xd102 or 0xd112, manufacturer 0x24), else the device number. It writes (in order): command register |= 6 (memory space and bus master), the bridge's Device(slot) register = old bits 31:13 | address bits 31:20 | 0x1000, and **BAR 0 = address**, with the address = ((slot < 3 ? 2 x slot + 2 : slot + 4) + function x 16) MB, | function << 19 | 0x800000 for bus B. So the R300 at PCI device 1 (slot 0) gets 0x200000 on bus A and 0xa00000 on bus B for function 0. If the written BAR reads back with bit 2 set (a 64-bit BAR) BAR 1 is zeroed; no other BAR is written. **Established.** The address is nominal: the card's BAR keeps only the bits its size allows (**inferred**), which is why the IO PROM later reads the BAR back instead of trusting this value. The card's PCI I/O BAR is set later by the IO PROM (section 1).
6. **The enumerator the console code uses** (0x130ccc94 [0x130d2c34]) walks the nodes in the order of the configuration header's node table, each node's board list, and takes every board whose type has class 0x70 (types 0x70 to 0x7f, so the CGbrick, but also a "WEIRDIO" board), collecting its type 0x2f components in the order they appear. The list is built once and cached. **Established.**

### What "pipe" counts and how pipe 0 is assigned

- The number is the position in that list: pipe n is the n-th type 0x2f component in node-table order, then board-list order, then component order. **Established** for the walk; the order in which the scan above links boards into a node's list (and so which head is pipe 0 on a two-PIC-bus brick) is **unknown**; if boards and components are appended as discovered, the bus A device-1 head is pipe 0 and the bus B head pipe 1 (**inferred**).
- `console=g` with no digit means pipe 0; `console=g1` means pipe 1 (the digits after the first character; `gConsoleOut` is tried first). A non-VGA graphics pipe (board class 0x50, component type 10, the Onyx graphics families) is a separate list and is tried first for the same number; with that list empty and the VGA list empty the PROM prints `klgraphics: System has no GFX`. That message is exactly the symptom of no type 0x2f component, and is also printed when pipe 0 is empty but a pipe-n request fell back to pipe 0.
- A VGA pipe also needs its hardware-graph path to resolve (`cannot find VGA path` otherwise), which the PROM's own bridge install provides.

### What the model has to present, in order

1. A node whose configuration header is valid (GDA magic) and which the console code can enumerate: the walk reads the node table and the board lists of the model's node, so the I/O widget's boards must be linked into its KLCONFIG list.
2. An XIO port with a live link whose widget ID dword (widget window offset 4) reads part **0xd102**, manufacturer **0x24**, low bit 1: 0x?d102049. A PIC also needs the second bus's ID at widget base + 0x800000 + 4 (**0xd112 or 0xd102**, manufacturer 0x24), because the PCI scan decides the bus-B configuration window (0x820000) from that ID; if it does not read as a PIC the bus-B configuration cycles alias bus A's (**inferred** from the window arithmetic).
3. **An L1 answer to the 0x0003 request, sent to the destination word the rules above pick, whose type character is `V` (0x56) or `0` (0x30)** (6.5.30). Any other type gives a WEIRDIO or other board class and no type 0x2f component in 6.5.30. On 6.5.22 the type does not matter for the VGA component (see the differences), though it still selects the board class. If the L1 does not answer, bridge discovery still classifies by the returned error value, which is neither 0x56 nor any named type (so WEIRDIO and no VGA component in 6.5.30).
4. PIC bus configuration windows at widget base + 0x20000 (bus A) and + 0x820000 (bus B), device x 0x1000 + function x 0x100, readable as 32-bit values in natural PCI order, a bridge interrupt-status register at offset 0x104 whose bit 0x800 reads clear after a good configuration read and set after a configuration read of an absent device, and a writable offset 0x114 (the PROM writes 0x41 to clear it).
5. Per head, at PCI device 1: vendor 0x1002 and a device ID that is not in the PROM's built-in table, **class code 0x030000 in function 0** (base class 3, subclass 0, programming interface 0); header type bit 7 set to expose function 1 (its class does not matter for graphics); BAR 0 a 32-bit prefetchable memory BAR (bit 2 clear), writable; the command register writable at bits 1 and 2 (the PROM sets them) and bit 0 later; configuration offsets 0x14 and 0x30 writable as in section 1 (the ROM BAR must probe as a power-of-two size).
6. After that the IO PROM's console routines (section 1) take over: the board must sit under the CGbrick path the install builds.

### Where the model most likely fails today, from the symptom

`searching for pipe 0` followed by `System has no GFX` means the console code found no type 0x2f component. The scan messages (`Found PIC at 0x%x`, `WID 0x%x Bridge NIC`, per-device `Device %d ...` lines) are printed only when the scan's verbose flag is set, so their absence proves nothing. The candidates, in order of how the chain above breaks: no widget at the model's widget 12 reaches bridge discovery (ID not 0xd102 with manufacturer 0x24, or the crossbar link not live); the L1 reply is missing or not `V`/`0` (6.5.30 only); the bridge's absent-device status bit never clears or never sets, so the scan skips device 1; the class code reads other than 0x030000 for function 0.

## Where a G2 attaches and which controller answers the type request

Answers for modelling an Onyx4 host with a G2. Sources: the PROM routines above, two retained public `hinv -v` captures with their console text (an eight-node Onyx 4 and a two-node Onyx 350 with a G2N), and the L1 1.44.0 router notes in the sysco repository (`software/firmware/l1/rs422-router.md`, `personalities.md`). **Observed** for the captures, **established** for the code, otherwise graded in place.

### Which widget, and whose numbering

- **The widget number is the node's crossbar port, not a number inside the brick.** The PROM numbers a node's embedded crossbar ports 8 to 15 (the scan walks them from 8; per-port registers are 0x40 apart from the crossbar's port block, status at +0x114, auxiliary status at +0x13c, link word at +0x11c). A widget's number is bits 31:24 of its address in that node's I/O space. **Established.** A G2's PIC is the widget behind one of those ports; the PROM sees no crossbar of its own in a G2.
- **Observed on a G2 (eight C-bricks and a router, PROM 6.210):** two `CGBRICK` entries (the PIC's two buses) at widget 10 of the C-brick that also carries the `IXBRICK` at widget 15, both under the same module; the `ASIC XBOW ... on CBrick` lines are one per C-brick and none belongs to the G2. So **a G2 attaches directly to a port of the host node's crossbar**, not through a second node. **Observed** (the capture), **inferred** that the cable is the Crosstown2 XIO connector the guide describes. **Observed on a G2N** (an Onyx 350 plus a G2N): the `CGBRICK` entries are at **widget 15 of the G2N's own node** (a second Bedrock, its own `XBOW on CBrick` line and module); the G2N joins the host over NUMAlink as a separate node. Widget 10 and widget 15 are therefore both "the node's port", of different nodes.
- Other real port numbers in retained captures: base I/O at 15, PCI at 11, VPro at 12, other graphics at 10 and 13. The PROM does not require a particular port for a PIC. It requires only: the port present (status +0x114 bit 31 and auxiliary +0x13c bit 5 both set), the port's link word (+0x11c) bit 0 clear (bit 0 set makes the PROM treat the port as another hub, widget part 0xc110, and not read a widget ID), and the master port (link word bit 2) to be the node's own hub port, which is the port number in the hub's own widget-ID register (the low four bits of a hub register at offset 0x20 of a block the PROM keeps a pointer to). **Established** for the tests; the register names are **inferred**. **The model's host side at widget 10 collides with the real G2 port**; a host hub elsewhere (a number in 8 to 15 that no head uses) and the G2 at **widget 10** reproduces the real numbering.
- **Widget 12 changes the L1 destination** (next subsection), which alone can break the type check.

### Which controller answers the type request

- The PROM sends one request, code 0x0003, with no widget in the body. Its destination word is **0x0ffff006** (task 6 of the local controller) or **0x4ffff006** (address type 4), decided by the rules in step 3 above. **Established.** In the L1 router (Origin 300 and C-brick package, 1.44.0), an address type 4 is **forwarded to peer slot 9** (the "CTI" brick-to-brick UART) with the type rewritten to 0, so the brick on that link receives it as its **own local** request and answers it; a closed slot returns a router error. Established for that package's body; whether the 2 MB packages that Onyx 350 and Tezro node boards use route type 4 the same way was not read (**unknown**). The request carries nothing that picks one of several I/O bricks behind one C-brick; slot 9 is fixed (**established** for the fallback).
- **On a real G2 the G2's own L1 answers.** The L1 brick-type characters are `V` ("CG Voyager", the G2) and `0` ("CGN Voyager", the G2N); both appear in the 2 MB package's supported-brick list. **Established** (sysco). The reply is a status word then two integers: first the module word (rack in bits 15:6, bay in bits 5:0), then the type character: 0x56 for `V` or 0x30 for `0`. The PROM folds 0x30 to 0x56. **Established** (parse in the PROM; the reply layout is the same request as the node-class check in chips, `questions/ip35-prom-l1-brick-class.md`).
- **On a real G2N the G2N's own node asks its own L1.** The node's class check (its own type: `0` gives classifier 4), widget 15 and a non-zero classifier send the request to 0x0ffff006, so the local L1, which is the G2N's, answers `0`. **Established** for the rule, **inferred** for the outcome.
- **Destination table for a node that is not class 0x4000 and whose classifier is not 3** (the classifier is its own L1 type: `7` gives 1, `8` gives 2, `9` gives 3, `0` gives 4, `Q` gives 5, anything else 0; class 0x4000 and classifier 3 send everything local):

  | Widget | Classifier 0 | Classifier 1, 2, 4 or 5 |
  |---|---|---|
  | 0 | 0x4ffff006 | 0x0ffff006 |
  | 10 (the real G2) | **0x4ffff006** | **0x4ffff006** |
  | 12 | 0x4ffff006 | **0x0ffff006** |
  | 15 (base I/O) | 0x4ffff006 | 0x0ffff006 |

  Other cases: widget 1 is never promoted to local by the widget rules; widget 0xe is local only for class 0x8000; widget 0 is also local for class 0x8000; class 0xc000 takes a different route (rack and bay from another routine, then a peer I/O-brick type request) that was not followed. **Established** for the branches.
- **What the model's controller must do.** Answer by the destination word, not by widget: a request addressed 0x0ffff006 gets the host node's own type, and one addressed **0x4ffff006 gets `V` (0x56)** with the G2's rack and bay in the module word. A model that answers `7` to everything makes the G2 an IXbrick: raw 0x37 folds to 0x3d, board type 0x77, and the scan creates no graphics component. (The earlier wording "WEIRDIO" applies only to a reply the type table does not know.) With the G2 at widget 12 and a host classifier of 1, 2, 4 or 5 the request goes local and the local answer applies, so the type check cannot pass; at widget 10 it can. If the host's own type is `9` (the Tezro workstation controller, classifier 3) every request goes local and one reply cannot serve both the base I/O widget (which wants `=` from a `7` or `9`) and the G2 (which wants `V`); present the host as type `7` or `8` instead. **Established** for the arithmetic, **inferred** for the host choice.

### A real transcript that shows the type reply can be wrong

The Onyx 4 capture's own console (PROM 6.210; the poster says the display works with one base module and the G2 and fails with the router and other bricks) prints `graphics install: searching for pipe 0` and then `cannot find VGA path /hw/module/<other module>/IXbrick/xtalk/10/0/pci/`: a graphics component exists at widget 10, but the board it hangs on carries the **IXbrick** name and a **different brick's module**, as if the type request for that widget had been answered by an I/O brick elsewhere in the system. **Observed.** How a component can exist under a board with that name is **unknown** (the type is asked twice, once in bridge discovery and once in the PCI scan); the routing of a type-4 request in a multi-brick system is **unknown** for the same reason as above. It does show that on real hardware the reply, not the PCI scan, is what decides a G2's fate.

## What differs between 6.5.22 and 6.5.30

- PROM revisions: 6.170 (6.5.22) and 6.210 (6.5.30). The graphics path is **semantically identical**: every routine in the table above has an identical or order-only different decompilation (variable layout or statement order only), constants and call sequences agree, including the console graphics installer, the enumerator, the board-open routine, the six port hooks, the memory-access routines, the interrupt dispatcher and its 0x1a, 0xe6 and built-in video cases, the context builder, the VBE sequence and the window routines. Only addresses move (about +0x838 for the VGA block, +0x878 for the dispatcher, and 0x3500 or so for the driver glue). **Established** for the compared routines; not compared: the console font data, and the node-PROM part.
- **The brick-type gate on the VGA component (node-PROM part, 6.5.30 only).** The PCI scan of 6.5.22 (0x1fc44f74) creates a type 0x2f component for any class 03/00/00 function with no brick-type test; 6.5.30 (0x1fc47fe8) creates it only when the brick type for the widget maps to 0x56. Everything around it (the widget scan, bridge discovery, the L1 request, the BAR assignment, the component creator itself, the enumerator) is the same apart from addresses. **Established.** The node-PROM part differs more than the IO PROM overall: 665 of 1,371 recovered functions are textually identical.
- One real difference in the neighbourhood: the text console's set-up, which picks a font by the console board's type, treats board types 3 and 5 as their own case in 6.5.30 and lumps them with the default in 6.5.22; the VGA marker path, which overrides the choice, is the same. It does not affect the card.
- Where the decompilations differ in the emulator core they differ in typing only (byte-sized stores where 6.5.30 shows halfwords); the 0xe6 case builds the same AX in both.

## Corrections to earlier pages

1. [kernel-attach.md](../kernel/kernel-attach.md#the-ip35-proms-vga-bring-up-ip35promimg) says a result whose AL is not 0x4f after the mode set prints `VESA mode switch failed`. Read again here, **established**: AL not 0x4f after 4f02 prints the "requested VESA mode ... not supported" message and the PROM carries on; `VESA mode switch failed` is printed when the BX returned by 4f03 is zero.
2. [onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md#does-anything-run-without-the-cards-option-rom) says "only the return value of the mode set is tested" for a minimal stub. For the PROM the tested value is BX after 4f03 (non-zero), not AL after 4f02. For the kernel's `vga_set_vesa_mode` that page's wording stands; the PROM's tests differ from the kernel's.

## Gaps

Unknown, each with the routes tried and the next one.

1. **The order the scan links boards and components into a node's list** (which head is pipe 0). Next: read the board-add routine (0x1fc54568) and the component-add routine.
2. **How the L1 tells bricks apart for the 0x0003 request.** The body carries no widget; only the destination word depends on it. Next: the L1 firmware's handling of the two destination words (sysco workspace).
3. **The XIO widget scan's link test and widget-ID read** (0x1fc4bdd4, 0x1fc4ea30) in detail, and the verbose flag that prints the scan messages.
4. **The R300's ROM BAR size and whether the shipped images fit in 64 KB** (45,056 and 40,960 bytes are recorded in [option-roms.md](../ucode/option-roms.md); the BAR size decides the probe).
5. **The exact AH/AL results of the 0x1a installation check, the unlogged built-in INT 0x10 functions, the font data and the callers of the console operations table.**
6. **Whether the PROM bounds the ROM run.** No instruction counter was found in the run loop.
7. **The 6.211 patch image.**
8. **How a type-4 request is routed in a multi-brick system and in the 2 MB L1 packages**, and how a graphics component can exist under a board named IXbrick (the transcript above). Next: the 2 MB package's peer-link initialiser and the PROM's second type query in the PCI scan.
9. **The IRIX 6.5.22 kernel's own type request** (the kernel's I/O-brick type query) was not re-read for a per-widget destination; the [topology page](../kernel/r300-kernel-topology.md#the-io-brick-l1-type-check-answered) records its reading.
