#!/usr/bin/env python3

"""
Perform floating-point and integer division on the number of seconds per day
and store the results in the variables `seconds_per_day_float` and `seconds_per_day_int`
"""

seconds_per_hour = 60 * 60
seconds_per_day = seconds_per_hour * 24

seconds_per_day_float = seconds_per_day / 1.0
seconds_per_day_int = seconds_per_day // 1

print(seconds_per_day_float, "\n", seconds_per_day_int)
