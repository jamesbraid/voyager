# Tier-2 routine readings, voyager batch 3

Role statements for the 25 routines in batch 3 of the tier-2 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets, return values). Every entry is graded inferred: the render shows the calls and returns, but the intent is read from the callee names and the shape of the code.

- `xtalk_intr_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2cc
      **Inferred.** A 28-byte wrapper that passes its four argument registers unchanged to `hub_intr_alloc` through the jal at 0x2d4 and returns the callee's result in v0 at 0x2e0. The callee name suggests the xtalk interrupt-allocation call is delegated to the hub layer.

- `xtalk_intr_alloc_nothd` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2e8
      **Inferred.** A 28-byte pass-through that forwards a0 to a3 to `hub_intr_alloc_nothd` at the jal at 0x2f0 and returns its value in v0 at 0x2fc. The "nothd" in the name suggests the no-thread variant of the allocation.

- `xtalk_intr_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x304
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_free` at the jal at 0x30c and returns the callee's value in v0 at 0x318. It does no work of its own beyond the call.

- `xtalk_intr_connect` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x320
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_connect` at the jal at 0x328 and returns the callee's value in v0 at 0x334. The name points at attaching an interrupt handler, but the render does not show what the callee does with it.

- `xtalk_intr_disconnect` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x33c
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_disconnect` at the jal at 0x344 and returns the callee's value in v0 at 0x350. It has the same four-register pass-through shape as `xtalk_intr_connect`, and its callee name indicates the teardown side of that connection.

- `xtalk_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x358
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_cpu_get` at the jal at 0x360 and returns the callee's value in v0 at 0x36c. The name suggests it reports the CPU an interrupt is routed to.

- `xtalk_intr_cpuid_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x374
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_cpuid_get` at the jal at 0x37c and returns the callee's value in v0 at 0x388. The name suggests a CPU identifier rather than a CPU pointer, which the render does not confirm.

- `xtalk_error_devenable` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x43c
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_error_devenable` at the jal at 0x444 and returns the callee's value in v0 at 0x450. The name suggests enabling error reporting for a device.

- `xtalk_provider_startup` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x458
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_provider_startup` at the jal at 0x460 and returns the callee's value in v0 at 0x46c. The name suggests bringing up a crossbar provider, but the render shows only the delegation.

- `xtalk_provider_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x474
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_provider_shutdown` at the jal at 0x47c and returns the callee's value in v0 at 0x488. It has the same pass-through shape as `xtalk_provider_startup`, and its callee name indicates the teardown of that startup.

- `xtalk_widgetdev_enable` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x490
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_widgetdev_enable` at the jal at 0x498 and returns the callee's value in v0 at 0x4a4. The name suggests enabling a widget device on the crossbar.

- `xtalk_widgetdev_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4ac
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_widgetdev_shutdown` at the jal at 0x4b4 and returns the callee's value in v0 at 0x4c0. It has the same pass-through shape as `xtalk_widgetdev_enable`, and its callee name indicates the disable side of that enable.

- `xtalk_dma_enabled` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4c8
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_dma_enabled` at the jal at 0x4d0 and returns the callee's value in v0 at 0x4dc. The name suggests a query for whether DMA is enabled, but the render does not show what the query returns.

- `xtalk_provider_register` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x7e4
      **Inferred.** A 28-byte wrapper that passes its arguments to `hwgraph_fastinfo_set` at the jal at 0x7ec and returns the callee's value in v0 at 0x7f8. The name and the callee suggest it attaches the provider's function table to a hardware-graph vertex.

- `xtalk_provider_fns_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x81c
      **Inferred.** A 28-byte wrapper that passes its arguments to `hwgraph_fastinfo_get` at the jal at 0x824 and returns the callee's value in v0 at 0x830. It is the read side of `xtalk_provider_register` by name and callee.

- `xwidget_reset` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xaf4
      **Inferred.** A 28-byte pass-through that forwards its arguments to `xswitch_reset_link` at the jal at 0xafc and returns the callee's value in v0 at 0xb08. The name suggests resetting a widget by way of its switch link.

