# The FireGL kernel driver: ioctl and interrupt routines

`usr/cpu/sysgen/IP35boot/fglrx.o` is the 64-bit kernel object ATI ships for the FireGL cards (see [Kernel attach path](kernel-attach.md)). It has a symbol table; the object is relocatable, so calls to other routines appear as relocations and addresses below are offsets in the object. The device record is the per-board structure `fglrx_attach` builds. Its doubleword at +1000 is the mapped register window (BAR 2), the doubleword at +656 holds a second copy of that window that the ioctl routines use, the word at +792 flags that interrupts have been switched on, and +128 is the vertical-sync counter `fglrx_intr` increments. Three routines at 0x11708, 0x1ee94 and 0x20a58 spill their eight argument registers to the stack and return; the driver calls them wherever a debug print was compiled out, and the entries below call them logging stubs and ignore their arguments. A register offset is a byte offset into the window; the public name beside it is inferred from the offset alone, from the Linux and X.Org register headers. The labels follow `AGENTS.md` section 5.

## Ioctl handlers

An ioctl handler here takes a device record in a1, a user pointer in a2 and a pointer to a result word in a3.

- `fglrx_get_vsync_cnt` (`fglrx.o`, 128 bytes at address 0x33e8): returns the vertical-sync counter to user space, switching the interrupt on the first time it is asked.
  When the device record's word at +792 is zero it sets it to 1 and writes 4 to the register at offset 0x40 (the public `GEN_INT_CNTL`) through the window at +656, in the delay slot of the branch back.
  It then calls `copyout` with source record +128, destination a2 and length 4 (a `jalr` at 0x3428 through a relocation pair).
  The result word *a3 is 14 when `copyout` returned nonzero and 0 otherwise, and the routine returns that same value in v0. **Established.**
- `fglrx_is_brdmanager` (`fglrx.o`, 240 bytes at address 0x3a44): takes a 28-byte user block describing the board manager, stores part of it in the device record and switches interrupts off.
  It first calls `fglrx_add_exit_callback` with a1, a2 and a3 as given. It then calls `copyin` with source a2, a stack buffer and length 28, and keeps the return value in s1.
  It calls `bcopy` to move the first 16 bytes of the buffer to record +240.
  Whatever `copyin` returned, it then stores the buffer words at +16 and +20 as halfwords at record +256 and +258, the buffer word at +24 at record +320, and zero at record +792 and +128.
  When `copyin` returned zero it also writes 0 to the register at offset 0x40 through the window at +656 and stores 0 in *a3; otherwise *a3 is -1 and the register is left alone.
  The routine returns the `copyin` result. **Established.**

## Interrupt control

