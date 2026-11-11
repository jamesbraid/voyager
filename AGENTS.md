# ATI R300 and R350 (SGI Onyx4) Reverse Engineering Project

This project reverse-engineers the ATI R300 and R350 graphics processors as fitted in the SGI **Onyx4 UltimateVision** graphics: the **FireGL X1** (R300) and the **FireGL X2** (R350), and the way IRIX 6.5.30 on an IP35 host drives them.
The goal is to document the chips and their attachment as C headers and notes, so that emulator authors, FPGA builders and the vintage SGI community can work from published findings.

The layout and working style follow techomancer's [gr2](https://github.com/techomancer/gr2) and [gr4](https://github.com/techomancer/gr4). Where this file is silent, do what gr4 does.

---

## 1. Board overview

The Onyx4 pairs an IP35 host with ATI FireGL cards. In the shipped IRIX install the cards carry the graphics-board tag `VOYAGER`, the library sets are `IP35VOYAGER`, `IP35VOYAGER32` and `IP35VOYAGER64`, and the driver is ATI's FireGL driver (`fglrx`) packaged for IRIX: a kernel object, an XFree86 video driver, a GLX module, a direct-rendering driver and a DRM library. Three video option ROM images ship with it.

Facts in this file are labelled **established** (read directly from a shipped binary, a published document, a capture or public open-source code (cited by project, revision and file), with the function, offset or install path), **inferred** (a reasoned reading, with the reasoning) or **unknown**. Anything unlabelled is unknown. Do not fill gaps from memory, from other SGI graphics families or from other emulators.

Established so far (headers of the three option ROM images in `ucode/VOYAGER/`, read as PCI expansion ROM data structures): `sg2.bin` is for PCI vendor 0x1002, device 0x4e47; `sg3.bin` and `sg3a.bin` are for vendor 0x1002, device 0x4e4b. The public PCI ID list and Mesa's r300 driver name those devices FireGL X1 (R300) and FireGL X2 (R350). Everything else about the boards is open: see `docs/open-questions.md`.

### Major blocks and their roles

- **Host attachment**: how the IP35 crossbar and PCI bridge present the cards, and whether the X1 and X2 are PCI or PCI-X, AGP-bridged or native: unknown.
- **Command processor and ring**: the public R3xx documentation and Linux describe a PM4 command processor fed by a ring buffer; what IRIX programs, and in what order: unknown.
- **Microcode**: the command processor loads microcode at start-up; where IRIX gets it: unknown.
- **Vertex and fragment units, memory, display**: unknown for this board.

Every role above is a name from a source, not a finding. Replace each with a labelled description as headers land.

---

## 2. Project binaries and evidence

For licensing reasons proprietary SGI and ATI binaries are **not checked into source control**. The local `root/` tree is gitignored. Copy the files [IRIX_FILES.md](IRIX_FILES.md) lists from your own IRIX 6.5.30 install or media into `root/`, then make the relative symlinks below from the map in IRIX_FILES.md, which are also not committed. Disassembly, decompiled C, headers and notes derived from the files are committed.

| Directory | Contents | Target in `root/` |
|---|---|---|
| `r300_kernel/` | `fglrx.o`, `is1.o`, `vga.a` members (an x86 BIOS emulator and the VGA set-up), `vgastubs.a`, `gfxs.a` (the graphics-pipe list from the platform configuration table), `kernel.o`, the PCI and crossbar objects, `config/` (`master.d` files) | `usr/cpu/sysgen/IP35boot/`, `var/sysgen/master.d/` |
| `libgl/{o32,n32,n64}/` | `libGL.so`, `libGLcore.so`, `libgl.so` | `usr/gfx/arch/IP35VOYAGER*/` |
| `xserver/` | XFree86, `fglrx_drv.so`, `fglrx_glx.so`, `libfglrxdrm.so`, helper modules, configuration generator | `usr/X11R6/`, `etc/` |
| `dri/` | `fglrx_dri.so`, `fglrx_dri64.so`, the multipipe DMX driver | `usr/X11R6/lib/modules/dri/` |
| `gfxtools/` | `sg2flash`, `vpm`, `sgcombine`, `gfxtopology` | `usr/gfx/` |
| `diags/` | `biosemu`, `olsg`, `olsgsys`, `data/` | `usr/diags/SG/` |
| `ucode/VOYAGER/` | the three option ROM images | `usr/gfx/ucode/VOYAGER/` |
| `firmware/` | `ip35prom.img` | `usr/cpu/firmware/` |

