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

- [amd-register-match.md](amd-register-match.md) and [amd-register-match.tsv](amd-register-match.tsv) compare the offsets the shipped drivers reach against AMD's published references.

## Used by

- [evidence/registers.md](../../evidence/registers.md): every register access the FireGL kernel object and X module make.
- [software/kernel/kernel-attach.md](../../software/kernel/kernel-attach.md): the first writes after a card is found and mapped.
- [software/kernel/kernel-ioctl-irq-functions.md](../../software/kernel/kernel-ioctl-irq-functions.md): the interrupt routines.
- [software/kernel/image-sync-functions.md](../../software/kernel/image-sync-functions.md): the image-sync driver.
- [software/xsgi/x-video-driver.md](../../software/xsgi/x-video-driver.md): overlay, timing and stereo.
- [software/xsgi/x-driver-functions.md](../../software/xsgi/x-driver-functions.md) and [software/xsgi/fglrx-drv-functions.md](../../software/xsgi/fglrx-drv-functions.md): the X server module's register use.
- [software/xsgi/libfglrxdrm-functions.md](../../software/xsgi/libfglrxdrm-functions.md): the DRM helper library.
- [software/xsgi/hw-explanations-voyager-w1.md](../../software/xsgi/hw-explanations-voyager-w1.md): hardware-facing routine explanations.
- [software/ucode/option-roms.md](../../software/ucode/option-roms.md): the option ROM images that program these blocks at power-on.
