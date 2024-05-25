#!/usr/bin/env python3

# Function that prints the last digit of a number

def print_last_digit(number):
    if number < 0:
        last_digit = (-number % 10)
    elif number >= 0:
        last_digit = number % 10
        print("{:d}".format(last_digit), end="")
    return last_digit
