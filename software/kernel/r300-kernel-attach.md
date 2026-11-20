# R300 kernel attach in the IRIX 6.5.22 Onyx4 patch: discovery, windows and first writes

How the IRIX 6.5.22 kernel with Onyx4 patch SG0005448 finds an R300 or R350 under the brick's PCI bridge, maps it and
touches it, from the patch's `fglrx.o`, `gfxs.a`, `vga.a` and `is1.o` and the 6.5.22 maintenance-release bridge objects.
It extends [kernel-attach.md](kernel-attach.md) (6.5.30) and [onyx4-bus-attach.md](onyx4-bus-attach.md) and does not
repeat their readings; where this page and the 6.5.30 page disagree, the difference is stated and graded.

Grades: **established** (the whole routine or table was read), **observed** (a published capture), **software
expectation** (a public Linux or AMD document says it for the public chip or bridge), **inferred** (reasoned, reasoning
given), **unknown**.

## Objects read and how

| Object | Release it comes from | Size | SHA-256 |
|---|---|---:|---|
| `fglrx.o`, `gfxs.a`, `vga.a`, `is1.o`, `fglrx_drv.so` (spot checks only) | patch SG0005448 (`patchSG0005448.tardist`, 64-bit set) | 566904, 83940, 507044, 82520, 700156 | `4c47f6b0...7658`, `1378ab26...bf8e`, `c92f83d6...f68a`, `71c003e2...6221`, `0352b38d...d339` |
| `pcibr.o`, `pic.o`, `xbridge.o`, `pciio.o`, `kernel.o` | the IRIX 6.5.22 maintenance-release overlay (`eoe_6522m`), IP35 kernel set | 301824, 32024, 22808, 47992, 1283704 | `a4bae55f...0b20`, `c7c4fd13...7f0f`, `0353af78...1e85`, `757d03ff...1c`, `afc16868...5a28` |
| `l1_command.o` | the same overlay | 59552 | `13ebae95...0316` |

The patch carries no bridge objects; the bridge side is therefore the 6.5.22 base release's. The overlay also has its own,
older build of `fglrx.o` (643888 bytes); it was used only to see that its `fglrx_intr` is an 8-byte stub. Every function was
decompiled with Ghidra (one export per object) and each cited store, branch value and call was checked against an
`objdump` listing of the same object. Ghidra could not name the calls in the unlinked `fglrx.o`, so call targets come from the
relocation entries of the listing. The decompiler output is navigation only; nothing here rests on it alone. Addresses are
`.text` offsets in the named object. The 6.5.30 bridge objects were not re-read, so a difference between 6.5.22 and 6.5.30
in `pcibr.o`, `pic.o` or `xbridge.o` is **unknown**.

## What the 6.5.22 patch does differently from 6.5.30

All **established** (whole routines read in the patch object):

