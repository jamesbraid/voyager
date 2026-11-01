# Kernel attach path (IP35)

How IRIX 6.5.30 finds an Onyx4 FireGL card, maps it and makes its first register writes. The kernel objects are `usr/cpu/sysgen/IP35boot/fglrx.o` (ATI's FireGL kernel driver, built for IRIX with a Linux-style compatibility layer whose routines start `__ke_`), the `vga.a` members (the early VGA console driver and an x86 BIOS emulator) and `is1.o` (the image-sync driver). The objects are unstripped 64-bit MIPS IV relocatable files; every address below is a `.text` offset in the named object, and "record +N" is byte N of the per-board record the routine works on (`bdata` in the driver's assertion strings). Register names are the public AMD and Linux names when the offset matches one; [the source index](sources/INDEX.md) lists the references. Labels follow `AGENTS.md` section 5.

The command processor, the microcode and the bus-master set-up are not on the kernel attach path at all: the X server module programs them later. That part is in [Command processor start-up](#command-processor-start-up-x-server-module).

## Order of events

1. `vga_earlyinit` (`vga.a(vga_init.o)`), run before the PCI layer attaches drivers, finds the console pipe, maps the card, runs the card's own option ROM in the x86 emulator and sets a VESA mode ([Early console and the x86 emulator](#early-console-and-the-x86-emulator)). It returns 0 or 1.
2. `fglrx_init` (`fglrx.o`) builds a board record for every graphics pipe the VGA layer already knows, then asks the PCI layer to replay already-found devices to `fglrx_attach` (`pciio_iterate` with the prefix `fglrx_`).
3. `fglrx_reg` registers the driver for five PCI device IDs ([Which cards the driver claims](#which-cards-the-driver-claims)).
4. `fglrx_attach` runs once per card: topology check, configuration reads, BAR, ROM and legacy mappings, six register writes, device nodes, interrupts, memory reservations, `firegl_init_module` ([fglrx_attach in order](#fglrx_attach-in-order)). It returns 0 on success and 5 on failure.

## Which cards the driver claims

- `fglrx_devids` (`fglrx.o`, `.data` offset 0xe0): **established.** Six 8-byte entries, then a zero entry. The first word of each entry is the PCI vendor ID in its upper half and the device ID in its lower half: 1002:4e44, 1002:4e47, 1002:4e46, 1002:4148, 1002:4e4b and 1002:4e44 again. The second words are 0x10020002, 0x10020152, 0x10020152, 0x10020002, 0x10020152 and 0x10020172; `fglrx_reg` never reads them, so their meaning (they have the form of a subsystem vendor and device pair) is **inferred** only from that form. The public PCI ID list names 4e44 Radeon 9700, 4e46 Radeon 9600 TX, 4e47 FireGL X1, 4148 Radeon 9800 and 4e4b FireGL X2; Linux `drm_pciids.h` classes 4e44, 4e46 and 4e47 as R300 and 4148 and 4e4b as R350.
- `fglrx_reg` (`fglrx.o`, address 0x54c): **established.** Walks the six entries of `fglrx_devids`, skips an entry whose vendor and device halfwords equal an earlier entry's, and calls `pciio_driver_register(vendor, device, "fglrx_", 0)` for each remaining one, so five distinct device IDs are registered: 4e44, 4e47, 4e46, 4148 and 4e4b. It returns 0.
- `vga_devids` (`vga.a(vga_init.o)`, `.data` offset 0): **established.** The VGA console driver's own table has the same layout: 1002:4e44, 4e47, 4e4b, 4e46, 4e44 and 1002:5245, with second words 0x10020002, 0x10020152, 0x10020152, 0x10020152, 0x10020172 and 0x10020008. It lacks the R350 Radeon ID 4148 that `fglrx_devids` has and adds 5245, which the PCI ID list names an R200-generation part.
- `_r6x_IsDeviceSupported`: ATI's generic support check, run from `firegl_init` after `fglrx_attach` has accepted the card, so the IRIX-level filter is the `fglrx_devids` list above; the entry with the full id list and the record fields it sets is in [kernel-object-functions.md](kernel-object-functions.md#detach-initialisation-and-device-identity).

The option ROM images agree: `sg2.bin` is built for 1002:4e47 and `sg3.bin` and `sg3a.bin` for 1002:4e4b (AGENTS.md section 1). Both IDs are in both tables.

## Bus and bridge

- `vga_change_big_window` (`vga.a(vga_init.o)`, address 0x1a90): **established.** With a second argument of 1 it sets bit 22 of the bridge's widget control register, otherwise clears it: a 64-bit access at bridge offset 0x20 when record +8 is nonzero (the PIC case), a 32-bit access at 0x24 otherwise. Linux `bridge.h` names bit 22 of that register `BRIDGE_CTRL_MEM_SWAP`, the byte swap for PCI memory-space PIO. `vga_map_board_regions` calls it with 1 after mapping the frame-buffer BAR.
- `fglrx_attach` (`fglrx.o`, address 0xbdc), topology and host set-up: **established.** It takes the card's connection point (`hwgraph_connectpt_get` of the master vertex) and asks `xwidget_info_chk` whether that vertex is a crossbar widget. If it is, a stack flag (sp+1120) is 0 and BARs 0 and 2 are later mapped through the bridge's per-device windows; if it is not, the routine climbs one more connection point, sets the flag to 1, and maps BARs 0 and 2 as plain PCI memory addresses through a PIO map instead. **Inferred:** flag 1 is the card behind a PCI-to-PCI bridge, flag 0 the card directly on the bridge's bus. Which case the Onyx4 graphics board takes is **unknown** from this code. It also calls `hub_setup_prb(nasid, widget id, 3, 2)` (address 0x17c8), with the NASID from `compact_to_nasid_node` of the master node and the widget number from `xwidget_info_id_get`. `vga_earlyinit` (`vga.a(vga_init.o)`) makes the same call with 3 and 2. The routine belongs to the IP35 kernel (`kernel.o`); what the two numbers mean for the hub is **unknown** here. It returns 0 on success and 5 on failure (see the step list below).

The PCI bus clock and width the cards run at are neither read nor set by `fglrx.o` or `vga.a`; nothing in the attach path depends on them, so the bus rate has to come from SGI's documentation, not from this code. See [the open questions](open-questions.md#host-attachment).

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
- `find_fglrx_pipe` (`fglrx.o`, address 0x0): **established.** Calls `find_vga_pipe(pipe)`; when that returns a record it copies the record's halfword at +80 and doubleword at +96 to the two pointers given and returns 1, otherwise -1. `find_vga_pipe` is not defined in any of the shipped IP35 objects read so far (`fglrx.o`, `vga.a`, `vgastubs.a`, `kernel.o`, `pcibr.o`, `pic.o`): **unknown** where it lives ([open questions](open-questions.md#host-attachment)).

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
In the record, the doubleword at +24 points at a table of six function pointers (read byte, halfword and word at +0, +8 and +16, write byte, halfword and word at +24, +32 and +40), and the doubleword at +80 is a handle that every port access passes to the kernel's `inb`, `inw`, `inl`, `outb`, `outw` and `outl`.
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
  **Inferred:** the three values are the flags, code segment and instruction pointer, which an interrupt pushes before it jumps through the vector.
- `x_inb` (`vga.a(helper_exec.o)`, address 0x698, 92 bytes): **established.**
  Takes a port number in a0 and returns a byte.
  Port 64 (0x40) is answered from a counter instead of hardware: it adds 1 to the halfword at +10 of the `Int10Current` record and returns its low byte when bit 0 of the new value is clear and its high byte when bit 0 is set.
  Every other port is passed to `inb` (0x6d8) with the handle at record +80 and the result is masked to 0xff.
  **Inferred:** the alternating bytes imitate reads of the timer channel 0 counter that BIOS delay loops use.
- `x_inw` (`vga.a(helper_exec.o)`, address 0x6f4, 84 bytes): **established.**
  Takes a port in a0 and returns a halfword.
  Port 92 (0x5c) calls `get_ust_nano` (0x728) with a stack slot and returns the 64-bit value in the slot divided by 3260, unsigned, masked to 16 bits.
  Every other port is passed to `inw` (0x70c) with the handle at record +80 and the result is masked to 0xffff.
- `x_inl` (`vga.a(helper_exec.o)`, address 0x7d4, 80 bytes): **established.**
  Takes a port in a0 and returns a word.
  It calls `pciCfg1in` with the handle at record +80, the port and a stack slot (0x7ec); when that returns nonzero it returns the word it left in the slot.
  Otherwise it returns the result of `inl` (0x814) on the same handle and port.
- `x_outb` (`vga.a(helper_exec.o)`, address 0x748, 96 bytes): **established.**
  Takes a port in a0 and a value in a1 and returns nothing of its own.
  A write of the value 0 to port 67 (0x43) calls `get_ust_nano` (0x780) with a stack slot, divides the 64-bit result by 838 (unsigned), ORs 1 and stores the result as the halfword at +10 of the record, which is the counter `x_inb` reads through port 64.
  Every other port and value goes to `outb` (0x76c) with the handle at record +80.
  **Inferred:** port 67 with value 0 is the timer's counter-latch command.
- `x_outw` (`vga.a(helper_exec.o)`, address 0x7a8, 44 bytes): **established.**
  Takes a port in a0 and a value in a1 and passes both unchanged to `outw` (0x7c0) with the handle at record +80.
  It special-cases no port.
- `x_outl` (`vga.a(helper_exec.o)`, address 0x824, 84 bytes): **established.**
  Takes a port in a0 and a value in a1.
  It first calls `pciCfg1out` with the handle at record +80, the port and the value (0x844) and returns when that result is nonzero.
  Otherwise it calls `outl` (0x868) with the handle, port and value.
- `pciCfg1in` (`vga.a(helper_exec.o)`, address 0x98c, 92 bytes): **established.**
  Takes the handle in a0, a port in a1 and a result pointer in a2, and returns 1 when it handled the port and 0 otherwise.
  Port 3320 (0xcf8) stores the static `.sdata` word that `pciCfg1out` fills (the address latch) through the pointer.
  Port 3324 (0xcfc) calls `pciReadLong` with the handle and only the low byte of the latch, 0xff-masked (0x9cc), and stores its result through the pointer.
  Bus, device and function bits of the latch are not used: the access always goes to the card whose handle was passed, at the register offset in the latch's low byte.
- `pciCfg1out` (`vga.a(helper_exec.o)`, address 0x9e8, 72 bytes): **established.**
  Takes the handle in a0, a port in a1 and a value in a2, and returns 1 when it handled the port and 0 otherwise.
  Port 3320 (0xcf8) stores the value in the static `.sdata` latch.
  Port 3324 (0xcfc) calls `pciWriteLong` with the handle, the latch's low byte (0xff-masked) and the value (0xa1c).
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

## After attach: firegl_init_module

- `firegl_init_module` (`fglrx.o`, address 0x9130): **established** as a call sequence. Allocates a 232-byte device structure (`kmem_alloc(0xe8)`), clears it, initialises a mutex and a semaphore, and calls `firegl_init`; on failure it frees the structure. It returns 1 after the call at 0x9310 and 0 on the paths that free the structure or log through `cmn_err`.
- `firegl_init` (`fglrx.o`, address 0xedec): **established** as a call sequence. Allocates the 11680-byte device-private structure (`kmem_alloc(0x2da0)`), clears it, calls `drm_mem_init` and `_r6x_IsDeviceSupported`, and initialises a lock; an unsupported device frees the structure. No register of the card is written on this path in the instructions read; `_r6x_IsDeviceSupported` reads configuration words only. It returns 0 on success, -84 on the path after the call at 0xee94, and -19 on the paths at 0xefec, 0xf048 and 0xf084.

## Command processor, microcode and memory controller in the kernel

- `fglrx.o` (whole object): **established** by a scan of every load and store with a constant offset: the kernel driver never stores to `CP_RB_BASE` (0x700), `CP_RB_CNTL` (0x704), `CP_RB_RPTR_ADDR` (0x70c), `CP_ME_RAM_ADDR` (0x7d4), `CP_ME_RAM_DATAH` (0x7dc) or `CP_ME_RAM_DATAL` (0x7e0) with a constant offset. Its only command-processor accesses are stores to `CP_RB_WPTR` (0x714) in `firegl_PM4Alloc` (address 0x119e8) and `firegl_PM4WaitForIdle` (address 0x11c1c) and reads of `RBBM_STATUS` (0xe40) in `_r6x_resetPM4` and `firegl_killall_clients`. The CP is started by the X server module through the user mapping. The same scan finds no constant-offset access to `MC_FB_LOCATION` (0x148), `MC_AGP_LOCATION` (0x14c), `AGP_BASE` (0x170) or the PCI GART registers `AIC_CNTL` to `AIC_TLB_DATA` (0x1d0 to 0x1ec); accesses through computed offsets were not traced.
- `firegl_cp_init` (`fglrx.o`, address 0x17600): **inferred.** An ioctl, not an attach step: it copies a 32-byte argument from user space, takes the device lock and calls `drm_ioremap`. What the argument holds is not read. It returns -14 when the argument copy fails, 0 on the path through the local routine at .text+95700, and -22 on the other paths.

## Command processor start-up (X server module)

`usr/X11R6/lib/modules/drivers/fglrx_drv.so` is an N32 shared object without a symbol table; the routine names come from its DWARF information. It writes the registers directly through its own mapping of BAR 2, with a `sync` after every store.

- `PM4LoadMicroCode` (`fglrx_drv.so`, 384 bytes at address 0x42bcc0): **established.** Writes `CP_ME_CNTL` (0x7d0) = 0x401f0000 and `CP_ME_RAM_ADDR` (0x7d4) = 0, then selects a table by the chip code at driver record +160: codes 8, 47 and 49 take `aPM4_Microcode_R6x`, codes 44, 45 and 52 take `aPM4_Microcode_R300`, any other code loads nothing. It writes the table as 256 pairs: for each 8-byte entry, the word at +4 to `CP_ME_RAM_DATAH` (0x7dc) and then the word at +0 to `CP_ME_RAM_DATAL` (0x7e0). In `CP_ME_CNTL` (R5xx Acceleration guide) 0x401f0000 sets `ME_MODE` (bit 30) and `ME_STATMUX` to 31 (bits 20:16). Which chip each code means is **unknown** here.
- `aPM4_Microcode_R300` (`fglrx_drv.so`, address 0x465470, 2048 bytes in `.data`): **established** by comparison with the public `radeon/R300_cp.bin` and `radeon/R200_cp.bin` of the linux-firmware collection, taking each 8-byte table entry's second word and then its first word, against the firmware's big-endian (high, low) pairs, which is the order Linux `r100_cp_load_microcode` writes them: `aPM4_Microcode_R6x` (address 0x464c70, 2048 bytes) equals `R200_cp.bin` in all 256 pairs; `aPM4_Microcode_R300` matches `R300_cp.bin` in only 66 of 256 pairs and `R420_cp.bin` in 62, so the Onyx4 driver carries an R300 microcode revision that is not the public one. The images are not reproduced here.
- `r200_RegisterRingBufferLocation` (`fglrx_drv.so`, 256 bytes at address 0x42bf80): **established.** Writes `CP_RB_WPTR_DELAY` (0x718) keeping bits 31:28; reads `CP_RB_CNTL` (0x704), clears bits 5:0, 13:8 and 19:18, sets bits 5:0 to `LogBase2` of a word of the third argument (+528) minus 1 and bits 13:8 to 0x3f, sets bits 19:18 from driver field +228, or when that field is 4 from field +212 (1 gives 0, 2 gives 1, anything else 2), keeps bits 17:16, and writes it back; then writes `CP_RB_BASE` (0x700) and writes 0x2000000 to 0x0044. Field names, **established** from the R5xx guide and Linux `radeon_reg.h`: `RB_BUFSZ` (5:0), `RB_BLKSZ` (13:8), `BUF_SWAP` (17:16), `MAX_FETCH` (19:18); bit 25 of `GEN_INT_STATUS` is `RADEON_SW_INT_TEST_ACK`. The `BUF_SWAP` value left in bits 17:16 is set elsewhere: **unknown**.
- `r200_EnableCommonBusMaster` (`fglrx_drv.so`, 128 bytes at address 0x42c080): **established.** Clears bit 6 of `BUS_CNTL` (0x30), `RADEON_BUS_MASTER_DIS`, so the card may master the bus (and the same bit of a driver copy at +64); writes `AGP_BASE` (0x170) with the driver word at +6676 and `MC_AGP_LOCATION` (0x14c) with (base + size - 1) masked to its upper 16 bits OR base >> 16, where base is that word and size the word at +6672: the aperture's start and end in 64 KB units. What bus addresses the IRIX driver uses as the aperture base is **unknown** here.
- `r200_SetPm4OperationMode` (`fglrx_drv.so`, 192 bytes at address 0x42c100): **established.** Sets the top four bits of `CP_CSQ_CNTL` (0x740) to its second argument, calls `r200_EnableCommonBusMaster` (at 0x42c080), then polls `RBBM_STATUS` (0xe40) until bits 16 and 9 (mask 0x10200) clear. `FGLStartCP` calls it with 8; the R5xx guide's `CSQ_MODE` table makes 8 "primary bus-master, indirect bus-master".
- `r200_EnableRPTRwriteback` (`fglrx_drv.so`, 64 bytes at address 0x42c1c0): **established.** Writes `CP_RB_RPTR_ADDR` (0x70c) = a driver address + 512 and clears bit 27 of `CP_RB_CNTL` (`RADEON_RB_NO_UPDATE`), so the read pointer is written back to memory.
- `r200_EnableTimeStampWriteBack` (`fglrx_drv.so`, 32 bytes at address 0x42c200): **established.** Writes `SCRATCH_ADDR` (0x774) from the 8-byte word at +40 of its second argument and `SCRATCH_UMSK` (0x770) = 0x3f.
- `FGLEnableCP` (`fglrx_drv.so`, address 0x42c300): **established** as a call sequence: `PM4LoadMicroCode`, `r200_StampPDEV`, then copies a time-stamp counter into the ring state and calls `r200_WriteTimeStamp` (at 0x42c240). 
- `FGLStartCP` (`fglrx_drv.so`, 216 bytes at address 0x42c3c0): **established.** Starts or stops the command processor's ring.
  The first argument (a0) is the screen record and the second (a1) selects start (nonzero) or stop (zero); the ring state is the record the word at +7660 of a0 points to, with its words at +4 (the register aperture) and +16 (a flag block) kept in the frame.
  Both paths first run the unlabelled `sub_42bc00` (a `bgezall` at 0x42c3fc), which waits for the engine to go idle: when the ring state's first flag word has bit 0 set it waits through `firegl_PM4WaitForIdle`, otherwise through `sub_42bb00` with the aperture; a nonzero result from either logs a level-5 message ("firegl_PM4WaitForIdle timed out - probably ASIC hang!" or "__fglQSQuietDown timed out - probably ASIC hang!") and ends the server with `xf86exit` and status 1.
  Start: it calls `r200_SetPm4OperationMode` with 8 (a `bgezall` at 0x42c414), then stores 0 at flag block +540, reads `CP_RB_RPTR` (register 0x710) and stores the value at flag block +512 and +524 and into `CP_RB_WPTR` (register 0x714), executes `sync`, and sets bit 0 of the flag word at +520.
  Stop: it calls `r200_SetPm4OperationMode` with 0 (a `bgezall` at 0x42c468) and clears bit 0 of the flag word at +520, leaving -2 in v0 as a side effect of the mask.
  The start path sets no return value. `FGLInitCP` (address 0x42c4c0), which computes the ring parameters, is not read yet.
- `r200_WriteTimeStamp` (`fglrx_drv.so`, 72 bytes at address 0x42c240): **established.** Writes four values to `SCRATCH_REG3` down to `SCRATCH_REG0` (0x15ec to 0x15e0), each copied from a word at offset 564, 40, 36 or 32 of one base register.

## VGA console driver routines

The routines below are all in `vga.a(vga_init.o)`; every address is a `.text` offset in that member. "Board" is the 328-byte (0x148) record that `vga_checkBoardPointer` allocates, "n" is its index, and "pipe" is the record `find_vga_pipe` returns (defined elsewhere, see [the open questions](open-questions.md#host-attachment)). Offsets are given in decimal and hex. Two global bytes in `.sdata` steer `vga_earlyinit`: the byte at +0x20 (32), which starts as 1, and the byte at +0x21 (33), which starts as 0.

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

## Image-sync driver

- `is1.o` (`usr/cpu/sysgen/IP35boot/is1.o`): **established** from its symbol table. A separate PCI driver (`is1_reg`, `is1_attach`, its own `pciio_driver_register`) for the image-sync option; it depends on `fglrx` (its `master.d` file) and calls `FGLRXReadRegister`, `FGLRXWriteRegister` and `fglrx_intr_list`, but `fglrx.o` refers to nothing in `is1.o`, so it takes no part in the FireGL card's attach. Its attach, detach, open, ioctl, interrupt and resync routines are read in [image-sync-functions.md](image-sync-functions.md); its probe IDs are in the `is1_devids` table.
