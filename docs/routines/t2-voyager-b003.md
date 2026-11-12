# Tier-2 routine readings, voyager batch 3

Role statements for the 25 routines in batch 3 of the tier-2 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets, return values). Every entry is graded inferred: the render shows the calls and returns, but the intent is read from the callee names and the shape of the code.

- `xtalk_intr_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2cc
      **Inferred.** A 28-byte wrapper that passes its four argument registers unchanged to `hub_intr_alloc` through the jal at 0x2d4 and returns the callee's result in v0 at 0x2e0. The callee name suggests the xtalk interrupt-allocation call is delegated to the hub layer.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_alloc_nothd` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2e8
  **Inferred.** A 28-byte pass-through that forwards a0 to a3 to `hub_intr_alloc_nothd` at the jal at 0x2f0 and returns its value in v0 at 0x2fc. The render does not show what the "nothd" suffix means, so the difference from `xtalk_intr_alloc` is not visible here.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x304
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_free` at the jal at 0x30c and returns the callee's value in v0 at 0x318. It does no work of its own beyond the call.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_connect` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x320
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_connect` at the jal at 0x328 and returns the callee's value in v0 at 0x334. The name points at attaching an interrupt handler, but the render does not show what the callee does with it.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_disconnect` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x33c
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_disconnect` at the jal at 0x344 and returns the callee's value in v0 at 0x350. It has the same four-register pass-through shape as `xtalk_intr_connect`, and its callee name indicates the teardown side of that connection.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x358
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_cpu_get` at the jal at 0x360 and returns the callee's value in v0 at 0x36c. The name suggests it reports the CPU an interrupt is routed to.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_cpuid_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x374
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_cpuid_get` at the jal at 0x37c and returns the callee's value in v0 at 0x388. The name suggests a CPU identifier rather than a CPU pointer, which the render does not confirm.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_error_devenable` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x43c
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_error_devenable` at the jal at 0x444 and returns the callee's value in v0 at 0x450. The name suggests enabling error reporting for a device.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_startup` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x458
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_provider_startup` at the jal at 0x460 and returns the callee's value in v0 at 0x46c. The name suggests bringing up a crossbar provider, but the render shows only the delegation.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x474
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_provider_shutdown` at the jal at 0x47c and returns the callee's value in v0 at 0x488. It has the same pass-through shape as `xtalk_provider_startup`, and its callee name indicates the teardown of that startup.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_widgetdev_enable` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x490
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_widgetdev_enable` at the jal at 0x498 and returns the callee's value in v0 at 0x4a4. The name suggests enabling a widget device on the crossbar.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_widgetdev_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4ac
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_widgetdev_shutdown` at the jal at 0x4b4 and returns the callee's value in v0 at 0x4c0. It has the same pass-through shape as `xtalk_widgetdev_enable`, and its callee name indicates the disable side of that enable.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dma_enabled` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4c8
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_dma_enabled` at the jal at 0x4d0 and returns the callee's value in v0 at 0x4dc. The name suggests a query for whether DMA is enabled, but the render does not show what the query returns.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_register` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x7e4
      **Inferred.** A 28-byte wrapper that passes its arguments to `hwgraph_fastinfo_set` at the jal at 0x7ec and returns the callee's value in v0 at 0x7f8. The name and the callee suggest it attaches the provider's function table to a hardware-graph vertex.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_fns_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x81c
      **Inferred.** A 28-byte wrapper that passes its arguments to `hwgraph_fastinfo_get` at the jal at 0x824 and returns the callee's value in v0 at 0x830. It is the read side of `xtalk_provider_register` by name and callee.
  Reviewed: 2026-11-12 (sonnet)

- `xwidget_reset` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xaf4
      **Inferred.** A 28-byte pass-through that forwards its arguments to `xswitch_reset_link` at the jal at 0xafc and returns the callee's value in v0 at 0xb08. The name suggests resetting a widget by way of its switch link.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_GetKernelInfo` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4be600
      **Inferred.** Allocates a 28-byte buffer with `drmMalloc` at 0x4be64c, issues `ioctl` with the request constant 0xffffffffc0246450 at 0x4be6a4 and 0x4be72c, and frees its buffers with `drmFree` at 0x4be6c8 and 0x4be6e0. It returns -0x16 on the path where a1 is zero and -0xc when the allocation fails at 0x4be658, which reads like an argument check and an out-of-memory error. The callee names suggest a DRM kernel-info query, but the render does not show the ioctl's result layout.
  Reviewed: 2026-11-12 (sonnet)

