#!/usr/bin/env python3

"""
The pixel width of a GIF is a 16-bit big-endian integer beginning at byte
offset 6, and the height is the same size, starting at offset 8.

Extract and print these values for gif. Are they both `1`?

"""

import binascii, struct


data = (
    "47494638396101000100800000000000ffffff21f9"
    + "0401000000002c000000000100010000020144003b"
)

gif = binascii.unhexlify(data)

values = gif[6:10]

width, height = struct.unpack("<HH", values)

print(width, height)
