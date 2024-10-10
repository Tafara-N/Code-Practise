# Things to Do

- `7.1`. Create a Unicode string called `mystery` and assign it the value `'\U0001f4a9'`. Print `mystery`. Look up the Unicode name for `mystery`.

- `7.2`. Encode `mystery`, this time using `UTF-8`, into the `bytes` variable `pop_bytes`. Print `pop_bytes`.

- `7.3`. Using `UTF-8`, decode `pop_bytes` into the string variable `pop_string`. Print `pop_string`. Is `pop_string` equal to mystery?

- `7.4`. Write the following poem by using old-style formatting. Substitute the strings `'roast beef'`, `'ham'`, `'head'`, and `'clam'` into this string:

```
    My kitty cat likes %s,
    My kitty cat likes %s,
    My kitty cat fell on his %s
    And now thinks he's a %s.
```

- `7.5`. Write a form letter by using new-style formatting. Save the following string as `letter` (you’ll use it in the next exercise):

```
    Dear {salutation} {name},
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
```

- `7.6`. Make a dictionary called `response` with values for the string keys `'salutation'`, `'name'`, `'product'`, `'verbed'` (past tense verb), `'room'`, `'animals'`, `'amount'`, `'percent'`, `'spokesman'`, and `'job_title'`. Print `letter` with the values from `response`.

- `7.7`. When you’re working with text, regular expressions come in very handy. We’ll apply them in a number of ways to our featured text sample. It’s a poem titled “Ode on the Mammoth Cheese,” written by James McIntyre in 1866 in homage to a seven-thousand-pound cheese that was crafted in Ontario and sent on an international tour. If you’d rather not type all of it, use your favorite search engine and cut and paste the words into your Python program. Or, just grab it from [Project Gutenberg](). Call the text string `mammoth`.

```
    We have seen thee, queen of cheese,
    Lying quietly at your ease,
    Gently fanned by evening breeze,
    Thy fair form no flies dare seize.
    All gaily dressed soon you'll go
    To the great Provincial show,
    To be admired by many a beau
    In the city of Toronto.
    Cows numerous as a swarm of bees,
    Or as the leaves upon the trees,
    It did require to make thee please,
    And stand unrivalled, queen of cheese.
    May you not receive a scar as
    We have heard that Mr. Harris
    Intends to send you off as far as
    The great world's show at Paris.

    Of the youth beware of these,
    For some of them might rudely squeeze
    And bite your cheek, then songs or glees
    We could not sing, oh! queen of cheese.
    We'rt thou suspended from balloon,
    You'd cast a shade even at noon,
    Folks would think it was the moon
    About to fall and crush them soon.
```

- `7.8`. Import the `re` module to use Python’s regular expression functions. Use `re.findall()` to print all the words that begin with `c`.

- `7.9`. Find all four-letter words that begin with `c`.

- `7.10`. Find all the words that end with `r`.

- `7.11`. Find all words that contain exactly three vowels in a row.

- `7.12`. Use `unhexlify` to convert this hex string (combined from two strings to fit on a page) to a `bytes` variable called `gif`:

```
    '47494638396101000100800000000000ffffff21f9' + '0401000000002c000000000100010000020144003b'
```

- `7.13`. The bytes in `gif` define a one-pixel transparent GIF file, one of the most common graphics file formats. A legal GIF starts with the string `GIF89a`. Does `gif` match this?

- `7.14`. The pixel width of a GIF is a 16-bit big-endian integer beginning at byte offset 6, and the height is the same size, starting at offset 8. Extract and print these values for gif. Are they both `1`?

## Author

**Tafara Nyamhunga  - [Github](https://github.com/tafara-n) / [Twitter](https://twitter.com/tafaranyamhunga)**
