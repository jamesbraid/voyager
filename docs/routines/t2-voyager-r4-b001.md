# Tier-2 routine readings, voyager round 4, batch 1

Role entries for the 25 routines in batch 1 of the tier-2 reading round (targets 25 to 49 of the ranked list). Every routine is in the GLX driver DRI module at usr/X11R6/lib/modules/dri/fglrx_dri64.so. Each role comes from the rendered facts only: registers, offsets, branch targets, callees and constants. Entries are inferred because the renders establish the control flow and calls, not the field meanings.

- `__glRoundRGBAStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6ce0
  **Inferred.** Writes one stippled RGBA span of float colours. It reads the pixel count and stipple state at a0+258672 and a0+261104 (the test at 0x5b6d2c and the loop-back branches at 0x5b6d80 and 0x5b6e4c), loads the float constant at abs 0xc3f3a8 (lwc1 at 0x5b6d1c), and stores four colour channels per pixel with swc1 at 0x5b6da4, 0x5b6e00 and 0x5b6e28. The rounding rule applied to the channels is an open sub-fact here.

- `__glLogicOpSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6e90
  **Inferred.** Applies a logic operation to a span of pixels. The signed count at a0+258672 bounds the loop (blez at 0x5b6eac), each pixel index is compared against the table at a0+261104 (beq at 0x5b6ee0), and the op selector is checked against the unsigned bound 0x10 (beq at 0x5b6f24). The op dispatches through the jump table at 0xc00480 (indirect jump at 0x5b6f34), so the sixteen-way selector picks the per-pixel operation.

- `__glLogicOpStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b6fd0
  **Inferred.** The stippled counterpart of __glLogicOpSpan. The stipple test is the branch on a0+258672 at 0x5b7004, the per-pixel op dispatches through the sixteen-entry jump table at 0xc00500 (indirect jump at 0x5b70fc), and the masked-off pixels share one exit at 0x5b7080, reached by a run of always-taken beq branches. It loads the word at a0+0x1020 (lw at 0x5b70bc) and writes the result back with swc1 at 0x5b708c.

- `__glMaskRGBASpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b71b0
  **Inferred.** Applies the four per-channel write-mask bytes to an RGBA span. The mask bytes at a0+4172 through a0+4175 gate each channel (beq tests at 0x5b71ec, 0x5b71f8, 0x5b7208 and 0x5b7214, repeated at 0x5b7290 to 0x5b72a8), the signed count at a0+258672 bounds the span (blez at 0x5b71d8), float channel values at [a0+261104]:8 are rewritten in place (lwc1/swc1 pairs from 0x5b71f4 to 0x5b7220), and [a0+261128]:8 is only read (lwc1 from 0x5b72b4 to 0x5b730c).

- `__glMaskCISpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7310
  **Inferred.** Masks a colour-index span. The signed count at a0+258672 bounds the span (blez at 0x5b7348), the index mask word at a0+0x1048 is loaded at 0x5b7320, and each pixel index is compared against table(0x20) (bne at 0x5b7440) before the result is stored to table(0x10) at 0x5b7444. The stores to [a0+261104]:8 at 0x5b73a0 carry the per-pixel write-back.

- `__glInitBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7480
  **Inferred.** Initialises a buffer record at a0. It stores seven 8-byte words at a0+0x0 through a0+0x48 (sd at 0x5b7480 to 0x5b74a0), loads three globals from abs 0xc32278, 0xc32280 and 0xc30be0 (ld at 0x5b74a8, 0x5b74ac and 0x5b74b4), stores two of them at a0+0x20 and a0+0x28 and one at a0+0x30 (sd at 0x5b74b0, 0x5b74bc and 0x5b74c8), and returns the constant 0x5b74f0 in v0 at 0x5b74c4.

- `__glMakeCurrentBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b74d0
  **Inferred.** Sets a pair of pointer fields in the context at a0. The two sd stores at 0x5b74d0 and 0x5b74d8 write a0+0x10 and a0+0x0, and the return at 0x5b74d4 leaves v0 undefined. This is the small setter that makes a buffer current; the source of the stored values is an open sub-fact, as the argument registers are not named in the render.

- `__glLoseCurrentBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b74e0
  **Inferred.** The reverse of __glMakeCurrentBuffer at 0x5b74d0. It makes the same two 8-byte stores to a0+0x10 (0x5b74e0) and a0+0x0 (0x5b74e8) and returns at 0x5b74e4 with v0 undefined. Read as the counterpart of the setter, it drops the current-buffer pair when the context loses its drawable; the stored values are an open sub-fact.

