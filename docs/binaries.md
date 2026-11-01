# Shipped binaries

One entry per file in the install set, in the order of [the binaries table](inventory/binaries.tsv). Each entry names the file by its install path and says what the file is and what was read in it. Counts and section facts come from `readelf` on the file as shipped. "Defined" means a symbol with a value in the file; "undefined" means a name the file imports. A role built from names and from the calls listed here is **inferred**. A fact read from the whole file, or from a routine's whole body, is **established**. Routine addresses are `.text` offsets in the named object unless the entry says otherwise.


## X server and its modules

- `etc/X11/gen-XF86Config` (Perl script, 889 lines, 28551 bytes): **inferred** from the lines read.
  The script runs the X server with the scan option at line 72 and parses the PCI list it prints.
  Before it writes anything it makes default timing files under `/var/X11/Xvc/`.
  Each pipe gets a `SG2_<n>_TimingTable` at line 104, holding `1280x1024_60` and VC index 1.
  Each compositor that `/sbin/hinv` reports gets a `SC2_<n>_TimingTable` (line 52).
  It writes `/etc/X11/XF86Config-4` with one device section per card, `Driver "fglrx"` at line 721.
  The screens are chained by the `Layout` routine at line 854.
  An old file is renamed to `.O` when a PCI ID it lists is gone, and the new file gets `.N` when only the device count changed (lines 128 to 157).

- `etc/config/xf86config_autoconfig` (3 bytes, the text `on` and a newline): **established** from the whole file.
  `etc/init.d/xf86config` asks `/sbin/chkconfig` for this flag before it runs the generator.
  With `on`, the boot script regenerates the X configuration.

- `etc/config/xf86config_autoreplace` (4 bytes, the text `off` and a newline): **established** from the whole file.
  `etc/init.d/xf86config` reads this flag before it moves `.N` over the live configuration.
  With `off`, the regenerated file stays beside the old one under the `.N` name.

- `etc/init.d/xf86config` (764 bytes, Bourne shell): **established** from the whole script.
  It sets the configuration paths and runs `/etc/X11/gen-XF86Config` when the autoconfig flag is on.
  The two flags it reads are `xf86config_autoconfig` and `xf86config_autoreplace`.
  When the autoreplace flag is on and the `.N` file is readable, it moves the old file to `.O` and the new one into place.
  Its verbose message names `/etc/X11/XF86Config.O`, which is not the name the variable sets.

- `usr/X11R6/bin/XFree86` (N32 MIPS-III executable, 2569788 bytes, stripped): **inferred** to be the X server core.
  `readelf` shows 2924 defined function symbols in the dynamic table and 237 undefined names.
  Its `NEEDED` entries are `libm.so`, `libdl.so` and `libc.so.1`, and it has no `.debug_info` section.
  Its strings include `-scanpci`, with the help text "execute the scanpci module and exit".
  The PCI scan that `etc/X11/gen-XF86Config` reads is produced by the `libscanpci.so` module this server loads.

- `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` (N32 shared object, 76372 bytes, not stripped): **inferred** to be a direct-rendering screen driver for the multipipe build.
  It defines 81 functions, among them `__driCreateScreen` and `omp_initGLInterface`.
  It also exports `omp_initGLXInterface` and `OMPGetCurrentReadDrawable`.
  It carries its own copy of 76 `drm*` client routines.
  It imports 159 names, including the extension entry points `XShmPutImage` and `XSyncCreateCounter`.
  Its `NEEDED` entries are `libc.so.1` and `libGL.so`.

- `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` (ELF64 MIPS-III shared object, 82088 bytes): **established** that its 81 defined function names are identical to those of the N32 build of this module.
  The comparison was of the two sorted lists.
  It imports 159 names and lists the same two `NEEDED` entries.
  **Inferred** that it is the 64-bit build of the same driver; the 5716 bytes of difference are the wider words of the same code and data.

- `usr/X11R6/lib/modules/dri/fglrx_dri.so` (N32 shared object, 12888480 bytes, not stripped): **inferred** to be ATI's direct-rendering OpenGL driver for the Radeon family.
  `readelf` counts 9749 defined function symbols and 133 defined objects.
  It has 232 undefined names, and its `NEEDED` entries are `libm.so`, `libc.so.1`, `libGL.so` and `libX11.so`.
  Of the exported names, 1256 contain `R300` and 1232 contain `R200`.
  978 start with `gl`, and 45 start with `firegl` or `FIREGL`.

- `usr/X11R6/lib/modules/dri/fglrx_dri64.so` (ELF64 shared object, 14223320 bytes): **established** that its 9749 defined function names are identical to those of `fglrx_dri.so`.
  The comparison was of the two sorted lists.
  It has 231 undefined names where the N32 build has 232, and the same four `NEEDED` entries.
  **Inferred** that it is the 64-bit build of the same driver.

- `usr/X11R6/lib/modules/drivers/fglrx_drv.so` (N32 shared object, 700708 bytes): **inferred** to be the X server driver module for the card.
  It exports 178 defined functions and 34 objects, and imports 364 names.
  Its only `NEEDED` entry is `libc.so.1`.
  The exports include 13 `vfmt*` routines that read format files for three board families, such as `vfmtFindSG2FormatFile`.
  They also include 15 `SDB*` symbol-database routines and 15 `is1*` routines for the image-sync option, such as `is1Attach`.
  Overlay and stereo entries include `FIREGL_InitOverlay` and `QBS_EnableStereo`.
  66 exports carry the `R200` prefix, for example `R200Probe`, and none carry `R300`.
