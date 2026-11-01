# Image-sync driver: one entry per routine

`usr/cpu/sysgen/IP35boot/is1.o` is the kernel driver for the image-sync option (see [the image-sync overview](kernel-attach.md#image-sync-driver)). It is an unstripped 64-bit relocatable object with DWARF names. Addresses are `.text` offsets in that object; calls go through relocations, so a callee is named from the relocation or, for a call to another routine of this object, from the address that the `.text` relocation names. "Board" means the driver's per-board record, "n" its index in `is1_boards`, and offsets are given in hex with the decimal value in brackets where the code uses decimal. `.data` offsets: `is1_devids` 0x0, `is1_showconfig` 0x14, `is1_numboards` 0x2c, `is1_resync_inprogress` 0x38, `is1_resync_pending` 0x3c, `is1_pipes` 0x40, `is1_boards` 0x48; the word at 0x30 is the pointer to the in-use table (named by the assertion text `is1_binuse`) and the static word at 0x10 is unnamed. `.bss`: `is1_resync_lock` 0x0, `is1_resync_sv` 0x10, `is1_hsync_discovery_lock` 0x18. Unlabelled static routines are named by address. Register offsets passed to `FGLRXReadRegister` and `FGLRXWriteRegister` are offsets in the FireGL card's register window; 0x50 and 0x3f8 are `CRTC_GEN_CNTL` and `CRTC2_GEN_CNTL`, 0x210 and 0x310 are `CRTC_VLINE_CRNT_VLINE` and `CRTC2_VLINE_CRNT_VLINE` in the public `radeon_reg.h`. Labels follow `AGENTS.md` section 5.

- `is1_attach` (`is1.o`, address 0xd04, 2324 bytes):
  **established.** The whole routine is read. It binds one probed image-sync card to a board record, maps its registers and creates its device node and interrupt. It takes the PCI device vertex in a0 and returns 0 on success, 6 when no board slot is free and 5 after any logged failure.
  Topology: `pciio_info_get`, `pciio_info_master_get`, `hwgraph_connectpt_get` and `xwidget_info_chk`; a zero check climbs one more connection point (0x12d4). It takes the widget id with `xwidget_info_get` and `xwidget_info_id_get` and the node with `master_node_get`, reads a halfword NASID from a 256-byte table indexed by the node (**inferred** to be the imported `compact_to_nasid_node`) and calls `checkBoardPointers` (address 0x8).
  Slot: it walks the use table, atomically setting word i to 1 with `ll`/`sc` until it finds a word whose old value was zero. No free word below `GfxBoardLimit` returns 6 without a message; a limit of zero also returns 6.
  Setup: `checkBoardPointer(i, node)` (address 0x334), `is1_dbg_attach(board)`, then the static routine at 0xc28 (`is1_clear`, which zeroes the 64-entry tables at board +0x250, +0x350 and sets -1 in those at +0x450, and resets the scalar fields).
  Identity: through `pciio_config_get` it reads configuration offsets 0 (2 bytes), 2 (2), 8 (1), 0x2e (2) and 0x2c (2). Each result is stored in the delay slot of the next call: vendor at board +0x50 (80), device at +0x52, revision at +0x54, subsystem ID at +0x58 and subsystem vendor at +0x56. Bits 7:6 of the revision go to the byte at +0x55. The NASID low byte goes to +0x4c, the bus, slot and function numbers (`pciio_info_bus_get`, `_slot_get`, `_function_get`) to bytes +0x4d, +0x4e and +0x4f, the master node halfword to +0x28, and the four bytes +0x4c to +0x4f are packed as nasid << 24 | bus << 16 | slot << 8 | function and stored as a 32-bit word at board +0x48 (the `sw` at 0x11fc).
  Type: the byte at +0x55 selects three function pointers stored at board +0x30, +0x38 and +0x40. Value 0 stores `is1_assemble_control`, `is1_assemble_video_format` and `is1_update_swap_sample`; value 1 stores `is2_assemble_control`, `is2_assemble_video_format` and `is2_update_swap_sample`; any other value logs "ImageSync[%d] unknown type: %d" through `printf` (the message names IS1 as the fallback) and stores the IS1 trio. The routines are listed by their entries in the inventory.
  Registers: `pciio_pio_addr(dev, desc, 7, 0, 256, &board +0xa0, 0)` with the descriptor from the doubleword at +0x10; the result goes to +0xa8. The length 256 is stored at +0xb0. A zero result logs "ISX%d: cannot get to config space" and takes the failure exit. It then reads BAR 0's size with `pciio_info_bar_size_get(info, 0)` into +0xc8 and maps it with `pciio_pio_addr(dev, desc, 8, 0, size, &board +0xb8, 8192)` into +0xc0; a zero result logs "reg%d: cannot map mem(0) space" and takes the failure exit. The doubleword at board +0xc0 is the register block that `is1_intr` and `is1_hsync_discovery` reach through.
  Node and interrupt: `spinlock_init(board +0x100, "isx_lock")`, the device vertex stored at +4, `hwgraph_char_device_add(dev, "is1", "is1_", &board +8)` (a nonzero result logs "%s[%d]: cannot add char_dev vertex" and takes the failure exit), `hwgraph_fastinfo_set(vertex, board)`, `device_desc_dup` into +0x10, `device_desc_flags_get` and `device_desc_flags_set` with bit 2 ORed in, `device_desc_intr_swlevel_set(desc, 0)`, `device_desc_intr_name_set(desc, "Image Sync")` and `device_desc_default_set`. `pciio_intr_alloc(dev, desc, 1, vertex)` goes to +0xd0, and `hwgraph_inventory_add(vertex, 7, 27, word at +0x20, n, revision byte)` stores the revision as a word at +0x24. `pciio_error_register(dev, is1_error_handler, 0)` follows, then the static routine at 0xcc4 (`is1_clear_regs`: ORs 0x3f into the word at +0xd8, writes it to register-block offsets 0x34 and 0x30, reads offset 0x2c twice and zeroes offsets 0x1c and 0x20), then `is1_attach_init(board)` and `pciio_intr_connect(handle, is1_intr, board, 0)`. A nonzero connect result logs "IS1: Failed to connect to hardware interrupt line" and takes the failure exit; zero returns 0.
  Failure exit (0x1224): `freeBoardPointer(n)`, zero in `is1_boards[n]` and in word n of the use table, return 5.

- `is1_detach` (`is1.o`, address 0x1618, 604 bytes):
  **established.** The whole routine is read. It takes the PCI device vertex in a0 and returns 0 on success and 6 when the `is1` node is missing. It calls `hwgraph_traverse(dev, "is1", &vertex)`; a nonzero result logs "is1_detach can't traverse to 'is1'" through `printf` and returns 6. Otherwise `hwgraph_fastinfo_get(vertex)` gives the board and the word at board +0x1c gives n; if `is1_boards[n]` is not that board it calls `assfail` with the text "is1_boards[brd] == bdata" and line 716 and goes on. When the interrupt handle at board +0xd0 is nonzero it calls `pciio_intr_disconnect` and `pciio_intr_free` and zeroes the handle. It then calls `hwgraph_inventory_remove(vertex = word at +8, 7, 27, word at +0x20, word at +0x1c, word at +0x24)`, `is1_dbg_detach(board)`, `hwgraph_edge_remove(dev, "is1", 0)` and `hwgraph_vertex_destroy(word at +8)`, stores -1 in the word at +8, calls `freeBoardPointer(n)` and zeroes `is1_boards[n]` and word n of the use table. It returns 0.

- `is1_open` (`is1.o`, address 0x1a7c, 620 bytes):
  **established.** The whole routine is read. It records the opening process in the board's table of 64 process slots and returns 0, or 12 when all 64 are in use. It takes a pointer to the device number in a0, looks the board up with `hwgraph_fastinfo_get`, and takes the process id with `curproc` and `proc_pid`, calling the 8-byte stub `is1_dbg_reset` with it. A null board calls `assfail` with the text "bdata != NULL" and line 815 and then goes on to use the null pointer.
  With `mutex_spinlock(board +0x100)` held it scans the words at board +0x350 for a zero, stores the process id in the first one and, with all 64 occupied, unlocks and returns 12. Otherwise it increments the word at +0x104 (stored in the delay slot of the unlock call), atomically ORs 1 into the word at +0xdc, and, when that bit was clear, atomically adds 1 to the static word at `.data` +0x10. It then calls `add_exit_callback(pid, 0, is1_exit, board)`, so `is1_exit` runs when the process ends, and returns 0.

- `is1_hsync_discovery` (`is1.o`, address 0x2df4, 944 bytes):
  **established.** The whole routine is read. It finds which graphics pipe supplies horizontal sync by enabling the pipes one at a time and watching a status bit of the image-sync block. It takes the board in a0 and returns 0 when it found a master (or already had one) and 19 when no slot gave sync, which includes the case where no slot has a valid handle.
  It takes `is1_hsync_discovery_lock` with `mutex_lock(.., 25)`. A non-negative master index at board +0x9c (156) skips everything: it unlocks and returns 0.
  Pass 1, for each of 64 slots whose handle at board +0x450 + 4i is non-negative: reads register 0x50 into board +0x550 + 4i and register 0x3f8 into +0x650 + 4i, writes both back ANDed with 0xfdfeffff (clearing bits 25 and 16), then reads registers 0x210 and 0x310 into +0x750 + 4i and +0x850 + 4i. There is a `sync` after each slot.
  Pass 2, for each such slot i in order: stores 0x2a at offset 0x74 of the register block (board +0xc0) and at board +0x17c, writes the saved 0x50 and 0x3f8 values back (re-enabling that pipe), waits 2000 microseconds with `us_delay`, reads offset 0x74, clears its bit 1 and stores it back to both places. If bit 0 of the value read is set it stores i at board +0x9c and stops scanning; otherwise it goes on to the next slot, and the pipes already re-enabled stay enabled.
  After a hit the saved 0x50 and 0x3f8 values of every later slot with a valid handle are written back. It then unlocks. With no hit it logs "ImageSync[%d] no hsync detected from gfx, check DB9 cabling" with `printf` and returns 19. With a hit and a nonzero `is1_showconfig` it logs "ImageSync[%d] hsync master is pipe %d" with `cmn_err` at level 5, giving the board number and the handle of the master slot, and returns 0.
  What bit 0 and the value 0x2a mean in the image-sync block is not read here; that they detect incoming sync is **inferred** from the messages.

- `is1_sync_pipes_request` (`is1.o`, address 0x31a4, 924 bytes):
  **established.** The whole routine is read. It records that a pipe wants to be synchronised and starts a resync of the board when one is allowed. It takes the board in a0 and an index into `is1_pipes` in a1 (32-byte records), and returns 0, or 4 when waiting for another board's resync is interrupted.
  1. It atomically ORs 1 shifted by the word at pipe record +12 into the doubleword at board +0x80.
  2. If the master index at board +0x9c is negative, or the word at board +0xe0 (224) is zero, it returns 0.
  3. It atomically ORs the bit for this board (word at +0x1c) into `is1_resync_pending`; if the bit was already set it returns 0.
  4. When `is1_numboards` is 2 or more it loops: `mutex_lock(is1_resync_lock, 25)`; with `is1_resync_inprogress` zero it leaves the loop. Otherwise it calls `sv_timedwait_sig` on `is1_resync_sv` (flag argument 30, `is1_resync_lock` as the lock) with a block at sp+0 whose first word is 12 and whose doubleword at sp+8 is 0, and a result block at sp+16 (a word at sp+16 and a doubleword at sp+24, both zeroed first). A zero result loops again. For a nonzero result, if both the word at sp+16 and the doubleword at sp+24 are zero it logs "ISX%d wait for resync %d timed out!" (board number, in-progress value minus 1), ANDs `is1_resync_pending` with the complement of that in-progress-minus-1 number itself (a plain number, not a one-bit mask), zeroes `is1_resync_inprogress` and loops; if either is nonzero it logs "ISX%d wait for resync interrupted", clears this board's pending bit and returns 4.
     On leaving the loop it picks the board that owns the pipe: when the word at pipe record +4 is positive it is `is1_boards[word - 1]`, otherwise this board. It stores this board's number in that board's word +0xf4, stores this board's number plus 1 in `is1_resync_inprogress`, and unlocks.
  5. With `mutex_spinlock(board +0x100)` held, if the word at board +0xec is zero it stores 1 there, 0 at +0xe8 and 7 at +0xf8. If bit 5 of the owner's word at +0xd8 is set it clears that bit, writes 0x3f to offsets 0x34 and 0x30 of the owner's register block, reads offset 0x2c twice and writes the changed mask to 0x30 and 0x34. It then unlocks and returns 0; with +0xec already nonzero it only unlocks and returns 0.

- `is1_intr` (`is1.o`, address 0x4158, 856 bytes):
  **established.** The whole routine is read. It is the interrupt handler that `is1_attach` connects, and it steps a resync along one pipe per interrupt. It takes the board in a0 and returns nothing. What the roles of the fields are is **inferred**; the stores and tests are read.
  Entry: the owner board O is `is1_boards[word at board +0xf4]`. It adds 1 to the word at board +0xfc, writes 0x3f to offset 0x34 of the register block (the doubleword at board +0xc0) and to the word at board +0x13c, and reads offset 0x2c. Bit 5 clear goes to the end.
  Bit 5 set: it adds 1 to the word at board +0xf0. If the word at O +0xec is zero it goes to the master check below. Otherwise it reads the countdown, the word at O +0xf8.
  Countdown above zero: it reads offset 0x60 of O's register block. Low three bits equal to 7 set bit 1 of the word at O +0xdc and store 0 in the countdown; any other value stores the countdown minus 1. Either way it goes to the end. The call that logs "ISX%d attempt to pll lock failed" (0x4494) is reached only when the stored value is negative, which the test that the countdown is above zero rules out.
  Countdown zero or less: an odd count in board +0xf0 goes to the end. With an even count it takes O's current slot (word at O +0xe8) and, if the slot and its handle at O +0x450 + 4 x slot are non-negative, runs these steps in order: write register 0x50 with the saved value (O +0x550 + 4 x slot) ANDed with 0xfdfeffff; when bit 25 of the saved 0x3f8 value (O +0x650 + 4 x slot) is set, write register 0x3f8 with it ANDed with 0xfdfeffff; `sync`; store the word at O +0x5c ORed with 0x200000 at offset 0x24 of O's register block and at O +0x12c; `sync`; write back the saved 0x50 value and, when it was masked, the saved 0x3f8 value; write registers 0x210 and 0x310 each with the word at O +0x750 + 4 x slot ANDed with 0x7ff (both use that one word, not +0x850); `sync`; atomically clear the slot's bit in the doubleword at O +0x80 and set it in the doubleword at O +0x88. A negative slot or handle skips the register writes and goes to the bit update with the shift read from stack word 24(sp), which only the other path stores. It then calls `is1_check_resync_done(O, board)` and goes on to the master check.
  Master check (0x4388): if the word at O +0x9c is non-negative it calls `fglrx_intr_list(64, O +0x450)`; a negative one goes to the end.
  End (0x4260): writes the word at board +0xd8 to offsets 0x30 and 0x34 of the register block, in that order, and returns.

- `is1_check_resync_done` (`is1.o`, address 0x3e94, 708 bytes):
  **established.** The whole routine is read. It picks the next pipe that still needs resyncing, saves its display registers, or, when none is left, ends the resync. It takes the board in a0 and a second board in a1, and returns nothing.
  Under `mutex_spinlock(board +0x100)` it loops. With the pending-pipe mask at board +0x80 zero it ends the resync. Otherwise it picks a candidate: with a non-negative master index (word at +0x9c) whose bit is set in the mask, it atomically ORs the doubleword at +0x90 into the mask and takes the master; otherwise it takes the lowest set bit of the mask. If the candidate's handle (word at +0x450 + 4i) is negative it atomically clears that bit in the mask and picks again. For a valid candidate it stores the index at +0xe8, reads register 0x50 into +0x550 + 4i and register 0x3f8 into +0x650 + 4i (storing 0 there when bit 25 of the value is clear), unlocks, reads registers 0x210 and 0x310 into +0x750 + 4i and +0x850 + 4i, and returns.
  Ending the resync: it stores 0 in the doublewords +0x88 and the word +0xec, atomically clears this board's bit in `is1_resync_pending`, stores the word at a1 +0x1c in a1 +0xf4, stores 0 in `is1_resync_inprogress`, unlocks, and, when `is1_numboards` is 2 or more, calls `sv_signal(is1_resync_sv)`.

- `is1_ioctl_getargs` (`is1.o`, address 0x2058, 292 bytes):
  **established.** The whole routine is read. It fetches an ioctl's request block and finds the pipe record it names. Only `is1_ioctl` calls it. It takes the board in a0, a kernel buffer in a1, the ioctl number in a2, the user pointer in a3 and a pointer for the result in a4, and returns 0 or an error number.
  It calls `copyin(a3, a1, 24)`; a negative result is returned unchanged. The first word of the buffer is the pipe number. A pipe number above `GfxBoardLimit` returns error number 22 (the compare is `limit < number`, so a number equal to the limit passes). Otherwise it stores the address of record `is1_pipes[number]` (32-byte records, the pointer at `.data` +0x40) through a4. For ioctl 10002 it returns 0 here. For every other ioctl it returns 22 when the word at board +0xe4 (228) is zero, or when the first word of the pipe record minus 1 is not this board's number (word +0x1c), and otherwise compares the pipe number with the word at board +0x450 + 4 x (word at pipe record +12): equal returns 0, different returns 22.

- `is1_ioctl` (`is1.o`, address 0x217c, 2940 bytes):
  **inferred.** The entry, the exit and the dispatch are read in full, and six of the eleven request bodies are traced; the other five are listed only by the routines they call, which is why the label is inferred. It takes the device in a0, the request number in a1, the user pointer in a2 and, as its sixth argument, a pointer through which it stores -1 when the result is nonzero. It looks the board up with `hwgraph_fastinfo_get`; a null board calls `assfail` (text "bdata != NULL", line 1030) and goes on. Request numbers 10001 to 10011 select a handler through the table of eleven doublewords at `.rodata` +0x5c0 (handler addresses 0x224c, 0x2788, 0x26d0, 0x25e0, 0x2594, 0x2510, 0x2468, 0x23d8, 0x2374, 0x22e4 and 0x2284 in that order). Any other number leaves the result 0. Each handler leaves its result in s1, which is the return value.
  The strings at `.rodata` 0x828 to 0x8e0 name eleven requests in this order: IS1_GETBOARDINFO, IS1_ADD_PIPE, IS1_REMOVE_PIPE, IS1_UPDATE_FORMAT, IS1_UPDATE_SYNC, IS1_CHECK_SYNC, IS1_UNBLANK, IS1_HSYNC_DISCOVERY, IS1_SYNC_PIPES, IS1_BIND_PIPE and IS1_RELEASE_SWAPREADY. Pairing them with 10001 to 10011 is **inferred** from the order and from the calls each body makes.
  10001 (read in full): copies in 4 bytes from the user pointer (a negative result sets error number 14), then copies out the word (board number at +0x1c) ORed with ((byte at board +0x55) + 1) shifted left 8; the result is 0.
  10009 (read in full): `is1_ioctl_getargs`, then `is1_sync_pipes_request(board, pipe number)`; its result (0 or 4) is the result.
  10011 (read in full): `is1_ioctl_getargs`, then `is1_release_swapready(pipe number)`; the result is 0.
  10006 (read in full): `is1_ioctl_getargs`, then reads the word at offset 0x60 of the register block, stores bit 2 of it in the request's sixth word (stack +20) and copies the 24-byte request back out; the result is 0.
  10007 (read in full): `is1_ioctl_getargs`, then a mask of 1 shifted left by the pipe record's slot word (+12). With the request's sixth word zero it atomically clears the mask in the doublewords at board +0x90 and +0x80. Otherwise it atomically sets the mask in the doubleword at board +0x90; when the sixth word is not 2 and the bit was already set it stops, else it calls `is1_sync_pipes_request(board, pipe number)`. The result is 0.
  10010 (read in full): `is1_ioctl_getargs`, then the doubleword at pipe record +24 as a mask; a zero mask ends with result 0. With the request's sixth word zero it calls `is1_unbind(pipe number)`; otherwise it atomically sets the mask in the doublewords at board +0x70 and +0x78. Both then call the function pointer at board +0x40 (the update-swap-sample routine chosen in `is1_attach`) with the board.
  Bodies listed by their calls only. 10005: `is1_ioctl_getargs`, `is1_update_sync_source`, then the register read and copy-out of 10006. 10004: `copyin` of 200 bytes to board +0x188 (the size is the constant 200), `is1_update_format`, and `cmn_err` at level 5 with the text "ImageSync[%d] (Pipe %d) %s". 10003: `is1_ioctl_getargs`, `is1_remove_pipe` (address 0x1874) and `is1_sync_pipes_request`. 10002: `is1_ioctl_getargs`, `mutex_spinlock` and `mutex_spinunlock` on board +0x100, `mutex_lock` and `mutex_unlock` on a `.bss` lock, `compare_and_swap_int`, `curproc`, `proc_pid`, `FGLRXReadRegister` (register 0x50) and `is1_sync_pipes_request`. 10008: `mutex_spinlock`, `is1_hsync_discovery`, `mutex_spinunlock` and `is1_sync_pipes_request`.

- `freeBoardPointer` (`is1.o`, address 0x510, 512 bytes):
  **established.** It releases one board record and its table slots after six assertion checks. All 128 words were decoded, including the six assertion tails, which jump back into the main path. `is1_attach` (failure exit) and `is1_detach` call it. It takes the board index in a0, kept in s3, and sets no return value.
  Checks, each a call to `assfail` that returns into the main path, so a failed check does not leave the routine: the index is below `GfxBoardLimit + 1` (the compare is `limit < index`; text "brd < (GfxBoardLimit + 1)", line 234, call 0x684); `is1_boards` is not null (line 235, 0x698); its slot for the index is not null (236, 0x6b0); the record's word at +0x1c equals the index (237, 0x6d0); `is1_binuse` is not null (238, 0x6e4); the index's `is1_binuse` entry is nonzero (239, 0x6f8).
  Main path: zero goes into the 4-byte `is1_binuse` entry (store at 0x5f0), `is1_numboards` (word at `.data` +0x2c) drops by 1, `kmem_free(record, 2384)` is called at 0x628 with the record pointer loaded in the call's delay slot, and zero goes into the 8-byte `is1_boards` slot in the delay slot of the return at 0x648.

- `is1_init` (`is1.o`, address 0x710, 504 bytes):
  **established.** It is the driver's start-up routine: it reads the optional `showconfig` kernel argument, initialises the resync locks and tables, and replays already-probed cards into the attach routine. Both ends were followed against the nine relocated calls. It takes no argument and returns the result of `pciio_iterate`, its only exit (0x900).
  Argument: `is_specified(arg_showconfig)` (0x74c); a nonzero result calls `atoi(arg_showconfig)` (0x774) and stores the answer in `is1_showconfig`, the word at `.data` +0x14 (store at 0x794).
  Helpers: the 8-byte routine at `.text` +0 (`jr ra` and a `nop`, carrying the DWARF name `fglrx_hpipe_init_idbg`; call at 0x7c4), then `is1_dbg_init` (0x7e8).
  Locks: zero is stored in `is1_memused` (`.data` +0x18, 0x844); `init_mutex(is1_resync_lock, 0, "is1_resync_lock", -1)` (0x848), `init_sv(is1_resync_sv, 0, "is1_resync_sv", 0)` (0x874, `.bss` +0x10) and `init_mutex(is1_hsync_discovery_lock, 0, "is1_hsync_discovery_lock", -1)` (0x890, `.bss` +0x18). Zero goes into `is1_resync_pending` (+0x3c) at 0x888 and into `is1_resync_inprogress` (+0x38) in the delay slot of the last `init_mutex` call (0x894).
  Tables and cards: `checkBoardPointers` (call at 0x8b8 to the routine at address 0x8), then `pciio_iterate("is1_", is1_reload_dev)` (0x8f0, handler address 0x908), whose handler forwards each device to `is1_attach`; `fglrx_init` uses the same pattern for cards that were found before the driver loaded.

- `checkBoardPointer` (`is1.o`, address 0x334, 476 bytes):
  **established.** It creates the 2384-byte record for one board index when none exists and fills its first fields. The 119 words were read against the four assertion tails and the allocation call. It takes the index in a0, kept in s3, and the node in a1, saved at sp+0; `is1_attach` is its only caller in the object. It sets no return value.
  Assertions, each followed by the normal path: `is1_boards` is not null (text "is1_boards", line 208, call 0x4b8), `is1_binuse` is not null (text "is1_binuse", 209, 0x4d0) and the index's `is1_binuse` entry is nonzero (text "is1_binuse[brd] != 0", 210, 0x4e8). A nonzero `is1_boards` slot returns with no store.
  Otherwise `kmem_zalloc_node_hint(2384, 1, node)` (0x3f4). A zero result calls `assfail` (text "bdata != NULL", line 215, 0x500) and the stores below still happen through the null pointer. In order: -1 at record +8 (0x408), -1 at +4 (0x40c), the index at +0x1c (0x414), then 32 consecutive words of 0xdadbebad from +0x108 to +0x187 (loop 0x428 to 0x448, three stores per pass), the record into `is1_boards[index]` (0x458) and `is1_numboards` raised by 1 (0x464).

- `checkBoardPointers` (`is1.o`, address 0x8, 468 bytes):
  **established.** It builds the three per-driver tables on first use: boards, in-use words and pipe records. It was decoded from all 117 words, with the assertion tails matched to their line numbers. `is1_init` and `is1_attach` call it. It takes no argument and sets no return value.
  A nonzero `is1_boards` (doubleword at `.data` +0x48) returns at once (0x44). Otherwise it calls the static allocator `is1_malloc(size, 0, 1, 1, name)` three times, so each table is zeroed and counted in `is1_memused`:
  1. `GfxBoardLimit << 3` bytes (call 0xbc) stored at +0x48 in the delay slot (0xcc); a zero result calls `assfail` with the text "is1_boards", line 134 (0x178).
  2. `is1_binuse`, the doubleword at +0x30: a nonzero value calls `assfail` ("is1_binuse == NULL", line 135, 0x18c). Then `GfxBoardLimit << 2` bytes (0x108) stored in the delay slot (0x114); a zero result calls `assfail` with "is1_binuse", line 142 (0x1a4).
  3. `is1_pipes`, the doubleword at +0x40: a nonzero value calls `assfail` ("is1_pipes == NULL", line 143, 0x1b8). Then `GfxBoardLimit << 5` bytes, 32 per pipe record (0x13c), stored in the delay slot (0x150); a zero result calls `assfail` with "is1_pipes", line 150 (0x1cc).
  Every `assfail` call returns into the next step, so the stored pointer can be null.

- `is1_close` (`is1.o`, address 0x1ce8, 468 bytes):
  **established.** It is the close entry point: it writes the board's mask word to the card, drops the caller's slots and, on the last close, resets the board's state. It was read through every branch, including the rare null-board tail. It takes the device in a0, looks the board up with `hwgraph_fastinfo_get` (0x1d08) and returns 0. The object has no call site for it.
  A null board calls `assfail` (text "bdata != NULL", line 857, 0x1eac) and goes on to use the null pointer.
  Mask word: the word at board +0xd8 is ORed with 0x3f and stored back. The value goes to register offset 0x30 (0x1d40), then `is1_exit(board)` is called (0x1d50) and the reloaded word goes to offset 0x34 in that call's delay slot.
  Last close: `mutex_spinlock(board +0x100)` (0x1d74). When the open count, the word at +0x104 that `is1_exit` lowers, is zero it calls `is1_close_swapready` (0x1e14), `is1_clear_regs` (0x1e34) and `is1_clear` (0x1e54) and clears bit 0 of the word at +0xdc. With a nonzero count it skips them.
  Both paths then call `mutex_spinunlock` (0x1da8) and atomically subtract 1 from the static word at `.data` +0x10 (`ll`/`sc` loop at 0x1ddc to 0x1dec) before returning.

- `is1_map` (`is1.o`, address 0x1ebc, 412 bytes):
  **established.** It maps the card's register window into a process: it checks the requested length against the window size, then calls `v_mapphys`. All 103 words were followed, including the extra address-space path. It takes the device in a0, the mapping handle in a1, the length in a3 and the protection flags in a4; the offset in a2 is never read. It returns 5, the `v_mapphys` result, or the result of the final indirect call. The object has no call site for it.
  A null board from `hwgraph_fastinfo_get` (0x1ee8) calls `assfail` (text "bdata != NULL", line 909, 0x2048) and goes on. With a7 the doubleword at board +0xc0 and the doubleword at +0xc8 as the window size, it rounds `size + (a7 & 0x3fff)` and the requested length up to 16384-byte pages. A rounded window shorter than the rounded length returns 5 (the `li v0,5` in the branch's delay slot at 0x1f2c).
  Otherwise `v_mapphys(handle, a7 & ~0x3fff, rounded length)` is called (0x1f54). A nonzero result, or flag bit 1 set, returns it. With bit 1 clear it calls `as_lookup_current` (0x1f98) into a block at sp+0 and `v_getaddr(handle)` (0x1fd8), builds a request block at sp+16 (the word 4 at +0, the flag byte at +8 and a zero word at +12) and calls the function at offset 144 of the table at offset 16 of the object at offset 32 of the doubleword `as_lookup_current` left at sp+0 (call 0x2000), with that object in a0 and then the doubleword it left at sp+8, the `v_getaddr` result, the rounded length, the request address and 0. Its result is returned. No relocation names that target.

- `is1_exit` (`is1.o`, address 0x1920, 348 bytes):
  **established.** It is the process-exit callback of the driver: it removes every pipe slot and the open record that belong to the exiting process. It was decoded from all 87 words, including the two 64-entry scans. It takes the board in a0 (kept in s1), is called from `is1_open` as the exit callback and from `is1_close`, and sets no return value.
  It gets the process id with `curproc` (0x1944) and `proc_pid` (0x196c) and takes `mutex_spinlock(board +0x100)` (0x199c).
  Scan 1, slots 0 to 63: where the word at board +0x250 + 4i equals the id it calls `is1_remove_pipe(board, word at +0x450 + 4i, i)` (call 0x19f0).
  Scan 2, slots 0 to 63: the first word at board +0x350 + 4i equal to the id is set to zero, the word at +0x104 drops by 1 and the scan stops.
  It ends with `mutex_spinunlock` (0x1a48).

- `freeBoardPointers` (`is1.o`, address 0x1dc, 344 bytes):
  **established.** It frees the three driver tables and clears the resync state and locks. All 86 words were checked against the relocations of the six calls. `is1_unload` calls it. It takes no argument and sets no return value.
  When `is1_boards` is nonzero it calls `is1_free(table, size)` three times: `is1_boards` with `GfxBoardLimit << 3` (0x268), `is1_binuse` with `<< 2` (0x284) and `is1_pipes` with `<< 5` (0x2a0). It stores zero in `is1_boards` between the first two calls (0x280), in `is1_binuse` between the last two (0x29c) and in `is1_pipes` after the last (0x2ac).
  Whether or not the tables existed it then stores zero in `is1_numboards` (+0x2c, 0x2e0), calls `mutex_unlock(is1_resync_lock)` (0x2e4) and `sv_destroy(is1_resync_sv)` (0x304), stores zero in `is1_resync_pending` (0x30c) and calls `mutex_unlock(is1_hsync_discovery_lock)` (0x314) with zero stored in `is1_resync_inprogress` in its delay slot (0x318). It calls `mutex_unlock` on both locks, not a destroy routine.

- `is1_close_swapready` (`is1.o`, address 0x3a1c, 300 bytes):
  **established.** It releases every pipe record bound to the board and, when it released any, copies the board's +0x70 mask into its +0x78 mask and writes 1 to register offset 0x1c. The three atomic loops and four exits were traced through all 75 words. `is1_close` is its only caller. It takes the board in a0 and sets no return value.
  The board's number plus one is compared with the first word of each of the `GfxBoardLimit` pipe records (32 bytes each, from the pointer at `.data` +0x40). A limit of zero or less returns at once. For each match it stores zero in the record's words at +0 and +4, then atomically clears the record's doubleword at +24 (as a mask) from the doubleword at board +0x70.
  When at least one record matched, bit 0 is atomically ORed into the word at board +0x68 (`ll`/`sc`, 0x3aa4). If the old value was nonzero it returns. If it was zero it ORs the doubleword at +0x70 into the doubleword at +0x78 (`lld`/`scd`, 0x3b24), writes 1 to register offset 0x1c and stores zero in the word at +0x68.

- `is1_read_pll` (`is1.o`, address 0x44b0, 288 bytes):
  **established.** It reads one indexed byte through the command register at offset 0x40 and polls for completion; the routine's name and its message text label it a PLL read. Every instruction was decoded; the two timeout tails print with `printf` (0x457c, 0x45c0). It takes the register block in a0, the index in a1 and a byte pointer in a2, and returns 0 or -1. The object has no call site for it.
  Step 1: if bit 0 of the word at offset 0x40 is set it re-reads the word up to 9999 times until the bit clears (loop 0x44dc to 0x44ec). A timeout prints "%s: reg 0x%x: busy timed out" with the text "is1_read_pll" and the index, and returns -1.
  Step 2: it stores ((index << 8) & 0xff00) | 2 at offset 0x40 (0x44f4).
  Step 3: it re-reads the word up to 9999 times until bit 2 is set (loop 0x450c to 0x451c). A timeout prints "%s: reg 0x%x: valid timed out" and returns -1.
  Step 4: with a2 nonzero it stores bits 23:16 of the word as one byte through a2 (0x4534); it then returns 0.

- `is1_update_sync_source` (`is1.o`, address 0x3bd8, 284 bytes):
  **established.** It applies a sync source to the image-sync block: it records the source, stores the two words that the board's type routines assemble in the board and the card, and asks for a resync of the master pipe. All 71 words were followed, including the message tail at 0x3c8c. `is1_ioctl`, `is1_update_format` and `is1_genlock_interrupt` call it. It takes the board in a0 and the source number in a1, and returns the result of `is1_sync_pipes_request` when the master index is nonnegative; with a negative index it leaves v0 as the last call set it.
  It stores a1 in the word at board +0x98 (0x3bd8). It calls the function pointer at board +0x30 (0x3bf8) and stores its result in the word at +0x5c and at register offset 0x24 (0x3c00, 0x3c04); it calls the pointer at +0x38 (0x3c0c) and stores that result in the word at +0x60 and at offset 0x28 (0x3c20, 0x3c2c). These are the routines `is1_attach` chooses by card type (`is1_assemble_control` and `is1_assemble_video_format`, or the `is2_` pair).
  When `is1_showconfig` is nonzero it calls `cmn_err(5, "ImageSync[%d] %s\n", board number at +0x1c, sync_types[word at +0x188])` (0x3ce4). `sync_types` is four 8-byte pointers at `.data` +0x50 to the strings "Locked to Internal Clock", "Genlocked to External Source", "Framelocked to External Source" and "illegal Sync Source"; the index is the word at +0x188, not a1.
  A nonnegative master index (word at +0x9c) then calls `is1_sync_pipes_request(board, word at +0x450 + 4 x index)` (0x3c70).

- `is1_update_format` (`is1.o`, address 0x3d78, 284 bytes):
  **established.** It programs a new video format into the image-sync block from the 200-byte request that `is1_ioctl` copied to board +0x188. All 71 words were followed, including the 100000-iteration busy wait. `is1_ioctl` is its caller. It takes the board in a0 and returns 0, or -1 when the busy bit never clears.
  The word at board +0x188 is copied to +0x98 (0x3d80). The word at +0x1f8 masked with 0x1fff and ORed with 0x4000 is stored at register offset 0x14 (0x3d9c). Bytes at +0x1e6 to +0x1e9 and +0x1ec are read before the wait.
  Wait: bit 0 of offset 0x40 is read up to 100000 times (0x3de8 to 0x3df8); a miss returns -1 after only the offset 0x14 store.
  Stores in order after the wait: offset 0x44 receives the bytes at +0x1e4, +0x1ea, +0x1eb and +0x1e5 as bits 7:0, 15:8, 23:16 and 31:24 (0x3e28); offset 0x48 receives the bytes at +0x1e6, +0x1e7, +0x1e8 and +0x1e9 in the same bit order (0x3e30); offset 0x4c receives the byte at +0x1ec (0x3e38); offset 0x40 receives 0 (0x3e44); offset 0x5c receives the word at +0x200 (0x3e54).
  It then calls `is1_update_sync_source(board, word at +0x188)` (0x3e5c) and the pointer at board +0x40 with the board (0x3e68), stores 1 in the word at +0xe0 (0x3e74) and returns 0.

- `is1_fire_swapready` (`is1.o`, address 0x35d8, 280 bytes):
  **established.** It clears a pipe's mask bits from the board's +0x78 mask and, in the cases listed below, runs the same set-and-copy sequence as `is1_release_swapready`. The four atomic loops and the six exit branches were traced through all 70 words. `is1_unbind` is its caller. It takes the pipe number in a0 and a flag in a1, and sets v0 to 1 on the kick path only.
  Setup: the owning board is `is1_boards[first word of the pipe record - 1]`, where the record is `is1_pipes[a0]` (32-byte records); a zero first word returns. The mask M is the record's doubleword at +24. M is atomically cleared from the doubleword at board +0x78 (`lld`/`scd`, 0x3628 to 0x3634) and the old value is kept at sp+0.
  Branches: it returns unless some bit of M was set in the old value and either the old value equals M exactly or a1 is nonzero. An old value of zero proceeds only with a1 nonzero and M zero.
  Kick: bit 0 is atomically ORed into the word at board +0x68 (0x3680 to 0x368c). An old nonzero value returns. Otherwise the doubleword at +0x70 is ORed into the doubleword at +0x78 (0x36c8 to 0x36d4), 1 is stored at register offset 0x1c (0x36e4, register block from the doubleword at +0xc0) and zero in the word at +0x68 (0x36ec).

- `is1_unbind` (`is1.o`, address 0x37a4, 276 bytes):
  **established.** It clears a pipe's mask bits from the board's +0x70 mask, makes an exit-callback call with 2 in a1 where `is1_register` passes 0 and, when every bit of the pipe's mask was set in the old +0x70 value, calls `is1_fire_swapready(pipe, 1)`. The 69 words were followed through the early returns and both callback cases. `is1_clear_swapready`, `is1_ioctl` and `is1_pipe_exit` call it. It takes the pipe number in a0 (kept in s2) and sets no return value.
  It returns at once when the first word of `is1_pipes[a0]` is zero or the doubleword at record +24 (the mask M) is zero. Otherwise the owner is `is1_boards[first word - 1]`. M is atomically cleared from the doubleword at owner +0x70 (0x3808 to 0x3814) and the old value is kept at sp+0.
  A nonzero word at record +16 (a process id) calls `add_exit_callback(id, 2, is1_pipe_exit, pipe number)` (0x385c) and the word is then zeroed (0x3864). `is1_register` makes the matching call with 0 in a1.
  If M was entirely set in the old value (old & M equals M) it calls `is1_fire_swapready(pipe number, 1)` (0x38a8). The record's first word and mask are left as they were.

- `is2_assemble_control` (`is1.o`, address 0x4778, 212 bytes):
  **established.** It builds the control word for the second image-sync card type from the sync-source data block and the 200-byte request. All 53 words were decoded, including the shifts and masks. `is1_attach` stores its address in board +0x30 for cards of revision type 1. It takes the board in a0 and returns the word.
  It calls `is1_get_sync_data(board)` (0x479c) for the block p and ORs these fields together with bit 0:
  - bits 31:28: bits 7:4 of the word at board +0x1c8;
  - bits 27:26: the low 2 bits of p word 2 (offset 8);
  - bit 25: bit 0 of the word at +0x194;
  - bits 24:23: the low 2 bits of p word 0;
  - bits 19:16: the low 4 bits of the word at +0x1c8;
  - bit 15: bit 0 of the word at +0x198;
  - bits 14:11: the low 4 bits of the word at +0x1d4;
  - bits 10:7: the low 4 bits of the word at +0x1d8.
  `is1_assemble_control` reads the words at +0x1d4 and +0x1d8 with the two shifts swapped.

- `is1_unload` (`is1.o`, address 0xa64, 208 bytes):
  **established.** It is the unload hook: it refuses while the open counter that `is1_open` raises (the word at `.data` +0x10) is nonzero, otherwise detaches every card and frees the tables. The 52 words were read against the three relocated calls. It takes no argument and returns 16 when the word at `.data` +0x10 is nonzero, else 0. The object has no call site for it.
  With that word zero it calls `pciio_iterate("is1_", is1_unload_dev)` (0xae0, handler address 0xb34), `freeBoardPointers` (0xb00, the routine at address 0x1dc) and `is1_dbg_unload` (0xb20), in that order.

- `is1_register` (`is1.o`, address 0x38b8, 208 bytes):
  **established.** It registers an exit callback for the calling process on an already-bound pipe, so the binding is dropped when the process dies. The 52 words were followed through the single owned-record test and the one call chain. `fglrx_swap_ready` in `fglrx.o` (address 0x14e60) calls it at 0x14f40, when the low 16 bits of its third argument equal 1, passing the word at +428 of its second argument. It takes the pipe number in a0 and returns what `add_exit_callback` returns, or sets nothing when the pipe is unowned.
  A zero first word of `is1_pipes[a0]` returns (0x38ec). Otherwise it calls `curproc` (0x390c) and `proc_pid` (0x392c), stores the id in the record's word at +16 in the delay slot of the next call (0x3978), and calls `add_exit_callback(id, 0, is1_pipe_exit, pipe number)` (0x3974).

- `is1_assemble_control` (`is1.o`, address 0x4628, 192 bytes):
  **established.** It builds the control word for the first image-sync card type from the sync-source data block and the 200-byte request. All 48 words were decoded, shift by shift. `is1_attach` stores its address in board +0x30 for revision type 0 and as the fallback. It takes the board in a0 and returns the word.
  It calls `is1_get_sync_data(board)` (0x464c) for the block p and ORs these fields together with bit 0:
  - bits 31:27: the low 5 bits of the word at board +0x1d0;
  - bit 26: bit 0 of p word 3 (offset 12);
  - bit 24: set when p word 0 is nonzero;
  - bits 19:16: the low 4 bits of the word at +0x1c8;
  - bit 15: bit 0 of the word at +0x19c;
  - bits 14:11: the low 4 bits of the word at +0x1d8;
  - bits 10:7: the low 4 bits of the word at +0x1d4.

- `is1_pipe_exit` (`is1.o`, address 0x36f0, 180 bytes):
  **established.** It is the exit callback for a bound pipe: it unbinds the pipe the dying process owned. All 45 words were read, including the assertion tail at 0x3760. The address is passed to `add_exit_callback` by `is1_register` and `is1_unbind`. It takes the pipe number in a0, keeps its low 16 bits in s0 and returns the `is1_unbind` result.
  It tests the masked number twice, once for a negative value (which the 16-bit mask makes impossible) and once for `GfxBoardLimit < number`. Either test failing calls `assfail` (text "0 <= pipenum && pipenum <= GfxBoardLimit", line 1856, 0x3794) and goes on. It then calls `is1_unbind(number)` (0x3744).

- `is1_reg` (`is1.o`, address 0x93c, 176 bytes):
  **established.** It registers the driver for the two image-sync PCI IDs. The 44 words and the two-entry loop were checked against the `.data` bytes of `is1_devids`. It takes no argument, returns 0 and ignores the registration results. The object has no call site for it.
  For entry i of 2 it calls `pciio_driver_register(halfword at is1_devids + 8i, halfword at +8i+2, "is1_", 0)` (0x9b4). The table holds vendor 0x10a9 with device 0x100c, then vendor 0x10a9 with device 0x100f; the words at +4 and +12 repeat the same pairs and the loop never loads them.


- `is1_remove_pipe` (`is1.o`, address 0x1874, 172 bytes):
  **established.** It drops one pipe from a board: it clears the slot, lowers the board's pipe count, clears the slot's bit in three masks and then clears the pipe's record. All 43 words were followed through the three atomic loops. `is1_exit` and `is1_ioctl` (request 10003) call it. It takes the board in a0, the pipe number in a1 (kept in `at`; `is1_exit` passes the word it read from the board's +0x450 table) and the slot index in a2. It sets no return value.
  Stores in order: zero in the word at board +0x250 + 4 x slot (0x187c); -1 in the word at +0x450 + 4 x slot (0x1884); the word at +0xe4 minus 1 back to +0xe4 (0x18a0). It then builds the mask `1 << slot` with a variable 64-bit left shift and atomically clears it in the doublewords at +0x90 (`lld`/`scd`, 0x18a8 to 0x18b4), +0x88 (0x18e4) and +0x80 (0x18f8), in that order.
  It ends by calling `is1_clear_swapready(pipe number)` (call 0x190c, target address 0x3988).

- `is1_unload_dev` (`is1.o`, address 0xb34, 168 bytes):
  **established.** It is the per-card callback that `is1_unload` gives `pciio_iterate`: it looks up the card's board and detaches it. The 42 words and the one assertion tail were read. It takes the device vertex in a0 (kept in s8) and returns the `is1_detach` result.
  It calls `hwgraph_fastinfo_get(vertex)` (0xb58). A null result calls `assfail` (text "bdata != NULL", line 371, 0xbcc) and goes on. It then calls `is1_detach(vertex)` (0xb80) with the vertex, not the board.

- `is1_clear` (`is1.o`, address 0xc28, 156 bytes):
  **established.** It resets a board record's per-process tables and its scalar state to the idle values. All 39 words were read, including the two-way unrolled table loop. `is1_attach` and `is1_close` call it. It takes the board in a0 and sets no return value.
  Table loop: for each of 64 words, in this order per word, it stores zero at board +0x350 + 4i (0xc3c and 0xc5c), zero at +0x250 + 4i (0xc44, 0xc64) and -1 at +0x450 + 4i (0xc48, 0xc6c). The loop body appears twice back to back, each copy testing the index against 64.
  Scalar stores in order: zero in the doubleword at +0x90 (0xc70); zero in the words at +0xe8, +0xe0; -1 at +0x9c; zero at +0x5c, +0x60; -1 at +0x64; zero at +0xe4, +0xfc, +0xec, +0xdc, +0xf0, +0x68; zero in the doublewords at +0x70, +0x78, +0x88, +0x80; zero in the word at +0x98; and, in the delay slot of the return, the word at +0x1c stored at +0xf4 (0xcc0).

- `is1_malloc` (`is1.o`, address 0x2cf8, 156 bytes):
  **established.** It is the driver's allocator: it takes memory from the kernel, zeroed on request, and adds the size to a running total. All 39 words were followed. Only `checkBoardPointers` calls it, three times. It takes the size in a0, a zero-fill flag in a2 and the allocation flags in a3 and returns the pointer. a1 and a4 (the name string its caller passes) are never read.
  A nonzero a2 calls `kmem_zalloc(size, a3)` (0x2d24); zero calls `kmem_alloc(size, a3)` (0x2d84). On both paths the size is then added to `is1_memused`, the word at `.data` +0x18, without testing for a null result.

- `is1_free` (`is1.o`, address 0x2d94, 96 bytes):
  **established.** It is the matching release routine: it takes the size off the running total and frees the memory when there is any. All 24 words were read. Only `freeBoardPointers` calls it. It takes the pointer in a0 and the size in a1; a2 (the name string its caller passes) is never read. It sets no return value.
  The word at `.data` +0x18 (`is1_memused`) is lowered by a1 whether or not a0 is null (the store is in the delay slot of the test, 0x2dc0). A nonzero a0 calls `kmem_free(a0, a1)` (0x2de4).

- `is1_release_swapready` (`is1.o`, address 0x3540, 152 bytes):
  **established.** It sets bit 0 of the word at +0x68 of a pipe's board and, only when that bit was clear, copies the board's +0x70 mask into its +0x78 mask, writes 1 to register offset 0x1c and clears the word. The two atomic loops and both exits were traced through all 38 words. `is1_ioctl` (request 10011) calls it. It takes the pipe number in a0 and sets no return value.
  The first word of `is1_pipes[a0]` (32-byte records) is zero: it returns. Otherwise the board is `is1_boards[first word - 1]`. Bit 0 is atomically ORed into the word at board +0x68 (`ll`/`sc`, 0x3584 to 0x3590); a nonzero old value returns. With an old value of zero it ORs the doubleword at +0x70 into the doubleword at +0x78 (`lld`/`scd`, 0x35b4 to 0x35c0), stores 1 at register offset 0x1c (0x35cc, register block from the doubleword at +0xc0) and, in the delay slot of the return, zero in the word at +0x68.

- `is1_clear_swapready` (`is1.o`, address 0x3988, 148 bytes):
  **established.** It empties one pipe record after unbinding the pipe. The 37 words were followed through the single test. `is1_remove_pipe` calls it. It takes the pipe number in a0 and sets no return value.
  When the first word of `is1_pipes[a0]` is zero it returns without a call. Otherwise it calls `is1_unbind(pipe number)` (0x39dc) and then stores zero in the record's word at +0 (0x39f0), zero in the word at +4 (0x39fc) and zero in the doubleword at +24 (0x3a0c).

- `is2_assemble_video_format` (`is1.o`, address 0x484c, 148 bytes):
  **established.** It builds the video-format word for the second image-sync card type from the sync-source data block and four board words. All 37 words were decoded. `is1_attach` stores its address at board +0x38 for cards of type 1. It takes the board in a0 and returns the word.
  It calls `is1_get_sync_data(board)` (0x4870) for the block p and ORs:
  - bits 31:28: the low 4 bits of the word at board +0x1d0;
  - bit 27: bit 0 of the word at +0x1cc;
  - bits 26:20: the low 7 bits of the word at +0x1f4;
  - bits 19:16: the low 4 bits of the word at +0x1fc;
  - bits 15:0: the low half of p word 1 (offset 4).
  `is1_assemble_video_format` takes 8 bits of the word at +0x1f4 for bits 27:20 and has nothing in bits 31:28.

- `is1_assemble_video_format` (`is1.o`, address 0x46e8, 108 bytes):
  **established.** It builds the video-format word for the first image-sync card type from the sync-source data block and two board words. All 27 words were decoded. `is1_attach` stores its address at board +0x38 for type 0 and as the fallback. It takes the board in a0 and returns the word.
  It calls `is1_get_sync_data(board)` (0x470c) for the block p and ORs:
  - bits 27:20: the low 8 bits of the word at board +0x1f4;
  - bits 19:16: the low 4 bits of the word at +0x1fc;
  - bits 15:0: the low half of p word 1 (offset 4).

- `is1_get_sync_data` (`is1.o`, address 0x45f8, 48 bytes):
  **established.** It picks which of the board's two 16-byte sync-parameter blocks applies to the current sync source. All 12 words were read. The four word-builder routines (`is1_assemble_control`, `is1_assemble_video_format` and the two `is2_` versions) each call it. It takes the board in a0 and returns an address.
  It reads the word at board +0x98. A value of 1 or 2 returns board +0x214 (532); any other value, 0 and everything above 2 included, returns board +0x204 (516).

- `is1_update_swap_sample` (`is1.o`, address 0x4754, 36 bytes):
  **established.** It writes the swap-sample value to the card only when it differs from the cached copy at board +0x64. All 9 words were read. `is1_attach` stores its address at board +0x40 for type 0 cards and as the fallback. It takes the board in a0 and sets no return value.
  The value is the word at board +0x1dc masked with 0xffff. When it differs from the word at +0x64 it is stored there and at register offset 0x7c (the register block is the doubleword at +0xc0).

- `is2_update_swap_sample` (`is1.o`, address 0x48e0, 80 bytes):
  **established.** It is the second card type's version of the swap-sample update: it packs three board fields into one value and writes it only when it changed. All 20 words were read. `is1_attach` stores its address at board +0x40 for type 1. It takes the board in a0 and sets no return value.
  The value ORs three parts: the word at board +0x1dc masked with 0xffff (bits 15:0); bit 0 of the word at +0x1e0 as bit 16; and bit 17 set when the doubleword at +0x70 is nonzero. When it differs from the word at +0x64 it is stored there and at register offset 0x78.


- `is1_pipe_bound` (`is1.o`, address 0x3b48, 144 bytes):
  **established.** It reports whether a pipe's mask bits are set in its board's +0x70 mask, the mask `is1_unbind` clears. All 36 words were read, with the three return paths. `fglrx_hp_fire_swapready` in `fglrx.o` (address 0x6368) calls it at 0x6390 with the word at +428 of the record that the doubleword at its first argument +16 points to. It takes the pipe number in a0 and returns 0 or 1.
  A negative number returns 0 (0x3b50). A number not below `GfxBoardLimit` returns 0 (the compare is `number < limit`, so it is stricter than the one in `is1_ioctl_getargs`). A zero first word in `is1_pipes[a0]` returns 0 (0x3ba0). Otherwise the board is `is1_boards[first word - 1]` and the result is 1 when the record's doubleword at +24 ANDed with the board's doubleword at +0x70 is nonzero (`sltu v0,zero,v0`, 0x3bbc), else 0.

- `is1_unreg` (`is1.o`, address 0x9ec, 120 bytes):
  **established.** It is the driver's unregister hook: it refuses while the open counter is nonzero and otherwise removes the PCI driver registration. The 30 words were read against the one relocated call. It takes no argument and returns -1 or 0. The object has no call site for it.
  A nonzero word at `.data` +0x10 returns -1 (the `li v0,-1` in the branch's delay slot at 0xa14) and logs nothing. Otherwise it calls `pciio_driver_unregister("is1_")` (0xa50) and returns 0, ignoring that call's result.

- `is1_genlock_interrupt` (`is1.o`, address 0x3cf4, 112 bytes):
  **established.** It is an event hook that applies a sync source to the board: the requested one when a1 is 1, source 0 otherwise. The 28 words and the three exits were followed. The object has no call site for it. It takes the board in a0 and a state in a1 and sets no return value.
  With a1 equal to 1 it loads the word at board +0x188 (the requested source); a zero value returns without a call, a nonzero value calls `is1_update_sync_source(board, that word)` (0x3d28). With any other a1 it calls `is1_update_sync_source(board, 0)` (0x3d50); entry 0 of `sync_types` is the text "Locked to Internal Clock".

- `is1_error_handler` (`is1.o`, address 0xbdc, 76 bytes):
  **established.** It is the PCI error callback that `is1_attach` registers, and it answers 0 for one narrow case and 9 for everything else. All 19 words were read. It takes a pointer in a3, its fourth argument, and returns 0 or 9.
  It returns 0 only when all four tests pass, in this order: bit 23 of the word at a3 +0 is set (0xbe8); bit 22 of that word is set (0xbf0); the doubleword at +32 equals 2 (0xc08); the doubleword at +40 is below 1024, unsigned (0xc18). Any failing test returns 9, which is loaded before the first test (0xbe4).

- `is1_clear_regs` (`is1.o`, address 0xcc4, 64 bytes):
  **established.** It writes the board's mask word, with its low six bits set, to the card and clears two registers of the image-sync block. All 16 words were followed. `is1_attach` (call 0x1590) and `is1_close` call it. It takes the board in a0 and sets no return value.
  The word at board +0xd8 is ORed with 0x3f and stored back. The value is written to register offset 0x34 (0xcd4) and the reloaded board word to offset 0x30 (0xcdc). Offset 0x2c is read twice (0xce4, 0xcec) and both values go to the same stack slot, which is never read back. Zero is written to offsets 0x1c (0xcf4) and 0x20 (0xcf8).

- `is1_reload_dev` (`is1.o`, address 0x908, 52 bytes):
  **established.** It is the `pciio_iterate` handler that `is1_init` supplies: it passes each already-found device straight to `is1_attach`. All 13 words were read. It takes the device vertex in a0 and returns the `is1_attach` result.
  The only call is `is1_attach` at 0x928, with a0 unchanged.

- `is1_attach_init` (`is1.o`, address 0x3d64, 20 bytes):
  **established.** It clears the two control words of the image-sync block that the type routines later fill. All 5 words were read. `is1_attach` calls it at 0x15b0. It takes the board in a0 and returns 0.
  It stores zero at register offset 0x28 (0x3d68) and, in the delay slot of the return, at offset 0x24 (0x3d74), through the register block pointer at board +0xc0.

- `is1_dbg_init` (`is1.o`, address 0x45d0, 8 bytes):
  **established.** It does nothing: it is a stub of one return and a `nop`, so `is1_init` calls an empty hook. Both words were read. `is1_init` calls it at 0x7e8. It takes no argument and sets no return value.