- `__glLockBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7500
  **Inferred.** Locks the context's drawable buffers before a render. It walks seven buffer slots loaded from a0+271368, a0+271664, a0+272256, a0+272552, a0+273664, a0+273448 and a0+273824, and for each slot whose +0x48 pointer is set (beq tests at 0x5b7578, 0x5b759c, 0x5b75c0, 0x5b75e4, 0x5b76a4, 0x5b76cc and 0x5b76f0) it calls through the slot's +0x48 pointer (eight calls from 0x5b7580 to 0x5b76f8). The a1 bits 0x20 and 0x40 gate two of the slots (tests at 0x5b768c and 0x5b76bc), and the outer loop runs while s0 is below the signed count at a0+26164 (bound at 0x5b763c).

- `__glUnlockBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7740
  **Inferred.** The unlock counterpart of __glLockBuffers at 0x5b7500. It walks the same seven slots and tests the +0x50 pointer of each (beq tests at 0x5b77b0, 0x5b77d4, 0x5b77f8, 0x5b781c, 0x5b78e4, 0x5b7908 and 0x5b792c), then calls through the slot's +0x50 pointer, and the final call goes through a pointer at +0x3d0 of the table at [a0+276368] (calls from 0x5b7790 to 0x5b7974). A flag test at 0x5b7784 on the byte at [a0+262560] selects an alternate exit at 0x5b796c.

- `__glLockRenderBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7990
  **Inferred.** A thin wrapper that locks the render buffers by calling __glLockBuffers. It loads the word at a0+0x40158 (lw at 0x5b79b8), then calls __glLockBuffers at 0x5b7500 (bgezall at 0x5b79b4) with a0 and a3 passed through, a1 taken from [a0+262488], and the constant 0x6811e8 as a2. The callee's result is returned at 0x5b79c4.

- `__glUnlockRenderBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b79d0
  **Inferred.** The unlock twin of __glLockRenderBuffers at 0x5b7990. It loads the word at a0+0x40158 (lw at 0x5b79f8), then calls __glUnlockBuffers at 0x5b7740 (bgezall at 0x5b79f4) with a0 and a3 passed through, a1 from [a0+262488], and the constant 0x6811a8 as a2. The callee's result is returned at 0x5b7a04.

- `__glLockColorBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7a10
  **Inferred.** Locks the colour buffer of the current drawable. It loads the colour buffer record through [a0+262456] (ld at 0x5b7a58) and calls the drawable's hook at 0x5b7a60 with a0, a2 and a3 passed through. A non-zero result continues to a second call through the +0x48 pointer of the colour object at [[a0+262456]+16] (jalr at 0x5b7aa0), and the zero-result branch at 0x5b7a74 skips that second call. The return at 0x5b7a88 gives the callee's value.

- `__glUnlockColorBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7ad0
  **Inferred.** The unlock counterpart of __glLockColorBuffer at 0x5b7a10. It loads the colour buffer record from [a0+262456] (ld at 0x5b7b0c) and calls the drawable's unlock hook at 0x5b7b28 with the constant 0x6810a8 as a1. It then calls the colour object's +0x50 hook, reached through [[a0+262456]+16], at 0x5b7b70. The byte test at 0x5b7b14 against 1 on [a0+262560] and the word test at 0x5b7b20 on [a0+262576] gate the path.

- `__glLockColorBufferDepthBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7b80
  **Inferred.** Locks the colour and depth buffers as one step. It loads the colour object through [a0+262456] and the depth object at a0+273664 (ld at 0x5b7c08 and 0x5b7c1c), makes a hook call at 0x5b7bc4 on the drawable, then a dispatch-table call at 0x5b7c10 with the colour object and a dispatch-table call at 0x5b7c24 with the depth object. The branch at 0x5b7bd8 skips the depth lock when the first call returns zero, and the return at 0x5b7bec gives the last callee's value.

- `__glUnlockColorBufferDepthBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7c50
  **Inferred.** The unlock counterpart of __glLockColorBufferDepthBuffer at 0x5b7b80. It makes an unlock call at 0x5b7c9c with the argument from [a0+262576] and then calls the colour object's +0x50 hook at 0x5b7cec and the depth object at a0+273664 at 0x5b7cfc. The byte test at 0x5b7c8c on [a0+262560] and the word test at 0x5b7c94 on [a0+262576] decide whether the first call runs.

- `__glTestOwnership` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7d10
  **Inferred.** Returns 1 when the context owns the drawable record and 0 otherwise. It loads an ownership list through [[a0+276368]+1128] (lw at 0x5b7d20, 0x5b7d28 and 0x5b7d30), reads the list count at +176 (beq at 0x5b7d4c), walks the 8-byte entries at +184 with the index shifted left by 3 (computed at 0x5b7d60), and compares each entry with a1 (beq at 0x5b7d60). The return at 0x5b7d9c gives 1 on a match and the return at 0x5b7da4 gives 0. The field meanings of each entry are an open sub-fact.

