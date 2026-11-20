# R300 kernel interfaces in the IRIX 6.5.22 Onyx4 patch: what vga.a does with the card, what gfxs.a registers, and the ioctls and maps exposed

What the console driver `vga.a`, the graphics framework `gfxs.a` and the FireGL driver `fglrx.o` of patch SG0005448 do with and
for the card, and the kernel interface the X server and the DRI use. Sources, grades and method are in
[r300-kernel-attach.md](r300-kernel-attach.md#objects-read-and-how). It extends
[the 6.5.30 readings of the same objects](kernel-attach.md#early-console-and-the-x86-emulator) and
[the DRM routine entries](kernel-drm-functions.md) and states only what differs or what they did not collect.

## vga.a: the early console and the card

**Established** unless graded otherwise; call orders are from the relocations of the patch's `vga.a(vga_init.o)`.

- **What it registers.** `vga_reg` (0x470) registers six PCI IDs under the prefix `vga_` (1002:4e44, 4e47, 4e4b, 4e46, 4e44,
  and 5245, the same table as 6.5.30). Four of the IDs are also in the FireGL driver's table, so the function is offered to both prefixes; which one the
  connection-point list calls first was not determined (**unknown**). `vga_attach` (0x574) is the PCI-attach path; `vga_earlyinit` (0x0) runs before PCI attach.
- **vga_earlyinit** (before the PCI layer attaches drivers) per pipe, in order: `find_vga_pipe` from the pipe list;
  `htp_register_board` (register a text-port console board); `vga_find_tport_pipe`; `hub_setup_prb(nasid, widget, 3, 2)`;
  `vga_map_board_regions`; `pcibr_disable_mst_timeout`; `vga_init_board`; `pcibr_enable_mst_timeout`. The bridge's master timeout is off
  while the option ROM's init runs in the emulator (**inferred** reason: the ROM's first accesses may stall the bus). `vga_attach` has the same
  calls, preceded by the connection-point and BAR lookup and followed by device nodes and `vga_mk_tport_ctl_alias`.
- **vga_map_board_regions** (0x136c) (**established**): reads the expansion ROM BAR (0x30), writes all ones, reads the size back,
  restores it with bit 0 set and maps the ROM; `vga_shadow_bios` (0x1018) accepts it only when bytes 0 and 1 are 0x55, 0xaa (or the
  word-swapped pair) and copies it; picks the frame-buffer BAR with `vga_find_lfb_bar`, maps it, and calls
  `vga_change_big_window(board, 1)` (0x1a90), which sets Control bit 22 of the bridge (the 64-bit register at 0x20, or the word at
  0x24 on the older bridges); writes **BAR 1 (offset 0x14) = 0x400** when the card left it at 0; maps the legacy I/O window
  and the 0xa0000 to 0xbffff memory window. These are the only configuration writes in the object. The command register is **not**
  written here: the bridge already set bits 0, 1 and 2 at its own attach ([r300-kernel-attach.md](r300-kernel-attach.md#how-the-card-is-found)).
- **vga_init_board** (0x11d0) (**established**): `xf86InitInt10` builds the x86 context, `xf86ExecX86int10` runs the ROM's init
  entry, `vga_enable_fb` (0xfc4) points the bridge at legacy I/O (`vga_setbridge_to_legacy_io`) and writes the byte 6 to port 0x3ce and
  the byte 6 to port 0x3cf (the VGA graphics controller's index and data ports; index 6 is the miscellaneous register, **software
  expectation**), and, when the early-console flag is set, `vga_set_vesa_mode`. It stores the mode 0x107 (decimal 263), width
  1280 (0x500), height 1024 (0x400) and a depth word 1 into the board record at +0xf8, +0xfc, +0x100 and +0x104 first. The mode is the
  **same for every pipe in the kernel**; the IP35 PROM picks 0x107 or 0x105 by slot ([ip35-prom-graphics.md](../firmware/ip35-prom-graphics.md)).
- <a id="vga_set_vesa_mode-and-the-failure-rule"></a>**vga_set_vesa_mode and the failure rule** (0xf10) (**established**):
  AX = 0x4f02 with BX = 0x107 (`int 0x10` in the emulator); **if AL is not 0x4f it returns 0 at once**; otherwise AX = 0x4f03 and it
  returns the BX the second call leaves (masked to 16 bits). `vga_init_board` treats **0 as failure**: it logs `vga[%d] VESA mode
  switch failed` with the board and mode and returns 1. So in the kernel the message fires for a bad AL after 4f02 **and** for a
  zero BX after 4f03, and BX is never compared with 0x107. The IP35 PROM differs: a bad AL after 4f02 only prints a "not supported"
  note and the PROM carries on; only a zero BX after 4f03 fails it. A ROM stub for both must answer 4f02 with AL = 0x4f and 4f03 with
  non-zero BX.
- **Text port** (`vga_tport.o`, **established**, whole object): `vga_tpinit` (0x4a4) copies the board's stride and height words
  into a 24-byte state, clears the colour and opens the port; the drawing routines write one byte per pixel through the frame-buffer
  window after switching the bridge's Device register to the LFB value, and the palette routine writes VGA DAC ports (0x3c6 = 0xff,
  index at 0x3c8, three 6-bit values at 0x3c9, each the 8-bit component shifted right 2) through the legacy I/O window. Unchanged in
  structure from [the 6.5.30 entries](kernel-attach.md#the-console-text-port-routines-vgaavga_tporto).
  The Device(slot) overwrites are the ones in [r300-kernel-dma.md](r300-kernel-dma.md#pio-windows-bars-and-devicen).
- `vga_check_for_pic` (0x12c0) returns 1 for a PIC part (0xd102 or 0xd112, manufacturer 0x24), 0 for an XBridge (0xd002) and -1 for
  anything else: the card's parent must be one of those two bridge families.

## gfxs.a: the pipe list and the graphics framework

`gfxs.a` has four members, `klconfig.o`, `gfx.o`, `gfx_flow.o` and `gfx_debug.o` (no code):

- **klconfig.o**: the PROM's pipe list, as in [the 6.5.30 reading](kernel-attach.md#the-pipe-list-gfxsaklconfigo) (same routine sizes and
  predicates; `find_vga_pipe` still keys on the table magic 0x58464552 and the node's class-0x70 boards). The bus-kind byte decides the
  bus address: +0x800000 when it is 1.
- **gfx.o**: IRIX's generic graphics device. `GfxRegisterBoard` (0xa64) is what `fglrx_init` calls to enter a board in the framework
  (it adds the hardware-graph edge with `GfxAddHwgraphEdge` and a table slot); `gfxopen`/`gfxclose`, `gfxioctl`, `gfxmap`, a graphics
  thread and group table (`gthread_*`, `gfx_group_*`), the resource manager hooks (`RRM_*`) and a streams message channel for
  graphics managers (`sendMsg`, `GfxMessage`) make up the rest. None of it touches a card register.
- **gfx_flow.o**: credit flow control for graphics-to-hub traffic (`gfx_flow_alloc`, `_credit_total_get`, `_credit_count_get`,
  `_attach_me`, `install_gfxintr` for a high-water interrupt). It is the hub-side companion of `hub_setup_prb`'s credit count of 3;
  the R300 driver does not call it.

### The generic graphics ioctls (`gfxioctl`, gfx.o 0x2b94, 2004 bytes)

The device number's low 17 bits index the open-board table; a missing board gives 19, a caller that is not an attached graphics
thread gives 13. Commands below 1000 are:

| Cmd | Effect (established) |
|---|---|
| 0x65 | return the number of registered boards |
| 0x66 | read an 0x18-byte block (a board index and a size) and call that board's *get info* operation; 19 for a bad index |
| 0x67, 0x70 | read a 0x10-byte block, attach this open to the board it names and call that board's attach operation (0x67 refuses a second attach with 16) |
| 0x68 | detach (`GfxDetach`); refuses with 16 unless the thread group holds the only reference |
| 0x69 | return whether the named board has a manager attached |
| 0x6a, 0x6b | under the board lock, call the board's operation at +0x18 or +0x28 (swap-out and swap-in style context switch); 0x6a also unmaps the open |
| 0x6c | read a 0x28-byte download block and call the board's operation at +0x20 |
| 0x6d | no-op, returns 0 |
| 0x6e | take the board lock, wait until no other holder, call the operation at +0x60 with (gfx, 0, -1) and mark the open as a manager |
| 0x6f | copy 16 bytes from the caller into the manager record |
| 0x71 | needs privilege; sets a flag on the open |

Commands 1000 to 9999 go to `RRM_Dispatch` (the resource manager); 10000 and up go to the board's own ioctl operation (+0xc8).
Others log and return 22. The roles in the right column are **inferred** from the operation slots they call; the numbers and the
call structure are established.

## fglrx.o: the kernel interface for the X server and the DRI

### Character device and entry points

`fglrx_attach` creates the character device `fglrx` (mode 0666) under the card's hardware-graph vertex and `hint.fglrx<n>` beside it
(**established**). The device number's bits 26 to 18 select the board (a zero board field is rejected with 19). `fglrx_ioctl`
(0x3714, 1296 bytes) dispatches in this order:

1. **Private commands 0x66670000 + n, n < 30**, through the 30-entry table `FglrxPrivateFns` (`.data` +0x148):

   | n | Handler |
   |---|---|
   | 0, 1, 2 | `fglrx_drm_map`, `fglrx_drm_unmap`, `fglrx_give_up_privdev` |
   | 3 | `fglrx_swap_ready` |
   | 4 | `fglrx_dma_flush` (reads 16 bytes, issues a `sync`, returns 0: no hardware effect) |
   | 10 (0xa) | `fglrx_is_brdmanager` (28-byte block: records the board-manager data in the record; this build does not write any register) |
   | 11, 12 | `fglrx_compositor_reg_acc`, `fglrx_compositor_setnic` |
   | 13 (0xd), 14 (0xe) | `fglrx_get_vsync_cnt`, `fglrx_wait_vsync` (enable `GEN_INT_CNTL` bit 0, see [the interrupt page](r300-kernel-interrupts.md)) |
   | 15 (0xf) | `fglrx_swapbuf_stat` |
   | 20 to 28 | the hyperpipe set: `fglrx_hp_get_topology`, `_get_config`, `_config`, `_destroy_config`, `_bind`, `_unbind`, `_qry_attrib`, `_qry_bestattrib`, `_set_attrib` |
   | 5 to 9, 16 to 19, 29 | `fglrx_invalid_ioctl` |

   **Established**: the table was read from the object's relocations. The 6.5.22 X module issues 0x6667000a, 0x6667000b and
   0x6667000c.
2. **7777** (0x1e61) calls `fglrx_test_ioctl`. **101** returns the total count of boards in the table, **102** copies out the 184-byte
   board identity block (record +224), **105** copies out one board's table word by index (19 when the index is out of range).
3. **0x64nn** (bits 15 to 8 equal to 100) calls `firegl_ioctl` (0xf47c), the DRM-style table below.
4. **Configuration space**: a command with bit 30 set reads (bits 23:16) bytes at offset (bits 15:0) with `pciio_config_get`; bit 31
   writes with `pciio_config_set`. This lets user space reach the card's PCI configuration registers directly (**established**).

### The 0x64nn table (`firegl_ioctl`)

101 slots of 16 bytes (handler, an "authenticated client required" word and a "privilege required" word); a slot of 0 is rejected
with -22. **All 42 named handlers sit at the same numbers as the 6.5.30 table** ([ioctls inventory](../../generated/inventory/ioctls.tsv)); the
seven handlers that table lacks names for are `firegl_version` (0x00), `firegl_kernel_info` (0x50), `firegl_verify_area` (0x51),
`firegl_query_hw_caps` (0x54), `firegl_modify_ldt` (0x55), `firegl_set_block_mode` (0x5a) and `firegl_enable_stereo` (0x62), all
**established** by the relocation at the slot (the 6.5.30 inventory lists only the named ones; whether they exist there is **unknown**). Calls
that carry a user pointer use `copyin`/`copyout`. The ones that bear on the hardware are:

| Cmd | Handler | Hardware-visible effect |
|---|---|---|
| 0x53 | `firegl_cp_init` | validates the ring state, ring and buffer maps; no register write ([r300-kernel-dma.md](r300-kernel-dma.md#firegl_cp_init-and-indirect-buffers)) |
| 0x5d | `firegl_install_irq` | enables vsync, 200 ms wait; does not connect a handler ([interrupts](r300-kernel-interrupts.md)) |
| 0x5c | `firegl_wait_for_vertical_retrace` | re-arms the vsync source |
| 0x61 | `firegl_sync_dacs` | clears bit 25 of `CRTC_GEN_CNTL` (0x50) and `CRTC2_GEN_CNTL` (0x3f8), then restores both to their read values, resynchronising the two display controllers |
| 0x64 | `firegl_cp_resume` | log stub in this build |
| 0x4b, 0x4c | `firegl_lock_memory`, `firegl_unlock_memory` | by name, pins and unpins user pages (**inferred**; body not read here) |

Map, buffer, mutex, context, texture, authentication and lock handlers are in [kernel-drm-functions.md](kernel-drm-functions.md); this
release's numbers match its inventory.

### mmap keys (`fglrx_map`, 0x103cb4 in the Ghidra listing, 0x3c24 in the object)

`fglrx_map` maps by a key in the file offset. **Established** (read in full): 0x80100000 the card's configuration window (record +528),
0x80200000 BAR 0 (record +632, +640, the frame buffer), 0x80300000 BAR 1 (+608, +616, the I/O BAR), 0x80400000 BAR 2 (+656, +664, the
register file), 0x80500000 the copied expansion ROM (+552, +568), 0x80600000 the legacy I/O window (+584, +592), 0x80700000 the legacy
memory window (+680, +688). Any other offset is passed on by 16 KB page number to the DRM map path (**inferred**: the DMA buffers and maps). Requests are
rounded up to 16 KB.

## Gaps

- The role of each `gfxioctl` operation slot is inferred from the slot offset only; the board operations table of `fglrx.o` was not
  decoded slot by slot.
- Whether the X module's other users (the DRI and GLX objects, `libGLcore`) issue the interrupt ioctls was not checked.
