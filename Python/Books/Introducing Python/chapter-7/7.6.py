#!/usr/bin/env python3

"""
Make a dictionary called `response` with values for the string keys:
'salutation', 'name', 'product', 'verbed' (past tense verb), 'room', 'animals',
'amount', 'percent', 'spokesman', and 'job_title'.

Print `letter` with the values from `response`.

"""

letter = """    Dear {salutation} {name},
    Thank you for your letter. We are sorry that our {product} {verbed} in your
    {room}. Please note that it should never be used in a {room}, especially
    near any {animals}.

    Send us your receipt and {amount} for shipping and handling. We will send
    you another {product} that, in our tests, is {percent}% less likely to
    have {verbed}.

    Thank you for your support.

    Sincerely,
    {spokesman}
    {job_title}
"""

response = {
    "salutation": "Mr.",
    "name": "L. Nkomo",
    "product": "toaster",
    "verbed": "exploded",
    "room": "shelter",
    "animals": "cats",
    "amount": "R100",
    "percent": "80",
    "spokesman": "Tafara Nyamhunga",
    "job_title": "CEO",
}

print(letter.format(**response), end='')
