# display: display, interrupt and engine registers

This unit holds the registers of the R3xx-class FireGL boards (the R300 on the FireGL X1, the R350 on the X2) that sit outside the 3D pipeline. The 3D pipe-select and hierarchical Z registers are the separate [pipes](../pipes/README.md) unit.

The register map is [registers.toml](registers.toml). It is the hand-edited source: every register and field carries a grade (established, inferred or unknown) and the document it comes from, which is the public Linux radeon and Mesa R300 register headers and AMD's R3xx and R5xx register and acceleration references. [registers.md](registers.md) is the generated reference table, and the C, Rust, Python, JSON and genxml forms are under [generated/](../../generated/).

## What it covers

- Clock and PLL access: an index and a data register.
- Scratch registers the video BIOS and the driver leave state in (`bios_4_scratch` to `bios_7_scratch`).
- Interrupt control and status.
- The two display controllers (CRTC and CRTC2), the DAC, the second flat-panel interface, the display base address and offset control, and the video overlay and sub-picture blocks.
- Memory controller locations (framebuffer and AGP apertures), memory size and status.
- General-purpose I/O pads.
- The video capture, TV and video input port control registers.
- The command processor: ring buffer base, size and pointers, the command queue control, status, and the access path to the microengine RAM.
- Engine status, soft reset and the 2D destination and brush registers.

Offsets are in the register aperture. Several registers are known only by their offset and carry an `unnamed_` name until a public or shipped source names them; [questions/open-questions.md](../../questions/open-questions.md) lists those.

## Also here

- [tiled-scanout.md](tiled-scanout.md): the macro-tiled and micro-tiled front buffer layout (address of a pixel at a given pitch and size) and how the first display controller scans it out, with the 0x228 and 0x350 values the X server writes.
- [interrupts-and-waits.md](interrupts-and-waits.md): which interrupt sources the drivers enable and acknowledge, how the card's interrupt reaches IRIX, and every wait the X server and DRM library make after the mode set (ring read-pointer write-back, status polls), with the likely hang points.
- [amd-register-match.md](amd-register-match.md) and [amd-register-match.tsv](amd-register-match.tsv) compare the offsets the shipped drivers reach against AMD's published references.

## Colour output chain and the default gamma

Release IRIX 6.5.30m, `fglrx_drv.so` (X module). Ratings: **established** (routine read), **inferred**, **unknown**.

- **established.** Unlike the other IRIX graphics drivers read so far, this module reads the system default gamma itself. `R200PreInitGamma` (0x415c00) sets three floats to 0.0 and calls `R200SGIVCSetDefGamma` (0x44aac0), which opens `/etc/config/system.glGammaVal`, reads one `%f` and, only when that returns 1, stores it into all three floats; `R200PreInitGamma` then passes them to `xf86SetGamma`. With the file missing or unreadable the floats stay 0.0, which XFree86 treats as "not set" (**inferred** from the XFree86 convention; the core routine is not in the module), so the screen falls back to the server default of 1.0. With the shipped file (1.7) the pre-init gamma is 1.7.
- **established.** `FGLSetGammaData` (0x42fe00, read in full, [x-driver-functions.md](../../software/xsgi/x-driver-functions.md)) builds the 10-bit palette from gamma values held as hundredths: entry i is the truncation of pow(i / 256, 1/g) x 1023 + 0.5, with x = i / 256 and not i / 255. At g = 1.0 the last entry is therefore 1019, not 1023: a "unity" ramp does not reach full DAC scale on this path. `Rage6SetGamma16Correction` (0x42e340) loads a caller's 16-bit table as value >> 6 into the same palette, so white there is 0x3ff. Both write 256 entries of 3 x 10 bits through `PALETTE_30_DATA` (`dac_cntl` bit 8, 8-bit DAC enable, is set; 16 bits per pixel without the overlay flag uses a 64-entry form).
- **inferred.** The framebuffer is 8 bits a channel at every depth the module serves. `xf86SetDepthBpp` is called with a default depth of 8 and the 32-bits-per-pixel flag but not the 24-bit one (the module prints "R200 does NOT support 24bpp"), and the GLX visual builder at 0x425480 branches on depths 8, 15, 16, 24 and 32 and builds the 32-bit masks 0xff0000, 0xff00, 0xff and 0xff000000; no 10-bit mask appears in it. Whether the OpenGL path offers any visual wider than 8 bits a channel is **unknown** (the GLX visual builder was read at the depth branches only).
- **inferred.** Order of stages: framebuffer (8 bits) to the 256-entry 10-bit palette (gamma) to the DAC; the overlay and cursor merge points relative to the palette are **unknown** (the `FIREGL_Overlay*` routines were not traced to a palette stage). Test: scan out a ramp with the overlay and the hardware cursor over it and read the DAC or capture the digital output.

## Used by

- [devices/display/bit-layouts.md](bit-layouts.md): every register access the FireGL kernel object and X module make.
- [software/kernel/kernel-attach.md](../../software/kernel/kernel-attach.md): the first writes after a card is found and mapped.
- [software/kernel/kernel-ioctl-irq-functions.md](../../software/kernel/kernel-ioctl-irq-functions.md): the interrupt routines.
- [software/kernel/image-sync-functions.md](../../software/kernel/image-sync-functions.md): the image-sync driver.
- [software/xsgi/x-video-driver.md](../../software/xsgi/x-video-driver.md): overlay, timing and stereo.
- [software/xsgi/x-driver-functions.md](../../software/xsgi/x-driver-functions.md) and [software/xsgi/fglrx-drv-functions.md](../../software/xsgi/fglrx-drv-functions.md): the X server module's register use.
- [software/xsgi/libfglrxdrm-functions.md](../../software/xsgi/libfglrxdrm-functions.md): the DRM helper library.
- [software/xsgi/hw-explanations-voyager-w1.md](../../software/xsgi/hw-explanations-voyager-w1.md): hardware-facing routine explanations.
- [software/ucode/option-roms.md](../../software/ucode/option-roms.md): the option ROM images that program these blocks at power-on.
