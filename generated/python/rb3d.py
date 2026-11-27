"""generated from devices/rb3d/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 4
input sha256 9bbc7124c5c41069a98513ea953dc08a33aaca0f429eb5e4385d8eaaedbf9edb
colour buffer registers of the R300 and R350 3D engine"""

UNIT = 'rb3d'
REGISTERS = {'cctl': {'offset': 19968, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'blendcntl': {'offset': 19972, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ablendcntl': {'offset': 19976, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'color_channel_mask': {'offset': 19980, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'constant_color': {'offset': 19984, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'color_clear_value': {'offset': 19988, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ropcntl': {'offset': 19992, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clrcmp_flipe': {'offset': 19996, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clrcmp_clr': {'offset': 20000, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clrcmp_msk': {'offset': 20004, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'coloroffset': {'offset': 20008, 'access': 'rw', 'width': 32, 'count': 4, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'colorpitch': {'offset': 20024, 'access': 'rw', 'width': 32, 'count': 4, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'dstcache_ctlstat': {'offset': 20044, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'dither_ctl': {'offset': 20048, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'cmask_offset': {'offset': 20052, 'access': 'rw', 'width': 32, 'count': 4, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cmask_pitch': {'offset': 20068, 'access': 'rw', 'width': 32, 'count': 4, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cmask_wrindex': {'offset': 20084, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cmask_dword': {'offset': 20088, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'cmask_rdindex': {'offset': 20092, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'aaresolve_offset': {'offset': 20096, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'aaresolve_pitch': {'offset': 20100, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'aaresolve_ctl': {'offset': 20104, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'cctl': {'reserved': (10, 10), 'aa_compression_enable': (9, 9), 'clrcmp_flipe_enable': (7, 7), 'num_multiwrites': (6, 5)}, 'blendcntl': {'destblend': (29, 24), 'srcblend': (21, 16), 'comb_fcn': (14, 12), 'discard_src_pixels': (5, 3), 'read_enable': (2, 2), 'separate_alpha_enable': (1, 1), 'alpha_blend_enable': (0, 0)}, 'ablendcntl': {'destblend': (29, 24), 'srcblend': (21, 16), 'comb_fcn': (14, 12)}, 'color_channel_mask': {'alpha_mask': (3, 3), 'red_mask': (2, 2), 'green_mask': (1, 1), 'blue_mask': (0, 0)}, 'constant_color': {'alpha': (31, 24), 'red': (23, 16), 'green': (15, 8), 'blue': (7, 0)}, 'color_clear_value': {}, 'ropcntl': {'rop': (11, 8), 'rop_enable': (2, 2)}, 'clrcmp_flipe': {'clrcmp_flipe': (31, 0)}, 'clrcmp_clr': {'clrcmp_clr': (31, 0)}, 'clrcmp_msk': {'clrcmp_msk': (31, 0)}, 'coloroffset': {'coloroffset': (31, 5)}, 'colorpitch': {'colorformat': (24, 21), 'colorendian': (20, 19), 'colormicrotile': (18, 17), 'colortile': (16, 16), 'colorpitch': (13, 1)}, 'dstcache_ctlstat': {'dc_finish': (4, 4), 'dc_free': (3, 2), 'dc_flush': (1, 0)}, 'dither_ctl': {'alpha_dither_mode': (3, 2), 'dither_mode': (1, 0)}, 'cmask_offset': {}, 'cmask_pitch': {}, 'cmask_wrindex': {}, 'cmask_dword': {}, 'cmask_rdindex': {}, 'aaresolve_offset': {'aaresolve_offset': (31, 5)}, 'aaresolve_pitch': {'aaresolve_pitch': (13, 1)}, 'aaresolve_ctl': {'aaresolve_gamma': (1, 1), 'aaresolve_mode': (0, 0)}}
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