Debug information: the kernel objects, `fglrx_drv.so` and the DRI drivers are reported by `file` as carrying debug info and unstripped; `biosemu`, `vpm` and `sgcombine` are stripped; `libGLcore.so` for IP35VOYAGER64 is a 19 KB stub (established from its size and symbol table) while `libGL.so` carries ATI GL extension names, so the OpenGL implementation is ATI's, not an SGI sample-implementation build. For that reason this workspace has no GL sample-implementation pipeline. Whether the DWARF holds types or only names and lines is open: `dwarfdump -i` has not been run.

Other public sources in this repository (submodules, fetch only what you need, shallow: `git submodule update --init --depth 1 NAME`):

- `linux/`: the radeon DRM driver for R3xx, `drivers/gpu/drm/radeon/` (`r300.c`, `r300_reg.h`, `r300d.h`, `reg_srcs/r300`, the command checker). A public cross-check of register meaning and ring programming, not proof of what IRIX does.
- `mesa/`: the r300 driver, `src/gallium/drivers/r300/` and its shader compiler under `compiler/`, and the PCI ID table in `include/pci_ids/r300_pci_ids.h`.
- `irix-657m-src/`: the public IRIX 6.5.7 source tree. It predates the Onyx4, so it is a hint only for the host side (PCI, crossbar and bridge code), never evidence.
- `docs/sources/INDEX.md`: public documents by title and URL.

---

## 3. Deliverables: the hardware headers

Our primary output is a set of C header files at the repository root, one per chip or block, in the style of gr2 and gr4. **The code is the document.** Each header holds register offsets and fields, packet formats, state machines and constants, with a comment on every definition saying how it was derived and whether it is established, inferred or unknown.

Planned headers (none written yet; `docs/coverage.md` tracks each): `R300.h` (the chip: registers, command packets, microcode interface), `R350.h` (what differs in R350), `ONYX4.h` (attachment to the IP35 host, PCI identity and configuration).

Local driver headers capture internal driver structures: `r300_kernel/include/fglrx_kern.h`, `xserver/include/fglrx_ddx.h`.

---

## 4. Reverse engineering toolchain

The host needs Podman, git and python3. Everything else runs in the container [retools/tools/Containerfile](retools/tools/Containerfile) builds: `retools/tools/re-run COMMAND`. [tools/setup-clone.sh](tools/setup-clone.sh) prepares a fresh clone. The shared tooling (container definitions, the `re-run` wrapper, Ghidra scripts, the inventory, fact sheet, the device extractors) is the `retools/` submodule (sgi-retools). Run a tool by its submodule path from the repository root: `retools/tools/<name>` for the shared ones, `retools/tools/voyager/<name>` for this device's. A tool finds this repository from the current directory, so there are no local links or wrappers; a change to a tool is made in retools and the pin here moves with a commit.

