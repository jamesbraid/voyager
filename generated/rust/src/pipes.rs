// generated from devices/pipes/registers.toml by defs-gen - do not edit, change the source
// per-pipe select and Z-buffer registers of the R3xx-class FireGL boards
#![allow(dead_code)]

/// Selects the pixel pipes that receive register writes. Writes reach both pipes unless this register restricts them. (established)
pub mod su_reg_dest {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x42c8;
    pub mod pipe1 { // bits 3:3, established
        pub const SHIFT: u32 = 3;
        pub const MASK: u32 = 0x1;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
    pub mod pipe0 { // bits 0:0, established
        pub const SHIFT: u32 = 0;
        pub const MASK: u32 = 0x1;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// Z buffer bandwidth control. Hierarchical Z is switched on and off here. (established)
pub mod zb_bw_cntl {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f1c;
    pub mod hiz_min { // bits 1:1, established
        pub const SHIFT: u32 = 1;
        pub const MASK: u32 = 0x1;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
    pub mod hiz_enable { // bits 0:0, established
        pub const SHIFT: u32 = 0;
        pub const MASK: u32 = 0x1;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// Base of the hierarchical Z RAM in each pipe, in dwords. The Z RAM address of pixel (x, y) is the base in bits 16:3, plus the Y block index times the p (established)
pub mod zb_hiz_offset {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f44;
    pub mod hiz_offset { // bits 16:2, established
        pub const SHIFT: u32 = 2;
        pub const MASK: u32 = 0x7fff;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// Dword index for writes to the Z RAM data port. Each write to the data port advances it by two dwords, because the data goes to both pipes. (established)
pub mod zb_hiz_wrindex {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f48;
    pub mod index { // bits 16:2, established
        pub const SHIFT: u32 = 2;
        pub const MASK: u32 = 0x7fff;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// Z RAM data port. One write carries four 8-bit values for a 2x2 group of 4x4 blocks; the byte for block (X, Y) sits at bit 16 times X bit 2 plus 8 time (established)
pub mod zb_hiz_dword {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f4c;
}
/// Dword index for reads of the Z RAM data port. Each read advances it by two dwords. (established)
pub mod zb_hiz_rdindex {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f50;
    pub mod index { // bits 16:2, established
        pub const SHIFT: u32 = 2;
        pub const MASK: u32 = 0x7fff;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// Row pitch of the hierarchical Z RAM, used with the base to address a block. (established)
pub mod zb_hiz_pitch {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f54;
    pub mod pitch { // bits 13:4, established
        pub const SHIFT: u32 = 4;
        pub const MASK: u32 = 0x3ff;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
/// Count of samples that passed the Z test since this register was last written. A write sets the count to the value written. Each pipe keeps its own cou (established)
pub mod zb_zpass_data {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f58;
}
/// Writing a dword address makes each selected pipe write its occlusion count to memory at that address. A write that reaches both pipes makes both write (established)
pub mod zb_zpass_addr {
    pub const WIDTH: u32 = 32;
    pub const OFFSET: u64 = 0x4f5c;
    pub mod address { // bits 31:2, established
        pub const SHIFT: u32 = 2;
        pub const MASK: u32 = 0x3fffffff;
        pub const fn get(v: u32) -> u32 {
            (v >> SHIFT) & MASK
        }
        pub const fn set(v: u32, x: u32) -> u32 {
            (v & !(MASK << SHIFT)) | ((x & MASK) << SHIFT)
        }
    }
}
