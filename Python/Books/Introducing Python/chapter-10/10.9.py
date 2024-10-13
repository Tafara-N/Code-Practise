#!/usr/bin/env python3

"""
When will you be (or when were you) 10,000 days old?

"""

from datetime import date, timedelta


birth = date(1997, 3, 17)

ten_thousand = birth + timedelta(days=10000)

print(ten_thousand)
