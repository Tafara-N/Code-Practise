#!/usr/bin/env python3

# Assigns a random signed number to `number` each time it is executed

import random

number = random.randint(-10000, 10000)

if number < 0:
    last_digit = number % -10
elif number >= 0:
    last_digit = number % 10

if last_digit > 5:
    print(f"The last digit of {number} is {last_digit} and is greater than 5")
elif last_digit == 0:
    print(f"The last digit of {number} is {last_digit} and is 0")
else:
    print(f"The last digit of {number} is {last_digit} and is less than 6 and not 0")
