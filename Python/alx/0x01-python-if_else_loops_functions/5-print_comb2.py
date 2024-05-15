#!/usr/bin/env python3

# Program that prints numbers from `0` to `99`

for number in range(99):
    print(f"{number:02d}", end=", ")
print("{:02d}".format(99))
