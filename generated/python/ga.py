"""generated from devices/ga/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 b474daa9d295799fe8f5e5ddf58374b9d80cdb167b2acb0dfa77d323e342828f
geometry assembly registers of the R300 and R350 3D engine"""

UNIT = 'ga'
REGISTERS = {'point_s0': {'offset': 16896, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'point_t0': {'offset': 16900, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'point_s1': {'offset': 16904, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'point_t1': {'offset': 16908, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'triangle_stipple': {'offset': 16916, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'point_size': {'offset': 16924, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'point_minmax': {'offset': 16944, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'line_cntl': {'offset': 16948, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'line_stipple_config': {'offset': 16952, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'line_stipple_value': {'offset': 16992, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'line_s0': {'offset': 16996, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'line_s1': {'offset': 17000, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'enhance': {'offset': 17012, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'color_control': {'offset': 17016, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'solid_rg': {'offset': 17020, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'solid_ba': {'offset': 17024, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'poly_mode': {'offset': 17032, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'round_mode': {'offset': 17036, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'offset': {'offset': 17040, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'fog_scale': {'offset': 17044, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'fog_offset': {'offset': 17048, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'point_s0': {'s0': (31, 0)}, 'point_t0': {'t0': (31, 0)}, 'point_s1': {'s1': (31, 0)}, 'point_t1': {'t1': (31, 0)}, 'triangle_stipple': {'y_shift': (19, 16), 'x_shift': (3, 0)}, 'point_size': {'width': (31, 16), 'height': (15, 0)}, 'point_minmax': {'max_size': (31, 16), 'min_size': (15, 0)}, 'line_cntl': {'end_type': (17, 16), 'width': (15, 0)}, 'line_stipple_config': {'stipple_scale': (31, 2), 'line_reset': (1, 0)}, 'line_stipple_value': {'stipple_value': (31, 0)}, 'line_s0': {'s0': (31, 0)}, 'line_s1': {'s1': (31, 0)}, 'enhance': {'fastsync_cntl': (1, 1), 'deadlock_cntl': (0, 0)}, 'color_control': {'provoking_vertex': (17, 16), 'alpha3_shading': (15, 14), 'rgb3_shading': (13, 12), 'alpha2_shading': (11, 10), 'rgb2_shading': (9, 8), 'alpha1_shading': (7, 6), 'rgb1_shading': (5, 4), 'alpha0_shading': (3, 2), 'rgb0_shading': (1, 0)}, 'solid_rg': {'color_red': (31, 16), 'color_green': (15, 0)}, 'solid_ba': {'color_blue': (31, 16), 'color_alpha': (15, 0)}, 'poly_mode': {'back_ptype': (9, 7), 'front_ptype': (6, 4), 'poly_mode': (1, 0)}, 'round_mode': {'alpha_clamp': (5, 5), 'rgb_clamp': (4, 4), 'color_round': (3, 2), 'geometry_round': (1, 0)}, 'offset': {'y_offset': (31, 16), 'x_offset': (15, 0)}, 'fog_scale': {'value': (31, 0)}, 'fog_offset': {'value': (31, 0)}}
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
