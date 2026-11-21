# Interrupts and waits: what the Onyx4 drivers sleep on, poll and acknowledge

This page answers one question for an emulator author: after the X server has set the mode and registered the screen, which interrupt, status bit or memory write do the shipped FireGL drivers wait for? Short answer: the X server and the DRM helper library wait on **no interrupt** during start-up. They poll a host-memory copy of the command ring's read pointer and the engine status register, and a hang there has the same outward look as a missing interrupt.

Grades follow [AGENTS.md](../../AGENTS.md) section 5. Addresses are in the named file. "Observed in an emulator run" is model behaviour, never hardware evidence.

## What was read

| File | Release | How |
|---|---|---|
| `usr/cpu/sysgen/IP35boot/fglrx.o` | 6.5.30 | whole routines disassembled again for this page: `fglrx_intr` (0x964), the four empty IRQ stubs, the relocation list of every routine that sleeps; other entries are from the pages linked below |
| `usr/X11R6/lib/modules/drivers/fglrx_drv.so` | 6.5.30 | constant scan for the ioctl codes; `R200WaitForVerticalSync`, the ring-pointer and scratch write-back routines |
| `usr/X11R6/lib/modules/irix/libfglrxdrm.so`, `dri/fglrx_dri.so`, `dri/fglrx_dri64.so`, `extensions/fglrx_glx.so` | 6.5.30 | constant scan; the wait loops are from [libfglrxdrm-functions.md](../../software/xsgi/libfglrxdrm-functions.md) |
| `fglrx.o` of patch SG0005448 (IRIX 6.5.22) | 6.5.22 | **not re-read.** Taken from [r300-kernel-interrupts.md](../../software/kernel/r300-kernel-interrupts.md); the patch's `fglrx_drv.so` was not opened either (spot checks only in [r300-kernel-attach.md](../../software/kernel/r300-kernel-attach.md)) |

Public sources (Linux `radeon` r100 interrupt and ring code, AMD R5xx acceleration guide section 5.9) are used as cross-checks in my own words. I did not re-fetch them for this page, so the Linux statements are **software expectation, version not re-checked**.

## (a) Interrupt sources and acknowledge

Registers: `GEN_INT_CNTL` 0x40 (enables) and `GEN_INT_STATUS` 0x44 (status, write one to clear). Names are by offset from public headers.

