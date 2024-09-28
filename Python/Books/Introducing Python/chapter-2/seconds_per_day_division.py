#!/usr/bin/env python3

"""
Perform floating-point and integer division on the number of seconds per day
and store the results in the variables `seconds_per_day_float` and `seconds_per_day_int`
"""

seconds_per_hour = 60 * 60
seconds_per_day = seconds_per_hour * 24

division_float = seconds_per_hour / seconds_per_day
division_int = seconds_per_hour // seconds_per_day

print("Float:", division_float)
print("Integer:", division_int)