- `__glFreePrivate` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7dc0
  **Inferred.** Releases the context's private sub-objects. It loads seven object pointers at a0+0x30, 0x38, 0x50, 0x58, 0x70, 0x78 and 0x80 (ld at 0x5b7dc4 to 0x5b7e7c), calls a release routine for each non-null object (seven calls from 0x5b7dfc to 0x5b7e8c), with the object's +0x78 hook passed as a3 in the first call. It makes one more call at 0x5b7ee8 with the constant 0x128 as a4 and stores a0+0x478 at 0x5b7f14.

- `__glUpdateWindowSize` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b7f30
  **Inferred.** Recomputes the cached window size when the drawable changes. It reads the word pairs at a0+0x7600 and a0+0x7604 and at a0+0x7618 through 0x7624, and writes them back as updated copies (sw at 0x5b7fe0, 0x5b82d0, 0x5b82d8, 0x5b8304 and 0x5b830c). It also stores float values at a0+0x61a0 and a0+0x61a4 (swc1 at 0x5b832c and 0x5b8334), and most of the 1.5 KB body reads per-buffer fields at a0+0x42xxx and a0+0x66xx that feed those copies. Which word of each pair is the width and which the height is an open sub-fact.

- `__glMakeCurrentReadBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b8540
  **Inferred.** Binds the read-side buffers when a context is made current. It stores two words from a record returned by an earlier call (+8 and +12) into a0+0x7620 and a0+0x7624 (sw at 0x5b8580 and 0x5b858c), reads the flag bytes at a0+0x66f6 through 0x66fa, and passes its arguments through to a bind hook at 0x5b8554. It then calls three context table entries at a0+274136, a0+274432 and a0+274728 (jalr at 0x5b85a0, 0x5b85c8 and 0x5b85f0), which sit 296 bytes apart.

- `__glMakeCurrentBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b8780
  **Inferred.** Installs the drawable's buffer state when a context is made current. It is the largest routine in the batch (3828 bytes). It has about a hundred stores into the context at a0+0xe2b0 through a0+0xe2dc and a0+0x144 through 0x148, bulk writes at a0+0x50b90 (sw at 0x5b880c and 0x5b9028), a flag byte store at a0+0x7ea8 (sb at 0x5b8c9c), and a read of the global at a0+0x43790 (sd at 0x5b87b8). The meaning of each context field it writes is an open sub-fact, and the role stays at the level of the state install.

- `__glLoseCurrentReadBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b9680
  **Inferred.** Tears down the read-side buffers when a context loses its drawable. It calls release hooks for eight context table entries at a0+274136, 274432, 274728, 275024, 275328, 275624, 275840 and 276000 (jalr at 0x5b96d4 to 0x5b97dc). It then calls __glATIPickBufferProcs at 0x568420 (jalr at 0x5b9838), which fits a reset of the pick procedures, and makes two calls through [a0+276328] at 0x5b9870 and 0x5b9884.

- `__glLoseCurrentBuffers` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b98a0
  **Inferred.** The draw-side teardown counterpart of __glMakeCurrentBuffers at 0x5b8780. It calls release hooks for eight context table entries at a0+271352, 271648, 272240, 272536, 273136, 273432, 273648 and 273808 (jalr at 0x5b98f4 to 0x5b9a14). It then walks the object chain at [a0+273128] with offsets 0, 296, 592 and 888 (jalr at 0x5b9a24 to 0x5b9a60), and stores a0+0x43790 at 0x5b9a70.

- `__glFreeBufData` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b9ab0
  **Inferred.** Frees the buffer data attached to the context. It calls release hooks for the context table entries at a0+271352 (with 0x40000 as a3 and [a0+271400] as a4, jalr at 0x5b9af4), a0+272240, 273432, 273648, 273808, 273136, 271648 and 272536 (jalr at 0x5b9b1c to 0x5b9c74). It also calls down the object chain at [a0+273128] at offsets 0, 296, 592 and 888 (jalr at 0x5b9bb4 to 0x5b9c20), which mirrors the teardown in __glLoseCurrentBuffers.

- `__glATIFSAAModifyReadBuffer` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b9c90
  **Inferred.** Prepares the read buffer for full-scene anti-aliasing. It reads the word at a0+0xcd4 first (lw at 0x5b9c94), submits the buffer through __glATISubmitBM at 0xb49080 (jalr at 0x5b9e0c), and then calls fglX11ResolveFSAAColorBuffer with the read-buffer record at [a0+276328] and its +136 field (jalr at 0x5b9e30), which points to a colour resolve before the read. It also swaps pointer pairs at a0+0x43770 and a0+0x43778 (sd at 0x5b9f7c and 0x5b9fa4). The resolve call's name is the strongest evidence for the role.