- **6.5.30 kernel.** Enabled only on demand: `fglrx_get_vsync_cnt` and `fglrx_wait_vsync` store 4 (bit 2, first CRTC vsync) on their first call; `fglrx_attach` stores 0 at attach; `fglrx_is_brdmanager`, `fglrx_exit` and `_r6x_close_irq` store 0 again. No other bit is ever stored. Established; the long form is in [kernel-ioctl-irq-functions.md](../../software/kernel/kernel-ioctl-irq-functions.md#interrupt-control).
- **6.5.22 patch kernel.** Same shape, but the enable value is 1 (bit 0), `fglrx_attach` does not touch the register, and `fglrx_intr` (0x8d4, 56 bytes) only bumps a per-CPU counter: it reads and writes no card register and wakes nobody. Established in [r300-kernel-interrupts.md](../../software/kernel/r300-kernel-interrupts.md). Whatever `GEN_INT_CNTL` holds when the driver loads (option ROM state, model reset value) stays there.
- **Acknowledge, 6.5.30.** `fglrx_intr` (0x964, 372 bytes, re-read here): reads status at the BAR 2 window pointer in the board record (+656); if the board's "interrupts on" word (+792) is zero or the board slot is empty it clears bits 2 and 6 of `GEN_INT_CNTL` (AND 0xffffffbb) and returns without touching status; otherwise, if status bit 2 is set it writes 4 back to status (write-one-to-clear), calls `fglrx_validate_vsync` and bumps the sync count at +128. It never reads or acknowledges any other bit. Established.
- **CRTC2 vsync, software interrupt, GUI idle, CP ring:** no shipped path enables any of them. Bit 25 of status (`SW_INT`) is *written* (0x2000000 to 0x44) by `r200_RegisterRingBufferLocation` in the X module, which is an acknowledge/clear, not an enable. Public Linux uses bit 0 and bit 9 for the two vblanks, 19 for GUI idle and 25 for the software interrupt (software expectation). Whether IRIX waits on a time stamp by polling or by the bit-25 interrupt is answered below: it polls.
- **Status sets without the enable.** The X module's `R200WaitForVerticalSync` (0x410e00) writes 0x04 (or 0x40) to status and then polls that same bit up to 2,000,000 reads with nothing enabled. A model must therefore latch the vsync status bits at each vertical blank whether or not `GEN_INT_CNTL` selects them, and clear them on a write of 1. The interrupt line is status AND enable. Established as code; the "must" is an inference from it. No caller of that routine was found inside the module (its address is a global GOT entry only), so nothing in start-up is shown to call it.

## (c) How the interrupt reaches IRIX

Established, 6.5.30 object re-read at the relocations; the bridge side from [r300-kernel-interrupts.md](../../software/kernel/r300-kernel-interrupts.md#delivery-through-the-pic-inta-and-intb).

- `fglrx_attach` (0xbdc) calls `device_desc_intr_name_set`, `pciio_intr_alloc(dev, desc, 3, vertex)` (3 means lines A and B) and `pciio_intr_connect(handle, fglrx_intr, board record, 0)`. The handler entry is `fglrx_intr` (0x964 in 6.5.30, 0x8d4 in the 6.5.22 patch). `fglrx_detach` (0x1ef4) undoes it with `pciio_intr_disconnect` and `pciio_intr_free`.
- On a PIC the bridge maps INTA (and INTC) to pin s and INTB (INTD) to pin s xor 4, where s is the slot (PIC device number minus 1). Each pin has an Int_Addr register (0x130 + 8 x pin) holding the hub target address and vector, an Int_Enable bit (0x108) and a device field in Int_Device (0x120). `pcibr_intr_func` dispatches to `fglrx_intr` with the board record. Established for the code, with the PIC register names by offset (software expectation).
- The card has **one handler shared by both lines**; the code never reads which pin fired.
- **The ATI layer's own request path is dead.** `__ke_request_irq` (0xa4d8), `__ke_free_irq` (0xa4e0), `__ke_enable_irq` (0xa4c8) and `__ke_disable_irq` (0xa4d0) are each 8-byte empty routines in 6.5.30 as well as 6.5.22 (re-read). So `_r6x_service_irq_vsync_handler` and its framelock twin, which do the full acknowledge, are never hooked to the hardware, and `firegl_install_irq` (ioctl 0x645d, `firegl_InitIrq`) only enables the source and waits 200 ms for a "seen" flag that nothing sets. Established.

## (b) What start-up waits on

### Interrupt-driven waits (none in X start-up)

- The only sleeping ioctl tied to the chip interrupt is `fglrx_wait_vsync` (ioctl 0x6667000e), woken by `fglrx_validate_vsync` from `fglrx_intr`; it waits with `sv_timedwait_sig` and a timeout of 30 units, so it cannot sleep forever. `fglrx_get_vsync_cnt` (0x6667000d) returns the counter. In 6.5.22 nothing calls `fglrx_validate_vsync`, so the wait ends only on timeout or a signal.
- The constants 0x6667000d and 0x6667000e are built only in `fglrx_dri.so` (0x4d79d4, 0x4d7a68), `fglrx_dri64.so` (0x52f8b8, 0x52f95c) and `fglrx_glx.so` (0x4cff94): the OpenGL side (video-sync entry points `XGLGetVideoSyncSGI` and `XGLWaitVideoSyncSGI`). `fglrx_drv.so` issues only 0x6667000a, 0x6667000b and 0x6667000c. So the X server, before any GL client runs, enables no interrupt. Established (constant scan of the five objects). How the GL swap path waits for vblank (`OGLWaitVerticalSync`, `__GL_SYNC_TO_VBLANK`) was not read: **unknown**.
- The other sleeping kernel path is the hardware lock, `firegl_lock_device` (0x16194): it sleeps through `__ke_sleep_on_queue` (0x9558) into `sleep_on_queue` (0xa964), a timed signal-interruptible wait (priority 30, timeout structure holding 30; the unit is not decoded), and loops until the lock word in the shared area is free. The wake-up is the unlock's `wake_up_interruptible` (0xa770), not an interrupt. Established for the routines; that the loop has no other exit than a free lock word is **inferred** from the existing reading.

### Polled waits

| Waiter | Polls | Bound | Release |
|---|---|---|---|
| `__fglDRMPM4Queue` (libfglrxdrm 0x403400) and the X module's ring commit (0x409fc0 path) | the **host-memory** read pointer at ring record +512 against the write index | 0x10000000 reads, then 0x10000000 `sginap(0)` passes, then a "Submit buffer timed out" warning and carry on | the chip writes its read pointer to memory |
| `firegl_PM4Alloc` (0x403680) | same word, free-space loop | wrap wait bounded as above; the free-space loop has **no limit and no `sginap`** | same |
| `firegl_PM4WaitForIdle` (0x403a80), `_r6x_WaitNotBusy` (kernel 0x11ec0) | queues cache-flush plus WAIT_UNTIL, waits for the same memory word, then `RBBM_STATUS` bit 31 | 2M reads, then `sginap` loop until a counter passes 16,000,000; returns 1 | read pointer equals write index, then bit 31 clear |
| `__fglQSQuietDown` (kernel 0x11734, libfglrxdrm 0x403280) | `RBBM_STATUS` bit 31 | 2M reads, then 1 ms delays (kernel) or 200 `sginap` rounds | bit 31 clear |
| `R200WaitForFifoFunction` (0x40a300) | `RBBM_STATUS` & 0x7f (free FIFO entries) | **none**: every 2M reads it resets the engine and loops again | count at least the request |
| `R200WaitForIdle` (0x40a3c0) | FIFO count at least 64, then bit 31 clear | none: same reset loop | both |
| `R200EngineFlush` (0x40a540) | `RB2D_DSTCACHE_CTLSTAT` (0x342c) bit 31 | 2M reads, then silent | bit 31 clear |
| `_r6x_resetPM4` (kernel 0x135fc) | register 0x7c0 bit 30, then `RBBM_STATUS` bit 31 | none | both clear |
| `R200EngineReset` (0x40a5c0) | `RBBM_STATUS` bit 31 and register 0x150 bit 4 (R300, R350) or bit 2, with 500-unit delays | none | bits set or clear as named |
| `r200_SetPm4OperationMode` (0x42c100) | `RBBM_STATUS` & 0x10200 | see [kernel-attach.md](../../software/kernel/kernel-attach.md#command-processor-start-up-x-server-module) | both clear |

### Write-back addresses

- **Ring read pointer.** `r200_EnableRPTRwriteback` (0x42c1c0, re-read): writes `CP_RB_RPTR_ADDR` (0x70c) = the word at +0x2c of the ring-state record plus 0x200, then clears bit 27 of `CP_RB_CNTL` (0x704, `RB_NO_UPDATE`). The polling code reads the word at that address, "record +512", as a normal memory load. So the driver polls memory, not register 0x710. Established. `FGLStartCP` first copies register 0x710 into the write pointer (0x714), so the first wait after a start is satisfied without any chip write.
- **Scratch.** `r200_EnableTimeStampWriteBack` (0x42c200) writes `SCRATCH_ADDR` (0x774) from an 8-byte word of its argument and `SCRATCH_UMSK` (0x770) = 0x3f. `r200_WriteTimeStamp` (0x42c240) then stores four values to the scratch registers 3 to 0 (0x15ec down to 0x15e0) **by register write**, and the ring trailer packets (header 0x1057c, words 0xdeadbeef and 0xbeefdead) write scratch registers 4 and 5. A scratch register write must therefore be copied to memory at `SCRATCH_ADDR` plus the register number times 4 when its `SCRATCH_UMSK` bit is set (software expectation: R5xx guide 5.9). Whether the same page holds the pointer at +512 is **inferred** only: `firegl_DRMPoll` (libfglrxdrm 0x403cc0) compares a 64-bit stamp at a word pair at offsets +8 and +12 of the record that also holds +512.
- No path polls a scratch interrupt, `GUI_IDLE` or a CP interrupt.

### Order after the mode set

From the X log of an emulator run (model behaviour, not hardware): the screen is registered, `LoadTiming 1280x1024` is logged, the XAA acceleration, DRI and extensions lines follow, then the input devices, and the last line is "Could not init font path element ... Speedo/, removing from list!". The next steps of the server are generic XFree86 (default font path, root window creation and paint, then the signal to the parent that the server is ready, which is what starts the greeter); I did not read the XFree86 binary for this. Of those steps the first that reaches the card is painting the root window through the acceleration hooks. The hooks installed by `R200CPAccelInitFuncs` queue register-write packets on the command ring (`R200CPSubsequentSolidFillRect` stores two register writes at ring addresses obtained with 0x409f40 and commits with 0x40a1c0, which runs the queue routine at 0x409fc0 and then stores the write index to register 0x714).

## Most likely hang point and what releases it

**Inferred, ranked.** None of these is an interrupt wait:

1. **The first ring commit after start-up waits forever for the read pointer.** Each commit first waits until the memory word at ring record +512 equals the current write index, then publishes the new packet. If the chip model never fetches packets from the ring (or never writes the read pointer to memory), the second submit spins 0x10000000 reads plus 0x10000000 `sginap(0)` passes before the warning: far longer than any test run, with the process mostly yielding. Release: after a write to `CP_RB_WPTR` (0x714) the model must read the packets from `CP_RB_BASE` (0x700) in the ring-size and block-size set by `CP_RB_CNTL`, execute type-0 register writes (and type-2 and type-3 headers: scissor 0x1e, bit-blit 0x9b, no-operation), then store the new read pointer to `CP_RB_RPTR` (0x710) **and** as a 32-bit word to the bus address in `CP_RB_RPTR_ADDR` (0x70c). Only after that does the commit's wait pass.
2. **Byte order of that write-back.** The kernel maps its DMA buffers with the "clear byte swap" flag and the X module never sets `BUF_SWAP` (bits 17:16 of `CP_RB_CNTL`; it keeps the field it finds). The guest stores ring words and reads the pointer in its own big-endian order. A model that writes the pointer little-endian, or fetches ring words little-endian, fails the equality test forever. What swap value the card carries from reset or the option ROM is **unknown** ([open-questions.md](../../questions/open-questions.md)); the safe model keeps ring words and write-back in the guest's native word order and treats `BUF_SWAP` as selecting that.
3. **Idle and FIFO status.** `RBBM_STATUS` must read GUI_ACTIVE (bit 31) clear when the ring is drained, and a free-entry count in bits 6:0 of at least 64; the X module has **no timeout** on either (it resets the engine and tries again), as have `_r6x_resetPM4` and `R200EngineReset`. `CP_STAT` bit 30 (register 0x7c0) must clear. `RB2D_DSTCACHE_CTLSTAT` (0x342c) bit 31 must clear after the flush write of 0xf.
4. **Interrupt storm, 6.5.22 only.** If `GEN_INT_CNTL` comes up with bit 0 set and the model latches vblank in status bit 0, the line stays asserted, and the 6.5.22 handler never clears it (the 6.5.30 handler disables the source and so survives). That would starve user processes while the screen still shows a picture. Release: reset `GEN_INT_CNTL` to 0, assert the line only while status AND enable is nonzero, and clear status bits on write of 1.

## Unknowns

- Whether the unread `XFree86` server steps between the font path and the ready signal touch the card before the root window paint.
- The `BUF_SWAP` value and the reset value of `GEN_INT_CNTL` as the option ROM leaves them (the option ROM scripts are in [option-roms.md](../../software/ucode/option-roms.md)).
- Units of the 30 in the timed sleeps; the 6.5.22 patch's own `fglrx_drv.so`; the OpenGL swap-path vblank wait; whether the +0x2c page and `SCRATCH_ADDR` are the same page.
- No hardware read is needed for any of these: the option ROM scripts and the unread GL routines are the next routes.
