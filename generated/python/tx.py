"""generated from devices/tx/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 4
input sha256 3182bec562aa83900a02fc72f4b5bb6a3ce852f0d98aaeaf2f0e8b15f70b0ef8
texture unit registers of the R300 and R350 3D engine"""

UNIT = 'tx'
REGISTERS = {'invaltags': {'offset': 16640, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'enable': {'offset': 16644, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'filter0': {'offset': 17408, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'filter1': {'offset': 17472, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'format0': {'offset': 17536, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'format1': {'offset': 17600, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'format2': {'offset': 17664, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'offset': {'offset': 17728, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'chroma_key': {'offset': 17792, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'border_color': {'offset': 17856, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'invaltags': {}, 'enable': {'tex_15_enable': (15, 15), 'tex_14_enable': (14, 14), 'tex_13_enable': (13, 13), 'tex_12_enable': (12, 12), 'tex_11_enable': (11, 11), 'tex_10_enable': (10, 10), 'tex_9_enable': (9, 9), 'tex_8_enable': (8, 8), 'tex_7_enable': (7, 7), 'tex_6_enable': (6, 6), 'tex_5_enable': (5, 5), 'tex_4_enable': (4, 4), 'tex_3_enable': (3, 3), 'tex_2_enable': (2, 2), 'tex_1_enable': (1, 1), 'tex_0_enable': (0, 0)}, 'filter0': {'id': (31, 28), 'max_mip_level': (20, 17), 'vol_filter': (16, 15), 'mip_filter': (14, 13), 'min_filter': (12, 11), 'mag_filter': (10, 9), 'clamp_r': (8, 6), 'clamp_t': (5, 3), 'clamp_s': (2, 0)}, 'filter1': {'mc_coord_truncate': (14, 14), 'lod_bias': (12, 3), 'mc_round': (2, 2), 'chroma_key_mode': (1, 0)}, 'format0': {'txpitch_en': (31, 31), 'projected': (30, 30), 'num_levels': (29, 26), 'txdepth': (25, 22), 'txheight': (21, 11), 'txwidth': (10, 0)}, 'format1': {'cache': (31, 27), 'tex_coord_type': (26, 25), 'swap_yuv': (24, 24), 'yuv_to_rgb': (23, 22), 'gamma': (21, 21), 'sel_blue': (20, 18), 'sel_green': (17, 15), 'sel_red': (14, 12), 'sel_alpha': (11, 9), 'signed_comp3': (8, 8), 'signed_comp2': (7, 7), 'signed_comp1': (6, 6), 'signed_comp0': (5, 5), 'txformat': (4, 0)}, 'format2': {'txpitch': (13, 0)}, 'offset': {'txoffset': (31, 5), 'micro_tile': (4, 3), 'macro_tile': (2, 2), 'endian_swap': (1, 0)}, 'chroma_key': {'chroma_key': (31, 0)}, 'border_color': {'border_color': (31, 0)}}
ENUMS = {}
FIELD_ENUM = {}
CONSTANTS = {}
TESTS = []


def decode(name, value):
    """Field name -> value for a register or word."""
    return {f: (value >> lo) & ((1 << (hi - lo + 1)) - 1) for f, (hi, lo) in FIELDS[name].items()}


def encode(name, **fields):
    v = 0
    for f, x in fields.items():
        hi, lo = FIELDS[name][f]
        if x >> (hi - lo + 1):
            raise ValueError('%s.%s: %d does not fit' % (name, f, x))
        v |= x << lo
    return v


def describe(name, value):
    """decode, with enum labels where the field has an enum."""
    out = {}
    for f, x in decode(name, value).items():
        e = ENUMS.get(FIELD_ENUM.get('%s.%s' % (name, f)))
        out[f] = e.get(x, x) if e else x
    return out


def selftest():
    for name, value, expect in TESTS:
        got = decode(name, value)
        for f, want in expect.items():
            assert got[f] == want, (name, hex(value), f, got[f], want)
    return len(TESTS)


if __name__ == '__main__':
    print('%s: %d vectors ok' % (UNIT, selftest()))
