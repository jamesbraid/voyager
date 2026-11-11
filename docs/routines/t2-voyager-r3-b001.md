# Tier-2 reading batch 1 of voyager

Routine role entries for the 25 targets at offset 25 of the t2list ranking (round t2list, located rows,
hardware-facing first). Each entry was rendered from the install path shown in its header.

- `pciio_dmamap_list` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2ac
  **Inferred.** The 28 bytes are a wrapper around the provider's DMA map-list call. The one `jal`, at 0x2b4, reaches `pcibr_dmamap_list` with the four argument registers as received, and the return at 0x2c0 hands back the callee's v0.

- `pciio_dmamap_done` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2c8
  **Inferred.** The body is 28 bytes and holds one call, the `jal` at 0x2d0 to `pcibr_dmamap_done`. Arguments a0 to a3 go through untouched, and the return at 0x2dc passes the callee's result up as v0.

- `pciio_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2e4
  **Inferred.** A single `jal` at 0x2ec reaches `pcibr_dmatrans_addr`. The routine keeps no state of its own, so the address it returns from 0x2f8 is whatever the provider computed.

- `pciio_dmatrans_list` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x300
  **Inferred.** Its only call is the `jal` at 0x308 into `pcibr_dmatrans_list`, which receives the caller's a0 to a3 unchanged. The return at 0x314 forwards that call's v0.

- `pciio_dmamap_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x438
  **Inferred.** The `jal` at 0x440 calls `pcibr_dmamap_drain`, and nothing else in the 28 bytes does work. The return at 0x44c hands back the provider's v0.

- `pciio_dmaaddr_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x454
  **Inferred.** One `jal`, at 0x45c, goes into `pcibr_dmaaddr_drain` with the argument registers passed on as received. The return at 0x468 gives back the callee's v0.

- `pciio_dmalist_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x470
  **Inferred.** The 28 bytes contain only the `jal` at 0x478 into `pcibr_dmalist_drain`. The return at 0x484 returns that call's result.

- `pciio_intr_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x4f4
  **Inferred.** This is an interrupt-release wrapper: its single `jal`, at 0x4fc, calls `pcibr_intr_free` with a0 to a3 as received. The result comes back through the return at 0x508.

- `pciio_intr_setmustrun` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x510
  **Inferred.** The `jal` at 0x518 invokes `pcibr_intr_setmustrun`, which by its name sets a must-run CPU for an interrupt; the routine adds no logic of its own. The return at 0x524 carries the provider's v0 back.

- `pciio_intr_connect` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x52c
  **Inferred.** It calls `pcibr_intr_connect` through the `jal` at 0x534 with no changes to the arguments. The return at 0x540 yields the callee's v0.

- `pciio_intr_disconnect` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x548
  **Inferred.** One `jal` at 0x550 reaches `pcibr_intr_disconnect`, arguments untouched. The return at 0x55c passes back that call's v0.

- `pciio_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x564
  **Inferred.** The `jal` at 0x56c reaches `pcibr_intr_cpu_get`, which by its name asks the provider which CPU an interrupt is routed to. The return at 0x578 relays the answer in v0.

- `pciio_error_devenable` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7ac
  **Inferred.** The 28 bytes make one call, the `jal` at 0x7b4 to `pcibr_error_devenable`, which the routine does not modify. The return at 0x7c0 gives the callee's v0 up.

- `pciio_provider_startup` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7c8
  **Inferred.** Only the `jal` at 0x7d0 to `pcibr_provider_startup` does work here, and the return at 0x7dc passes that result back.

- `pciio_provider_shutdown` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7e4
  **Inferred.** The `jal` at 0x7ec invokes `pcibr_provider_shutdown` with arguments as received, and the return at 0x7f8 hands back its v0.

- `_stub` in `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` at 0x404930
  **Inferred.** A 356-byte stub made of 22 indirect calls (`jalr` at 0x40493c through 0x404a8c). Every call loads the same unnamed function pointer, `[0xfb6032c]`, and passes the argument registers on. The render names no callee, so the routine is a dispatch stub whose target is only known at run time.

