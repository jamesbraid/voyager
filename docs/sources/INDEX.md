# Public sources

Public documents and code this workspace reads, by title and public URL only. Nothing here is a copy. A claim that rests on one of them cites it by title and section in the owning chapter.

## AMD register and acceleration references

- Radeon R3xx 3D Register Reference Guide, revision 1.0, 25 February 2008 (AMD, for the R300 family; file R3xx_3D_Registers.pdf): https://www.x.org/docs/AMD/old/R3xx_3D_Registers.pdf
- Radeon R5xx Acceleration, revision 1.5, 8 June 2010 (AMD; the 2D and command-processor chapters describe the R5xx generation, a later chip than the R300 and R350): https://www.x.org/docs/AMD/old/R5xx_Acceleration_v1.5.pdf
- M56 Register Reference Guide, revision 0.03o, part RRG-216M56-03oOEM, 2007 (AMD; an R5xx-generation register reference including the 3D block, a later chip than the R300 and R350): https://www.x.org/docs/AMD/old/RRG-216M56-03oOEM.pdf

## SGI documents

- Silicon Graphics Onyx4 UltimateVision User's Guide, 007-4634-002: https://irix7.com/techpubs/007-4634-002.pdf
- Silicon Graphics UltimateVision Graphics Porting Guide, 007-4297-001 (public URL not recorded)
- Silicon Graphics Onyx4 UltimateVision Start Here Guide, 007-4667 (revision and public URL not recorded)
- SGI Scalable Graphics Compositor User's Guide, 007-4602-002: https://www.infania.net/misc1/sgi_techpubs/techpubs/007-4602-002.pdf
- SGI OpenGL Multipipe User's Guide, 007-4318-015: https://irix7.com/techpubs/007-4318-015.pdf
- OpenGL on Silicon Graphics Systems, 007-2392-003: https://irix7.com/techpubs/007-2392-003.pdf

The SGI entries were found by title search; their contents have not been read for this workspace yet.

## Public drivers

- Linux kernel, radeon DRM driver for R3xx: `drivers/gpu/drm/radeon/` (`r300.c`, `r300_reg.h`, `r300d.h`, `reg_srcs/r300`): https://github.com/torvalds/linux (submodule `linux/`)
- Mesa, r300 Gallium driver and shader compiler: `src/gallium/drivers/r300/`, `include/pci_ids/r300_pci_ids.h`: https://gitlab.freedesktop.org/mesa/mesa (submodule `mesa/`)
- Linux kernel, SGI SN2 PCI and crossbar headers as of Linux 2.6.5 (`include/asm-ia64/sn/pci/pciio.h`, `pci/bridge.h`, `pci/pic.h`, `xtalk/xwidget.h`), for the IRIX-derived `pciio_*` constants and the Bridge and PIC register layout: https://git.kernel.org/pub/scm/linux/kernel/git/tglx/history.git (tag v2.6.5)
- linux-firmware, `radeon/R200_cp.bin`, `radeon/R300_cp.bin` and `radeon/R420_cp.bin` (command-processor microcode images, compared, not copied): https://gitlab.com/kernel-firmware/linux-firmware
- VESA BIOS Extension (VBE) Core Functions Standard, for function 0x4f02/0x4f03 and mode 0x107 (version and public URL not recorded)
- Linux kernel, radeon DRM driver, legacy ATI BIOS tables: `drivers/gpu/drm/radeon/radeon_combios.c`, `radeon_bios.c` and `radeon_reg.h`: https://github.com/torvalds/linux
- Linux kernel, `include/uapi/video/uvesafb.h` (the VESA information block layout): https://github.com/torvalds/linux
- EDK2, `MdePkg/Include/IndustryStandard/Pci22.h` (PCI expansion ROM header and PCI data structure, quoting the PCI Local Bus Specification 2.2): https://github.com/tianocore/edk2
- The PCI ID database, vendor 0x1002 entries: https://raw.githubusercontent.com/pciutils/pciids/master/pci.ids