- `firegl_GetKernelInfo` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4be600
      **Inferred.** Allocates a 28-byte buffer with `drmMalloc` at 0x4be64c, issues `ioctl` with the request constant 0xffffffffc0246450 at 0x4be6a4 and 0x4be72c, and frees its buffers with `drmFree` at 0x4be6c8 and 0x4be6e0. It returns -0x16 on the path where a1 is zero and -0xc when the allocation fails at 0x4be658, which reads like an argument check and an out-of-memory error. The callee names suggest a DRM kernel-info query, but the render does not show the ioctl's result layout.

- `pciReadLong` in `usr/X11R6/bin/XFree86` at 0x1006df00
      **Inferred.** Calls `pciInit` at 0x1006df24 on first use, based on the flag loaded from 0x10240720 at 0x1006df54, then walks the buses up to `pciNumBuses` and makes an indirect call through `pciBusInfo` at 0x1006df74. It returns the callee's result or -0x1 when no bus matches at 0x1006df9c. The render shows no masking of the value it returns.

- `pciReadWord` in `usr/X11R6/bin/XFree86` at 0x1006dfc0
      **Inferred.** Checks that the offset is 2-byte aligned at 0x1006dfec and that the access size is 2 at 0x1006dff8, then reads a 32-bit value through `pciReadLong` at 0x1006e018. The branch fall-through leads to `FatalError` at 0x1006e004, which suggests a misaligned or wrong-size access is treated as fatal. The render does not show how the 16-bit field is extracted from the long.

- `pciReadByte` in `usr/X11R6/bin/XFree86` at 0x1006e080
      **Inferred.** A thin wrapper that calls `pciReadLong` at 0x1006e0a8 with its arguments and returns the value in v0 at 0x1006e0cc. The render shows no masking or shift of the result, so the byte selection, if any, is not visible in this routine.

- `pciWriteLong` in `usr/X11R6/bin/XFree86` at 0x1006e100
      **Inferred.** The write-side counterpart of `pciReadLong`. It calls `pciInit` at 0x1006e128 on first use, checks the bus index against `pciNumBuses` at 0x1006e148, and makes an indirect call through `pciBusInfo` at 0x1006e170. It returns the callee's value or the result of `pciInit`. The shape mirrors the read path, which suggests the same bus table is used.

- `pciWriteWord` in `usr/X11R6/bin/XFree86` at 0x1006e1c0
      **Inferred.** Checks 2-byte alignment at 0x1006e1f8 and the access size at 0x1006e200, reads the surrounding 32-bit word through `pciReadLong` at 0x1006e224, and writes it back through `pciWriteLong` at 0x1006e254. The misaligned path calls `FatalError` at 0x1006e20c with size 0x2. The render does not show how the new 16-bit value is merged into the word.

- `pciWriteByte` in `usr/X11R6/bin/XFree86` at 0x1006e280
      **Inferred.** A read-modify-write wrapper: it reads a 32-bit word through `pciReadLong` at 0x1006e2b4 and writes it back through `pciWriteLong` at 0x1006e2ec, returning the write's result in v0 at 0x1006e300. The render shows no byte-merge instructions, so the lane selection is not visible here.

- `miRegionBreak` in `usr/X11R6/bin/XFree86` at 0x1019af40
      **Inferred.** Copies an 8-byte empty-box value from `miEmptyBox` into the first eight bytes of its argument structure, using halfword loads and stores at 0x1019af8c to 0x1019afb0. If the pointer at a0+8 is non-null it calls `Xfree` at 0x1019af74 on it, and it returns 0x0 at 0x1019afb8. The name and the empty-box copy suggest it resets a region to an empty state, which the render does not fully confirm.

- `_stub` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` at 0x403ce0
      **Inferred.** A dispatch table of 21 stubs spaced 0x14 bytes apart, each making an indirect call through the same slot at 0xfb602ac (the jalr instructions at 0x403cec to 0x403e7c) with its arguments passed through. The symbol carries no real name, so the entry describes the stub shape only and not the routine it forwards to.