- `fglrx_attach` (0x90c, 4756 bytes) makes **three** register writes, not six: `GB_TILE_CONFIG` (0x4018) = 0x17,
  `GA_SOFT_RESET` (0x429c) = 0x400, `GB_TILE_CONFIG` = 0x17 again. It does not write `GEN_INT_CNTL` (0x40), `CRTC_GEN_CNTL`
  (0x50) or `CRTC2_GEN_CNTL` (0x3f8) at attach and has no second masking step before the interrupt is connected. The 6.5.30
  routine (4888 bytes) does ([kernel-attach.md](kernel-attach.md#fglrx_attach-in-order), steps 8 and 15).
- `fglrx_intr` (0x8d4) is 56 bytes and only adds one to a counter kept per processor in the kernel's `gfxinfo` table. It reads
  no card register. The 6.5.30 handler (372 bytes) reads `GEN_INT_STATUS`, acknowledges and wakes vsync waiters. Details in
  [r300-kernel-interrupts.md](r300-kernel-interrupts.md).
- The vsync ioctls enable the interrupt by storing 1 in `GEN_INT_CNTL`, not 4.

## How the card is found

1. **Early console, before drivers (established, cross-reference).** The PROM's configuration table gives `gfxs.a(klconfig.o)`
   the pipe list; `vga_earlyinit` maps the board and runs the option ROM. `klconfig.o` is the same size per routine as in 6.5.30
   (`find_vga_pipe` 800 bytes, `find_vga_noprom_pipe` 1140, `klcheck_vga` 84, `prom_has_vga_support` 56) and `prom_has_vga_support`
   and `klcheck_vga` read the same, so [the 6.5.30 reading of the pipe list](kernel-attach.md#the-pipe-list-gfxsaklconfigo)
   applies. The vga path also writes BAR 1 (configuration offset 0x14) with 0x400 when it reads zero, and probes and enables the
   expansion ROM at offset 0x30 (`vga_map_board_regions`, 0x136c).
2. **Bridge attach scans the slots (established).** `pic_attach` (0x414) calls `pic_attach2` (0x5e4) once per PIC bus; each call
   runs `pcibr_slot_info_init` (`pcibr.o`, 0xc580) for slots 0 to 3 of that bus. A PIC slot s is PCI device s + 1: the
   type-0 configuration address is the bridge base plus 0x20000 plus (s + 1) times 0x1000 plus function times 0x100 plus the
   dword-aligned register (`pcireg_type0_cfg_addr`, 0x18774; it asserts the device number is 1 to 4). For the XBridge and the
   older Bridge the device number is s itself, 0 to 7. A read of register 0 that faults or returns a vendor of 0xffff means
   empty. Header-type bit 7 of function 0 makes it probe functions 1 to 7; the slot's function count is the highest present
   function plus one. A bus 1 register block lives 0x800000 above bus 0 in the same widget (`pcibr_bridge_ptr_get(widget, 1)`).
3. **BARs and command are assigned by the bridge, before any driver (established).** `pcibr_slot_addr_space_init` (0xd58c) walks
   every function of the slot, sizes its BARs, takes a bus address for each from the slot's own window with
   `pcibr_bus_addr_alloc` and writes it to configuration space, and then ORs 7 into the command word: bit 0 (I/O), bit 1 (memory)
   and bit 2 (bus master). The one exception is vendor 0x9004 device 0x1160, which gets bit 0 and bit 2 only. So **bus mastering and
   the memory BARs are set by `pcibr.o`, not by the PROM, `vga.a` or `fglrx_attach`**; `fglrx_attach` later only sets command
   bits 0 and 1 again through the window (step 1 below). `pcibr_slot_info_init` also writes the latency timer (offset 0xd) when it
   is zero: the device's maximum-latency byte (offset 0x3e) times a factor of 8, 16, 24 or 32 chosen by the bus mode, or a default of
   32 to 128 when that byte is zero (the exact factor-to-mode map was not decoded) and, when the bus is in PCI-X mode, the
   cache-line size (offset 0xc) as 0x20.
4. **Driver match by ID (established).** `pcibr_slot_call_device_attach` (0xddf8) hands the function to `pciio_device_attach`
   (`pciio.o`, 0x1190), which looks the vendor and device ID up in the connection-point driver list (`cdl_add_connpt`). The drivers
   put their IDs there in their `_reg` routines: `fglrx_reg` (0x4bc) registers 1002:4e44, 4e47, 4e46, 4148 and 4e4b with the prefix
   `fglrx_` (the same six-entry `fglrx_devids` table as 6.5.30, read directly); `vga_reg` (0x470) registers its own six-entry table
   (4e44, 4e47, 4e4b, 4e46, 4e44, 5245), also the same as 6.5.30; `is1_reg` registers SGI (0x10a9) devices 0x100c and 0x100f
   (ImageSync, `is1_devids`). Nothing registers the secondary head's ID (see [the topology page](r300-kernel-topology.md)), so
   function 1 of a card is probed and given BARs and a command word but **no driver attaches to it** (**established** for the
   three tables; that no other object registers it is a string and symbol scan of the four objects, **inferred** for the rest of the
   kernel).

## fglrx_attach in order (patch build)

Relative to the [6.5.30 sixteen steps](kernel-attach.md#fglrx_attach-in-order), with the calls in the order the relocations
give them (**established**, whole routine read):

1. Board record found through `find_fglrx_pipe` (the pipe list), as in 6.5.30; command bits 0 and 1 set through the configuration
   window byte at offset 7 (**inferred** meaning: low command byte, big-endian window).
2. Configuration reads: vendor, device, revision, subsystem pair, class code; bus, slot and function numbers; NASID.
3. Configuration window kept (record +528, 256 bytes); BAR 1 mapped with space `WIN(1)`; BARs 0 and 2 mapped with flag 0x2000;
   the expansion ROM probed (offset 0x30 written 0xffffffff, read back, restored with bit 0 set), mapped and copied only when it
   starts 0x55 0xaa; a bad signature logs and fails the attach.
4. Legacy windows: a 1024-byte I/O window and the 0xa0000 to 0xbffff memory window (flag 0x1000).
5. **The three register writes** through the BAR 2 mapping (record +656), in the order 0x4018 = 0x17, 0x429c = 0x400, 0x4018 = 0x17
   (`sw` at 0x11a0, 0x11bc, 0x11d8; no delay or read-back). Names are **software expectation** from the public headers by offset:
   `GB_TILE_CONFIG`, whose 0x17 sets tile enable, three pipes and 16-pixel tiles, and `GA_SOFT_RESET`, whose 0x400 is a 1024-cycle
   reset count. Why the tile configuration is written on both sides of the reset is **unknown**.
6. Record fields for the ATI layer; device nodes (`fglrx` and `hint.fglrx<n>`); `pciio_intr_alloc` with line mask 3 (INTA and INTB);
   `hwgraph_inventory_add`; `firegl_init_module`.
7. `hub_setup_prb(nasid, widget, 3, 2)`, then `kmem_contig_reserve` of 4 MB (twice), 1 MB and 64 KB on the card's node. The
   hub routine is byte-for-byte the same logic as the 6.5.30 entry; read again in the 6.5.22 `kernel.o`.
8. `pciio_error_register(dev, fglrx_error_handler, 0)`, then `pciio_intr_connect(handle, fglrx_intr, record, 0)`. There is no
   register write between them (6.5.30 masks the interrupt and both CRTCs here).
9. `spinlock_init`, `fglrxProbeCompositor`, return 0; any failure after the record was found returns 5.

## What the kernel does not program

All **established** as an absence over the whole of the patch's `fglrx.o`: a pattern search of every decompiled function for
constant displacements from the register-window pointers finds only `GEN_INT_CNTL` (0x40) and `GEN_INT_STATUS` (0x44) in the
interrupt and vsync code, `CRTC_GEN_CNTL` and `CRTC2_GEN_CNTL` (0x50 and 0x3f8) in `firegl_sync_dacs`, 0x4018 and 0x429c at attach,
`CP_RB_WPTR` (0x714), `RB2D_DSTCACHE_CTLSTAT` (0x342c) and one register at 0x130 in `firegl_PM4WaitForIdle`, and `CP_STAT` (0x7c0)
and `RBBM_STATUS` (0xe40) reads in the idle waits. The names are by offset against the public headers (**software
expectation**); 0x130 is **unknown**. In particular the kernel object contains **no** clock or PLL write, no memory-controller
register write, no `CP_RB_BASE`/`CP_RB_CNTL` ring set-up, no microcode load, and no `RBBM_SOFT_RESET` (0xf0) write. The search is
a pattern match, so its completeness is **inferred**; [the generated register inventory](../../generated/inventory/mmio.tsv)
reached the same four kernel-object rows for 6.5.30.

Who does program them, in the patch build (spot-checked in the patch's `fglrx_drv.so`, **established** for the cited routines):
`R200EngineReset` pulses `RBBM_SOFT_RESET` (0xf0) with 0x79 and then 0, then waits for `RBBM_STATUS` bit 31 to clear and a
status bit in register 0x150. `FGLInitCP` fills a 0xe78-byte state block and programs the ring (values in
[r300-kernel-dma.md](r300-kernel-dma.md#ring-and-scratch-registers-set-by-the-x-module)). Clocks, memory controller and
ASIC reset come from the option ROM's emulated init ([onyx4-bus-attach.md](onyx4-bus-attach.md#does-anything-run-without-the-cards-option-rom));
the chip state it leaves is **unknown**.

## Gaps

- The 6.5.22 PROM was not read; the early-console claims lean on the 6.5.30 PROM reading and on `vga.a`.
- Which of the two `GB_TILE_CONFIG` writes matters is **unknown**.
- The base-release (`eoe_6522m`) `fglrx.o` was not read beyond its `fglrx_intr` size, so the claims above are for the patch build
  only.
