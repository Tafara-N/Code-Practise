#!/usr/bin/env python3

"""
Lowercase the last element of the `surprise` list, reverse it, and then
capitalize it

[::-1] - We are just reversing it
[::-1].capitalize() - right after reversing it, we capitalize it

"""

surprise = ["Groucho", "Chico", "Harpo"]

surprise[-1] = surprise[-1].lower()
surprise[-1] = surprise[-1][::-1].capitalize()

# OR on one line: surprise[-1] = surprise[-1].lower()[::-1].capitalize()

print(surprise)
