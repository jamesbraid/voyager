"""generated from devices/sc/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 89ce7846f26fd566b7c475d2dcfe95762d0b08c56fc2d0da243a116e94ab78e4
scan converter registers (clip rectangles, scissors, Hi-Z enable) of the R300 and R350 3D engine"""

UNIT = 'sc'
REGISTERS = {'hyperz_en': {'offset': 17316, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'edgerule': {'offset': 17320, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_0_a': {'offset': 17328, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_0_b': {'offset': 17332, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_1_a': {'offset': 17336, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_1_b': {'offset': 17340, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_2_a': {'offset': 17344, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_2_b': {'offset': 17348, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_3_a': {'offset': 17352, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_3_b': {'offset': 17356, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'clip_rule': {'offset': 17360, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'scissor0': {'offset': 17376, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'scissor1': {'offset': 17380, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'screendoor': {'offset': 17384, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'hyperz_en': {'hz_z0max': (6, 6), 'hz_z0min': (5, 5), 'hz_adj': (4, 2), 'hz_max': (1, 1), 'hz_en': (0, 0)}, 'edgerule': {'er_line_bt': (29, 25), 'er_line_tb': (24, 20), 'er_line_rl': (19, 15), 'er_line_lr': (14, 10), 'er_point': (9, 5), 'er_tri': (4, 0)}, 'clip_0_a': {'ys0': (25, 13), 'xs0': (12, 0)}, 'clip_0_b': {'ys1': (25, 13), 'xs1': (12, 0)}, 'clip_1_a': {}, 'clip_1_b': {}, 'clip_2_a': {}, 'clip_2_b': {}, 'clip_3_a': {}, 'clip_3_b': {}, 'clip_rule': {'clip_rule': (15, 0)}, 'scissor0': {'ys0': (25, 13), 'xs0': (12, 0)}, 'scissor1': {'ys1': (25, 13), 'xs1': (12, 0)}, 'screendoor': {'screendoor': (23, 0)}}
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
