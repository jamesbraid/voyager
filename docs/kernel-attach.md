# Kernel attach path (IP35)

How IRIX 6.5.30 finds an Onyx4 FireGL card, maps it and makes its first register writes. The kernel objects are `usr/cpu/sysgen/IP35boot/fglrx.o` (ATI's FireGL kernel driver, built for IRIX with a Linux-style compatibility layer whose routines start `__ke_`), the `vga.a` members (the early VGA console driver and an x86 BIOS emulator) and `is1.o` (the image-sync driver). The objects are unstripped 64-bit MIPS IV relocatable files; every address below is a `.text` offset in the named object, and "record +N" is byte N of the per-board record the routine works on (`bdata` in the driver's assertion strings). Register names are the public AMD and Linux names when the offset matches one; [the source index](sources/INDEX.md) lists the references. Labels follow `AGENTS.md` section 5.

The command processor, the microcode and the bus-master set-up are not on the kernel attach path at all: the X server module programs them later. That part is in [Command processor start-up](#command-processor-start-up-x-server-module).

## Order of events

1. `vga_earlyinit` (`vga.a(vga_init.o)`), run before the PCI layer attaches drivers, finds the console pipe, maps the card, runs the card's own option ROM in the x86 emulator and sets a VESA mode ([Early console and the x86 emulator](#early-console-and-the-x86-emulator)). It returns 0 or 1.
2. `fglrx_init` (`fglrx.o`) builds a board record for every graphics pipe the VGA layer already knows, then asks the PCI layer to replay already-found devices to `fglrx_attach` (`pciio_iterate` with the prefix `fglrx_`).
3. `fglrx_reg` registers the driver for five PCI device IDs ([Which cards the driver claims](#which-cards-the-driver-claims)).
4. `fglrx_attach` runs once per card: topology check, configuration reads, BAR, ROM and legacy mappings, six register writes, device nodes, interrupts, memory reservations, `firegl_init_module` ([fglrx_attach in order](#fglrx_attach-in-order)). It returns 0 on success and 5 on failure.

## Which cards the driver claims

- `fglrx_devids` (`fglrx.o`, `.data` offset 0xe0): **established.** Six 8-byte entries, then a zero entry. The first word of each entry is the PCI vendor ID in its upper half and the device ID in its lower half: 1002:4e44, 1002:4e47, 1002:4e46, 1002:4148, 1002:4e4b and 1002:4e44 again. The second words are 0x10020002, 0x10020152, 0x10020152, 0x10020002, 0x10020152 and 0x10020172; `fglrx_reg` never reads them, so their meaning (they have the form of a subsystem vendor and device pair) is **inferred** only from that form. The public PCI ID list names 4e44 Radeon 9700, 4e46 Radeon 9600 TX, 4e47 FireGL X1, 4148 Radeon 9800 and 4e4b FireGL X2; Linux `drm_pciids.h` classes 4e44, 4e46 and 4e47 as R300 and 4148 and 4e4b as R350. Compared with the vendor-1002 subsystem lines of the same public list (pciutils `pci.ids`, read in full for these IDs): the second words are subsystem pairs that list names for other parts, not for these devices. 1002:0152 and 1002:0172 appear only under device 5148, the R200 FireGL 8800, as "FireGL 8800 128Mb" and "FireGL 8700 64Mb"; 1002:0002 appears under several 9500 and 9600 parts; 4e44, 4e46, 4e47, 4148 and 4e4b carry no ATI-vendor subsystem line for any of these values, and the list's 4e44 lines are 515e and 5965 (ES1000). The one exact public match is in the VGA table below: 5245 with 1002:0008 is "Xpert 128" under device 5245 (Rage 128 GL PCI) in the list, which supports reading the second words as subsystem pairs. **Inferred:** a FireGL X1 or X2 reports subsystem 1002:0152, since that value is both the second word of the 4e47 and 4e4b entries and the pair the option ROM header carries; the list does not confirm it, and Linux's `drm_pciids.h` matches these devices with a wildcard subsystem, so no public driver depends on the value.
- `fglrx_reg` (`fglrx.o`, address 0x54c): **established.** Walks the six entries of `fglrx_devids`, skips an entry whose vendor and device halfwords equal an earlier entry's, and calls `pciio_driver_register(vendor, device, "fglrx_", 0)` for each remaining one, so five distinct device IDs are registered: 4e44, 4e47, 4e46, 4148 and 4e4b. It returns 0.
- `vga_devids` (`vga.a(vga_init.o)`, `.data` offset 0): **established.** The VGA console driver's own table has the same layout: 1002:4e44, 4e47, 4e4b, 4e46, 4e44 and 1002:5245, with second words 0x10020002, 0x10020152, 0x10020152, 0x10020152, 0x10020172 and 0x10020008. It lacks the R350 Radeon ID 4148 that `fglrx_devids` has and adds 5245, which the PCI ID list names an R200-generation part.
- `_r6x_IsDeviceSupported`: ATI's generic support check, run from `firegl_init` after `fglrx_attach` has accepted the card, so the IRIX-level filter is the `fglrx_devids` list above; the entry with the full id list and the record fields it sets is in [kernel-object-functions.md](kernel-object-functions.md#detach-initialisation-and-device-identity).

The option ROM images agree: `sg2.bin` is built for 1002:4e47 and `sg3.bin` and `sg3a.bin` for 1002:4e4b (AGENTS.md section 1). Both IDs are in both tables.

## Bus and bridge

- `vga_change_big_window` (`vga.a(vga_init.o)`, address 0x1a90): **established.** With a second argument of 1 it sets bit 22 of the bridge's widget control register, otherwise clears it: a 64-bit access at bridge offset 0x20 when record +8 is nonzero (the PIC case), a 32-bit access at 0x24 otherwise. Linux `bridge.h` names bit 22 of that register `BRIDGE_CTRL_MEM_SWAP`, the byte swap for PCI memory-space PIO. `vga_map_board_regions` calls it with 1 after mapping the frame-buffer BAR.
- `fglrx_attach` (`fglrx.o`, address 0xbdc), topology and host set-up: **established.** It takes the card's connection point (`hwgraph_connectpt_get` of the master vertex) and asks `xwidget_info_chk` whether that vertex is a crossbar widget. If it is, a stack flag (sp+1120) is 0 and BARs 0 and 2 are later mapped through the bridge's per-device windows; if it is not, the routine climbs one more connection point, sets the flag to 1, and maps BARs 0 and 2 as plain PCI memory addresses through a PIO map instead. **Inferred:** flag 1 is the card behind a PCI-to-PCI bridge, flag 0 the card directly on the bridge's bus. Which case the Onyx4 graphics board takes is **unknown** from this code. It also calls `hub_setup_prb(nasid, widget id, 3, 2)` (address 0x17c8), with the NASID from `compact_to_nasid_node` of the master node and the widget number from `xwidget_info_id_get`. `vga_earlyinit` (`vga.a(vga_init.o)`) makes the same call with 3 and 2. The routine belongs to the IP35 kernel (`kernel.o`); the two numbers are a credit count of 3 and a mode word of 2, whose meaning is **unknown** ([the hub I/O entry below](#hub_setup_prb-kernelo) has the note). It returns 0 on success and 5 on failure (see the step list below).

The published user's guide (Silicon Graphics Onyx4 UltimateVision User's Guide, 007-4634-002, "G2-bricks and G2N-bricks", pages 1 to 2, and the rear-panel description, page 5) fixes the outer topology: each graphics brick is a 2U enclosure holding two graphics pipes, and the guide numbers them as an even pipe and the next odd pipe within the brick. A graphics-only G2-brick attaches to the host as an I/O device over XIO, a Crosstown2 connector on a NUMAlink cable at 800 MB/s in each direction. A G2N-brick adds a node board (two or four CPUs and up to eight DIMMs) and attaches through NUMAlink as part of the compute fabric, directly or through a router. The guide's hinv check lists one "Graphics board: SG2" line per pipe, two per brick, and its sample X server device sections give the first pipe the bus identifier PCI:2:0:0. So the cards are not in the host's PCI slots: the guide lists the PCI cards of the host (base I/O, ImageSync, USB, sound) separately and says they are not installed in the bricks. **Established** as the guide's statement; which bridge part sits in each brick (the XBridge or the PIC the VGA layer accepts) and how the two pipes hang off it is not in the guide, so which of the code's two mapping paths a pipe takes remains **unknown**: no shipped binary read here and no published document read here settles it. The guide gives bus clocks (33 or 66 MHz, set by the slowest card sharing a bus) only for the host's PCI cards, not for the graphics pipes.

The PCI bus clock and width the cards run at are neither read nor set by `fglrx.o` or `vga.a`; nothing in the attach path depends on them, so the bus rate has to come from SGI's documentation, not from this code. See [the open questions](open-questions.md#host-attachment).

### hub_setup_prb (`kernel.o`)

- `hub_setup_prb` (`kernel.o`, address 0x22d5c, 148 bytes, 37 words), the hub's per-widget crosstalk PIO request block: **established**, read in full. It takes the node id (a0), the widget number (a1), a credit count (a2) and a mode word (a3), and makes no calls. If the .sdata word `force_fire_and_forget` is nonzero, it then loads the .sdata word `ignore_conveyor_override`; when that is zero, a mode word of 1 becomes 2 and any other value is kept (0x22d60 to 0x22d84). It picks an entry number: the widget number itself when below 8, else the widget number minus 7 (0x22d68, 0x22d88 to 0x22d90). The register address is the 64-bit base 0x9200000001c00000 (a .lit8 doubleword, loaded at 0x22d98), plus the node id shifted left 33 (`dsll32` by 1), plus 8 times the entry number, plus 0x198 (408 as the displacement of the `ld`). It loads that doubleword, then:
  - clears bits 47 to 43 and sets bit 43 (so the five-bit field at 47:43 becomes 1);
  - clears bits 37:24 and 21:8 and bit 42, and leaves 23:22 and 41:40 as they were (the two literals 0xffff07ffffffffff and 0xfffffbc000c000ff);
  - sets bit 42 when the mode word differs from 1 (`xor`, `sltu`, `dsll32` by 10);
  - replaces bits 7:0 with the low byte of the credit count (`andi` 0xff);
  - stores the doubleword back (the `sd` at 0x22dec, in the delay slot of the `jr ra` at 0x22de8). The routine returns nothing it computed.
  Both attach paths call it as (node, widget, 3, 2), so each sets bit 42 and puts 3 in bits 7:0 of that widget's entry.
- What the register's fields are is **unknown** from the binary alone. The routine reads the bit positions above from its masks, and the symbol names `force_fire_and_forget` and `ignore_conveyor_override` suggest that bit 42 and the mode word select a fire-and-forget PIO mode, but no field name, width or meaning of the credit count is established here. The read that would settle it is a published hub register reference, or the other readers and writers of the same register in `kernel.o`.

## fglrx_attach in order

- `fglrx_attach` (`fglrx.o`, 4888 bytes): **established.** Attaches one FireGL card: it finds the board record, reads the PCI identity, maps the card's address windows and option ROM, makes the first register writes, creates the device nodes, connects the interrupt and reserves memory.
  The routine has a 1248-byte frame and two exits: it returns 0 on success (the return at 0x1ae0, after the value is set at 0x195c) and 5 (set at 0x1ab4) on every failure after the board record was found, freeing the record first.
  The sixteen steps below give the order, the register values and the failure messages.

1. `fglrx_attach`: board record. **established.** Takes `GfxBoardInitSema` (`psema`, 0xd68) and checks the board-pointer tables (`checkBoardPointers`, 0xd88). Maps 256 bytes of configuration space with `pciio_pio_addr(dev, 0, PCIIO_SPACE_CFG, 0, 0x100, &map, 0)` (0xdc4; space 7 is `PCIIO_SPACE_CFG` in the public Linux SN `pciio.h`) and releases the map. It then looks through the pipes `find_fglrx_pipe` reports (0xe78) for the board record whose configuration-window address (record +528) equals the address just obtained: that record was created by `fglrx_init` from the VGA layer's pipe list. On a match it sets bits 0 and 1 of the configuration byte at window offset 7, writes 0xdeaddeaddeaddead into the board's slot of a `.bss` table, increments the board count (`.data` +320) and releases the semaphore. **Inferred:** byte 7 of the big-endian configuration window is the low byte of the PCI command register (offset 4 in little-endian order), so the two bits are memory-space and I/O-space enable. The attach returns 0 or 5 (step 16).
2. `fglrx_attach`: configuration reads (0xf8c to 0xff0). **established.** Through `pciio_config_get`: the vendor ID (offset 0, 2 bytes) into record +504, device ID (2, 2 bytes) into +506, revision (8, 1 byte) into +508, subsystem ID (0x2e) into +512, subsystem vendor (0x2c) into +510, and the 3-byte class code at 9, whose top byte (the base class) goes into +509. The bus, slot and function numbers (`pciio_info_bus_get`, `_slot_get`, `_function_get`) go into record bytes +501, +502 and +503, the low byte of the NASID into +500, and the four packed as `nasid << 24 | bus << 16 | slot << 8 | function` into record +496. The attach returns 0 or 5 (step 16).
3. `fglrx_attach`: device descriptor and configuration window. **established.** Maps the configuration space again, passing record +416 as the device descriptor, and keeps the address in record +528 (map handle at +520, size 256 at +536); failure logs "cannot get to config space". The attach returns 0 or 5 (step 16).
4. `fglrx_attach`: BAR 1 (0x1120). **established.** `pciio_pio_addr(dev, desc, PCIIO_SPACE_WIN(1), 0, size of BAR 1, &map, 0x1000)`: the window address goes to record +608 and the size to +616. Failure logs "cannot map mmio space". The flag 0x1000 is `PCIIO_BYTE_STREAM` in the public `pciio.h`. That BAR 1 is the R300's I/O-port BAR is **inferred** from the public chips' layout, not from this code. The attach returns 0 or 5 (step 16).
5. `fglrx_attach`: BAR 0 and BAR 2. **established.** Flag 1 (behind another bridge): BAR 0's size goes to record +640 and `pciio_pio_addr(dev, desc, PCIIO_SPACE_MEM, 0, base0 + size0, &map, 0x2000)` (0x1194) creates a PIO map whose handle is at +624; record +632 is the returned address plus BAR 0's bus base. BAR 2's size goes to +664 and `pciio_piomap_addr(map, base2, size2)` (0x122c) through the same map gives record +656. Flag 0 (directly on the bridge): `PCIIO_SPACE_WIN(0)` (0x1990) and `PCIIO_SPACE_WIN(2)` (0x19d0), each with flag 0x2000, give +632 and +656 directly. The flag 0x2000 is called `PCIIO_WORD_VALUES` in this document's other entries, but that name is **unverified**: no published header has been read here for its value. Failures log "cannot map mem(0) space", "cannot map reg(2) space" or "cannot map mem(2) space". **Inferred** from the public R300 layout and from step 8, which writes registers through +656: BAR 0 is the frame buffer and BAR 2 the 64 KB register window, and both are mapped with the word-value byte swap, so 32-bit register values need no software swapping.
6. `fglrx_attach`: option ROM (0x12a8 to 0x1368, and 0x1b00). **established.** Reads the expansion ROM BAR (configuration offset 0x30), keeps it with the low 11 bits cleared, writes 0xffffffff, reads back, computes the size as (NOT value OR 0xf) + 1 into record +568 and writes the saved base back with bit 0 (enable) set. Maps the ROM with `pciio_pio_addr(dev, desc, PCIIO_SPACE_ROM, 0, size, &map, 0x1000)` into record +552. If the first two bytes are 0x55 and 0xaa it allocates a copy with `kmem_zalloc_node_hint(size, 0x8001, node)` into +560, copies the ROM into it (`bcopy`, 0x1b20), points +552 at the copy and writes the ROM BAR back with bit 0 toggled off. Any other signature logs "ROM present - but sig NOT VALID", followed by "IS endian swapped" when the bytes are 0xaa and 0x55 and "bad" otherwise, and fails the attach; so do a ROM that cannot be mapped ("cannot get to ROM space") and a zero ROM BAR ("ROM NOT VALID"). A failed copy allocation skips the copy and keeps the mapped ROM. Nothing in `fglrx.o` executes the copy: the x86 emulator is in `vga.a`, and `fglrx.o` has no reference to it. The attach returns 0 or 5 (step 16).
7. `fglrx_attach`: legacy windows (0x13fc, 0x1458). **established.** `pciio_piomap_alloc(dev, desc, PCIIO_SPACE_IO, 0, 1024, 1024, 0x1000)` and `pciio_piomap_addr` give a 1024-byte legacy I/O window in record +584 (map +576, size +592); `pciio_pio_addr(dev, desc, PCIIO_SPACE_MEM, 0xa0000, 0x20000, &map, 0x1000)` gives the legacy VGA memory window in +680 (size +688). Failures log "cannot allocate Legacy PIO map" and "cannot get to vga-fb space".
8. `fglrx_attach`: first register writes (0x1470 to 0x14d8), all 32-bit stores through the BAR 2 window (record +656), in this order, with no delay or read-back between them: **established** as code. The attach returns 0 or 5 (step 16).
   1. register 0x4018 = 0x17
   2. register 0x429c = 0x400
   3. register 0x4018 = 0x17
   4. register 0x0040 = 0
   5. register 0x0050: read, AND 0xfdfeffff, write
   6. register 0x03f8: read, AND 0xfdfeffff, write

   Names, **established** from the public references by offset and field: 0x4018 is `GB_TILE_CONFIG` (Linux `r300_reg.h`); 0x17 sets `R300_GB_TILE_ENABLE`, the R300 pipe count (3 in bits 3:1) and 16-pixel tiles (`R300_GB_TILE_SIZE_16`). 0x429c is `GA_SOFT_RESET` (R3xx 3D Register Reference: count in cycles, bits 15:0, and the write also asserts the RB3D soft reset), so 0x400 asks for a 1024-cycle reset. 0x40 is `RADEON_GEN_INT_CNTL`, so every interrupt source is masked. 0x50 and 0x3f8 are `RADEON_CRTC_GEN_CNTL` and `RADEON_CRTC2_GEN_CNTL`; the mask clears bit 25 (`RADEON_CRTC_EN`, `RADEON_CRTC2_EN`) and bit 16 (`RADEON_CRTC_CUR_EN`, `RADEON_CRTC2_CUR_EN`), turning both display controllers and both cursors off. Why `GB_TILE_CONFIG` is written on both sides of the reset is **unknown**; the code does not say.
9. `fglrx_attach`: record fields for the Linux layer. **established.** Copies the 4-byte name "SG2" from `.rodata` +0x3f0 into record +224 and stores 32-bit copies of the window addresses masked to 14 bits (+264 to +288), of the sizes (+292 to +316) and of the PCI IDs (+452 to +460) for ATI's code. The attach returns 0 or 5 (step 16).
10. `fglrx_attach`: device nodes. **established.** `hwgraph_char_device_add` adds `fglrx` under the card vertex (record +412), `hwgraph_chmod` 0666, `hwgraph_fastinfo_set` attaches the record; a second node `hint.fglrx<n>` replaces any older one. Failures log "cannot add char_dev vertex" or "cannot add hintdev vertex". The attach returns 0 or 5 (step 16).
11. `fglrx_attach`: interrupt allocation. **established.** Duplicates the device descriptor, names its interrupt "FireGL Graphics Controller" (`device_desc_intr_name_set`), and calls `pciio_intr_alloc(dev, desc, 3, vertex)` (0x173c); lines value 3 is `PCIIO_INTR_LINE_A | PCIIO_INTR_LINE_B` in the public `pciio.h`. The handle goes to record +696. The attach returns 0 or 5 (step 16).
12. `fglrx_attach`: inventory. **established.** `hwgraph_inventory_add(vertex, 7, 24, record +432, board number, record +436)` (0x1774); a nonzero return logs "hwgraph_inventory_add returned". The class and type numbers' names are **unknown** without the IRIX inventory header.
13. `fglrx_attach`: `firegl_init_module` (0x1798) with the record: the ATI layer ([After attach](#after-attach-firegl_init_module)). A failure logs "init_module failed". The attach returns 0 or 5 (step 16).
14. `fglrx_attach`: host set-up and memory. **established.** `hub_setup_prb` (0x17c8, above), then `kmem_contig_reserve(node, 0x400000)` twice (result in record +484), `kmem_contig_reserve(node, 0x100000)` twice (+488) and `kmem_contig_reserve(node, 0x10000)` once (+492). A zero result for the 4 MB or 1 MB reservation logs "nlpages_4m or nlpages_1m systune required" but does not fail the attach. **Inferred** from the call alone: physically contiguous pages are set aside on the card's node for later DMA buffers; which buffer uses which reservation is not read here.
15. `fglrx_attach`: error handler and interrupt connect. **established.** `pciio_error_register(dev, fglrx_error_handler, 0)` (0x188c; the third argument is the constant zero, not the record). If record +792 is 1, register 0x0040 is written 0 first. Registers 0x0050 and 0x03f8 are masked with 0xfdfeffff again, record +792 is cleared, and `pciio_intr_connect(handle, fglrx_intr, record, 0)` (0x1904) connects the handler; failure logs "Failed to connect to hardware interrupt line". The attach returns 0 or 5 (step 16).
16. `fglrx_attach`: finish. **established.** `spinlock_init` of the record lock ("bdata lock", record +728), `fglrxProbeCompositor(record, record +328)` (0x1954) for the optional compositor, and return 0. Every failure path after the board record was found frees it (`freeBoardPointer`, 0x1a6c) and returns 5.

- `fglrx_init`: allocates the board tables, registers every pipe the VGA layer knows and then replays found devices to `fglrx_attach` with `pciio_iterate`; the step-by-step entry is in [kernel-object-functions.md](kernel-object-functions.md#detach-initialisation-and-device-identity).
- `find_fglrx_pipe` (`fglrx.o`, address 0x0): **established.** Calls `find_vga_pipe(pipe)`; when that returns a record it copies the record's halfword at +80 and doubleword at +96 to the two pointers given and returns 1, otherwise -1. `find_vga_pipe` is not in any object of the earlier search; it is in `gfxs.a(klconfig.o)`, read in [The pipe list](#the-pipe-list-gfxsaklconfigo).

## The pipe list (`gfxs.a(klconfig.o)`)

`gfxs.a` is an archive of four members (`gfx.o`, `gfx_debug.o`, `gfx_flow.o`, `klconfig.o`) in the IP35 kernel set of the 6.5.30 media. A string search of that file finds `find_vga_pipe` in `klconfig.o` only, and `klconfig.o` is the only object of the set that defines it. It sits in the same directory as `vga.a` and `IRIX_FILES.md` lists it; a `root/` made before that listing lacks it. Every address below is a `.text` offset in `klconfig.o`. "Pipe" is the record the routines return. The file carries debug information and symbols.

- `find_vga_pipe` (0x368, 800 bytes), `prom_has_vga_support` (0x330, 56 bytes), `find_vga_noprom_pipe` (0x688, 1140 bytes), `klcheck_vga` (0xafc, 84 bytes) and `find_gfxpipe` (0x0, 816 bytes): **established** as the names and extents from the symbol table; the bodies of the first four are read in full below. `find_gfxpipe` is only partly read: it walks the same configuration table and looks up boards of class 0x50 with `find_lboard_class` and `find_lboard_slot_class`; its purpose is **unknown**.
- The configuration table. **established:** each routine begins by computing an address from the local node number (`get_nasid` shifted left 33, added to a fixed high base and to 0x2000), loading the doubleword at +0xd0 of it, and comparing the word it points to with 0x58464552. A mismatch returns 0 (no pipe) at once. **inferred:** this is the platform configuration table that the PROM builds and hands to the kernel, because the PROM carries the strings `init_klcfg_vgagfx: Cannot add component. Node %d` and the like (`ip35prom.img`, file offset 0x7f428) and the routines walk boards and components of it. The table holds, at +0x80, an array of 128 halfwords, one per node slot, 0xffff when empty; every other value is an index into a table of 8-byte entries, and for an entry whose top nibble is 0xc, `chk_for_pebrick` supplies the address the board search starts from, in place of the table's own pointer. A board lookup uses `find_lboard_class(.., 0x70)` and components are searched with `find_first_component` and `find_component`.
- `prom_has_vga_support`. **established:** loads two words from the kernel's data and returns 1 when the first is 6 or more and the second is 0xab or more, 0 otherwise. **inferred:** these are the version numbers of the PROM that the kernel was told about; the function's name says what the test is for, and no other use of the two words was found. The symbols the words belong to are not visible in the unrelocated object.
- `find_vga_pipe(n)`. **established:** with a bad table it returns 0. With `prom_has_vga_support` false it returns `find_vga_noprom_pipe(n)`. Otherwise it returns the n-th record of a list kept in the global at `.sdata` +8, chained through the doubleword at +0x38 of each record, and builds that list on the first call (a flag word at `.sdata` +0x10 is cleared when it starts). It walks the 128 node slots, finds the node's board of class 0x70, and for each component of type 0x2f in it appends a record. The records are the configuration table's own component structures, extended in place: the routine writes into them the halfword node-slot index at +0x50, the byte copied from the component's +0x18 at +0x52, the byte `(halfword at component +0x24 >> 8) & 7` at +0x54, the byte `(halfword at component +0x24 >> 12) & 3` at +0x56, the doubleword at +0x40 and the doubleword at +0x60, and clears +0x38 before it links the record. For a bus kind (the value stored at +0x56) of 2 or 3 it keeps the doubleword at +0x40 that the component already carried. It leaves +0x53, +0x55, +0x57, +0x58 and +0x68 to +0x8c alone, so these arrive from whoever built the component, which is the PROM (**inferred** from the strings above and because no kernel routine writes them).
  - +0x40 is the address of the card's bus: the node window address for the board's node, plus the component's widget number (byte at +0x20) shifted left 24, plus 0x800000 when the byte at +0x56 is 1; a zero widget number takes a fixed alternative base from the kernel's data. **inferred:** the byte at +0x56 selects which of the bridge's two buses the card is on, since `pic.h` (Linux 2.6.5) gives the PIC two bus part numbers, 0xd102 for bus 0 and 0xd112 for bus 1, and the other routine below sets the byte at +0x55 from exactly that pair.
  - +0x60 is +0x40 plus 0x20000 plus the byte at +0x52 shifted left 12 plus the byte at +0x54 shifted left 8. **established** as arithmetic. **inferred:** +0x52 is the PCI device number and +0x54 the function number: the sum is the layout of Bridge type 0 configuration space (`BRIDGE_TYPE0_CFG_DEV0` 0x20000, 0x1000 per device, 0x100 per function in `bridge.h`, Linux 2.6.5), and it is the value `vga_earlyinit` stores as the board's configuration-window address.
- `find_vga_noprom_pipe(n)`. **established:** the fallback for a PROM that fails the version test. It first looks at the list already built (global at `.sdata` +8) and returns the n-th record. Otherwise, once (a flag word at `.sdata` +0x14 is cleared), it walks the same 128 node slots and boards of class 0x70, and in each board every component of type 5 whose byte at +0x39 is 7. For each of the eight device slots whose word at component +0x48 + 8 times the slot is nonzero it calls `klcheck_vga(bus address, slot, function)` and, when that finds a card, allocates a record of 0x90 bytes with `kmem_alloc` (failure logs through `cmn_err` and the record is still linked) and fills it: the board pointer at +0x48, the bus address at +0x40, the result of `klcheck_vga` at +0x60, the node-slot index at +0x50, bit 11 of the component's halfword at +0x24 at +0x53, bits 10:8 of it at +0x54, bits 13:12 of it at +0x56, 1 at +0x55 when the component's halfword at +0xa is 0xd102 or 0xd112 (the PIC part numbers) the slot number at +0x52, and at +0x58 the slot number, or the slot number minus 1 when +0x55 is 1. The function number passed to `klcheck_vga` is bits 10:8 of the halfword at +0x24 when its bit 11 is set and 0 otherwise. **inferred:** +0x58 is the index of the bridge's per-device register that `vga_setbridge_to_legacy_io` addresses (0x204 + 8 times the byte at board +0x38), and it counts from 0 on a PIC although its slots count from 1. Zero goes into +0x57 and into every doubleword from +0x68 to +0x80 and every halfword at +0x88, +0x8a and +0x8c. The new record is appended to the global list. The bus address takes the node window address plus the widget number shifted left 24 when the component's byte at +0x20 is nonzero (a fixed alternative base from the kernel's data otherwise), plus 0x800000 when the bus kind is 1; a bus kind of 2 or 3 sets no address and keeps the one from the previous pass.
- `klcheck_vga(bus address, slot, function)`. **established:** reads the doubleword-aligned word at offset 8 of the configuration window `bus address + 0x20000 + (slot << 12) + (function << 8)`. If the base class (bits 31:24) is 3 and the subclass (bits 23:16) is 0 it clears the low two bits of the byte at window offset 7 and returns the window address; otherwise it returns 0. The word at offset 4 is the command and status register, the byte at offset 7 is its low command byte on this big-endian host, and bits 1:0 of it are the memory and I/O space enables (public PCI register layout), so **inferred:** the routine switches off the card's I/O and memory decode when it finds a VGA-compatible display controller, before the kernel maps anything.
- What this settles for the VGA layer. **established:** the pipe's +0x57 is zero in every record the no-PROM walker makes, and `vga_earlyinit` route A logs "TportPipe not inited" and refuses a pipe with a zero +0x57, so on a PROM that fails the test, or a card the PROM did not mark, there is no early console board and the kernel first runs the card's BIOS in `vga_attach`. Where +0x57 is set, the PROM's record also carries the legacy I/O window address (+0x68), the frame-buffer address (+0x78), the two bridge slot-register values (+0x70 and +0x80) and three halfwords (+0x88, +0x8a, +0x8c) that `vga_earlyinit` takes over unchanged; nothing in the kernel computes them.

## Board bookkeeping and detach

- `fglrx_detach` (`fglrx.o`, address 0x1ef4, 1072 bytes, 1088-byte frame):
  **established.** The reverse of `fglrx_attach`, read in full.
  Its argument (a0, kept in s2) is the card's connection vertex.
  It reads the 3-byte class code at configuration offset 9 (`pciio_config_get(vertex, 9, 3)`, 0x1f24) and returns 5 unless bits 23:16 are 3 and bits 15:8 are 0, the display-controller and VGA-compatible class.
  It looks the `fglrx` edge up below the vertex (`hwgraph_traverse`, 0x1f9c); when that fails it logs "%s: can't traverse to 'fglrx'" through `cmn_err(4, ...)` (0x22e0) and returns 6.
  Otherwise the board record is the fast-info word of the vertex it found (`hwgraph_fastinfo_get`, 0x1fc4) and the board index is the word at record +428.
  A failed assertion call (`assfail`, 0x2314, text `fglrx_boards[brd] == bdata`, line 1244 of the driver's init source) is made when the table slot for that index is not the record, and the routine goes on.
  Teardown, in order:
  `firegl_cleanup_module(record)` (0x2020); when the interrupt handle at +696 is nonzero, `pciio_intr_disconnect` (0x2048) and `pciio_intr_free` (0x2068), then +696 is cleared;
  `bzero` of a 1024-byte stack buffer (0x2090) and `sprintf` (0x20bc) of `hint.%s%d` with `fglrx` and the index;
  `hwgraph_edge_remove` of that name from the connection vertex (0x20e4);
  `hwgraph_inventory_remove(+412, 7, 24, +432, +428, +436)` (0x2118), the same six values `fglrx_attach` gave `hwgraph_inventory_add`;
  `hwgraph_edge_remove` of `fglrx` (0x2140);
  `hwgraph_vertex_destroy` of the vertex whose handle is the word at +412 (0x2168), after which -1 is stored at +412; when +560 is nonzero, `kmem_free(+560, +568)` (0x2198) and +560 is cleared, which releases the ROM copy `fglrx_attach` made; when +544 is nonzero, `pciio_piomap_done` (0x21c4) and `pciio_piomap_free` (0x21e4) on it and +544 is cleared, which is the map handle that `fglrx_attach` passes as the sixth argument of its ROM `pciio_pio_addr` call.
  It then takes `GfxBoardInitSema` (`psema(sema, 25)`, 0x2224), calls `freeBoardPointer(index)` (0x2244), stores zero in the index's slot of `fglrx_boards` (8-byte entries) and of `fglrx_binuse` (4-byte entries), releases the semaphore with `vsema` (0x22b0) and returns 0.
  It makes no call that unmaps BARs 0 to 2 or the legacy windows.
- `checkBoardPointers` (`fglrx.o`, address 0x2324, 488 bytes):
  **established.** Every instruction of its two allocation blocks and three failure branches was followed against the relocation table.
  Makes the two per-board tables on first use.
  When the table pointer at `.data` +328 (`fglrx_boards`) is already nonzero it returns at once.
  Otherwise it allocates `GfxBoardLimit` entries of 8 bytes (`kmem_zalloc(count << 3, 1)`, 0x2398) and clears them (`bzero`, 0x23c8); a failed allocation logs "fglrx: checkBoardPointers(fglrx_boards) failed" with `cmn_err(0, ...)` (0x2470) and still goes on to the `bzero`.
  If the pointer at `.data` +312 (`fglrx_binuse`) is already nonzero it makes the failed-assertion call `assfail` (0x24b8, text `fglrx_binuse == NULL`, line 1338) and continues.
  It then allocates `GfxBoardLimit` entries of 4 bytes (`kmem_zalloc(count << 2, 1)`, 0x23f8), clears them (0x2428), and logs "fglrx: checkBoardPointers(fglrx_binuse) failed" on a failed allocation (0x24fc).
  `fglrx_init` (0x120) and `fglrx_attach` (0xd74) call it before they use either table.
- `freeBoardPointers` (`fglrx.o`, address 0x250c, 192 bytes):
  **established.** Both free calls and the early exit were traced through the disassembly of its 48 words.
  Does nothing when `fglrx_boards` (`.data` +328) is null.
  Otherwise it frees that table with `kmem_free(table, GfxBoardLimit << 3)` (0x256c), frees `fglrx_binuse` (`.data` +312) with `kmem_free(table, GfxBoardLimit << 2)` (0x25b0), and stores zero in both pointers, the first before the second call and the second after it.
  It frees the tables only, not the board records that `freeBoardPointer` releases one at a time.
- `checkBoardPointer` (`fglrx.o`, address 0x25cc, 404 bytes):
  **established.** The disassembly of all 101 words was followed, including the three assertion tails.
  Takes a board index (a0, kept in s1) and a node (a1, stored at 0(sp)), and creates the board record for that index when none exists.
  Two assertions come first, each a call to `assfail` and each followed by the normal path:
  `fglrx_boards` is not null (0x26c0, line 1403) and `fglrx_binuse` is not null (0x2708, line 1404).
  When the table slot for the index is already nonzero it returns without a store.
  Otherwise it allocates an 800-byte record with `kmem_zalloc_node_hint(800, 1, node)` (0x2650), stores the index at record +428 and -1 at +408 and +412, and puts the record in the slot, the index shifted left by 3 added to the table.
  A null allocation calls `assfail` (0x2750, text `bdata != NULL`, line 1409) and the code after it goes on to store through the (null) result, so the routine itself does not handle the failed allocation.
  It does not write `fglrx_binuse`.
- `freeBoardPointer` (`fglrx.o`, address 0x2760, 496 bytes):
  **established.** Its six assertion tails and the main path were decoded word by word from the 124-word body.
  Takes a board index (a0, kept in s1) and releases that board's record.
  Six assertion calls to `assfail` (0x28b8 to 0x2938, lines 1426 to 1431) check, in this order, that the index is below `GfxBoardLimit + 1`, that `fglrx_boards` is not null, that its slot for the index is not null, that the record's word at +428 equals the index, that `fglrx_binuse` is not null and that its entry for the index is nonzero; a failed check does not leave the routine.
  It stores zero in the `fglrx_binuse` entry (0x2830), calls `kmem_free(record, 800)` (0x2854) and, after the call, stores zero in the `fglrx_boards` slot.
  The caller's own stores of zero in `fglrx_detach` repeat this.

- `fglrx_reload_dev` (`fglrx.o`, address 0x518, 52 bytes):
  **established.** Its 13 words are a plain wrapper, confirmed against the single call relocation.
  A one-call wrapper: it passes its argument unchanged to `fglrx_attach` (call at 0x538) and returns that call's result.
  It is the callback `fglrx_init` hands to `pciio_iterate` to replay already-found cards into the attach routine.
- `fglrx_unload_dev` (`fglrx.o`, address 0x8b8, 172 bytes):
  **established.** The fetch, the assertion tail and the detach call were followed through all 43 words.
  The callback `fglrx_unload` hands to `pciio_iterate`.
  It takes the connection vertex in a0, fetches that vertex's fast-info word (`hwgraph_fastinfo_get`, 0x8e0) and, when it is null, calls `assfail` (0x954, text `bdata != NULL`, line 452) before going on.
  It then calls `fglrx_detach` with the vertex itself (0x904) and returns that call's result.
- `fglrx_unreg` (`fglrx.o`, address 0x690, 180 bytes):
  **established.** Both exits of this 45-word routine were traced, with the message text taken from the read-only data.
  Reads the word at `.data` +272, the count of open handles that `fglrx_unload` also tests.
  When it is zero it calls `pciio_driver_unregister("fglrx_")` (0x6e8) and returns 0.
  Otherwise it logs "fglrx: fglrx_unreg - driver still in use by %d boards" with `cmn_err(4, ...)` (0x734), passing the word as the number, and returns -1 without unregistering.
- `fglrx_unload` (`fglrx.o`, address 0x744, 372 bytes):
  **established.** The in-use refusal and the five-call teardown were decoded from its 93 words.
  When the word at `.data` +272 is nonzero it logs "fglrx: fglrx_unload - fglrx_inuse ! - no unload!" with `cmn_err(4, ...)` (0x8a8) and returns 16.
  Otherwise it calls `pciio_iterate("fglrx_", fglrx_unload_dev)` (0x7b4) so every attached card is detached, takes `GfxBoardInitSema` (`psema(sema, 25)`, 0x7ec), calls `freeBoardPointers` (0x80c), stores zero in the word at `.data` +320, the board count `fglrx_attach` increments (0x84c), releases the semaphore with `vsema` (0x85c) and returns 0.
- `fglrx_intr_list` (`fglrx.o`, address 0xad8, 260 bytes):
  **established.** The loop and its three per-board tests were decoded from the full 65-word body; `is1.o` imports this routine.
  It takes a count n in a0 and the address of an array of 32-bit board indices in a1, and for each of the n entries in order: skips an index that is zero or negative (`blez`, 0xb48) and an empty slot of `fglrx_boards` (0xb5c), then reads the board record's word at +792.
  A value of 0 is changed to 2 (store at 0xb78) and the board then counts as value 2; a value of 2 makes it increment the record's word at +128 (the count `fglrx_intr` keeps) and call the routine at 0x3844, `fglrx_validate_vsync`, with the record (call at 0xbbc); any other value (1 included) skips the board.
  It sets no return value.
  Board index 0 can therefore never be reached through this routine.
- `bdata_from_pipename` (`fglrx.o`, address 0x6924, 280 bytes):
  **established.** The search loop and the not-found message were decoded across all 70 words.
  Takes a pipe name string in a0 and walks the first `GfxBoardLimit` slots of `fglrx_boards` in order, comparing the string at record +240 with it (`strcmp`, 0x69b0) and returning the first record that matches.
  It does not test a slot for null before it reads the record. Its only callers in `fglrx.o` are two sites (0x8760 and 0x87dc) in the hyperpipe attribute routine `fglrx_hp_set_attrib`.
  When the loop ends without a match it prints "bdata for pipe %s not found" with the name through `printf` (0x6a04) and returns 0.
  A limit of zero or less skips the loop.
- `firegl_cleanup_module` (`fglrx.o`, address 0x9368, 172 bytes):
  **established.** The three calls and the pointer clear were matched to the allocation in `firegl_init_module`.
  The reverse of `firegl_init_module`, called by `fglrx_detach`.
  It makes a debug-print call with the text "module cleanup started" (the stub at 0x9104, which only spills its arguments and returns; call at 0x93b0), loads the pointer at record +200 (the 232-byte structure `firegl_init_module` stored there), calls `firegl_cleanup` with it (0x93d0), clears record +200 and frees the structure with `kmem_free(structure, 232)` (0x93f8).
  Its return value is that of `kmem_free`.
- `firegl_cleanup` (`fglrx.o`, address 0xf08c, 136 bytes):
  **established.** Every store in these 34 words was matched to a store in `firegl_init`.
  Takes the 232-byte structure in a0, makes a debug-print call through a routine in `.text` (0xf0cc), frees the 11680-byte private structure whose pointer is at +8 with `kmem_free(.., 11680)` (0xf0f0), then clears the doubleword at +208 of the object whose pointer is at +56 of the 232-byte structure (the back pointer `firegl_init` stored there) and the doubleword at +8.
  It undoes the allocations of `firegl_init`, and nothing in it writes a register of the card.

## Interrupts

- `fglrx_intr` (`fglrx.o`, 372 bytes at address 0x964): see [the kernel ioctl and interrupt routines](kernel-ioctl-irq-functions.md#vertical-sync-wait-and-engine-reset).
- `fglrx_validate_vsync` (`fglrx.o`, address 0x3844, 428 bytes): **established.** The routine `fglrx_intr` calls when a vertical-sync status bit is set. It takes the board record in a0 and reads the board index at record +428 (a word). It takes the spin lock held at that index in the lock array whose pointer is the 8-byte word at `.data` +336 (`mutex_spinlock`, 4 bytes per lock, 0x38a8) and walks the singly linked list of waiters whose head is at that index in the pointer array at `.data` +280 (8 bytes per head), each waiter's next pointer being the doubleword at waiter +160. A waiter whose byte at +82 is nonzero is unlinked and not signalled: when it is the list head, the head becomes its next pointer, its own next pointer is cleared and the walk goes on from the new head; when it is not the head, its predecessor's next pointer is set to its next, its own next pointer is cleared and the walk ends (the register holding the current waiter is zeroed in that branch, which looks unintended). Any other waiter takes the unsigned remainder of the record's word at +128 (the count `fglrx_intr` increments) divided by the waiter's word at +144, and when that equals the waiter's word at +148 it is unlinked (head or predecessor updated as above, its own next pointer left as it was), the count is stored in the waiter's word at +152, `sv_signal` is called on the waiter's address +48 (0x39d4) and the walk continues with its old next waiter. The division by +144 traps (`teq`, code 7) when it is zero. Waiters whose remainder differs stay linked. It ends with `mutex_spinunlock` and returns that call's result. **Inferred** from the routine's use after the vsync status bit: the waiters are processes sleeping in `fglrx_wait_vsync`, +144 is a frame interval and +148 a phase, and +82 marks a cancelled wait.
- `fglrx_error_handler` (`fglrx.o`, address 0x4454, 336 bytes): **established.** The routine `fglrx_attach` registers with `pciio_error_register`. It reads the fourth argument (a3) as an error descriptor and returns 9 (rejected) unless bits 23 and 22 of the word at +0 are both set. Then it looks at the doubleword at +32 and the doubleword at +40. If +32 is 2 and +40 is below 1024 it returns 0 at once (handled). If +32 is 4 and +40 is 0x44 it goes on; every other combination returns 9. Going on, it takes the halfword at +6 as a widget number w (w itself when w is below 8, otherwise w - 7) and the halfword at +14 as an index into the halfword array `compact_to_nasid_node`, giving a NASID n. It reads the doubleword at offset 0x198 + 8 x w of the 0x1c00000 register window of node n (address 0x9200000001c00000 + (n << 33) + 0x198 + 8 x w, load at 0x4510); if its bit 49 is clear it returns 9. If bit 49 is set it writes 1 shifted left by the halfword at +6 (the unadjusted number) to the doubleword at offset 0x1f8 of the same window (store at 0x458c), prints "Handled interrupt io error" with `cmn_err(4, ...)` (0x4590) and returns 0. What the descriptor fields mean is **unknown**: the roles of bits 23 and 22 of its first word and of the doublewords at +32 and +40 are not established from the binary. The read that would settle it is the callers of `pciio_error_register` handlers in `pcibr.o`, which build this descriptor. That the registers at window offsets 0x198 and 0x1f8 are bridge or hub error-status registers is likewise **unknown**.
- `firegl_install_irq` (`fglrx.o`, address 0x1f08c): **inferred.** The ioctl that turns on the ATI layer's interrupt use: it calls `_r6x_enable_framelock_irq` or `_r6x_enable_vsync_irq`, `__ke_pci_get_irq` and `__ke_request_irq`, and waits 200 ms (`__ke_mdelay(0xc8)`) between the two halves. Read at call level only; not part of attach. It returns -14 when a copy to or from user space fails, and 0 on the other paths.

## Early console and the x86 emulator

- `vga_set_vesa_mode` (`vga.a(vga_init.o)`, address 0xf10): **established.** Two emulated `int 0x10` calls: AX = 0x4f02 (VBE set mode) with BX = the mode, then, only when AL comes back 0x4f, AX = 0x4f03 (VBE get mode); it returns the BX the second call leaves, or 0. Each call is `setup_int`, `run_bios_int`, `X86EMU_exec`, `finish_int`.
- `vga_enable_fb` (`vga.a(vga_init.o)`, address 0xfc4): **established.** Switches the bridge to the legacy I/O setting (`vga_setbridge_to_legacy_io`) and writes the byte 6 to legacy I/O ports 0x3ce and then 0x3cf through the legacy window (record +176) with `wbadaddr_val`. **Inferred** from the public VGA register layout: index 6 of the graphics controller (miscellaneous), value 6, maps video memory at 0xa0000 for 64 KB with odd/even chaining.

So the card's BIOS runs once, under the kernel's own x86 emulator, during the early console start-up; the FireGL driver relies on that and only shadows the ROM. Whether the IP35 PROM also runs it is in [the open questions](open-questions.md#host-attachment).

## The emulator's glue to the kernel (`vga.a(helper_exec.o)`)

The x86 emulator in `vga.a` runs the card's option ROM against an emulated PC.
This member holds the routines that load the emulator's registers, push an interrupt frame and route its port and memory accesses to the kernel.
All of them reach the active emulation record through the global `Int10Current`, and the emulator's register file through a pointer in `.srdata`.
In the record, the doubleword at +24 points at a table of six function pointers (read byte, halfword and word at +0, +8 and +16, write byte, halfword and word at +24, +32 and +40), and the doubleword at +80 is the board record, which every port access passes to the `vga.a(helper_legacy.o)` routines `inb`, `inw`, `inl`, `outb`, `outw` and `outl`; those use the record's doubleword at +176, the legacy I/O window, as the base of the port space.
That table layout is **inferred** from how `Mem_rb` to `Mem_wl` and the repeat-port routines index it; nothing in this member fills it, so which kernel routines it points at is not read here.

- `setup_int` (`vga.a(helper_exec.o)`, address 0x0, 148 bytes): **established.**
  Takes the record in a0 and stores it in `Int10Current` (0x10).
  Copies the record's words at +36, +40, +44, +48, +52 and +56 into the emulator's register file at +24, +28, +32, +36, +48 and +52, and the word at +64 to +44.
  Sets the register-file word at +40 to 0x1000, the word at +56 to 0x600 and the word at +60 to 0x3200, and the halfwords at +64, +66, +72 and +74 to 0, 0x40, 0 and 0.
  Stores the record's word at +72 shifted right by 4 (arithmetic) into the halfword at +68 and the low halfword of its word at +60 into +70.
  It returns 1, and does the copies on every call.
- `finish_int` (`vga.a(helper_exec.o)`, address 0x94, 80 bytes): **established.**
  Takes the record in a0 and copies registers back out of the emulator: the halfwords at +26, +30, +34, +38, +50, +54, +70, +46 and +62 of the register file are stored, in that order, as zero-extended words at record +36, +40, +44, +48, +52, +56, +60, +64 and +68.
  It returns nothing and calls nothing.
- `getIntVect` (`vga.a(helper_exec.o)`, address 0xe4, 92 bytes): **established.**
  Takes the record in a0 and an interrupt number in a1, and reads the vector at linear address 4 times the number through the record's read-halfword entry (table +8): first the segment at address 4n + 2 (call at 0x104), then the offset at 4n (call at 0x11c).
  It returns the segment shifted left by 4 plus the offset, the linear address the vector points at.
- `pushw` (`vga.a(helper_exec.o)`, address 0x140, 68 bytes): **established.**
  Takes the record in a0 and a halfword value in a1.
  It subtracts 2 from the register-file word at +40 (the emulated stack pointer, which `setup_int` initialises), then writes the value through the record's write-halfword entry (table +32) at the linear address (halfword at +68 shifted left by 4) plus the low 16 bits of the new pointer.
  The result of the write is returned.
- `run_bios_int` (`vga.a(helper_exec.o)`, address 0x184, 196 bytes): **established.**
  Takes an interrupt number in a0 and the record in a1, and begins an emulated software interrupt.
  It reads the vector's segment halfword at 4n + 2 through the record's read-halfword entry; when that is 0xf000 it logs "Card BIOS on non-PC like platform not loaded" through `cmn_err` with level 5 (0x238) and returns 0.
  Otherwise it calls `pushw` three times, with the register-file halfwords at +62, +64 and +58 (0x1c8, 0x1d4, 0x1e0), and then replaces the halfword at +64 with the vector's segment and the halfword at +58 with its offset.
  It returns 1.
  **Inferred:** the three values are the flags (the halfword at +62, set to 0x3200 by `setup_int`), the code segment (+64) and the instruction pointer (+58), which an interrupt pushes before it jumps through the vector.
- `x_inb` (`vga.a(helper_exec.o)`, address 0x698, 92 bytes): **established.**
  Takes a port number in a0 and returns a byte.
  Port 64 (0x40) is answered from a counter instead of hardware: it adds 1 to the halfword at +10 of the `Int10Current` record and returns its low byte when bit 0 of the new value is clear and its high byte when bit 0 is set.
  Every other port is passed to `inb` (0x6d8) with the board record at +80 and the result is masked to 0xff.
  **Inferred:** the alternating bytes imitate reads of the timer channel 0 counter that BIOS delay loops use.
- `x_inw` (`vga.a(helper_exec.o)`, address 0x6f4, 84 bytes): **established.**
  Takes a port in a0 and returns a halfword.
  Port 92 (0x5c) calls `get_ust_nano` (0x728) with a stack slot and returns the 64-bit value in the slot divided by 3260, unsigned, masked to 16 bits.
  Every other port is passed to `inw` (0x70c) with the board record at +80 and the result is masked to 0xffff.
- `x_inl` (`vga.a(helper_exec.o)`, address 0x7d4, 80 bytes): **established.**
  Takes a port in a0 and returns a word.
  It calls `pciCfg1in` with the board record at +80, the port and a stack slot (0x7ec); when that returns nonzero it returns the word it left in the slot.
  Otherwise it returns the result of `inl` (0x814) on the same board record and port.
- `x_outb` (`vga.a(helper_exec.o)`, address 0x748, 96 bytes): **established.**
  Takes a port in a0 and a value in a1 and returns nothing of its own.
  A write of the value 0 to port 67 (0x43) calls `get_ust_nano` (0x780) with a stack slot, divides the 64-bit result by 838 (unsigned), ORs 1 and stores the result as the halfword at +10 of the record, which is the counter `x_inb` reads through port 64.
  Every other port and value goes to `outb` (0x76c) with the board record at +80.
  **Inferred:** port 67 with value 0 is the timer's counter-latch command.
- `x_outw` (`vga.a(helper_exec.o)`, address 0x7a8, 44 bytes): **established.**
  Takes a port in a0 and a value in a1 and passes both unchanged to `outw` (0x7c0) with the board record at +80.
  It special-cases no port.
- `x_outl` (`vga.a(helper_exec.o)`, address 0x824, 84 bytes): **established.**
  Takes a port in a0 and a value in a1.
  It first calls `pciCfg1out` with the board record at +80, the port and the value (0x844) and returns when that result is nonzero.
  Otherwise it calls `outl` (0x868) with the board record, port and value.
- `pciCfg1in` (`vga.a(helper_exec.o)`, address 0x98c, 92 bytes): **established.**
  Takes the board record in a0, a port in a1 and a result pointer in a2, and returns 1 when it handled the port and 0 otherwise.
  Port 3320 (0xcf8) stores the static `.sdata` word that `pciCfg1out` fills (the address latch) through the pointer.
  Port 3324 (0xcfc) calls `pciReadLong` with the board record and the latch's low byte (masked with 0xff, 0x9cc), and stores its result through the pointer.
  Bus, device and function bits of the latch are not used: the access always goes to the card of the board record, at the register offset in the latch's low byte.
- `pciCfg1out` (`vga.a(helper_exec.o)`, address 0x9e8, 72 bytes): **established.**
  Takes the board record in a0, a port in a1 and a value in a2, and returns 1 when it handled the port and 0 otherwise.
  Port 3320 (0xcf8) stores the value in the static `.sdata` latch.
  Port 3324 (0xcfc) calls `pciWriteLong` with the board record, the latch's low byte (masked with 0xff) and the value (0xa1c).
  As in `pciCfg1in`, the bus, device and function bits of the latch are ignored.
- `Mem_rb` (`vga.a(helper_exec.o)`, address 0x878, 44 bytes): **established.**
  Takes an emulated address in a0 and returns a byte.
  It loads the `Int10Current` record, takes the table at record +24 and calls its entry at +0 with the record and the address (call at 0x890); the callee's result is returned unchanged.
- `Mem_rw` (`vga.a(helper_exec.o)`, address 0x8a4, 44 bytes): **established.**
  The halfword read: the same dispatch through the table entry at +8, with the record and the address in a0 as arguments (call at 0x8bc), the result returned unchanged.
- `Mem_rl` (`vga.a(helper_exec.o)`, address 0x8d0, 44 bytes): **established.**
  The word read: the same dispatch through the table entry at +16 (call at 0x8e8), the result returned unchanged.
- `Mem_wb` (`vga.a(helper_exec.o)`, address 0x8fc, 48 bytes): **established.**
  Takes an address in a0 and a value in a1.
  It calls the table entry at +24 with the record, the address and the value in that order (call at 0x918) and returns that call's result.
- `Mem_ww` (`vga.a(helper_exec.o)`, address 0x92c, 48 bytes): **established.**
  The halfword write: the same call through the table entry at +32 with the record, the address and the value (call at 0x948).
- `Mem_wl` (`vga.a(helper_exec.o)`, address 0x95c, 48 bytes): **established.**
  The word write: the same call through the table entry at +40 with the record, the address and the value (call at 0x978).
- `port_rep_inb` (`vga.a(helper_exec.o)`, address 0x248, 176 bytes): **established.**
  Emulates a repeated byte input.
  Takes the record in a0, a port in a1, a start address in a2, a direction flag in a3 and a count in a4.
  It runs a4 times (a zero count does nothing): `x_inb` on the port (0x294), then a write of that byte through the record's write-byte entry (table +24) at the current address (call at 0x2ac), then the address moves by +1, or by -1 when a3 is nonzero.
  It returns the final address minus the start address, which is the count when the direction flag is zero and its negative otherwise.
- `port_rep_inw` (`vga.a(helper_exec.o)`, address 0x2f8, 188 bytes): **established.**
  The halfword version of the repeated input, with the same argument registers.
  Each pass calls `x_inw` (0x34c) and writes the halfword through the table entry at +32 (call at 0x364); the address steps by +2, or by -2 when a3 is nonzero.
  It returns the final address minus the start address.
- `port_rep_inl` (`vga.a(helper_exec.o)`, address 0x3b4, 188 bytes): **established.**
  The word version of the repeated input, with the same argument registers.
  Each pass calls `x_inl` (0x408) and writes the word through the table entry at +40 (call at 0x420); the address steps by +4, or by -4 when a3 is nonzero.
  It returns the final address minus the start address.
- `port_rep_outb` (`vga.a(helper_exec.o)`, address 0x470, 176 bytes): **established.**
  Emulates a repeated byte output, with the argument registers of `port_rep_inb`.
  Each pass reads a byte through the record's read-byte entry (table +0) at the current address (call at 0x4c8), sends it to `x_outb` with the port (0x4d4), and steps the address by +1, or by -1 when a3 is nonzero.
  It returns the final address minus the start address.
- `port_rep_outw` (`vga.a(helper_exec.o)`, address 0x520, 188 bytes): **established.**
  The halfword version of the repeated output.
  Each pass reads a halfword through the table entry at +8 (call at 0x580), sends it to `x_outw` (0x58c), and steps the address by +2, or by -2 when a3 is nonzero.
  It returns the final address minus the start address.
- `port_rep_outl` (`vga.a(helper_exec.o)`, address 0x5dc, 188 bytes): **established.**
  The word version of the repeated output.
  Each pass reads a word through the table entry at +16 (call at 0x63c), sends it to `x_outl` (0x648), and steps the address by +4, or by -4 when a3 is nonzero.
  It returns the final address minus the start address.
- `bios_checksum` (`vga.a(helper_exec.o)`, address 0xa30, 80 bytes): **established.**
  Takes a base address in a0 and a length in a1 and returns the sum of that many bytes, reduced to eight bits after every addition.
  A length of zero or less returns 0 without reading; the loop reads two bytes a pass and stops when the count goes negative after the first or the second.
  Nothing in this member calls it; whether the result is compared with zero is up to the caller.

## The emulated PC's memory image and the legacy port space (`vga.a(helper_mem.o)`, `helper_legacy.o`, `junkcode.o`)

- `setup_int_vect` (`vga.a(helper_mem.o)`, address 0x0, 440 bytes): **established.**
  Takes the emulation record in a0 and builds the emulated interrupt vector table through the record's write-halfword entry (table +32 of the table at record +24).
  First, 128 times, it writes the offset 0 at linear address 4n and the segment 0xf000 at 4n + 2 (the loop branch at 0x58 is branch-likely).
  It then calls `reset_int_vect`, and sets the offset halfword of the vectors 0x1f, 0x11, 0x12, 0x15, 0x1a, 0x05, 0x08, 0x13, 0x0e, 0x17 and 0x1e to 0xfa6e, 0xf84d, 0xf841, 0xf859, 0xff6e, 0xff54, 0xfea5, 0xec59, 0xef57, 0xefd2 and 0xefc7, in that order, so each points into segment 0xf000.
  Last it reads the byte at linear 0x410 through the read-byte entry (table +0) and writes it back with bits 5:4 cleared (AND 0xcf).
  **Inferred:** address 0x410 is the BIOS data area's equipment-list byte, whose bits 5:4 give the initial video mode, so the emulated machine starts with no video type set.
- `reset_int_vect` (`vga.a(helper_mem.o)`, address 0x21c, 296 bytes): **established.**
  Takes the record in a0.
  It copies 92 bytes from the table in `.data` that the `.srdata` pointer names to linear 0xfa4 through the write-byte entry, then writes halfwords: vector 0x1d (linear 116) gets offset 0xfa4 and segment 0, and the vectors 0x10, 0x42 and 0x6d (linear 64, 264, 436) get offset 0xf065 and segment 0xf000.
  **Inferred:** the 92 bytes are the BIOS video parameter table that vector 0x1d points at, and the 0xf065 entries are the default video handler address.
  It returns nothing.
- `setup_system_bios` (`vga.a(helper_mem.o)`, address 0x1b8, 100 bytes): **established.**
  Takes the base of the 64 KB buffer that stands for segment 0xf000 in a0, fills it with 0xf4 through `memset` (0x1cc), and writes three things at the top of it: the text "06/11/99" at offset 0xfff5 (the unaligned store pair at 0x1f4 and 0x1f8) with a zero byte at 0xfffd, the 8 bytes "PCI_ISA" plus its zero terminator at 0xffd9, and the byte 0xfc at 0xfffe.
  It returns 1.
  **Inferred:** these are the system BIOS date, an identification string and the model byte, which option ROMs read to decide what machine they run on; 0xf4 is the x86 halt opcode.
- `set_return_trap` (`vga.a(helper_mem.o)`, address 0x344, 68 bytes): **established.**
  Takes the record in a0, writes the byte 0xf4 at linear 0x600 through the write-byte entry (call at 0x360), then calls `xf86Int10AllocPages` with the record, a count of 1 and the address record +72 (call at 0x370), and returns its result.
  The linear address 0x600 matches the instruction pointer `setup_int` stores at register-file +56 (its low halfword at +58 is 0x600, with the code segment at +64 zero), so emulated code that returns to its starting point lands on a halt.
  What the allocation call writes through its third argument is in `xf86Int10AllocPages`, not here.
- `outb` (`vga.a(helper_legacy.o)`, address 0x0, 52 bytes): **established.**
  Takes the board record in a0, a port in a1 and a byte value in a2.
  It stores the byte on the stack and calls `wbadaddr_val` with the address (port, zero-extended to 32 bits, plus the doubleword at record +176), a width of 1 and the stack address (call at 0x20), so a write that bus-errors is caught.
  It returns that call's result.
- `outw` (`vga.a(helper_legacy.o)`, address 0x34, 44 bytes): **established.**
  Takes the board record, a port and a halfword, swaps the two bytes of the halfword and stores it as a halfword at the port address in the legacy window (record +176).
  It does a plain store with no bus-error protection and returns nothing.
- `outl` (`vga.a(helper_legacy.o)`, address 0x60, 60 bytes): **established.**
  Takes the board record, a port and a word, reverses the four bytes and stores the word at the port address in the legacy window (record +176) with a plain store.
  It returns nothing and has no bus-error protection.
- `inb` (`vga.a(helper_legacy.o)`, address 0x9c, 64 bytes): **established.**
  Takes the board record in a0 and a port in a1 and reads a byte from the port address in the legacy window (record +176) through `_badaddr_val` with width 1 (call at 0xb8).
  When that call reports a fault it returns 0xff; otherwise it returns the byte.
- `inw` (`vga.a(helper_legacy.o)`, address 0xdc, 96 bytes): **established.**
  The halfword input: `_badaddr_val` with width 2 (call at 0xf8), 0xffff on a fault, and otherwise the halfword with its two bytes swapped.
- `inl` (`vga.a(helper_legacy.o)`, address 0x13c, 120 bytes): **established.**
  The word input: `_badaddr_val` with width 4 (call at 0x158), the value -1 on a fault, and otherwise the word with its four bytes reversed.
- `pciReadByte` (`vga.a(junkcode.o)`, address 0x0, 44 bytes): **established.**
  Takes the board record in a0 and a configuration offset in a1.
  It loads the 32-bit word at that offset in the configuration window (the doubleword at record +120), shifts it right by 0, 8, 16 or 24 bits chosen from the offset's low two bits through a four-entry table in `.data`, and returns the low byte.
  The word load is at the offset as given, not rounded down to a multiple of 4.
- `pciReadWord` (`vga.a(junkcode.o)`, address 0x2c, 44 bytes): **established.**
  The same routine with a halfword result: the same word load and table-driven right shift, returning the low 16 bits.
- `pciReadLong` (`vga.a(junkcode.o)`, address 0x58, 48 bytes): **established.**
  Takes the board record in a0 and a configuration offset in a1.
  For a nonzero offset it returns the word loaded from that offset in the configuration window (record +120).
  For offset 0 it returns the word at record +280 ORed with the word at record +284 shifted left by 16, the vendor word (the one `vga_map_board_regions` compares with 0x1002) and the word after it, with no access to the card.
- `pciWriteByte` (`vga.a(junkcode.o)`, address 0x88, 16 bytes): **established.**
  Stores a2 as a byte at offset a1 in the configuration window (record +120) of the board record in a0, with no read-modify-write of the word around it.
- `pciWriteWord` (`vga.a(junkcode.o)`, address 0x98, 16 bytes): **established.**
  Stores a2 as a halfword at offset a1 in the configuration window (record +120) of the board record in a0.
- `pciWriteLong` (`vga.a(junkcode.o)`, address 0xa8, 16 bytes): **established.**
  Stores a2 as a word at offset a1 in the configuration window (record +120) of the board record in a0.

Same-named routines in other binaries are different code, not copies of the entries above:

- `Mem_rw` in `biosemu` (address 0x1000af10, 84 bytes): **established.**
  It dispatches the halfword read like the kernel routine, but through a global record pointer whose table sits at record +32, not +24 (entry +8, called with the record and the address).
- `outw` in `XFree86` (address 0x100706c0, 72 bytes): **established.**
  It swaps the two bytes of the halfword and stores it at a base word plus the port, only when the port plus 2 is below a limit word; otherwise it does nothing.
- `pciReadLong` in `XFree86` (address 0x1006df00, 164 bytes): **established.**
  It is not the configuration-window read above.
  After `pciInit` (0x1006dd80) it takes bits 15:11 of its first argument as an index into a table of record pointers. An index at or above a count word is refused unless a separate flag word is nonzero. It calls the record's function at +12 with the tag and the offset, and returns -1 when the index is refused or the record or the function is missing.

## After attach: firegl_init_module

- `firegl_init_module` (`fglrx.o`, 568 bytes at address 0x9130): builds the 232-byte module structure for one board and runs `firegl_init` on it.
  The argument is the board record (a0, kept in s4). `kmem_alloc(232, 0)` (call at 0x9164) failing calls `cmn_err` at level 1 with "firegl_init_module[%d]: kmem_alloc failed" and the board number (word at +428) and returns 0. Otherwise the block is cleared with `memset` (call at 0x919c), stored at board record +200, and filled: the doubleword at +0 gets 0x10020000, +56 and +208 get the board record, and `init_mutex` is called six times (calls at 0x9204; slot i at structure +80 + 16 i, name "fglrx_slp_mutex", last argument the slot number) and `init_sema` twice (call at 0x9250; slots at +176 and +192, count 1). The doubleword at +64 gets the address of structure +216, in the delay slot of the call to `firegl_init(structure)` (call at 0x9288).
  A zero result from `firegl_init` logs "module loaded - %s %d.%d.%d [%s] for board %d" through `__KE_INFO` (call at 0x9310) with the name at +24, the words at +32, +36 and +40, the string at +48 and the board number, and returns 1. A nonzero result frees the structure with `kmem_free(structure, 232)` (call at 0x92b8), clears board record +200 and returns 0. **Established.**
- `firegl_init` (`fglrx.o`, 672 bytes at address 0xedec): the ATI-layer initialisation of a board; it checks the build, allocates the device-private record and asks the chip layer whether the device is supported.
  The argument is the 232-byte module structure (a0, kept in s2); its doubleword at +56, the board record, is kept at sp+0. `cmn_err` at level 5 prints "Initializing SG2 Driver Version = %d %d %d Build %s" with 3, 4, 1 and "Jun  2 2006" (call at 0xee4c). The word `__ke_PAGE_SIZE` must equal 16384, otherwise the error-print routine at 0xecd0 logs "page size inconsistency in linked module binaries." (call at 0xee94) and the result is -84. The doubleword at structure +0 must equal 0x10020000, otherwise "incompatible device" is logged (call at 0xefe4) and the result is -19.
  `kmem_alloc(11680, 0)` (call at 0xeecc) failing logs "%s[%d]:  kmem_alloc failed" through `cmn_err` with the board number (word +428 of the board record; call at 0xf07c) and returns -19. The block is cleared with `__ke_memset` (call at 0xeefc) and linked: record +11656 gets the board record, `drm_mem_init(record)` runs (call at 0xef28) with a store of the record to board record +208 in its delay slot, record +0 gets the module structure, structure +8 gets the record, +24 the name "fglrx", +32 and +36 the words 3 and 4, +48 the string "Jun  2 2006" and +40 the word 1 (in the delay slot of the call to `_r6x_IsDeviceSupported(record)`, call at 0xef78). A zero answer logs "Device not found!" (call at 0xf00c), clears structure +8, frees the record with `kmem_free(record, 11680)` (call at 0xf03c) while clearing board record +208 in the delay slot, and returns -19. A nonzero answer calls `mrlock_init(record + 416, 0, "firegl_file_mrlock", -1)` (call at 0xefa8) and returns 0. **Established.**

## Command processor, microcode and memory controller in the kernel

- `fglrx.o` (whole object): **established** by a scan of every load and store with a constant offset: the kernel driver never stores to `CP_RB_BASE` (0x700), `CP_RB_CNTL` (0x704), `CP_RB_RPTR_ADDR` (0x70c), `CP_ME_RAM_ADDR` (0x7d4), `CP_ME_RAM_DATAH` (0x7dc) or `CP_ME_RAM_DATAL` (0x7e0) with a constant offset. Its only command-processor accesses are stores to `CP_RB_WPTR` (0x714) in `firegl_PM4Alloc` (address 0x119e8) and `firegl_PM4WaitForIdle` (address 0x11c1c) and reads of `RBBM_STATUS` (0xe40) in `_r6x_resetPM4` and `__fglQSQuietDown` (`firegl_killall_clients` makes no register access: its only loads are of the board and device records). The CP is started by the X server module through the user mapping. The same scan finds no constant-offset access to `MC_FB_LOCATION` (0x148), `MC_AGP_LOCATION` (0x14c), `AGP_BASE` (0x170) or the PCI GART registers `AIC_CNTL` to `AIC_TLB_DATA` (0x1d0 to 0x1ec); accesses through computed offsets were not traced.
- `firegl_cp_init` (`fglrx.o`, address 0x17600): **established.** The whole routine (1232 bytes) is read. It is an ioctl that adopts three already-created memory maps, named by handle in a 32-byte argument, as the command-processor structures. It makes no change to the chip and writes no register. Its inputs are the file (second argument) and the user pointer (fourth). It is the kernel end of the X module's `firegl_InitCP` call.
  Checks and copy: `__ke_get_file_priv` on the file gives a record whose doubleword at +72 is the device record (kept in s0). If the device doubleword at +1000 (the register map) is zero it logs "No IO register map found!" and returns -22. Otherwise it copies 32 bytes from the user pointer (`__ke_copy_from_user`, 0x176ac); a nonzero result returns -14.
  Lookup: under the device semaphore (`__ke_down_struct_sem` on the doubleword at device +0) it walks the list of maps (head at device +848, sentinel at +864, next pointer at node +56) three times, comparing the doubleword at node +0 with the argument's doublewords at +0, +8 and +16; the nodes found are the asic block, the PM4 ring and the DRM buffer area, the names its own debug line gives ("[after _firegl_vm_find_map] drm_asicblock %08lx, pm4_ring %08lx, drm_buffer %08lx"). A missing node logs "PM4 mappings not found!" and returns -22. These are the three handles `FGLInitCP` copies from E +0x18, E +0x38 and E +0x58, so the ring memory is not allocated here: it is a map the X module created earlier and names by handle.
  Validation, each failure returning -22 after a log line: the asic block's size (node +8) below 3704 ("Invalid DRM asic block size"; 3704 is the size `FGLInitCP` clears), the argument's word at offset 24 (the stack word at 24(sp)) above 256 ("max. number of DRM buffers exceeded!"), and the buffer area's size (node +8) below the product of that word and the argument word at +28 (a log of "drmsize ... - drmmap.size ...", then the size-mismatch message). So the argument's words at offsets 24 and 28 are a buffer count of at most 256 and a buffer size; `FGLInitCP` fills them from E +0x50 and E +0x54.
  Effect: it maps the ring with `drm_ioremap` (device, doubleword at ring node +0 as the offset, doubleword at +8 as the length) and stores the result as a doubleword at ring node +24. It then sets device +1192 to -1, copies the doubleword at device +1000 to +1200, the ring's mapped address to +1216, the asic block's address (node +24) to +1224, that plus 520 to +1208 and the address device +1240 to +1232, and stores the buffer count at device +1240. For each buffer i below the count it fills a 40-byte record at device +1248 + 40*i: the address asic block + 632 + 4*i (+0), the address asic block + 1656 + 8*i (+8), the buffer area's address starting at its node +24 and advancing by the buffer size per record (+16), the buffer size (+24), and the buffer area's address starting at its node +48 and advancing the same way (+32). It ends by storing 1 at device +1184 and returning 0. The 3704-byte asic block is therefore read by this routine as holding a table of 256 words from +632 and a table of 256 doublewords from +1656 (which ends at 3704), with the address at +520 kept at device +1208; the other fields of the block are used by the X module, not here.
  What the ring's bus address is and how E +0x18, +0x38 and +0x58 get their handles is on the X module's side and is not read here; `r200_RegisterRingBufferLocation` writes `CP_RB_BASE` (0x700) with the low word of the doubleword at E +0x48 (in that routine, the `ld` at 0x42c030 and the `sw` at 0x42c03c).

## Command processor start-up (X server module)

`usr/X11R6/lib/modules/drivers/fglrx_drv.so` is an N32 shared object without a symbol table; the routine names come from its DWARF information. It writes the registers directly through its own mapping of BAR 2, with a `sync` after every store.

- `PM4LoadMicroCode` (`fglrx_drv.so`, 384 bytes at address 0x42bcc0): **established.** Writes `CP_ME_CNTL` (0x7d0) = 0x401f0000 and `CP_ME_RAM_ADDR` (0x7d4) = 0, then selects a table by the chip code at driver record +160: codes 8, 47 and 49 take `aPM4_Microcode_R6x`, codes 44, 45 and 52 take `aPM4_Microcode_R300`, any other code loads nothing. It writes the table as 256 pairs: for each 8-byte entry, the word at +4 to `CP_ME_RAM_DATAH` (0x7dc) and then the word at +0 to `CP_ME_RAM_DATAL` (0x7e0). In `CP_ME_CNTL` (R5xx Acceleration guide) 0x401f0000 sets `ME_MODE` (bit 30) and `ME_STATMUX` to 31 (bits 20:16). Which chip each code means is read in [the chip code table](x-video-driver.md#chip-code-from-the-pci-device-id): 8 is R200, 44 R300, 45 RV350, 47 RV250, 49 RV280 and 52 R350.
- `aPM4_Microcode_R300` (`fglrx_drv.so`, address 0x465470, 2048 bytes in `.data`): **established** by comparison with the public `radeon/R300_cp.bin` and `radeon/R200_cp.bin` of the linux-firmware collection, taking each 8-byte table entry's second word and then its first word, against the firmware's big-endian (high, low) pairs, which is the order Linux `r100_cp_load_microcode` writes them: `aPM4_Microcode_R6x` (address 0x464c70, 2048 bytes) equals `R200_cp.bin` in all 256 pairs; `aPM4_Microcode_R300` matches `R300_cp.bin` in only 66 of 256 pairs and `R420_cp.bin` in 62, so the Onyx4 driver carries an R300 microcode revision that is not the public one. The images are not reproduced here. Compared against the `R300_cp_microcode` table of the Linux 2.6.30 the Radeon driver header 1 (the same count, 66 of 256 pairs equal position for position; table pair read as high word then low word, as Linux writes them): **established** that the two share most of their code, shifted in address. The shipped table has 243 non-zero pairs, the public one 250. Aligning them as sequences, 187 pairs are equal, 182 of them non-zero. The shipped table has five extra pairs at indices 68 to 72 (four pairs with a first word of 4 and one with first word 8, low words 0x02c0a000, 0x000ca000, 0x00130000, 0x000c2000 and 0xc980c045), which shifts every later jump target. Another 43 pairs are equal in the high word and differ in the low word by exactly 5 (jump-target fields and, in the first 15 pairs, the jump-table bytes packed four to a word, each byte 5 higher), and the shipped table ends at index 243 where the public table carries a further block of 14 pairs (indices 238 to 251: an 0x02c02000 pair, a 0x00060000 pair, three jump-target pairs, a 0xc000e000 pair, and the pairs 0x000c2000, 0x001d0018, 0x001a0001 followed by the targets 0xfb and 0x4a and the pair 0x0500a04a). The remaining pairs that differ are single-word differences of the same kind in changed neighbourhoods. **Inferred** (from the alignment alone; neither table carries a revision number): the shipped table is another revision of the same microcode, with an added piece in the middle and without the public table's closing block. Which revision is later is not settled by the tables.
- `r200_RegisterRingBufferLocation` (`fglrx_drv.so`, 256 bytes at address 0x42bf80): **established.** Writes `CP_RB_WPTR_DELAY` (0x718) keeping bits 31:28; reads `CP_RB_CNTL` (0x704), clears bits 5:0, 13:8 and 19:18, sets bits 5:0 to `LogBase2` of a word of the third argument (+528) minus 1 and bits 13:8 to 0x3f, sets bits 19:18 from driver field +228, or when that field is 4 from field +212 (1 gives 0, 2 gives 1, anything else 2), keeps bits 17:16, and writes it back; then writes `CP_RB_BASE` (0x700) and writes 0x2000000 to 0x0044. Field names, **established** from the R5xx guide and Linux `radeon_reg.h`: `RB_BUFSZ` (5:0), `RB_BLKSZ` (13:8), `BUF_SWAP` (17:16), `MAX_FETCH` (19:18); bit 25 of `GEN_INT_STATUS` is `RADEON_SW_INT_TEST_ACK`. The `BUF_SWAP` value left in bits 17:16 is set elsewhere: **unknown**.
- `r200_EnableCommonBusMaster` (`fglrx_drv.so`, 128 bytes at address 0x42c080): **established.** Clears bit 6 of `BUS_CNTL` (0x30), `RADEON_BUS_MASTER_DIS`, so the card may master the bus (and the same bit of a driver copy at +64); writes `AGP_BASE` (0x170) with the driver word at +6676 and `MC_AGP_LOCATION` (0x14c) with (base + size - 1) masked to its upper 16 bits OR base >> 16, where base is that word and size the word at +6672: the aperture's start and end in 64 KB units. Where the two words come from is read in the entry for the routine at 0x429180 below.
- `sub_429180` (`fglrx_drv.so`, 108 bytes at address 0x429180, no symbol): the "AGP init" step of the direct-rendering start-up, which sets the two aperture words that `r200_EnableCommonBusMaster` writes. **Established** (the whole routine is read, and so are the stores to the destination words). It gets the entity record from `xf86GetEntityPrivate` (call at 0x4291a0, with the entity index at screen +220 and `gR200EntityIndex`), calls `xf86EnablePciBusMaster` (call at 0x4291b8) with the word at +4 of the driver record and 1, stores 0 at entity +228 and +224 (0x4291cc, 0x4291d0), -1 at entity +220 (0x4291dc) and 0 at entity +216 (0x4291e0), and returns 1; it makes no AGP call and reads no aperture size from anywhere. `R200DRIScreenInit` runs it only on a screen whose driver byte +90 is zero (the call at 0x42a238), prints "Skipped doing AGPInit" otherwise, and on both paths reaches the copy at 0x429cb4, which stores the entity words at +216 and +220 to driver +6672 and +6676 (0x429cb8, 0x429cc0; `R200DRIScreenInit` itself keeps the entity record's address in its own frame, stored at 0x4296b8) and +204, +208 and +212 to +6680, +6684 and +6688. Those two stores are the only stores to driver +6672 and +6676 in the module. Other stores at offsets +216 and +220 in the module use other base records and were not each traced to the entity record, so what follows holds when none of them writes it. With the stub's values, `AGP_BASE` is written with 0xffffffff, and `MC_AGP_LOCATION` with ((0 + 0xffffffff - 1) & 0xffff0000) | (0xffffffff >> 16) = 0xffffffff, which sets the start and top fields (bits 15:0 and 31:16 in Linux `r100d.h`) both to 0xffff, a 64 KB window at the top of the address space. **Inferred:** the driver leaves the AGP aperture unused by parking it there, since no aperture setup follows the stub and no constant-offset access in `fglrx_drv.so` or `fglrx.o` writes the PCI GART registers (computed-offset accesses were not traced).
- `r200_SetPm4OperationMode` (`fglrx_drv.so`, 192 bytes at address 0x42c100): **established.** Sets the top four bits of `CP_CSQ_CNTL` (0x740) to its second argument, calls `r200_EnableCommonBusMaster` (at 0x42c080), then polls `RBBM_STATUS` (0xe40) until bits 16 and 9 (mask 0x10200) clear. `FGLStartCP` calls it with 8; the R5xx guide's `CSQ_MODE` table makes 8 "primary bus-master, indirect bus-master".
- `r200_EnableRPTRwriteback` (`fglrx_drv.so`, 64 bytes at address 0x42c1c0): **established.** Writes `CP_RB_RPTR_ADDR` (0x70c) = a driver address + 512 and clears bit 27 of `CP_RB_CNTL` (`RADEON_RB_NO_UPDATE`), so the read pointer is written back to memory.
- `r200_EnableTimeStampWriteBack` (`fglrx_drv.so`, 32 bytes at address 0x42c200): **established.** Writes `SCRATCH_ADDR` (0x774) from the 8-byte word at +40 of its second argument and `SCRATCH_UMSK` (0x770) = 0x3f.
- `FGLEnableCP` (`fglrx_drv.so`, address 0x42c300): **established** as a call sequence: `PM4LoadMicroCode`, `r200_StampPDEV`, then copies a time-stamp counter into the ring state and calls `r200_WriteTimeStamp` (at 0x42c240). 
- `FGLStartCP` (`fglrx_drv.so`, 216 bytes at address 0x42c3c0): **established.** Starts or stops the command processor's ring.
  The first argument (a0) is the screen record and the second (a1) selects start (nonzero) or stop (zero); the ring state is the record the word at +7660 of a0 points to, with its words at +4 (the register aperture) and +16 (a flag block) kept in the frame.
  Both paths first run the unlabelled `sub_42bc00` (a `bgezall` at 0x42c3fc), which waits for the engine to go idle: when the ring state's first flag word has bit 0 set it waits through `firegl_PM4WaitForIdle`, otherwise through `sub_42bb00` with the aperture; a nonzero result from either logs a level-5 message ("firegl_PM4WaitForIdle timed out - probably ASIC hang!" or "__fglQSQuietDown timed out - probably ASIC hang!") and ends the server with `xf86exit` and status 1.
  Start: it calls `r200_SetPm4OperationMode` with 8 (a `bgezall` at 0x42c414), then stores 0 at flag block +540, reads `CP_RB_RPTR` (register 0x710) and stores the value at flag block +512 and +524 and into `CP_RB_WPTR` (register 0x714), executes `sync`, and sets bit 0 of the flag word at +520.
  Stop: it calls `r200_SetPm4OperationMode` with 0 (a `bgezall` at 0x42c468) and clears bit 0 of the flag word at +520, leaving -2 in v0 as a side effect of the mask.
  The start path sets no return value. `FGLInitCP` (address 0x42c4c0), which computes the ring parameters, is read in [x-driver-functions.md](x-driver-functions.md#command-processor-initialisation).
- `r200_WriteTimeStamp` (`fglrx_drv.so`, 72 bytes at address 0x42c240): **established.** Writes four values to `SCRATCH_REG3` down to `SCRATCH_REG0` (0x15ec to 0x15e0), each copied from a word at offset 564, 40, 36 or 32 of one base register.

## VGA console driver routines

The routines below are all in `vga.a(vga_init.o)`; every address is a `.text` offset in that member. "Board" is the 328-byte (0x148) record that `vga_checkBoardPointer` allocates, "n" is its index, and "pipe" is the record `find_vga_pipe` returns ([the pipe list](#the-pipe-list-gfxsaklconfigo)). Offsets are given in decimal and hex. Two global bytes in `.sdata` steer `vga_earlyinit`: the byte at +0x20 (32), which starts as 1, and the byte at +0x21 (33), which starts as 0.

- `vga_earlyinit` (`vga.a(vga_init.o)`, address 0x0, 788 bytes):
  **established.** The whole routine is read. It sets up the console board before the PCI layer attaches drivers and returns 1 when it registered a board and 0 otherwise.
  Option: it calls `kopt_find` with the string "console" and reads the first byte of the result without a null test. A first byte of 'd' or 'D' returns 0 at once (0x268). Otherwise, if the result is non-null and the second byte is a digit, it reads a decimal number from the second byte on as the pipe number s0; any other case gives 0 (0x38 to 0x60, 0x1b8 to 0x1e8).
  Panic guards (0x64 to 0x98): `in_panic_mode` nonzero with the byte at .sdata +0x21 set logs "Init code paniced!" through `cmn_err` and returns 0; `in_panic_mode` nonzero with the byte at +0x20 set logs "System Panic at startup" and returns 0. It then calls `vga_checkBoardPointers` and stores 1 in the byte at +0x21 in the delay slot (0x9c).
  Route A, byte at +0x20 nonzero (the initial state): `find_vga_pipe(s0)`, a zero result returns 0. If the byte at pipe +0x57 (87) is zero it logs "vga_earlyinit: TportPipe not inited", clears both .sdata bytes and returns 0 (0x2b0 to 0x2d0). Otherwise it calls `test_and_set_int` on the n-th word of the use table, `vga_checkBoardPointer(s0, halfword at pipe +0x50)` and copies these fields to the board, in this order: pipe +0x60 (doubleword) to board +0x78 (120), the constant 256 to +0x80 (128), pipe +0x68 to +0xb0 (176), pipe +0x70 to +0x40 (64), pipe +0x78 to +0xe0 (224), pipe +0x80 to +0x48 (72), pipe +0x40 to +0x30 (48), the byte at pipe +0x58 to the byte at +0x38 (56), the byte at pipe +0x56 to the word at +0xc (12) and the byte at pipe +0x54 to the byte at +0x10f (271). If the doubleword at pipe +0x68 or at pipe +0x78 is zero it logs "vga[%d] invalid early setup!" and returns 0 (0x270). Otherwise it stores 1 at board +0x104 (260), 0 at +4, 1 at +0, and the halfwords at pipe +0x88, +0x8a and +0x8c at board +0xfc (252), +0x100 (256) and +0xf8 (248), calls `htp_register_board` with the board, a pointer loaded through .srdata (**inferred** to be the imported 80-byte `vga_htp_fncs` table) and the words at board +0xfc and +0x100, clears both .sdata bytes and returns 1.
  Route B, byte at +0x20 zero: it calls `vga_find_tport_pipe` with the board table in a0 (loaded in the delay slot at 0x1fc). A negative result logs "TportPipe not found" with level 4 and returns 0. If the word at board +4 is zero it logs "vga[%d] NOT PCIIO" and returns 0. Otherwise it calls `hub_setup_prb(byte at board +0x10c, byte at board +0x1c, 3, 2)`, `vga_map_board_regions(board, word at +0x14)`, `pcibr_disable_mst_timeout(word at +0x18)`, `vga_init_board(board, 1)` (its result is not tested) and `pcibr_enable_mst_timeout`, then registers the board with `htp_register_board` as in route A, clears both bytes and returns 1.
  The reason the master timeout is disabled around the BIOS run is **inferred**: the emulated BIOS can hold the bus for longer than the timeout.

- `vga_init` (`vga.a(vga_init.o)`, address 0x314, 348 bytes):
  **established.** The whole routine is read. It creates a board record for every pipe `find_vga_pipe` lists and fills in the fields the attach path later matches. It takes no argument and returns nothing.
  It calls `kopt_find` with "console" and `vga_checkBoardPointers`, then `find_vga_pipe(0)`; a zero result ends it. For each pipe number n it calls `test_and_set_int` on word n of the use table with 1, then `vga_checkBoardPointer(n, halfword at pipe +0x50)`. A first byte of the console option equal to 'd' or 'D' stores 0 in board +0, otherwise the byte at pipe +0x57 goes there. It stores n in the word at board +0x10 and the doubleword at pipe +0x40 at board +0x30 (48) before calling `vga_check_for_pic(board)`; a zero result stores 0 in board +8, any other result 1. It then stores 256 at board +0x80 (128) and, at board +0x78 (120), the doubleword at pipe +0x40 ORed with (byte at pipe +0x52 shifted left 12) plus (0x20000, or 0x820000 when the byte at pipe +0x56 is nonzero) plus (byte at pipe +0x54 shifted left 8). **Inferred:** this is the address of the card's 256-byte configuration window behind the bridge, since `vga_attach` compares it with the address `pciio_pio_addr` returns for configuration space.

- `vga_reg` (`vga.a(vga_init.o)`, address 0x470, 260 bytes):
  **established.** The whole routine is read. It registers the driver for each distinct vendor and device pair in `vga_devids` and returns 0. It walks the six 8-byte entries of the table (the halfword at +0 is the vendor, the halfword at +2 the device), skips an entry that equals an earlier one, and calls `pciio_driver_register(vendor, device, "vga_", 0)` for the others. With the table in [Which cards the driver claims](#which-cards-the-driver-claims) that registers 1002:4e44, 4e47, 4e4b, 4e46 and 5245; the second 4e44 entry is skipped.

- `vga_attach` (`vga.a(vga_init.o)`, address 0x574, 1252 bytes):
  **established.** The whole routine is read. It binds one probed card to its board record, reads its identity, creates the device node and runs the card's BIOS when the console option did not already. It takes the PCI device vertex in a0 and returns 0 on success, 5 on failure and 6 when no board matches.
  Lookup: `pciio_info_get`, `pciio_info_master_get`, `hwgraph_connectpt_get` and `xwidget_info_chk` on the master vertex; if that check fails it climbs one more connection point (0x964). It then takes the widget id with `xwidget_info_get` and `xwidget_info_id_get` (kept at 16(sp)), the node with `master_node_get`, and reads a halfword NASID from a table in `.srdata` indexed by the node (**inferred** to be the imported 256-byte `compact_to_nasid_node` table, from the 2-byte index). It takes `GfxBoardInitSema` with `psema(.., 25)`, calls `vga_checkBoardPointers`, and maps 256 bytes of configuration space with `pciio_pio_addr(dev, 0, 7, 0, 256, &map, 0)`. A zero result logs "vga_attach: cfg map for check failed" and `vsema`, then runs the cleanup below with a board number read from stack word 8(sp), which nothing in this routine writes (so that path frees whatever board that stack word names). A successful map is released at once with `pciio_piomap_done` and `pciio_piomap_free`.
  Match: it scans board numbers from 0 to `GfxBoardLimit` - 1 for one where `find_vga_pipe` is nonzero and the doubleword at board +0x78 equals the mapped address. No match logs "vga: MAX BOARDLIMIT EXCEEDED" and returns 6, still holding the semaphore.
  Identity: `vga_checkBoardPointer(n, node)`, then `vsema`. Through `pciio_config_get` it reads, in order, configuration offset 0 (2 bytes, vendor), 2 (device), 8 (1 byte, revision), 0x2e (subsystem ID), 0x2c (subsystem vendor), 9 (4 bytes) and 0xa (4 bytes). Each result is stored in the delay slot of the next call, so they land at board +0x118 (280, vendor), +0x11c (284, device), +0x120 (288, revision), +0x124 (292, subsystem ID) and +0x128 (296, subsystem vendor); the word read at offset 9 gives the base class (bits 23:16) at +0x138 (312) and the word read at 0xa goes to +0x13c (316). The low byte of the NASID goes to +0x10c (268), the master node halfword to +0x24 (36), the bus, slot and function numbers (`pciio_info_bus_get`, `pciio_info_slot_get`, `pciio_info_function_get`) to bytes +0x10d, +0x10e and +0x10f, the device vertex to the word at +0x14 (20), 256 to the doubleword at +0x80 and the master vertex to the word at +0x18 (24).
  Mapping: with the word at board +0 nonzero it sets the global `vga_tport_mute` to 1, calls `vga_map_board_regions`, and clears it. A zero result logs "can't legalize tport mapping" and runs the cleanup (0x80c). A success stores 1 at board +4. With board +0 zero it calls `vga_map_board_regions` and stores 1 at +4 on success only; a failure there is not fatal and the routine goes on to the device node.
  Device node: `hwgraph_char_device_add` with the device vertex, the strings "vga" (.rodata 0x1c8) and "vga_" (.rodata 0xc8) and the address board +0x20 for the new vertex (failure logs "cannot add char_dev vertex" and runs the cleanup); `hwgraph_chmod(vertex, 384)` (octal 0600); `hwgraph_fastinfo_set(vertex, board)`; `device_desc_dup` into board +0x58, `device_desc_intr_name_set` with "VGA Graphics Controller" and `device_desc_default_set`; `hwgraph_inventory_add(vertex, 7, 26, word at +0x64, n, word at +0x68)`, whose nonzero result is logged but not fatal. With board +0 nonzero it calls `vga_mk_tport_ctl_alias`. It stores the widget id in board byte +0x1c and calls `hub_setup_prb(nasid, widget, 3, 2)`.
  BIOS: with board +0 zero it calls `pcibr_disable_mst_timeout`, `vga_init_board(board, 0)` and `pcibr_enable_mst_timeout`, then `vga_unmap_board(board, word at +0x14)`. A nonzero `vga_init_board` result calls `pcibr_enable_mst_timeout`, logs "vga[%d]: BIOS INIT FAILED", then calls `vga_unmap_board` and runs the cleanup. With board +0 nonzero it returns 0 right after the hub call.
  Cleanup (0x80c): `psema(.., 25)`, `vga_freeBoardPointer(n)`, a zero stored in `vga_boards` slot n, `vsema` and a zero in word n of the use table; it returns 5.

- `vga_checkBoardPointers` (`vga.a(vga_init.o)`, address 0xa58, 196 bytes, static):
  **established.** The whole routine is read. It allocates the two global tables once and returns nothing. If `vga_boards` is already set it returns. Otherwise it calls `kmem_alloc(GfxBoardLimit * 8, 1)` into `vga_boards` (a null result logs "vga: alloc(vga_boards) failed" with level 0 and the routine goes on), and `bzero`s that many bytes. It then expects the use table pointer to be zero (otherwise `assfail` with line number 737), calls `kmem_alloc(GfxBoardLimit * 4, 1)` into it, logs "vga: alloc(vga_binuse) failed" when that fails, and `bzero`s it.

- `vga_checkBoardPointer` (`vga.a(vga_init.o)`, address 0xb1c, 220 bytes, static):
  **established.** The whole routine is read. It makes sure board n exists. It takes n in a0 and a halfword in a1, and returns nothing. It calls `assfail` with line numbers 754 (`vga_boards` null), 755 (use table null) and 761 (allocation failed), and otherwise, when `vga_boards[n]` is null, it calls `kmem_zalloc(0x148, 1)` and stores into the new record -1 at +0x20, -1 at +0x14, n at +0x10 and the halfword a1 at +0x24, in that order, then the pointer into `vga_boards[n]`.

- `vga_freeBoardPointer` (`vga.a(vga_init.o)`, address 0xbf8, 336 bytes, static):
  **established.** The whole routine is read. It releases board n and returns nothing. It first calls `assfail` for each failed check, with line numbers 778 (n above `GfxBoardLimit`), 779 (`vga_boards` null), 780 (slot null), 781 (the word at board +0x10 differs from n), 782 (use table null) and 783 (use word n zero). It then stores 0 in use word n, calls `kmem_free(vga_boards[n], 0x148)` and stores 0 in `vga_boards[n]`.

- `vga_error_handler` (`vga.a(vga_init.o)`, address 0xd48, 76 bytes):
  **established.** The whole routine is read. It takes a pointer to an error-state record in a3 and returns 0 only when the word at +0 has bits 23 and 22 both set, the doubleword at +0x20 (32) equals 2 and the doubleword at +0x28 (40) is below 1024; every other case returns 9. It makes no call and writes nothing. Which error source uses it and what 0 and 9 mean to the PCI error layer is **inferred** from the `pciio_error_register` convention; no routine of this object registers it.

- `vga_open` (`vga.a(vga_init.o)`, address 0xd94, 136 bytes):
  **established.** The whole routine is read. It takes a pointer to the device number in a0. If bits 26:18 of that word (shift 18, mask 0x1ff) are nonzero it logs "vga[%d] illegal open" with `cmn_err` level 4, using the word at absolute address 0x10 (the per-CPU page, **inferred**), and returns 19. Otherwise it looks up the board with `hwgraph_fastinfo_get`; if the word at board +0 is nonzero it calls `htp_register_board(0, 0, 0, 0)`, `pcibr_enable_mst_timeout(word at +0x18)` and `vga_unmap_board(board, word at +0x14)`. It returns 0.

- `vga_close` (`vga.a(vga_init.o)`, address 0xe1c, 244 bytes):
  **established.** The whole routine is read. It re-initialises every board after the console is released and returns 0. It calls `hwgraph_fastinfo_get` without setting a0 and ignores the result, then `kopt_find` with "console" and `find_vga_pipe(0)`. For each pipe it takes board n; with the word at board +0 zero it calls `vga_map_board_regions`, `pcibr_disable_mst_timeout`, `vga_init_board(board, 0)` and `pcibr_enable_mst_timeout`; with that word nonzero it calls `cn_init(0, 1)`. With the word nonzero, the test of the option's first byte against 'd' and then 'D' (0xe9c to 0xea8) always ends at `cn_init`: the path that would fall through to the map call at 0xeb4 is never taken.

- `vga_unmap_board` (`vga.a(vga_init.o)`, address 0x176c, 200 bytes):
  **established.** The whole routine is read. It undoes `vga_map_board_regions` and returns 1 on every path. If the word at board +4 is zero it returns at once. Otherwise, for each of the maps at doubleword +0xa8 (legacy I/O), +0xd8 (frame buffer), +0xc0 (legacy VGA memory) that is nonzero it calls `pciio_piomap_done` and `pciio_piomap_free`, and it zeroes the doublewords +0xa8, +0xb0, +0xb8, then +0xd8, +0xe0, +0xf0 with -1 in the word at +0xe8, then +0xc0, +0xc8, +0xd0. When the frame-buffer map existed it also calls `vga_change_big_window(board, 0)`. Last it calls `xf86FreeInt10` on the doubleword at +0x110 and zeroes it when that is nonzero.

- `vga_find_tport_pipe` (`vga.a(vga_init.o)`, address 0x1834, 120 bytes):
  **established.** The whole routine is read. It takes the board table in a0 (its caller loads `vga_boards` in a delay slot) and returns the first index n below `GfxBoardLimit` whose board exists and whose word at +0 is nonzero. If the limit is zero or below, or nothing matches, it logs "TportPipe not found" with `cmn_err` level 4 and returns -1.

- `vga_find_lfb_bar` (`vga.a(vga_init.o)`, address 0x116c, 100 bytes):
  **established.** The whole routine is read. It takes a board in a0 and finds the first of six base address registers that is prefetchable memory. It reads the word at the configuration window address (the doubleword at board +0x78) plus 0x10 + 4 times v, for v from 0 to 5, and accepts the first with bit 3 set and bits 1:0 clear. It stores v in the word at board +0xe8 (232) and returns v, or stores and returns -1 when none matches.

- `vga_setbridge_to_legacy_io` (`vga.a(vga_init.o)`, address 0x18ac, 64 bytes):
  **established.** The whole routine is read. It switches the card's bridge slot register to the legacy I/O value. It returns without doing anything when the word at board +4 is nonzero. Otherwise it addresses the word at (doubleword at board +0x30) + 8 times (byte at board +0x38) + 0x204, saves its zero-extended value in the doubleword at board +0x50 (80), and stores the low word of the doubleword at board +0x40 (64) there. Linux `bridge.h` puts the per-device registers at 0x204 + 8n, which is why this is **inferred** to be a device register of the card's slot.

- `vga_setbridge_to_lfb` (`vga.a(vga_init.o)`, address 0x18ec, 64 bytes):
  **established.** The whole routine is read. It is `vga_setbridge_to_legacy_io` with the doubleword at board +0x48 (72) in place of the one at +0x40: it saves the slot register in board +0x50 and stores the low word of board +0x48 there, unless the word at board +4 is nonzero.

- `vga_restore_bridge` (`vga.a(vga_init.o)`, address 0x192c, 48 bytes):
  **established.** The whole routine is read. Unless the word at board +4 is nonzero it stores the low word of the doubleword at board +0x50 back into the slot register at (doubleword at board +0x30) + 8 times (byte at board +0x38) + 0x204. It makes no call and returns nothing.

- `vga_mk_tport_ctl_alias` (`vga.a(vga_init.o)`, address 0x195c, 308 bytes):
  **established.** The whole routine is read. It publishes the board's device node under a second name and returns nothing. It calls `hwgraph_traverse(-1, "vga", &dir)`; if that fails it calls `hwgraph_path_add(-1, "vga", &dir)` (failure logs "mkdir(/hw/vga) failed" and returns) and traverses again (failure logs "can't traverse to /hw/%s" and returns). With the word at board +0 nonzero it then clears 14 bytes of a stack buffer with `bzero`, writes "vga_tp_control" into it with `sprintf`, calls `hwgraph_edge_remove(dir, name, 0)` and `hwgraph_edge_add(dir, word at board +0x20, name)`; failure of the add is logged as "can't add /hw/%s/%s".

- `vga_check_for_pic` (`vga.a(vga_init.o)`, address 0x12c0, 172 bytes):
  **established.** The whole routine is read. It reads the word at offset 4 of the window pointed to by the doubleword at board +0x30, and returns 1 when bits 27:12 equal 0xd102 or 0xd112 and bits 11:1 equal 0x24, 0 when bits 27:12 equal 0xd002 with bits 11:1 equal 0x24, and -1 otherwise. The public Linux SN2 headers (`pic.h`, `bridge.h`, Linux 2.6.5) give 0xd102 and 0xd112 as the PIC's two bus part numbers, 0xd002 as the XBridge part number and 36 as their manufacturer. It makes no call. `vga_init` calls it after storing the window address in board +0x30.

- `vga_map_board_regions` (`vga.a(vga_init.o)`, address 0x136c, 1024 bytes):
  **established.** The whole routine is read. It maps everything the VGA layer needs of one card and returns 1 on success and 0 on the failures marked below. It takes the board in a0 and the PCI device vertex in a1 (kept in s1); `pciio_info_get(a1)` gives the info record that `pciio_info_bar_size_get` uses.
  Configuration space: `pciio_pio_addr(dev, desc, 7, 0, length, &board +0x70, 0)` with the descriptor from the doubleword at board +0x58 and the length from the doubleword at +0x80 (256). The doubleword at +0x70 is cleared first and the result goes to +0x78. A zero result logs "can't map config space" at level 4 and returns 0.
  Expansion ROM: this block runs when the doubleword at +0x98 (the shadow copy) or the one at +0xa0 (the ROM size) is zero. It reads configuration offset 0x30 and keeps it with the low 11 bits cleared (zero logs "ROM NOT PRESENT" at level 1 and returns 0), writes 0xffffffff, reads it back, computes the size as (NOT value OR 0xf) plus 1 into +0xa0, and writes the saved base back with bit 0 set. It maps the ROM with `pciio_pio_addr(dev, desc, 1, 0, size, &board +0x88, 4096)` into +0x90 (zero logs "cannot map ROM space" at level 4 and returns 0), calls `vga_shadow_bios(board, 1)` without testing the result, releases the ROM map (`pciio_piomap_done`, `pciio_piomap_free`) and zeroes +0x88. A zero pointer at +0x90 afterwards logs "ROM SHADOW failed" at level 1 and returns 0. Because `vga_shadow_bios` with a nonzero flag flips bit 0 of that same offset 0x30 word, the ROM enable bit set here is cleared again.
  Legacy I/O: `pciio_piomap_alloc(dev, desc, 2, 0, 1024, 1024, 4096)` into +0xa8 with 1024 at +0xb8 (zero logs "cannot map Legacy PIO" at level 4 and returns 0), then `pciio_piomap_addr(map, 0, 1024)` into +0xb0. It stores -1 in the word at +0xe8 and zero at +0xf0, +0xe0 and +0xd8.
  Frame buffer, only when the word at board +0 is nonzero: it calls `vga_find_lfb_bar`. A negative result logs "can't find usable LFB" at level 4, stores -1 at +0xe8 and zero at +0xf0, +0xe0 and +0xd8, and goes on. Otherwise `pciio_info_bar_size_get` goes to +0xf0; a nonzero size is mapped with `pciio_pio_addr(dev, desc, bar + 8, 0, size, &board +0xd8, 8192)` into +0xe0 (zero logs "Can't map lfb" at level 1 and goes on), and a nonzero result is followed by `vga_change_big_window(board, 1)`.
  Vendor 0x1002 (the word at board +0x118 equals 4098): `pciio_config_get` of offset 0x14. With bit 0 clear it logs "vga[%d]: BAR[1] is not IO-space" at level 1 and goes on. With bit 0 set it writes 0x400 to offset 0x14 with `pciio_config_set` and reads the offset back, discarding the value.
  Legacy VGA memory: a zero map at +0xa8 logs "cannot get Legacy PIO map" at level 4 and returns 0. Otherwise it calls `pciio_piomap_addr(map, 0, 1024)`, stores 0x20000 at +0xd0 and zero at +0xc0, and calls `pciio_pio_addr(dev, desc, 4, 0xa0000, 0x20000, &board +0xc0, 4096)`; the delay slot of that call stores the `pciio_piomap_addr` result at +0xb0 once more, and the `pciio_pio_addr` result goes to +0xc8. A zero result logs "cannot map vga space" at level 4 and returns 0. Success stores the device vertex in the word at +0x14 and returns 1.

- `vga_shadow_bios` (`vga.a(vga_init.o)`, address 0x1018, 340 bytes):
  **established.** The whole routine is read. It keeps a RAM copy of the card's option ROM and returns 1 on success and 0 on failure. It takes the board in a0 and a flag in a1. If the doubleword at board +0x98 is already set it logs "shadow_bios already exists" and returns 0. It reads the ROM pointer at +0x90 and accepts bytes 0 and 1 equal to 0x55 and 0xaa, or bytes 3 and 2 equal to 0x55 and 0xaa (a ROM with each 32-bit word reversed, remembered in s1); anything else logs "ROM SIG INVALID" and returns 0. It calls `kmem_alloc(size at +0xa0, 0x8001)` (the result is stored without a null test in +0x98) and `bcopy`; in the reversed case it byte-reverses every 32-bit word of the copy. It then stores the copy pointer over the ROM pointer at +0x90. With a1 nonzero it flips bit 0 of the word at offset 0x30 of the configuration window (the doubleword at board +0x78), which is the expansion ROM enable bit.

- `vga_init_board` (`vga.a(vga_init.o)`, address 0x11d0, 240 bytes):
  **established.** The whole routine is read. It runs the card's BIOS in the x86 emulator and optionally sets the boot video mode. It takes the board in a0 and a flag in a1, and returns 0 on success and 1 on any failure. It calls `xf86InitInt10` and stores the result in the doubleword at board +0x110; a zero result logs "xf86InitInt10 failed" and returns 1. It calls `xf86ExecX86int10` with that context; a nonzero result logs "BIOS init failed", calls `xf86FreeInt10`, zeroes +0x110 and returns 1. On success it calls `vga_enable_fb`; with a1 zero it returns 0. With a1 nonzero it stores 263, 1280, 1, 1024 at board +0xf8, +0xfc, +0x104 and +0x100 (in that order) and calls `vga_set_vesa_mode(board, 263)`; a zero result logs "VESA mode switch failed" and returns 1, otherwise it returns 0.

## The x86 emulator core and its default accessors (`vga.a(decode.o)`, `vga.a(sys.o)`)

The emulator keeps its register file and flags in one 96-byte object, `_X86EMU_env` (the first object in the `.bss` of `sys.o`; `_X86EMU_intrTab`, 256 doublewords, follows it at env +96).
Every routine below reaches it through a pointer literal in `.srdata`.
The fields these routines touch are the doubleword at env +0 (the base of the emulated memory), the doubleword at +8 (its size), the halfword at +58, the word at +60 (the halfword at +62 is its low half on this big-endian CPU), the halfword at +64, the word at +80 and the byte at +88.
That these are the instruction pointer, the flags, the code segment, a pending-event mask and the pending interrupt number is **inferred** from how `X86EMU_exec` uses them (a linear address of segment times 16 plus offset, bit 0x200 of the flags tested the way x86 tests the interrupt-enable flag), in the loop shape of the public x86 emulator in the X.Org server.

- `X86EMU_halt_sys` (`vga.a(decode.o)`, address 0x170, 20 bytes): **established.**
  Takes no argument.
  It loads the word at env +80, ORs in bit 2 (0x4) and stores it back (store at 0x180, in the delay slot of the return).
  It makes no call and sets no return value.
  **Inferred:** bit 2 of that word is the halt request that makes `X86EMU_exec` return, and the memory accessors in `sys.o` call this routine on an out-of-range address.
- `X86EMU_exec` (`vga.a(decode.o)`, address 0xc0, 176 bytes): **established.**
  The emulator's main loop, with no argument and no return value of its own.
  It clears the word at env +80 on entry (0xd4), then each pass reads that word.
  A nonzero word with bit 2 set returns (0xe8 to 0xf4).
  Otherwise a nonzero word calls `x86emu_intr_handle` (0x160) when bit 0 is set and the byte at env +88 is 0 or 2, or when the 0x200 bit of the word at +60 is clear; with bit 0 set, any other interrupt number and 0x200 set it carries on.
  A zero word goes straight to the fetch.
  The fetch loads the halfword at +58 and the halfword at +64, stores the first plus 1 back at +58 (0x130, in the delay slot ahead of the call), and calls the function pointer in the global `sys_rdb` (call at 0x134) with the segment shifted left 4 plus the old +58 value.
  The low byte of that result indexes the table `x86emu_optab` (eight bytes per entry, its address the literal at `.srdata` +16, loaded at 0x13c) and the entry is called (0x150) with the opcode byte as its only argument; the loop then reloads the word at +80 (0x15c) and starts again.
  The halt exit is the only one, so the routine runs until `X86EMU_halt_sys` or a callee sets bit 2.
  **Inferred:** this is the public emulator's main loop, including its odd test (interrupt number 0 or 2, or interrupts disabled), and the halfword at +58 is not masked when the segment is added.

- `rdb` (`vga.a(sys.o)`, address 0x0, 84 bytes): **established.**
  Takes an address in a0 and returns a byte.
  The address is the low 32 bits of a0.
  When the size at env +8 minus 1 is below the address (unsigned) it calls `X86EMU_halt_sys` (0x3c); it then reloads its registers and goes back to the load, so it still reads the byte.
  The result is the byte at the address plus the base at env +0, zero-extended (`lbu` at 0x30).
  It is the initial value of the global `sys_rdb`.
- `rdw` (`vga.a(sys.o)`, address 0x54, 128 bytes): **established.**
  Takes an address in a0 and returns a halfword.
  The size test is size minus 2 below the address, with the `X86EMU_halt_sys` call at 0xb4 and the same fall back to the read.
  An even address does one halfword load (`lhu`, 0xd0, host byte order, big-endian here); an odd address loads the bytes at +1 and +0 and combines them with the byte at +1 shifted left 8, so that path is little-endian and the two paths disagree about byte order for the same memory.
  The result is masked to 16 bits.
  It is the initial value of `sys_rdw`.
- `rdl` (`vga.a(sys.o)`, address 0xd4, 148 bytes): **established.**
  Takes an address in a0 and returns a word.
  The size test is size minus 4, with the `X86EMU_halt_sys` call at 0x148 and the same fall back.
  When the low two bits of the address are zero it does one `lw` (0x164); otherwise it loads the bytes at +1, +3, +2 and +0 (in that order) and ORs them into one word with shifts 8, 24, 16 and 0, little-endian.
  It is the initial value of `sys_rdl`.
- `wrb` (`vga.a(sys.o)`, address 0x168, 96 bytes): **established.**
  Takes an address in a0 and a value in a1.
  The size test is size minus 1, with the `X86EMU_halt_sys` call at 0x1b0 and the same fall back to the store.
  It stores the low byte of the value at the base plus the address (`sb`, 0x1a0).
  It sets no return value and is the initial value of `sys_wrb`.
- `wrw` (`vga.a(sys.o)`, address 0x1c8, 140 bytes): **established.**
  Takes an address in a0 and a value in a1.
  The size test is size minus 2, with the call at 0x238 and the same fall back.
  An even address does one `sh` of the value (0x250); an odd one stores the low byte at the address (0x218) and then the value shifted right 8 (arithmetic) at address plus 1 (0x224), reloading the base pointer between the two stores.
  It sets no return value and is the initial value of `sys_wrw`.
- `wrl` (`vga.a(sys.o)`, address 0x254, 172 bytes): **established.**
  Takes an address in a0 and a value in a1.
  The size test is size minus 4, with the call at 0x2e4 and the same fall back.
  It tests only bit 0 of the address, where `rdl` tests bits 1 and 0: an even address, including one that is 2 modulo 4, does one `sw` (0x2fc); an odd address stores four bytes, the value shifted right by 0, 8, 16 and 24, at address +0, +1, +2 and +3 (stores at 0x2ac, 0x2b8, 0x2c4 and 0x2d0).
  **Inferred:** an address that is 2 modulo 4 makes a misaligned `sw`, which MIPS treats as an address error.
  It sets no return value and is the initial value of `sys_wrl`.
- `p_inb` (`vga.a(sys.o)`, address 0x300, 8 bytes): **established.**
  Ignores its port argument and returns 0 (`move v0,zero` in the delay slot of the return).
  It is the initial value of `sys_inb`, so an emulated byte read from a port gives 0 until `X86EMU_setupPioFuncs` replaces it.
- `p_inw` (`vga.a(sys.o)`, address 0x308, 8 bytes): **established.**
  Ignores its port argument and returns 0, the same two instructions as `p_inb`.
  It is the initial value of `sys_inw`.
- `p_inl` (`vga.a(sys.o)`, address 0x310, 8 bytes): **established.**
  Ignores its port argument and returns 0, the same two instructions as `p_inb`.
  It is the initial value of `sys_inl`.
- `p_outb` (`vga.a(sys.o)`, address 0x318, 8 bytes): **established.**
  Returns at once, with a nop in its delay slot, and uses neither argument.
  It is the initial value of `sys_outb`, so a byte write to a port is dropped until `X86EMU_setupPioFuncs` replaces it.
- `p_outw` (`vga.a(sys.o)`, address 0x320, 8 bytes): **established.**
  Returns at once and uses neither argument, the same two instructions as `p_outb`.
  It is the initial value of `sys_outw`.
- `p_outl` (`vga.a(sys.o)`, address 0x328, 8 bytes): **established.**
  Returns at once and uses neither argument, the same two instructions as `p_outb`.
  It is the initial value of `sys_outl`.
- `X86EMU_setupMemFuncs` (`vga.a(sys.o)`, address 0x330, 52 bytes): **established.**
  Takes a pointer to a table of six function pointers in a0 and copies them to the globals `sys_rdb`, `sys_rdw`, `sys_rdl`, `sys_wrb`, `sys_wrw` and `sys_wrl`, in that order, from table offsets 0, 8, 16, 24, 32 and 40.
  It makes no call and sets no return value.
  `xf86Int10ExecSetup` (`vga.a(xf86x86emu.o)`) calls it, with the memory accessors of [the emulator's glue](#the-emulators-glue-to-the-kernel-vgahelper_execo) among its arguments (call at 0x120).
  The initial values of the six globals are the `rdb` to `wrl` routines above, which work on the flat memory described by env +0 and +8.
- `X86EMU_setupPioFuncs` (`vga.a(sys.o)`, address 0x364, 52 bytes): **established.**
  Takes a pointer to a table of six function pointers in a0 and copies them to `sys_inb`, `sys_inw`, `sys_inl`, `sys_outb`, `sys_outw` and `sys_outl` in that order, from table offsets 0, 8, 16, 24, 32 and 40.
  It makes no call and sets no return value.
- `X86EMU_setupIntrFuncs` (`vga.a(sys.o)`, address 0x398, 136 bytes): **established.**
  Takes a pointer to a table of 256 doublewords in a0, or zero.
  It first clears all 256 doublewords of `_X86EMU_intrTab` (env +96 on, a loop unrolled twice).
  A zero argument then returns (the branch at 0x3d0).
  Otherwise it copies the 256 doublewords of the table into `_X86EMU_intrTab` in index order, again unrolled twice.
  It makes no call and sets no return value.
- `X86EMU_prepareForInt` (`vga.a(sys.o)`, address 0x420, 124 bytes): **established.**
  Takes an interrupt number n in a0 and sets up the emulated registers as a real-mode software interrupt would; it returns nothing.
  It calls `push_word` with the halfword at env +62 (call at 0x438), loads the word at +60 and clears its bits 8 and 9 (mask 0xfffffcff), then calls `push_word` with the halfword at +64 while storing the cleared flags back at +60 from the delay slot (0x454).
  It then calls `mem_access_word` with 4n + 2 (0x460) and stores the result as the halfword at +64 (0x474, in the delay slot of the next call), calls `push_word` with the halfword at +58, calls `mem_access_word` with 4n (0x478), stores the result as the halfword at +58 (0x488) and clears the word at +80.
  **Inferred:** the pushes are flags, code segment and instruction pointer, the two `mem_access_word` calls read the segment and offset of the vector at 4n in the emulated interrupt table, and bits 8 and 9 are the trap and interrupt-enable flags.

## The emulated BIOS interrupt handlers (`vga.a(xf86int10.o)`)

These routines answer software interrupts for the option ROM that runs in the x86 emulator.
Each takes the emulation record in a0.
The interrupt number is the word at record +32 (stored by `x86emu_do_int`); the emulated registers are in the register file that a `.srdata` literal points at (the 96-byte object described [above](#the-x86-emulator-core-and-its-default-accessors-vgadecodeo-vgasyso)), where, in the big-endian layout, the word at +24 is EAX (AH is the byte at +26, AL +27), +28 EBX (BH +30, BL +31), +32 ECX (CH +34, CL +35), +36 EDX (DH +38, DL +39), +48 ESI and +52 EDI, and the word at +60 is the flags (CF is bit 0).
The record's table at +24 holds the memory accessors: read byte, halfword and word at offsets 0, 8 and 16, and write byte, halfword and word at 24, 32 and 40.
The doubleword at record +80 is the board record, which `outb`, `pciReadLong` and the other PCI accessors take as their first argument.

- `int_handler` (`vga.a(xf86int10.o)`, address 0x0, 264 bytes): **established.**
  Takes the record in a0 and returns 1 when the interrupt was handled and 0 when it was not.
  It dispatches on the word at record +32:
  - 0x15 returns 1 with no call.
  - 0x10, 0x42 and 0x6d first call `getIntVect` (0x9c) with the record and the number; only a result of 0xff065 (the linear address `lui 0xf` ORed with 0xf065, the stub in the 0xf0000 segment that `setup_int_vect` points the video vector at) calls `int42_handler` (0xb4), and a nonzero result of that is returned.
  - 0x1a calls `int1A_handler` (0xd0) and 0xe6 calls `intE6_handler` (0xe0); a nonzero result of either is returned.
  - Every other number, a zero result of `int42_handler`, `int1A_handler` or `intE6_handler`, and a `getIntVect` result other than 0xff065 go to `run_bios_int` (0x64) with the number and the record, and its result is returned unless it is zero.
  A zero from `run_bios_int` calls `cmn_err` (0xf8) at level 5 with the message "Halting on int 0x%2.2x!" and the number, and returns 0.
  Nothing in it writes a card register.
- `int42_handler` (`vga.a(xf86int10.o)`, address 0x108, 2772 bytes): **established.**
  Takes the record in a0 and returns 1 on every path.
  It emulates the BIOS video services, dispatching on AH: a value of 20 or more returns at once, and otherwise the case is read from a 20-entry table of doublewords in `.rodata` at offset 968 (the `jr` at 0x144).
  Case addresses by AH: 0x00 0x1e0, 0x01 0x89c, 0x02 0x76c, 0x03 0x6fc, 0x04 0xbb8, 0x05 0x530, 0x06 0xb78, 0x07 0xb38, 0x08 0xb0c, 0x09 0xad4, 0x0a 0xa9c, 0x0b 0x14c, 0x0c 0xa64, 0x0d 0xa30, 0x0e 0xa00, 0x0f 0x4e8, 0x10 to 0x12 0x1c4 (return 1 with nothing done) and 0x13 0x9b8.
  The linear addresses below are those of the PC BIOS data area, written in hex, and every cursor and mode value is kept there.
  "Out" means `outb` to the board record at record +80 (for example call at 0x1bc), with port, then value.
  - AH 0x00, set mode (0x1e0): AL of 20 or more returns.
    The byte at 0x410 is read and its bits 5:4 pick the port: 0x30 gives mode 7 and port 0x3b4 (948); 0x10, 0x20 and 0 give port 0x3d4 (980), with a mode of 7 or more replaced by 1 (for 0x10 and 0), or 3 (for 0x20).
    It reads the halfword at 0x74 (the offset of a parameter table, called base here) and takes the entry at base plus (mode shifted right 1, signed) times 16, minus 16 for mode 6, and a color-select value of 0x30 (0x3f for mode 6).
    It writes 0x449 (mode), 0x44a (a halfword write of the byte at base + mode + 72), 0x44c (the halfword at base + 64 + (mode and 6)), 0x44e (0), eight halfwords from 0x450 to 0x45e (0), 0x460 (byte 11 of the entry), 0x461 (byte 10), 0x462 (0), 0x463 (the port, halfword), 0x465 (the byte at base + mode + 80), 0x466 (the color-select value) and 0x484 (24).
    It then writes the mode-control port (the port plus 4) with that byte masked by 0x37, writes CRTC index i and the table byte i to the port and the port plus 1 for i from 0 to 15, writes the color-select value to the port plus 5, and writes the mode-control byte unmasked to the port plus 4.
  - AH 0x01, cursor shape (0x89c): reads the port from 0x463, writes CL to 0x460 and CH to 0x461, then CRTC index 10 with CH and index 11 with CL.
  - AH 0x02, set cursor (0x76c): writes DL at 0x450 plus twice BH and DH at 0x451 plus twice BH; only when BH equals the byte at 0x462 it reads the halfwords at 0x44a, 0x44e and 0x463 and writes CRTC index 14 with the high byte and index 15 with the low byte of (the halfword at 0x44e shifted left 1) plus DL plus DH times the halfword at 0x44a.
  - AH 0x03, get cursor (0x6fc): CL from 0x460, CH from 0x461, DL from 0x450 plus twice BH and DH from 0x451 plus twice BH.
  - AH 0x04, light pen (0xbb8): logs "Get Light Pen Position" through `cmn_err` and clears AH, BX, CX and DX.
  - AH 0x05, select page (0x530): writes AL at 0x462 and the AL times the halfword at 0x44c at 0x44e, writes that product shifted left 1 to CRTC index 12 and 13 (high byte then low byte), then writes CRTC index 14 and 15 with that value plus the byte at 0x451 plus twice AL plus the halfword at 0x44a times the byte at 0x450 plus twice AL (the two bytes appear in the opposite roles from AH 0x02).
  - AH 0x06, 0x07, 0x09, 0x0a, 0x0c and 0x0e only log: through `cmn_err` at level 5 the name of the service ("Initialise or Scroll Window Up", "Scroll Window Down", "Write Character and Attribute at Cursor", "Write Character at Cursor", "Write Graphics Pixel", "Write Character in Teletype Mode") and the register values (AL, BH, BL, CX or CH, CL, DH, DL as that service uses them), and change no register.
  - AH 0x08, 0x0d: log the service name and BH (0x08) or BH, CX and DX (0x0d); AH 0x08 clears AH and AL with one halfword store (0xb34) and 0x0d clears AL (0xa60).
  - AH 0x0b, palette (0x14c): reads 0x463 and 0x466, and with BH zero keeps bits 7:5 of the old value and takes bits 4:0 of BL; with BH nonzero keeps all but bit 5 and takes bit 0 of BL as bit 5; it writes the result to 0x466 and to the port plus 5.
  - AH 0x0f, get mode (0x4e8): AH from the halfword at 0x44a (low byte), AL from 0x449, BH from 0x462.
  - AH 0x13, write string (0x9b8): logs the service name and AL, BL, CX, DH, DL, ES and BP.
  **Inferred** from the data area addresses and the message strings: these are the standard PC BIOS int 10h services for a CGA or monochrome adapter, and the text output, scroll and pixel services are not performed, only logged.
- `int1A_handler` (`vga.a(xf86int10.o)`, address 0xbdc, 760 bytes): **established.**
  Takes the record in a0 and leaves 1 in the return register (a3, copied at 0xc98) when it handled the call and 0 (0xed0) when it did not.
  It computes AX (the halfword at +26) minus 0xb101 and, when that is 13 or more, takes the unsupported path; otherwise it indexes a 13-entry doubleword table at `.rodata` +1152 (the `jr` at 0xc1c).
  Targets: 0xb101 0xc24, 0xb102 0xe30, 0xb103 0xd98, 0xb104 to 0xb107 0xebc (unsupported), 0xb108 0xd68, 0xb109 0xd38, 0xb10a 0xc68, 0xb10b 0xd08, 0xb10c 0xcd8, 0xb10d 0xca8.
  The unsupported path calls `cmn_err` (0xec4) at level 5 with "int 0x1a subfunction" and returns 0.
  Every supported path clears CF (the flags word ANDed with 0xfffffffe) except the failure paths of 0xb102 and 0xb103, which set CF.
  - 0xb101 (0xc24): EBX = 0x210, EDX = 0x20494350, EAX = EAX masked by 0xff00 (so AL becomes 0 and AH keeps its entry value) and ECX = (ECX masked by 0xff00) ORed with 0xff.
  - 0xb108, 0xb109, 0xb10a (0xd68, 0xd38, 0xc68): read the PCI configuration register at the EDI value with `pciReadByte`, `pciReadWord` or `pciReadLong` on the board record (calls at 0xd6c, 0xd3c, 0xc6c) and store it in CL (+35), CX (+34) or ECX (+32); EAX becomes AL.
  - 0xb10b, 0xb10c, 0xb10d (0xd08, 0xcd8, 0xca8): `pciWriteByte` with CL, `pciWriteWord` with CX, `pciWriteLong` with ECX, at register EDI (calls at 0xd10, 0xce0, 0xcb0); EAX becomes AL.
  - 0xb102, find device (0xe30): the halfword at +38 (DX) must equal the word at board +280 and the halfword at +34 (CX) the word at board +284, and ESI must be 0; then EAX becomes AL with CF clear and EBX becomes the word at board +300 shifted left 8, ORed with the word at +304 shifted left 3 and the word at +308.
    Any mismatch sets EAX to AL ORed with 0x8600 and sets CF.
  - 0xb103, find class (0xd98): CL must equal the word at board +320, CH the word at +316 and ECX shifted right 16 the word at +312, with the same success result and EBX as 0xb102 (ESI is not read); a mismatch gives the same 0x8600 failure.
  **Inferred** from the PCI BIOS convention for the 0xb1 services: the board words at +280 and +284 are the vendor and device IDs (the identity code in [VGA console driver routines](#vga-console-driver-routines) stores them there), and +312 to +320 the class code; the writer of +300, +304 and +308 is not in the routines read here, and the packing of EBX is a bus, device and function number only if they hold those.
- `intE6_handler` (`vga.a(xf86int10.o)`, address 0xed4, 136 bytes): **established.**
  Takes the record in a0 and returns 1.
  It loads the words at board +304, +300 and +308 and sets AX (the halfword at +26) to (the word at +304 masked by 0xff, shifted left 8) ORed with (the word at +300 masked by 0x1f, shifted left 3) ORed with the word at +308 masked by 7, so +300 and +304 take the opposite roles from `int1A_handler`'s EBX.
  It then calls `pushw` (0xf18) with the halfword at +64 and `pushw` (0xf28) with the halfword at +58, sets the word at +56 to 3, the halfword at +70 to 0 and the halfword at +64 to the halfword at record +8.
  **Inferred:** a call into the emulated ROM that returns the packed PCI location, with the new instruction pointer 3 in the segment kept at record +8; the same packing question as above is open.

## The emulated PC's memory map and set-up (`vga.a(generic.o)`)

`xf86InitInt10` builds the record the x86 emulator runs against; the other routines of this member are its memory accessors and page allocator.
The record is 88 bytes (allocated zeroed): the halfword at +8 is the segment the ROM image sits in, the doubleword at +16 points at a 40-byte memory descriptor (called P below), the doubleword at +24 at the table of six accessors (`read_b`, `read_w`, `read_l`, `write_b`, `write_w`, `write_l`, the initialised `.data` of this member, offsets 0 to 40 in that order), the word at +32 holds the interrupt number and the doubleword at +80 the board record.
P holds, at +8, a 0xf0000-byte memory image, at +16 a pointer copied from board +200 (the window the accessors use for 0xa0000 to 0xbffff), at +24 a pointer to a shared 0x10000-byte system BIOS image, and at +32 a 39-byte map of 16 KB pages.
The accessors take the record in a0 and a linear address in a1.
They send a byte at address x to one of three places: x from 0xa0000 up to but not including 0xc0000 to the window at P +16 (offset x minus 0xa0000), other x below 0xf0000 to the image at P +8 (offset x), and x of 0xf0000 and above to the BIOS image at P +24 (offset x minus 0xf0000).
There is no check against 0x100000.

- `xf86InitInt10` (`vga.a(generic.o)`, address 0x0, 312 bytes): **established.**
  Takes the board record in a0 and returns the new emulation record, or 0 on failure.
  It calls `kmem_zalloc` for 88 bytes (0x18) and stores the board at record +80, then `xf86Int10ExecSetup` (0x28) with the record; a zero result frees the record with `kmem_free` (0x114) and returns 0.
  It does not test the first allocation.
  Otherwise it stores the address of the accessor table at record +24 (store at 0x48) and allocates, with `kmem_zalloc`, P (40 bytes, stored at +16 at 0x50), the page map (39 bytes, P +32) and the image (0xf0000 bytes, P +8), then stores board +200 at P +16.
  The shared BIOS image is a static pointer in `.sdata`: when it is still zero it allocates 0x10000 bytes, logs "kmem_zalloc of sysMem failed" through `cmn_err` at level 1 and returns 0 on failure (no frees of the other allocations), or stores the pointer and calls `setup_system_bios` (0xa8) on it.
  P +24 gets that pointer (store at 0xc0, in the delay slot of the next call).
  It then calls `setup_int_vect` (0xbc) and `set_return_trap` (0xc4) with the record, copies 0x10000 bytes with `bcopy` (0xdc) from the shadow ROM pointer at board +144 to the image at offset 0xc0000, stores 0xc000 as the halfword at record +8 and 230 as the word at +32, and returns the record.
  **Inferred:** the shadow ROM is the card's option ROM copy that `vga_shadow_bios` made, so the card's ROM sits at C000:0 in the emulated PC, and the interrupt number 230 (0xe6) is the entry call the ROM's init is started through.
- `xf86FreeInt10` (`vga.a(generic.o)`, address 0x138, 116 bytes): **established.**
  Takes a record in a0 and returns nothing; a zero record returns at once.
  It clears the global `Int10Current` when it equals the record, then frees with `kmem_free` the image (size 0xf0000, call at 0x174), the page map (39 bytes) and P (40 bytes), then the record itself with a size argument of 8 (0x19c), not the 88 bytes `xf86InitInt10` allocated.
  The shared BIOS image is not freed.
- `xf86Int10AllocPages` (`vga.a(generic.o)`, address 0x1ac, 304 bytes): **established.**
  Takes the record in a0, a page count n in a1 and an output pointer in a2, and returns a pointer into the memory image or 0.
  A count of 39 returns 0.
  A count above 39 skips the search and goes to the marking step with start index 0.
  Otherwise it searches the 39-byte map for n consecutive zero bytes, starting at index 0 with the limit 39 minus n: when the byte at the start is nonzero the start moves up by 1; when a later byte of the window is nonzero the start moves up by n plus 1 (so some windows are never tried); a window that is all zero is accepted.
  When the start reaches or passes the limit the code tests only equality with the limit: equal returns 0 (so a window starting at the limit is never used), and a start beyond it is accepted.
  The marking step sets n map bytes to 1 from the start (a zero or negative n marks none), stores (start times 16384) plus 16384 as a word through a2 (0x2b4) and returns the image pointer plus that value.
  The map can be overrun when the start is past index 38 minus n.
- `xf86Int10FreePages` (`vga.a(generic.o)`, address 0x2dc, 120 bytes): **established.**
  Takes the record in a0, a pointer in a1 and a count in a2, and returns nothing.
  It subtracts the image base (P +8) from the pointer, divides by 16384 (signed, rounding toward zero), subtracts 1 and clears that many map bytes, count of them, starting at the resulting index.
  The loop is unrolled twice and has no bounds check.
- `read_b` (`vga.a(generic.o)`, address 0x354, 112 bytes): **established.**
  Takes the record in a0 and an address in a1 and returns the byte at that address under the three-way split above, zero-extended.
- `read_w` (`vga.a(generic.o)`, address 0x3c4, 232 bytes): **established.**
  Takes the record in a0 and an address in a1 and returns a halfword.
  An address from 0xa0000 up to but not including 0xc0000 returns only the byte at that address (the path at 0x490), without reading the next byte, so the high byte is zero.
  Any other address reads the byte at x and the byte at x plus 1, each routed by the split above for its own address (so a halfword can straddle two regions), and combines them with the second shifted left 8 (low byte first), masked to 16 bits.
- `read_l` (`vga.a(generic.o)`, address 0x4ac, 488 bytes): **established.**
  Takes the record in a0 and an address in a1 and returns a word.
  An address from 0xa0000 up to but not including 0xc0000 returns only the byte (the path at 0x678), zero-extended.
  Any other address reads four bytes at x to x plus 3, each routed for its own address, and combines them little-endian with shifts of 0, 8, 16 and 24.
- `write_b` (`vga.a(generic.o)`, address 0x694, 112 bytes): **established.**
  Takes the record in a0, an address in a1 and a value in a2, and stores the low byte at the routed location, including the BIOS image for addresses of 0xf0000 and above.
  It returns nothing.
- `write_w` (`vga.a(generic.o)`, address 0x704, 244 bytes): **established.**
  Takes the record in a0, an address in a1 and a value in a2.
  It stores the low byte at the routed location of x and the value shifted right 8 (arithmetic) at the routed location of x plus 1, each routed for its own address; unlike `read_w` it stores both bytes for an address in the window at 0xa0000.
  It returns nothing.
- `write_l` (`vga.a(generic.o)`, address 0x7f8, 508 bytes): **established.**
  Takes the record in a0, an address in a1 and a value in a2.
  It stores four bytes, the value shifted right by 0, 8, 16 and 24 (logical) at x to x plus 3, each routed for its own address, including the window at 0xa0000.
  It returns nothing.
- `xf86int10Addr` (`vga.a(generic.o)`, address 0x9f4, 68 bytes): **established.**
  Takes the record in a0 and an address in a1 and returns a host pointer.
  The address is taken as its low 32 bits.
  Below 0xf0000 the result is the image at P +8 plus the address; from 0xf0000 up it is the BIOS image at P +24 plus the address minus 0xf0000.
  It does not use the window at 0xa0000.

## The console text-port routines (`vga.a(vga_tport.o)`)

These are the drawing hooks the early console calls on a VGA board: `vga_htp_fncs` (`.data`) is a table of nine function pointers, in this order: `vga_tpinit`, `vga_mapcolor`, `vga_color`, `vga_sboxfi`, `vga_pnt2i`, `vga_drawbitmap`, `vga_cmov2i`, `vga_unblank` and `vga_getdesc`.
`vga_blankscreen` is exported but is not in the table.
Three words guard the port: `vga_tport_mute` and `vga_tport_inuse` (`.sbss`) and the lock `vga_tport_lock`.
Every routine except `vga_tport_lock_init`, `vga_tpinit` and `vga_getdesc` returns at once when `vga_tport_mute` is nonzero; otherwise it adds 1 to `vga_tport_inuse` (the store is in the delay slot of the `mutex_spinlock` call, so it happens first), takes `vga_tport_lock`, does its work, sets `vga_tport_inuse` to 0 and calls `mutex_spinunlock` with the value `mutex_spinlock` returned.
A 24-byte static record in `.bss` (called the state here) holds the text cursor and the drawing colour: the word at state +0 is the cursor x, the word at +4 the cursor y counted from the bottom, the byte at +8 the colour, the word at +12 the row stride and the word at +16 the height; `vga_tpinit` stores a pointer to it at board +40.
The pixel routines write bytes, one per pixel, through the frame-buffer pointer at board +224 after `vga_setbridge_to_lfb`, and the palette routine writes through the legacy I/O window at board +176 after `vga_setbridge_to_legacy_io`; each restores the bridge with `vga_restore_bridge` before it unlocks.

- `vga_tport_lock_init` (`vga.a(vga_tport.o)`, address 0x0, 48 bytes): **established.**
  Takes no argument and returns nothing.
  It sets `vga_tport_mute` to 1, calls `wbflush` (0x10) with the store that sets `vga_tport_inuse` to 0 in its delay slot, and calls `spinlock_init` (0x1c) on `vga_tport_lock` with the name string "vga_tport_lock".
  It leaves the mute word at 1.
- `vga_tpinit` (`vga.a(vga_tport.o)`, address 0x4a4, 96 bytes): **established.**
  Takes the board in a0 and returns nothing.
  It sets both `vga_tport_mute` and `vga_tport_inuse` to 1, calls `wbflush` (0x4bc), calls `vga_tport_lock_init` (0x4c4), then copies the word at board +252 to state +12 and the word at board +256 to state +16, clears the byte at state +8, stores the state's address at board +40, sets `vga_tport_mute` to 0 and calls `wbflush` again (0x4ec) with the store that clears `vga_tport_inuse` in its delay slot.
  **Inferred** from how `vga_drawbitmap` and `vga_sboxfi` use them: the words at board +252 and +256 are the frame buffer's row stride and height in pixels.
- `vga_color` (`vga.a(vga_tport.o)`, address 0x30, 84 bytes): **established.**
  Takes the colour in a1 (a0 is not used).
  With the port unmuted it stores the low byte of a1 at state +8, in the delay slot of the `mutex_spinunlock` call (0x78).
  It returns nothing.
- `vga_mapcolor` (`vga.a(vga_tport.o)`, address 0x84, 192 bytes): **established.**
  Takes the board in a0, a palette index in a1 and three components in a2, a3 and a4.
  With the port unmuted it calls `vga_setbridge_to_legacy_io` (0xc8) on the board and then writes bytes to offsets of the legacy window at board +176: 255 at +966 (port 0x3c6, the pixel mask), the index at +968 (0x3c8), then a2, a3 and a4 each masked to 8 bits and shifted right 2 at +969 (0x3c9), in that order (stores at 0x100, 0x114 and 0x128 after the 0xec index store).
  It calls `vga_restore_bridge` (0x124), the last component store being in its delay slot, and unlocks.
  It returns nothing.
  **Inferred** from the standard VGA register layout that these are the DAC mask, write-index and data ports and that the three values are the 6-bit red, green and blue.
- `vga_sboxfi` (`vga.a(vga_tport.o)`, address 0x144, 320 bytes): **established.**
  Takes the board in a0, x1 in a1, y1 in a2, x2 in a3 and y2 in a4, and fills a rectangle with the colour byte at state +8; it returns nothing.
  With the port unmuted it calls `vga_setbridge_to_lfb` (0x1a4), swaps x1 and x2 when x2 is below x1 (signed), turns each y into state +16 minus y minus 1, orders the two y values (unsigned) and fills every pixel from the lower x up to and including the higher x, for each row from the lower y up to and including the higher y.
  A pixel's address is the frame-buffer pointer at board +224 plus, as a 32-bit value, x plus the stride at state +12 times y.
  An empty range (a higher value below the lower one) fills nothing.
  Then it calls `vga_restore_bridge` (0x264) and unlocks.
- `vga_cmov2i` (`vga.a(vga_tport.o)`, address 0x284, 108 bytes): **established.**
  Takes an x in a1 and a y in a2 (a0 is not used) and returns nothing.
  With the port unmuted it stores a1 as the word at state +0 and state +16 minus a2 minus 1 as the word at state +4.
  It touches no hardware.
- `vga_drawbitmap` (`vga.a(vga_tport.o)`, address 0x2f0, 412 bytes): **established.**
  Takes the board in a0 and a pointer to a descriptor in a1, and returns nothing.
  The descriptor's doubleword at +0 points at the bitmap, and its halfwords at +10, +12, +14, +16, +18 and +20 are the row count, the x offset, the y offset, the x advance, the y advance and the number of 16-pixel words per row.
  With the port unmuted it calls `vga_setbridge_to_lfb` (0x340); for each row r from 0 and each 16-bit word in the row it tests the bits of the halfword from bit 15 down to bit 0 and, for each set bit, stores the colour byte at state +8 at the frame-buffer pointer at board +224 plus, as a 32-bit value, (state +0 minus the x offset, plus the pixel number) plus the stride at state +12 times (state +4 plus the y offset minus r).
  A clear bit stores nothing.
  The pixel loop is unrolled twice.
  A row count of zero or less skips the rows, a word count of zero or less skips one row; either way the cursor is then moved: the x advance is added to the word at state +0 and the y advance subtracted from the word at state +4 (the last store is in the delay slot of the `vga_restore_bridge` call at 0x46c).
  It then unlocks.
- `vga_getdesc` (`vga.a(vga_tport.o)`, address 0x48c, 24 bytes): **established.**
  Takes a selector in a1 (a0 is not used) and returns 1 when it equals 1 and 0 otherwise; the `li v0,1` sits in the delay slot of the branch.
  It touches neither the lock nor the state.
- `vga_unblank` (`vga.a(vga_tport.o)`, address 0x504, 68 bytes): **established.**
  With the port unmuted it only takes `vga_tport_lock` and releases it again, with `vga_tport_inuse` set to 1 and then 0 around it, and returns nothing; it reads no argument and writes no card register.
- `vga_blankscreen` (`vga.a(vga_tport.o)`, address 0x548, 68 bytes): **established.**
  The same instructions as `vga_unblank`: an unmuted lock and unlock and no other effect.
  It is exported but is not in `vga_htp_fncs`.
- `vga_pnt2i` (`vga.a(vga_tport.o)`, address 0x58c, 68 bytes): **established.**
  The same instructions as `vga_unblank`: an unmuted lock and unlock and no other effect, so a point draw is ignored.

## Image-sync driver

- `is1.o` (`usr/cpu/sysgen/IP35boot/is1.o`): **established** from its symbol table. A separate PCI driver (`is1_reg`, `is1_attach`, its own `pciio_driver_register`) for the image-sync option; it depends on `fglrx` (its `master.d` file) and calls `FGLRXReadRegister`, `FGLRXWriteRegister` and `fglrx_intr_list`, but `fglrx.o` refers to nothing in `is1.o`, so it takes no part in the FireGL card's attach. Its attach, detach, open, ioctl, interrupt and resync routines are read in [image-sync-functions.md](image-sync-functions.md); its probe IDs are in the `is1_devids` table.
