# Readings: `firegl_GetKernelInfo`

One entry per routine, filed here from the reading batches by binary.

### `firegl_GetKernelInfo` in usr/X11R6/lib/modules/dri/fglrx_dri.so at 0x4be600

Role (from name): a DRM kernel-info query. The render shows a branch at 0x4be61c that continues at 0x4be640 when a1 is nonzero; the return at 0x4be62c can give -0x16 (one of its values), which is consistent with an a1 == 0 failure path but the render does not tie the value to that path. When a1 is nonzero it calls drmMalloc at 0x4be64c with a0 = 0x1c (28 bytes) and stores a word at 0x4be650. If the drmMalloc result is zero it returns -0xc at 0x4be66c. Otherwise it calls ioctl at 0x4be6a4 with a0 taken from its own first argument, request 0xffffffffc0246450 and a2 = sp-96, and a second ioctl at 0x4be72c with the same request and buffer; both outcomes branch on the ioctl result. Error paths call drmFree (0x4be6c8, 0x4be6e0) and a second drmMalloc at 0x4be6fc. Under the usual read-write ioctl encoding the request is a 36-byte argument for type 0x64, number 0x50. Beyond these calls, constants and branches no further reading is claimed.

Grade: inferred.

Reviewed: 2026-11-12 (sonnet)
