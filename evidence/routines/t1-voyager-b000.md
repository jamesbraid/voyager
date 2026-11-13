# Tier-1 routine readings, voyager batch 0

Role statements for the two routines in batch 0 of the tier-1 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets). Grades are inferred unless the render fully establishes the role. Both routines come from the fglrx driver files in the voyager tree.

### `firegl_modify_ldt` in usr/cpu/sysgen/IP35boot/fglrx.o at 0x10278

The render shows one return at 0x10278 that leaves v0 at 0x0. It makes no calls, has no memory accesses and no branches, so the routine only returns zero. Role (from name): the name suggests an x86 LDT edit, which the render neither confirms nor rules out.

Grade: inferred.

Reviewed: 2026-11-12 (sonnet)

### `firegl_GetKernelInfo` in usr/X11R6/lib/modules/dri/fglrx_dri.so at 0x4be600

Role (from name): a DRM kernel-info query. The render shows a branch at 0x4be61c that continues at 0x4be640 when a1 is nonzero; the return at 0x4be62c can give -0x16 (one of its values), which is consistent with an a1 == 0 failure path but the render does not tie the value to that path. When a1 is nonzero it calls drmMalloc at 0x4be64c with a0 = 0x1c (28 bytes) and stores a word at 0x4be650. If the drmMalloc result is zero it returns -0xc at 0x4be66c. Otherwise it calls ioctl at 0x4be6a4 with a0 taken from its own first argument, request 0xffffffffc0246450 and a2 = sp-96, and a second ioctl at 0x4be72c with the same request and buffer; both outcomes branch on the ioctl result. Error paths call drmFree (0x4be6c8, 0x4be6e0) and a second drmMalloc at 0x4be6fc. Under the usual read-write ioctl encoding the request is a 36-byte argument for type 0x64, number 0x50. Beyond these calls, constants and branches no further reading is claimed.

Grade: inferred.

Reviewed: 2026-11-12 (sonnet)
