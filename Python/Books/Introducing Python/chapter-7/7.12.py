#!/usr/bin/env python3

"""
Use `unhexlify` to convert this hex string (combined from two strings to fit on
a page) to a bytes variable called gif:

'47494638396101000100800000000000ffffff21f9' +
'0401000000002c000000000100010000020144003b'

The bytes in gif define a one-pixel transparent GIF file, one of the most common
graphics file formats.

A legal GIF starts with the string GIF89a. Does gif match this?

"""

import binascii


data = '47494638396101000100800000000000ffffff21f9' + \
        '0401000000002c000000000100010000020144003b'

gif = binascii.unhexlify(data)

print(gif)

print(gif.startswith(b'GIF89a'))