- `_stub` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bd010
  **Inferred.** A 1264-byte stub made of 63 indirect calls, each through the same unnamed slot `[0xfb602ac]`. The render names no callee, so the routine is a block of forwarding stubs for one shared function pointer. Which entry each call serves is not settled by the render.

- `firegl_InitDRM` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bed00
  **Inferred.** Returns early when a0 is zero (the `beq` at 0x4bed1c). It allocates a 0x18-byte block with `drmMalloc` (the `jalr` at 0x4bedcc), fills its fields, and maps and unmaps regions with `drmMap` (at 0x4beed4, 0x4bef28, 0x4bef70), `drmUnmap` (at 0x4bee50, 0x4bee74, 0x4bee8c) and `drmFree` (at 0x4beea4, 0x4beeb0). The meaning of the map arguments is not settled by the render.

- `firegl_PM4Alloc` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bf740
  **Inferred.** Walks a counter table at `[[a0+8]+4]` and `[[a0+16]+512]` with a loop from 0x4bf7a0 to 0x4bf818, then fills the object at `[a0+8]` (stores at 0x4bf9a0 to 0x4bfa90). On a failed path it calls `sginap` (0x4bfadc) and `fprintf` (0x4bfb10). The render does not establish what the request fields mean, so the allocation contract is read from the loop shape only.

- `firegl_PM4WaitForIdle` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bfb40
  **Inferred.** Calls `__fglDRMPM4Alloc` (at 0x4bfb7c) and then `__fglDRMPM4Submit` (at 0x4bfbbc), and loops on the counter at `[[a0+16]+512]` against `[a0+8]+4`, yielding with `sginap` (0x4bfc08) and waiting through `__fglQSQuietDown` (at 0x4bfc80 and 0x4bfcd8). It reads like a wait-until-idle loop; the exit value is not settled by the render.

- `firegl_DRMPoll` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4bfd80
  **Inferred.** Advances a shared counter at abs 0xb9e5ac with an `ll`/`sc` pair (at 0x4bfdcc and 0x4bfe34) and compares it with a bound computed from `[a0+20]`. It returns an unknown value at 0x4bfea4 and 0 at 0x4bfeb0. The render shows a poll shape, but the return contract is not settled.

- `_stub` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x515ad0
  **Inferred.** A 1516-byte stub table of 63 indirect calls. Each `ld` loads a different function pointer from a fixed table slot (`table(0x71b09c)`, `table(0x71b084)`, and so on, starting with abs 0xc30b84 at 0x515adc), then the `jalr` jumps through it. The render names no callee, so this is a jump table of per-function trampolines.

- `firegl_InitDRM` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x517530
  **Inferred.** The 64-bit counterpart of the 32-bit InitDRM. It returns early when a0 is zero (the `beq` at 0x51754c), allocates a 0x30-byte block with `drmMalloc` (at 0x517600), makes a second `drmMalloc` for a sized region (at 0x517664), and maps with `drmMap` (at 0x51772c, 0x517788, 0x5177d0). It unmaps and frees with `drmUnmap` (0x517694, 0x5176b8, 0x5176d4) and `drmFree` (0x5176f0, 0x517700) on the error path.

- `firegl_PM4Alloc` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x517f00
  **Inferred.** Walks the counter table at `[a0+16]:8` with a loop from 0x517f70 and compares it with the object at `[a0+32]:8` (loads at 0x517fb8 and 0x51812c). It calls `sginap` (at 0x518280) and `fprintf` (at 0x5182bc, with stream `__iob+64`) on the failure path. Field meanings are not settled by the render.

- `firegl_PM4WaitForIdle` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5182d0
  **Inferred.** Calls `__fglDRMPM4Alloc` (at 0x518310) and `__fglDRMPM4Submit` (at 0x518358, with constants 0x70000, 0x5c8, 0xf and 0xd0b), yields with `sginap` (0x5183a4), and waits through `__fglQSQuietDown` (at 0x518414 and 0x51846c). It returns 0 at 0x51848c and 1 at 0x5184c0. The 64-bit wait mirrors the 32-bit PM4 wait, but the exit condition for each return is not settled.
