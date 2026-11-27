# Role readings: `usr/gfx/arch/IP35VOYAGER64/libGL.so`

Routine roles, each read from the routine's own body. Calls through GOT slots are named by the slot's offset from gp where the symbol table does not name them.

- `__glConvolutionParameteriv_size` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2167770
  **Inferred.** Forwards to the float variant. It rebuilds gp from t9 with the constant 0x6 shifted left 16 less 0x2ab8, saves ra and gp on a 16-byte frame, calls `__glConvolutionParameterfv_size` through the GOT slot at gp-0x7aa0, and returns that routine's v0 unchanged.

- `__glXatExit` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217b150
  **Inferred.** Process-exit cleanup for the per-process display record at the fixed address 0x1028. It calls `__glXInitThread` first. It then walks the array of descriptors at record +0x1c, indexed by the count at +0x11c; each non-negative entry is passed to `close` and reset to -1. Afterward it calls the hook at +0x10 with the pointer at +0x8 when both are set, and frees the record with `free`.

- `SampleScore` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217db20
  **Established.** Compares two signed words a0 and a1 and returns a score. When a0 is less than a1 it returns (a0 - a1) shifted left by 6, which is negative. When they are equal it returns a1 shifted left by 6. When a0 is greater it returns 0. No calls, no memory access.

- `__glXIsDirect` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217cb00
  **Inferred.** Asks the server whether a GLX context is direct. It calls `__glXSetupForCommand` and returns 0 if that fails or if the context argument a1 is zero. It calls the hook pointer at +0x968 with the display (offset 0) before the request and offset 8 after it, and it calls the pointer at +0xd0 last when set. The request goes into the display buffer at +0xb0: byte 0 is the opcode from the setup call, byte 1 is minor code 6, the halfword at offset 2 is 2 and the word at offset 4 is a1. If fewer than 8 bytes remain before the end at +0xb8 it calls `_XFlush` and retries. It then calls `_XReply` into a stack buffer and returns byte 8 of the reply.

- `__glXFindFBConfigFromVid` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217d2d0
  **Inferred.** Looks up a framebuffer config by visual ID in one screen. It calls `__glXInitialize` and returns 0 when that fails, when the screen index a1 is negative, or when a1 is not below the screen count at display +0xe4. The screen block is 0x68 bytes at display +0x30 plus 0x68 times a1; its config list is at +0x18 and its count at +0x20. It scans the list in 180-byte steps and returns the entry whose word at +0x20 equals the key in a2, or 0 when none matches or the list is empty.

- `__glXFindFBConfig` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217d3e0
  **Inferred.** Same walk as the visual-ID lookup with a different key field: it returns the framebuffer config whose unsigned word at +0x48 equals the key in a2. The screen index and the 0x68-byte screen block are checked the same way, and the list is scanned in 180-byte steps. It returns 0 on the same failure paths.

- `FreeScreenConfigs` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2185410
  **Inferred.** Releases the per-screen config blocks of a display. It reads the display pointer from the first word of its argument and the screen count from display +0xe4, and if the count is zero or negative it only calls `XFree` on the screen array. Otherwise, for each 0x68-byte screen block it calls `free` on the pointers at +0x8, +0x18, +0x28 and +0x30 and clears each one. When the hook at +0x60 is set it calls the function at +0x40 with the display and the screen index, then clears +0x60. The screen array at argument +0x30 is released last with `XFree`.

- `__glXFreeDisplayPrivate` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2185510
  **Inferred.** Tears down the private block that a display keeps at +0x18. It calls `FreeScreenConfigs` on that block, then `free` on the pointers at +0x20 and +0x28, then `XFree` on the pointer at +0x2c0, and finally `free` on the block itself. It returns 0.

- `QueryVersion` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21855b0
  **Inferred.** Negotiates the GLX protocol version. It calls the hook at +0x968 before sending and the callback at +0xd0 after the request when set. The 12-byte request holds the major opcode in byte 0, minor code 7 in byte 1, length 3 in the halfword at offset 2, client major 1 in the word at offset 4 and client minor 4 in the word at offset 8. It calls `_XReply` and reads the server's major word at offset 8 and minor word at offset 12 of the reply. When the major word is 1 it stores 1 through the major-version pointer and stores the smaller of the server minor and 4 through the minor-version pointer, then returns 1. Otherwise it returns 0.

- `checkExtension` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x2188260
  **Inferred.** Tests whether an extension name appears as a whole word in a space-separated list. The name is in a0 and the list in a1. It calls `strstr` to find the name and accepts a hit only when the byte after it is a space or the end of the string. Otherwise it searches again from that byte and returns 0 when no whole-word match remains.

- `DestroyContext` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x217c200
  **Inferred.** Frees a GLX context. It calls `__glXSetupForCommand` and returns if that fails or the context pointer in a1 is null. It takes `__glXmutex` with `pthread_mutex_lock`. When the word at context +0x74c is set and the hook at +0x808 is non-null it calls the hook at +0x7e8 and clears +0x808. It releases the mutex. When the pointer at +0x758 is null it then calls `__glXFreeContext` with the context and 1. Unless the byte saved from +0x38 is set, it sends an 8-byte request with minor code 4 and the context tag saved from +0x28, using the display buffer at +0xb0, and calls the hook at +0x968 and the callback at +0xd0.

- `__glXSendMakeCurrent` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21893e0
  **Inferred.** Sends the GLX make-current request and copies the reply out. It calls `__glXSetupForCommand`, then the hook at +0x968 before the request. The 16-byte request has the opcode from setup in byte 0, minor code 5 in byte 1, length 4 in the halfword at offset 2, and words at offsets 4, 8 and 12 taken from its arguments and from +0x28 of the second argument when non-null. It calls `_XReply` and copies the first reply byte, the halfword at offset 2, and the words at offsets 4 and 8 to the output pointer. It returns 1 on success. When `_XReply` fails it calls `__glXPostHiddenError` with code 5 and returns 0.

- `_init` in `usr/gfx/arch/IP35VOYAGER64/libGL.so` at 0x21aea30
  **Inferred.** Standard ELF init prologue. It rebuilds gp from t9 with an offset of 0x16288, loads the GOT slot whose value is 0x2180000, subtracts 0x4fd0 to get 0x217b030, and calls that routine with `jalr`. It restores gp and ra and returns.
