# Tier-1 routine readings, voyager batch 0

Role statements for the two routines in batch 0 of the tier-1 reading round. Each statement uses only the rendered facts (registers, calls, constants, branch targets). Grades are inferred unless the render fully establishes the role. Both routines come from the fglrx driver files in the voyager tree.

### `firegl_modify_ldt` in usr/cpu/sysgen/IP35boot/fglrx.o at 0x10278

The routine is 8 bytes and does nothing beyond returning. The only rendered fact is that the return at 0x10278 leaves v0 at 0x0. It makes no calls, performs no memory accesses and has no branches. The name suggests an x86 LDT edit, which the render neither confirms nor rules out, so the stub may stand in for a call this build does not support.

Grade: inferred.

### `firegl_GetKernelInfo` in usr/X11R6/lib/modules/dri/fglrx_dri.so at 0x4be600

The routine looks like a DRM kernel-info query that fills a caller buffer through an ioctl. It returns -0x16 on the path where a1 is zero (the return at 0x4be62c), and returns -0xc when the drmMalloc result at 0x4be658 is zero (the return at 0x4be66c). Otherwise it allocates 28 bytes with drmMalloc at 0x4be64c, calls ioctl at 0x4be6a4 and 0x4be72c with request 0xffffffffc0246450 and a stack buffer at sp-96, and stores results through a1 at 0x4be650 and 0x4be7c0. The request value decodes, under the usual read-write ioctl encoding, to a 36-byte argument for type 0x64, so the buffer is probably a version or info record. The render does not show the record's fields, so that reading is an inference from the request shape alone.

Grade: inferred.
