#!/usr/bin/env python3

# Assigns a random signed number to var `number` each time it is executed

import random

number = random.randint(-10, 10)

if number < 0:
    print(f"{number} is positive.")
elif number > 0:
    print(f"{number} is negative.")
else:
    print(f"{number} is zero.")