- `pciReadLong` in `usr/X11R6/bin/XFree86` at 0x1006df00
  **Inferred.** Calls `pciInit` at 0x1006df24, ahead of any branch the render shows. It then compares a bus index against `pciNumBuses` at 0x1006df4c and tests the flag loaded from 0x10240720 at 0x1006df54. When the later loaded values are non-zero it makes an indirect call through `pciBusInfo` at 0x1006df74 and returns that call's result. A second path returns -0x1 at 0x1006df9c. The render does not show whether the bus index is advanced in a loop, and shows no masking of the value it returns.
  Reviewed: 2026-11-12 (sonnet)

- `pciReadWord` in `usr/X11R6/bin/XFree86` at 0x1006dfc0
  **Inferred.** Tests the low two bits of the offset (a1 & 0x3) against 0 at 0x1006dfec and tests a value in s0 against 2 at 0x1006dff8; both branches go to 0x1006e00c when equal. The fall-through of the second branch reaches `FatalError` at 0x1006e004, which suggests a misaligned offset is treated as fatal. It then calls `pciReadLong` at 0x1006e018; the render does not show the value of a1 for that call. The render does not show how the 16-bit field is extracted from the long.
  Reviewed: 2026-11-12 (sonnet)

- `pciReadByte` in `usr/X11R6/bin/XFree86` at 0x1006e080
  **Inferred.** A thin wrapper that calls `pciReadLong` at 0x1006e0a8, passing a0, a2 and a3 from entry and a computed a1 the render does not resolve, and returns a value in v0 at 0x1006e0cc. The render shows no masking or shift of the result, so the byte selection, if any, is not visible in this routine.
  Reviewed: 2026-11-12 (sonnet)

- `pciWriteLong` in `usr/X11R6/bin/XFree86` at 0x1006e100
  **Inferred.** The write-side counterpart of `pciReadLong` by name. It calls `pciInit` at 0x1006e128, ahead of any branch the render shows, compares a0 against `pciNumBuses` at 0x1006e148, and makes an indirect call through `pciBusInfo` at 0x1006e170 when the loaded values it tests are non-zero. Its return value is either the result of `pciInit` or a value the render does not resolve. The shape mirrors the read path, which suggests the same bus table is used.
  Reviewed: 2026-11-12 (sonnet)

- `pciWriteWord` in `usr/X11R6/bin/XFree86` at 0x1006e1c0
  **Inferred.** Tests the low two bits of a1 (a1 & 0x3) against 0 at 0x1006e1f8 and a value in s1 against 2 at 0x1006e200. The path where both tests fail calls `FatalError` at 0x1006e20c with a4 = 0x2. It also calls `pciReadLong` at 0x1006e224 and `pciWriteLong` at 0x1006e254, returning the write's result at 0x1006e270. The render does not show what the read value is combined with, or what is passed to the write.
  Reviewed: 2026-11-12 (sonnet)

- `pciWriteByte` in `usr/X11R6/bin/XFree86` at 0x1006e280
  **Inferred.** Calls `pciReadLong` at 0x1006e2b4 and then `pciWriteLong` at 0x1006e2ec, returning the write's result in v0 at 0x1006e300. Its shape suggests a read-then-write wrapper, but the render shows no byte-merge instructions, so the lane selection is not visible here.
  Reviewed: 2026-11-12 (sonnet)

- `miRegionBreak` in `usr/X11R6/bin/XFree86` at 0x1019af40
  **Inferred.** Loads the pointer at a0+8; only when that pointer and the word it points at are both non-zero does it call `Xfree` at 0x1019af74, with the pointer as the first argument. It then loads four halfwords at offsets 0 to 6 and stores halfwords at offsets 0, 2, 4 and 6 and a word at offset 8 of its argument structure (0x1019af8c to 0x1019afb0), and returns 0x0 at 0x1019afb8. The render does not show where the loaded halfwords come from, though the name `miEmptyBox` suggests an empty-box constant. The name suggests it resets a region to an empty state, which the render does not fully confirm.
  Reviewed: 2026-11-12 (sonnet)

- `_stub` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x403ce0
  **Inferred.** A run of 21 indirect calls spaced 0x14 bytes apart (0x403cec to 0x403e7c), each through the same slot at 0xfb602ac. Only the first call is shown passing a0 to a3 from entry; the render does not resolve the arguments of the others. The symbol carries no real name, so the entry describes the stub shape only and not the routine it forwards to.
  Reviewed: 2026-11-12 (sonnet)