Tools (run from the repository root, inside `retools/tools/re-run`; `scripts/` here keeps only this workspace's configuration, data and its message-site extractors):

- `retools/tools/voyager/map_binaries.py`: catalogue every linked binary (sections, functions, DWARF compilation units) into `binaries_manifest.json`.
- `retools/tools/voyager/disasm_kernel.py`, `resolve_got.py`, `clean_asm.py`: disassemble kernel objects for m2c and resolve `$gp`-relative loads.
- `retools/tools/inventory.py` (config `scripts/inventory-config.json`): measure coverage from the binaries; output is `docs/inventory/*.tsv` (see `docs/inventory/README.md`).
- `retools/tools/facts.py`: build facts for a routine from the binaries.

The tools descend from gr4's and carry its BSD-3 notice ([retools/tools/LICENSE-gr4](retools/tools/LICENSE-gr4)).

---

## 5. Evidence: software only, any source

No hardware is available for this work. Do not plan, request or wait for measurements on a real machine. Every question is answered from software and published material, and a row is not finished while either still has something to read.

Readers may open anything:

- every shipped binary on every IRIX release, and any disassembly or decompilation of it;
- the public IRIX 6.5.7 source tree linked from this repository (hint only, never evidence);
- vendor specifications, including AMD's published R3xx and R5xx register and acceleration references;
- public drivers and emulators: Linux, Mesa, X.Org drivers, NetBSD, OpenBSD and others;
- manuals, release notes and man pages;
- published output from real machines: `hinv`, `gfxinfo`, X server logs and screenshots in newsgroup and mailing-list posts, web pages, archives and forums.

Running the shipped software under an emulator, to watch which registers it touches and what it expects back, is also software evidence. Label what it shows as the driver's expectation, not as proof of hardware behaviour.

Write findings in your own words. Never paste vendor source, HDL, firmware or proprietary binaries into the repository. Microcode and option ROM images stay in `root/`; describe their format and cite offsets.

Label honestly. Use "established" only for what you read in full: the whole function body or table in a shipped binary, or the passage in a published document or capture. A reading built from call lists, register-store summaries, a sibling chip or a name is "inferred". Never reword an entry to change its grade. An entry written quickly and not yet checked ends with "Unverified." instead of "Inferred." or "Established." and grades at most `located`.

Linux and Mesa describe the public chips, and AMD's documents describe the silicon; they are cross-checks. A fact about what IRIX does on an Onyx4 needs a shipped binary or an SGI document. A fact about the Onyx4's wiring needs the same. Do not assume a PC's AGP or PCI Express arrangement.

Some facts no software reveals. When every route is exhausted, label the fact "unknown: no shipped software or published source depends on it" and list the routes tried. An emulator author then chooses a value and documents the choice. Never write "needs capture".

An open question is not a stopping point. Record it in `docs/open-questions.md` with every route already tried and the next one to try, then carry on. When a question is answered, move it into the owning header or chapter and delete the entry.

## 6. When work is finished

A coverage row is done when every inventory entry in its area (`docs/inventory/`) is `understood` or `no-software-dependency`. `understood` means the entry carries a label (established or inferred), a role and hardware effect, and a derivation citation (release, binary and its install path under `root/`, offset, callee) in the same entry. `located` (identity, address or size, and callers or sites cited, behaviour labelled unknown) and `named-only` are partial. [docs/inventory/README.md](docs/inventory/README.md) gives the exact rule. When you finish a task, regenerate the inventory, then pick the next entries below `understood`. Hand off only when your assigned area meets the definition above, or when the session ends; then say in `docs/open-questions.md` where you stopped.

---

## 7. Rules

- Software-only reverse engineering from public sources and shipped binaries. Nothing else is an input.
- Unanswered questions go in `docs/open-questions.md`. There are no captures; never write "needs capture".
- Do not name, in committed files, the emulator projects, private tooling, hosts or people behind this work, or any local storage path. Do not record where your copy of the IRIX files came from, or any local cache or library path. `scripts/check-leaks.sh` enforces this.
- Give no capture, trace or machine a nickname. Describe it generically ("a 6.5.30 install with an Onyx4").
- Do not quote internal documents. Quote only public sources, briefly, with the title and URL in `docs/sources/INDEX.md`.
- No trailers in commit messages: no attribution, sign-off or generated-with lines. The leak check refuses them.
- Findings go in headers at the repository root and `docs/` chapters, in your own words, each labelled with its derivation. Update `docs/coverage.md` and the inventory in the same commit as the finding.
- Commit disassembly, decompiled C and traces you produce as data; keep the proprietary binaries in `root/`.

Commit small and often, straight to `main`. Subjects are lowercase, component-prefixed imperatives (`r300_kernel: label the ring base register`); bodies say why. Write everything for a stranger.
