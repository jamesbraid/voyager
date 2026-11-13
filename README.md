# voyager

Reverse-engineering workspace for the ATI R300 and R350 graphics processors as fitted in the
SGI Onyx4 UltimateVision: the FireGL X1 (R300) and FireGL X2 (R350). VOYAGER is SGI's board name for them.

This repository was named r300 until 2026-11-01.

The layout and working style follow techomancer's [gr2](https://github.com/techomancer/gr2) and
[gr4](https://github.com/techomancer/gr4). Proprietary IRIX and ATI binaries are not tracked. Copy them from
your own IRIX install or media into the ignored `root/` directory as [IRIX_FILES.md](IRIX_FILES.md)
describes, then link the convenience directories as that file describes. [AGENTS.md](AGENTS.md) has the project goal, the binaries and
evidence, the toolchain and the working rules; [docs/coverage.md](docs/coverage.md) is the map of what is
covered and what is next; [docs/open-questions.md](docs/open-questions.md) holds what is not known yet.

## Document index

Every tracked document at the top level and under `docs/`, grouped by subject.

### Top level

- [AGENTS.md](AGENTS.md) — Project goal, evidence labels, toolchain and working rules.
- [IRIX_FILES.md](IRIX_FILES.md) — IRIX files needed for the R300 and R350 reverse engineering.
- [README.md](README.md) — This overview and document index.

### Coverage and open items

- [docs/coverage.md](docs/coverage.md) — Two views of what the workspace covers and what is next.
- [docs/open-questions.md](docs/open-questions.md) — Questions the binaries and published sources have not answered.
- [docs/sources/INDEX.md](docs/sources/INDEX.md) — Public documents and code this workspace reads, by title and URL.
- [docs/inventory/README.md](docs/inventory/README.md) — Columns, statuses and rules for the generated inventory tables.
- [docs/binaries.md](docs/binaries.md) — One entry per shipped file in the install set.

### Registers and option ROMs

- [devices/display/registers.md](devices/display/registers.md) — Reference page for the display, interrupt and engine layouts, generated from `devices/display/registers.toml`.
- [docs/registers.md](docs/registers.md) — Register accesses of the FireGL kernel object and X module.
- [docs/amd-register-match.md](docs/amd-register-match.md) — Register offsets against AMD's published references.
- [docs/option-roms.md](docs/option-roms.md) — The three video option ROM images, sg2, sg3 and sg3a.
- [docs/hw-explanations-voyager-w1.md](docs/hw-explanations-voyager-w1.md) — Hardware-facing routine explanations for the R200 X module, wave 1.

### Kernel objects

- [docs/kernel-attach.md](docs/kernel-attach.md) — How IRIX finds, maps and first-writes an Onyx4 FireGL card.
- [docs/kernel-bus-objects.md](docs/kernel-bus-objects.md) — Three IRIX kernel objects between the host and the FireGL cards.
- [docs/kernel-compat-layer.md](docs/kernel-compat-layer.md) — Linux compatibility layer in the kernel driver (IP35).
- [docs/kernel-object-functions.md](docs/kernel-object-functions.md) — Kernel object: open, release, detach and board-identity routines.
- [docs/kernel-drm-functions.md](docs/kernel-drm-functions.md) — The FireGL kernel driver: lock, map, buffer and context routines.
- [docs/kernel-ioctl-irq-functions.md](docs/kernel-ioctl-irq-functions.md) — The FireGL kernel driver: ioctl and interrupt routines.
- [docs/messages.md](docs/messages.md) — Console messages printed by the FireGL kernel driver.
- [docs/image-sync-functions.md](docs/image-sync-functions.md) — Image-sync driver: one entry per routine.

### X server and user-side

- [docs/fglrx-drv-functions.md](docs/fglrx-drv-functions.md) — The FireGL X server module: one entry per routine.
- [docs/x-driver-functions.md](docs/x-driver-functions.md) — X server driver module: one entry per routine.
- [docs/x-video-driver.md](docs/x-video-driver.md) — X video driver: overlay, timing, stereo and BIOS-interface routines.
- [docs/x-helper-modules.md](docs/x-helper-modules.md) — Helper modules: PCI tables, VESA BIOS calls and int10 hooks.
- [docs/xserver-functions.md](docs/xserver-functions.md) — The XFree86 server: one entry per routine.
- [docs/dri-driver.md](docs/dri-driver.md) — DRI driver, o32 and n32 build.
- [docs/dri-driver-64.md](docs/dri-driver-64.md) — Direct-rendering driver, 64-bit build (fglrx_dri64.so).
- [docs/libfglrxdrm-functions.md](docs/libfglrxdrm-functions.md) — The FireGL DRM helper library: one entry per routine.
- [docs/messages-userland.md](docs/messages-userland.md) — Messages from the FireGL X driver and the userland tools.

### Instruction readings

- `docs/instruction-readings-voyager-g1.md` to `g4.md` — Instruction-level readings, g1 to g4, indexed as one group.

## Scope

- the R300 and R350 as fitted in the Onyx4 FireGL X1 and X2;
- the IRIX 6.5.30 Onyx4 graphics drivers and libraries: the FireGL kernel object, the VGA and BIOS emulation
  objects, the X server modules, the direct-rendering drivers, the GL libraries, the board tools and the three
  option ROM images;
- the IP35 host side the cards attach through (crossbar, PCI bridge, PROM), as far as the cards need it;
- public AMD R3xx and R5xx register and acceleration references ([docs/sources/INDEX.md](docs/sources/INDEX.md));
- open-source radeon drivers as public cross-checks of register meaning, each a pinned submodule listed in
  [docs/sources/INDEX.md](docs/sources/INDEX.md): Linux `drm/radeon` (current and 2.6.30), libdrm, Mesa's r300 drivers
  (classic and Gallium), the X.Org radeon, radeonhd and avivo drivers, the BSD DRM ports, Haiku's radeon
  accelerant and AtomDis. They show what the
  public chips do, not what IRIX does on this board.

There is no GL sample-implementation pipeline: the Onyx4 GL stack is ATI's driver, and the IP35VOYAGER
`libGLcore.so` is a small stub.

## Layout

    IRIX_FILES.md        the shipped files expected in root/, and the symlink map
    root/                your copy of those files (ignored)
    r300_kernel/ libgl/ xserver/ dri/ gfxtools/ diags/ ucode/ firmware/
                         symlinks into root/ you make yourself (ignored)
    devices/<unit>/      register and packet layouts as TOML (registers.toml), the source of hardware facts ([AGENTS.md](AGENTS.md)), and the generated registers.md
    generated/           generated from devices/ by retools/tools/defs/defs-gen, never edited
    VOYAGER_DECODE.h     forwarding header for the old macro names; new code includes generated/c/display.h
    docs/                open-questions.md, coverage.md, inventory/, sources/INDEX.md, chapters as they land
    tools/               setup-clone.sh and this workspace's message-site extractors; tools/config/ holds the inventory configuration and allowlists
    retools/             the shared tooling submodule (sgi-retools): retools/tools/ and retools/tools/voyager/
    m2c spimdisasm libdwarf linux mesa
                         public-source submodules, fetched on demand

## Running the tools and reproducing a result

The host needs Podman, git and python3. Everything else runs in a container built from
[retools/tools/Containerfile](retools/tools/Containerfile): MIPS binutils, dwarfdump, pyelftools, capstone, unicorn,
numpy, pycparser and spimdisasm, at pinned versions on a pinned Debian base.

    tools/setup-clone.sh --root /path/to/filled/root   # siblings at their pins, submodules, root/
    retools/tools/re-run python3 retools/tools/inventory.py   # the first run builds the image

`retools/tools/re-run COMMAND` runs `COMMAND` in the image with this repository mounted at `/work`, `root/`
included; with no command it opens a shell. Fill `root/` from your install or media as IRIX_FILES.md describes.

- Generated tables under `docs/inventory/` come from `retools/tools/re-run python3 retools/tools/inventory.py`.
- A claim an entry marks as established by execution is reproduced by the script that the entry
  names, always as `retools/tools/re-run python3 retools/tools/NAME.py ...` (or `tools/NAME.py` for this workspace's own).
- The shared tooling (container definitions, the `re-run` wrapper, Ghidra scripts, the inventory, fact sheet, the device extractors) is the `retools/` submodule (sgi-retools). Run a tool by its submodule path from the repository root: `retools/tools/<name>` for the shared ones, `retools/tools/voyager/<name>` for this device's. A tool finds this repository from the current directory, so there are no local links or wrappers; a change to a tool is made in retools and the pin here moves with a commit.

## Rules

- Software-only reverse engineering, from any public source and the shipped binaries.
- Unanswered questions go in `docs/open-questions.md`; there are no captures.
- No local paths, hashes of private copies, library details, nicknames, internal quotes, or names of other
  projects, hosts or people behind the work.
- No trailers in commit messages.

Licence: BSD-3-Clause, see [LICENSE](LICENSE). The scripts descend from gr4's and keep its notice in
[retools/tools/LICENSE-gr4](retools/tools/LICENSE-gr4).
