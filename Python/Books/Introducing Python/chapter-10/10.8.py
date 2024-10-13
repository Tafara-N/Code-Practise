#!/usr/bin/env python3

"""
What day of the week was your day of birth?

"""

from datetime import date


birth = date(1997, 3, 17)

print(birth.strftime('%A'))
