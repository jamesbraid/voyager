# Tier-2 reading batch 1 of voyager

Routine role entries for the 25 targets at offset 25 of the t2list ranking (round t2list, located rows,
hardware-facing first). Each entry was rendered from the install path shown in its header.

- `pciio_dmamap_list` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2ac
  **Inferred.** The 28 bytes are a wrapper around the provider's DMA map-list call. The one `jal`, at 0x2b4, reaches `pcibr_dmamap_list` with the four argument registers as received, and the return at 0x2c0 hands back the callee's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmamap_done` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2c8
  **Inferred.** The body is 28 bytes and holds one call, the `jal` at 0x2d0 to `pcibr_dmamap_done`. Arguments a0 to a3 go through untouched, and the return at 0x2dc passes the callee's result up as v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2e4
  **Inferred.** A single `jal` at 0x2ec reaches `pcibr_dmatrans_addr` with a0 to a3 as received, and the return at 0x2f8 hands back that call's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmatrans_list` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x300
  **Inferred.** Its only call is the `jal` at 0x308 into `pcibr_dmatrans_list`, which receives the caller's a0 to a3 unchanged. The return at 0x314 forwards that call's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmamap_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x438
  **Inferred.** The `jal` at 0x440 calls `pcibr_dmamap_drain`, and nothing else in the 28 bytes does work. The return at 0x44c hands back the provider's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmaaddr_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x454
  **Inferred.** One `jal`, at 0x45c, goes into `pcibr_dmaaddr_drain` with the argument registers passed on as received. The return at 0x468 gives back the callee's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmalist_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x470
  **Inferred.** The 28 bytes contain only the `jal` at 0x478 into `pcibr_dmalist_drain`. The return at 0x484 returns that call's result.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_intr_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x4f4
  **Inferred.** Its single `jal`, at 0x4fc, calls `pcibr_intr_free` with a0 to a3 as received. The result comes back through the return at 0x508. Role (from name): an interrupt-release wrapper.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_intr_setmustrun` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x510
  **Inferred.** The `jal` at 0x518 invokes `pcibr_intr_setmustrun` with a0 to a3 as received, and the return at 0x524 carries that call's v0 back. Role (from name): sets a must-run CPU for an interrupt.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_intr_connect` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x52c
  **Inferred.** It calls `pcibr_intr_connect` through the `jal` at 0x534 with no changes to the arguments. The return at 0x540 yields the callee's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_intr_disconnect` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x548
  **Inferred.** One `jal` at 0x550 reaches `pcibr_intr_disconnect`, arguments untouched. The return at 0x55c passes back that call's v0.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x564
  **Inferred.** The `jal` at 0x56c reaches `pcibr_intr_cpu_get` with a0 to a3 as received, and the return at 0x578 relays that call's v0. Role (from name): asks which CPU an interrupt is routed to.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_error_devenable` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7ac
  **Inferred.** The 28 bytes make one call, the `jal` at 0x7b4 to `pcibr_error_devenable`, which the routine does not modify. The return at 0x7c0 gives the callee's v0 up.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_provider_startup` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7c8
  **Inferred.** Only the `jal` at 0x7d0 to `pcibr_provider_startup` does work here, and the return at 0x7dc passes that result back.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_provider_shutdown` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7e4
  **Inferred.** The `jal` at 0x7ec invokes `pcibr_provider_shutdown` with arguments as received, and the return at 0x7f8 hands back its v0.
  Reviewed: 2026-11-12 (sonnet)

- `_stub` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404930
  **Inferred.** A 356-byte stub made of 22 indirect calls (`jalr` at 0x40493c through 0x404a8c), every one through the same unnamed function pointer `[0xfb6032c]`. Call 1 receives a0 to a3 as at entry; the facts do not show the argument registers for calls 2 to 22. The render names no callee. Role (from name): a dispatch stub; the target is only known at run time.
  Reviewed: 2026-11-12 (sonnet)

- `_stub` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bd010
  **Inferred.** A 1264-byte stub made of 63 indirect calls, each through the same unnamed slot `[0xfb602ac]`. The render names no callee. Role (from name): a block of forwarding stubs for one shared function pointer; which entry each call serves is not settled by the render.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_InitDRM` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bed00
  **Inferred.** Branches at 0x4bed1c to 0x4bed80 when a0 is zero; the facts do not show what that path returns. The `jalr` at 0x4bedcc calls `drmMalloc` with a size of 0x18, reached when a1 is zero, and later stores fill fields. A second `drmMalloc` is called at 0x4bee24. When its result is zero, the code calls `drmUnmap` (at 0x4bee50, 0x4bee74, 0x4bee8c) and `drmFree` (at 0x4beea4, 0x4beeb0), each preceded by a test of a loaded value. Otherwise it calls `drmMap` at 0x4beed4, 0x4bef28 and 0x4bef70. The meaning of the map arguments is not settled by the render.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_PM4Alloc` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bf740
  **Inferred.** Loops from 0x4bf7a0 to 0x4bf818, comparing the value at `[[a0+8]+4]` with the value at `[[a0+16]+512]`. It then performs stores (from 0x4bf9a0 to 0x4bfa90, among others), and one return at 0x4bfa60 gives `[a0+12] + ([[a0+8]+4] << 2)`. It calls `sginap` with a0 of 0 (0x4bfadc) and `fprintf` (0x4bfb10, stream `__iob+32`). The render does not establish what the request fields mean, nor which path reaches each call.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_PM4WaitForIdle` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bfb40
  **Inferred.** Calls `__fglDRMPM4Alloc` (at 0x4bfb7c) and then `__fglDRMPM4Submit` (at 0x4bfbbc). It then compares `[[a0+16]+512]` with `[[a0+8]+4]`, calls `sginap` (0x4bfc08) and calls `__fglQSQuietDown` (at 0x4bfc80 and 0x4bfcd8). It returns 0 at 0x4bfcf8 and 1 at 0x4bfd2c; the render does not settle which condition leads to each. Role (from name): wait for the engine to go idle.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_DRMPoll` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bfd80
  **Inferred.** Loads abs 0xb9e5ac and compares a value derived from it with a bound computed from `[a0+20]`, and has `ll` at 0x4bfdcc and 0x4bfe34 with `sc` at 0x4bfddc and 0x4bfe44. The facts do not show which address the `ll`/`sc` pairs use. It returns an unknown value at 0x4bfea4 and 0 at 0x4bfeb0; the return contract is not settled. Role (from name): a poll.
  Reviewed: 2026-11-12 (sonnet)

- `_stub` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x515ad0
  **Inferred.** A 1516-byte stub made of 63 indirect calls. Each is preceded by an `ld` (the first at 0x515adc, the call at 0x515ae4) and the render shows the callee as unknown. Call 1 receives a0 to a3 as at entry; the facts do not show them for calls 2 to 63. Role (from name): a table of per-function trampolines; the target of each call is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_InitDRM` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x517530
  **Inferred.** Branches at 0x51754c to 0x5175b0 when a0 is zero; the facts do not show what that path returns. It calls `drmMalloc` with a size of 0x30 (at 0x517600), reached when a1 is zero, and a second `drmMalloc` for a sized region (at 0x517664). When that second result is zero it calls `drmUnmap` (0x517694, 0x5176b8, 0x5176d4) and `drmFree` (0x5176f0, 0x517700), each preceded by a test. Otherwise it calls `drmMap` (at 0x51772c, 0x517788, 0x5177d0). The meaning of the map arguments is not settled by the render.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_PM4Alloc` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x517f00
  **Inferred.** Loops from 0x517f70, comparing values at `[[a0+16]:8+4]` and `[[a0+32]:8+512]`. It calls `sginap` with a0 of 0 (at 0x518280) and `fprintf` (at 0x5182bc, stream `__iob+64`). One return at 0x51823c has an unknown value. The render does not establish field meanings, nor which path reaches each call.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_PM4WaitForIdle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5182d0
  **Inferred.** Calls `__fglDRMPM4Alloc` (at 0x518310) and `__fglDRMPM4Submit` (at 0x518358, with a2 to a5 of 0x70000, 0x5c8, 0xf and 0xd0b). It then calls `sginap` (0x5183a4) and `__fglQSQuietDown` (at 0x518414 and 0x51846c). It returns 0 at 0x51848c and 1 at 0x5184c0; the render does not settle the condition for each. Role (from name): wait for the engine to go idle.
  Reviewed: 2026-11-12 (sonnet)
