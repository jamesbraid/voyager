# Public sources

Public documents and code this workspace reads, by title and public URL only. Nothing here is a copy. A claim that rests on one of them cites it by title and section in the owning chapter.

## AMD register and acceleration references

- R3xx 3D Registers (AMD, for the R300 family): https://www.x.org/docs/AMD/old/R3xx_3D_Registers.pdf
- R5xx Acceleration, version 1.5 (AMD; the 2D and command-processor chapters describe the R5xx generation, a later chip than the R300 and R350): https://www.x.org/docs/AMD/old/R5xx_Acceleration_v1.5.pdf

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
- The PCI ID database, vendor 0x1002 entries: https://raw.githubusercontent.com/pciutils/pciids/master/pci.ids