The four interrupt routines read three words of `.data` at 0x9b8, 0x9bc and 0x9c0, all 1. The registers they touch are the pair at offsets 0x44 and 0x40 (the public `GEN_INT_STATUS` and `GEN_INT_CNTL`), whose bit 0 is the public `CRTC_VBLANK` bit; that naming is inferred from the offsets. `fglrx_get_vsync_cnt` and `fglrx_intr` use bit 2 of the same registers instead (see [Kernel attach path](kernel-attach.md#interrupts)), so the enable routines below and those two act on different bits. A device record's doublewords at +11624 and +11632 are the allocated interrupt handle and a first-call flag. Each routine calls a logging stub with strings from `.rodata`: "\n" at +0x6d40, "done \n" at +0x6d48 and "dev->irq <%d>\n" at +0x6d50.

- `_r6x_enable_vsync_irq` (`fglrx.o`, 220 bytes at address 0x20cb0): switches the interrupt bit on.
  It calls the logging stub with the "\n" string; when the device record's doubleword at +11624 is nonzero it calls it again with "dev->irq <%d>\n" and the handle, then reads the register at offset 0x44 and writes it back ORed with the `.data` word at 0x9bc, then reads offset 0x40 and writes it back ORed with the word at 0x9c0, with a `sync` after each store, through the window at +1000.
  A zero handle skips the register work.
  It makes a last stub call with "done \n" and sets no return value. **Established.**
- `_r6x_enable_framelock_irq` (`fglrx.o`, 220 bytes at address 0x20d8c): has the same instruction sequence as `_r6x_enable_vsync_irq` at a different address (the two have the same code hash in the function table), so it reads and writes the same registers with the same words and the same three stub calls, and sets no return value. Nothing in the routine distinguishes it from the vertical-sync one. **Established.**
- `_r6x_service_irq_vsync_handler` (`fglrx.o`, 176 bytes at address 0x20b08): the interrupt service routine for the vertical-sync case.
  The argument (a0) is the interrupt's cookie; the device record is its doubleword at +8, and the routine returns at once, without a stub call, when the record's first word is not the cookie.
  When the record's doubleword at +11632 is zero it stores 1 there and goes straight to the final stub call.
  Otherwise it reads the register at offset 0x44 through the window at +1000, ANDs it with the `.data` word at 0x9b8, and when that is nonzero writes the status ORed with the word at 0x9bc back to offset 0x44 and executes `sync`.
  It ends with a call to the logging stub with "done \n" and sets no return value. **Established.**
- `_r6x_service_irq_framelock_handler` (`fglrx.o`, 248 bytes at address 0x20bb8): the frame-lock twin.
  It has the same cookie check and first-call flag at +11632 as the vertical-sync handler, but calls the logging stub with "\n" before touching the hardware.
  Past the flag it reads offset 0x44, tests it against the word at 0x9b8 and writes the status ORed with the word at 0x9bc back with a `sync`, except that it skips the write when the window pointer at +1000 is zero.
  It calls the stub with "done \n" and sets no return value. **Established.**
- `_r6x_close_irq` (`fglrx.o`, 168 bytes at address 0x20e68): switches the interrupt off and releases it.
  The argument (a0) is a device record; a zero record returns after the first logging-stub call.
  When the window doubleword at +1000 is nonzero it writes 0 to the register at offset 0x40 and executes `sync`.
  When the handle at +11624 is nonzero it calls `__ke_free_irq` with the handle's low 32 bits and the record's first word, then zeroes the doublewords at +11624 and +11632.
  It sets no return value. **Established.**

## Display control

- `firegl_sync_dacs` (`fglrx.o`, 264 bytes at address 0x1f5e8): restarts both display controllers together.
  The second argument (a1) is a file handle; the routine calls `__ke_get_file_priv` with it, takes the device record from the doubleword at +72 of the result and calls a logging stub.
  It reads the registers at offsets 0x50 and 0x3f8 (the public `CRTC_GEN_CNTL` and `CRTC2_GEN_CNTL`) through the window at +1000, writes the first back with bit 25 cleared (the mask 0xfdffffff, the public `CRTC_EN` bit), then the second back with bit 25 cleared, then the first with its original value, then the second with its original value, with a `sync` after every store.
  It then calls the stub and returns 0. **Established.**
- `_r6x_EnableStereo` (`fglrx.o`, 260 bytes at address 0x13b4c): turns the stereo scan-out bits on or off.
  The arguments are a device record (a0) and an enable flag (a1, kept on the stack).
  When bit 5 (0x20) of the record's word at +16 is clear it returns 0.
  Otherwise, with a nonzero flag it ORs 0x120000 (bits 20 and 17) into the register at offset 0x228 (the public `CRTC_OFFSET_CNTL`) and 0x3000 (bits 13 and 12) into the register at offset 0x294, which no public table names, with a `sync` after each store; with a zero flag it clears the same bits in the same two registers.
  Both enable and disable return 1. **Established.**
- `_r6x_CheckWSBoard` (`fglrx.o`, 164 bytes at address 0x13aa8): decides whether a board counts as a workstation board and records the answer in bit 4 (0x10) of the device record's flag word at +16.
  It first clears that bit and loads the global `firegl_SuperFlags`.
  When bit 1 of that word is set it sets the bit only if bit 0 is also set.
  When bit 1 is clear it loads the doubleword at record +1000, the mapped register window (BAR 2, as this chapter's opening says), and tests bit 27 of the word at window offset 0xe4 (`lw` at 0x13afc, then a left shift by 36 and a sign test at 0x13b00 and 0x13b04): if it is set the bit goes on.
  Otherwise it loads the device record's own word at +28 (`lw` at 0x13b14, from a0, not from the window), and only when that equals 0x85000004 or 0x8820ffff does it test bit 13 (0x2000) of the window word at offset 0x28 (`lw` at 0x13b34); if that is set the bit goes on, and any other combination leaves it clear.
  It sets no return value. **Established** as code. The window offsets 0xe4 and 0x28 are the public `CONFIG_XSTRAP` and `BIOS_6_SCRATCH` registers by offset ([registers.md](registers.md)); an earlier version of this entry read the second record as the card's configuration window, which contradicted the +1000 meaning above and the register table. The word at +28 is the identifier `_r6x_IsDeviceSupported` stores in the device-private structure, per [kernel-object-functions.md](kernel-object-functions.md#detach-initialisation-and-device-identity); that the device record's +28 is the same word is **inferred** from the equal constants. What the global flag word holds and who sets it is **unknown**.

## Vertical-sync wait and engine reset

- `fglrx_wait_vsync` (`fglrx.o`, 988 bytes at address 0x3468): the ioctl that sleeps until a vertical-sync event is posted for the board.
  Like `fglrx_get_vsync_cnt` it first sets the record's word at +792 to 1 and writes 4 to register 0x40 when that word is zero.
  It reads a 12-byte request with `copyin` (the result is ignored). The first request word must be positive, the second not negative and less than the first; otherwise the result word *a3 and the return value are 22.
  It takes the per-board lock, the lock array `.data` +336 indexed by the board number at record +428, with `mutex_spinlock`, and scans the table `RRMrn` (`rrm_maxrn` entries of 176 bytes) for the first entry whose byte at +82 equals 1; none found unlocks and returns 12.
  The entry's byte +82 is cleared, +144 and +148 receive the two request words, +160 is zeroed, and the entry is pushed on the singly linked list headed at `.data` +280 plus 8 times the board number (linked through +160).
  The entry is pushed at the head of that list: its next link at +160 gets the old head and the head becomes the entry.
  It calls `hold_nonfatalsig`, then `sv_timedwait_sig` on the entry's word at +48 with the lock, 30 as the second argument and a timeout structure on the stack; the wait call releases the lock.
  A nonnegative wait result releases the signal hold, copies 12 bytes back to the user with `copyout` (the third word is the entry's word at +152, stored in the delay slot of the call), zeroes the entry's link at +160, sets the byte +82 back to 1 and returns 0, or 14 when `copyout` failed.
  A negative wait result re-takes the lock, removes the entry from the list (head or predecessor update), unlocks, releases the signal hold, zeroes +160, sets +82 to 1 and returns 22.
  The result word *a3 gets the same value as the return.
  The waker is `fglrx_validate_vsync` in [Kernel attach path](kernel-attach.md#interrupts), which unlinks the entry and signals it when the sync count modulo the entry's +144 equals +148. **Established.**
- `fglrx_intr` (`fglrx.o`, 372 bytes at address 0x964): the hardware interrupt handler for one board; it acknowledges the sync interrupt and hands it to `fglrx_validate_vsync`.
  It adds 1 to the word at +16 of the `gfxinfo` record for the processor (the index is the halfword at the absolute address -15320, shifted left by 5) in the delay slot of its `splhi` call.
  When the device record's word at +792 is zero, or the entry of `fglrx_boards` for the board at +428 is zero, it calls `splx`, clears bits 2 and 6 of register 0x40 through the window at +656 (the AND with 0xffffffbb, stored in the delay slot of the jump to the return) and returns 0.
  Otherwise it reads register 0x44; when bit 2 is clear it calls `splx` and returns what `splx` returns.
  When bit 2 is set it writes 4 to register 0x44 (in the delay slot of its `splx` call), then calls the local routine at 0x3844, named `fglrx_validate_vsync` in the debug information, with the device record, and returns its result; the increment of the word at +128 is in the delay slot of that call. **Established.**

- `_r6x_resetPM4` (`fglrx.o`, 1196 bytes at address 0x135fc): recovers the command processor by draining the ring and queueing two packets.
  It returns without action when the device record's word at +1184 is zero or bit 0 of the word the doubleword at +1208 points to is clear.
  It spins on register 0x7c0 (offset 1984) through the window at +1000 until bit 30 clears, with no limit.
  It then calls the unlabelled routine at 0x11734 with the window; when that returns nonzero it waits with no limit for bit 31 of register 0xe40 to clear (the public `RBBM_STATUS` busy bit; one read, then a loop of four reads).
  It copies the word at +512 of the record at +1224 into the word at +4 of the record at +1208, zeroes the word at +20 of the same record, calls the unlabelled routine at 0x11808 with the address record +1192 and 6, and stores six words through the pointer it returns: 1477, 15, 1405, 0, 1480 and 0x40000.
  Both packet-queueing sections fill the ring up to its next boundary with the word 0x80000000, wait for the read pointer word at +512 of the second record to reach the write position (up to 0x10000000 reads), and finish by storing 0x1057c, 0xdeadbeef and 0x80000000 as a marker.
  The second call to the routine at 0x11808 uses 5 and stores five words: the words at +64 and +80 of the first record, 0xc0011e00, 0 and 0x1fff1fff.
  It sets no return value. **Inferred:** the packet words, the fill pattern and the pointer bookkeeping come from the decompiler rendering read alongside the instruction listing, so the stated values are firm and the reading of the pointer arithmetic is a reconstruction.

## Forced exit

- `fglrx_exit` (`fglrx.o`, 520 bytes at address 0x4658): forces every board of one board manager to stop, as when the manager process exits.
  The argument (a0) is a device record; the routine passes it to `fglrx_managerID_from_bdata` (address 0x3238), which returns -1 for a zero record or one whose word at +220 is not 1, and otherwise parses the decimal field of the name string at record +240 (after the first ':' and up to the next '.') with `atoi`.
  A result of -1 returns at once with that value (the return at 0x47a0).
  Otherwise it takes the lock at `.bss` +0x80010 with `mutex_lock` and 25 as the second argument, and walks the first `GfxBoardLimit` pointers of the board table at `.data` +328.
  For each board whose manager ID equals the caller's it calls `cmn_err` with level 4, the format "Forcing Exit on pipe %s" and the name string at +240.
  If the board's words at +220 and +216 and doubleword at +208 are all nonzero it writes 0 to register 0x40 through the window at +656 when the word at +792 is 1, then sets +792 to 0 and calls `firegl_killall_clients` with the record, then zeroes the word at +220, the doublewords at +240 and +248 and the halfwords at +258 and +256.
  A board that fails one of those tests is skipped after the message.
  It unlocks with `mutex_unlock` and returns what that call returned. **Established.**
