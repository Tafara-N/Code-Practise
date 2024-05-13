# Author’s disclaimer

![Python](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/231/48a9fdbd67c84a328a9df9ec8d93b9ac2458ac37721d7d53e51a27fb2bdc5263.jpg)
---

### Quiz questions

## Question #0

What does this command line print?

```python
>>> a = "Python is cool"
>>> print(a[7:])
```

- [ ] is cool

- [ ] Python i

- [ ] Python is

- [ ] cool

## Question #1

What does this command line print?

```python
>>> a = "Python is cool"
>>> print(a[7:-5])
```

- [ ] is

- [ ] on

- [ ] nohtyP

- [ ] si

- [ ] Python

## Question #2

Who created Python?

- [ ] Julien Barbier

- [ ] Yukihiro Matsumoto

- [ ] Guido van Rossum

## Question #3

What does this command line print?

```python
>>> print(f"{98} Battery street, {'San Francisco'}")
```

- [ ] San Francisco Battery street, 98

- [ ] “98 Battery street, San Francisco”

- [ ] 8 Battery street, San

- [ ] 98 Battery street, San Francisco

## Question #4

What does this command line print?

```python
>>> print("Holberton school")
```

- [ ] ‘Holberton school’

- [ ] Holberton

- [ ] “Holberton school”

- [ ] Holberton school

## Question #5

What does this command line print?

```python
>>> a = "Python is cool"
>>> print(a[-2])
```

- [ ] Nothing

- [ ] ol

- [ ] l

- [ ] o

## Question #6

What does this command line print?

```python
>>> print(f"{98} Battery street")
```

- [ ] 8 Battery street

- [ ] 98 Battery street

- [ ] f"98 Battery street"

- [ ] 9 Battery street

## Question #7

What does this command line print?

```python
>>> a = "Python is cool"
>>> print(a[4])
```

- [ ] h

- [ ] P

- [ ] n

- [ ] o

## Question #8

What does this command line print?

```python
>>> a = "Python is cool"
>>> print(a[:6])
```

- [ ] is cool

- [ ] Pytho

- [ ] Python

- [ ] Python is

## Question #9

What does this command line print?

```python
>>> a = "Python is cool"
>>> print(a[0:6])
```

- [ ] Python is cool

- [ ] Python

- [ ] Pytho

- [ ] Python is

## Tasks

## 0. Run Python file

Write a Shell script that runs a Python script.

The Python file name will be saved in the environment variable `$PYFILE`

```shell
guillaume@ubuntu:~/py/0x00$ cat main.py
#!/usr/bin/python3
print("Best School")

guillaume@ubuntu:~/py/0x00$ export PYFILE=main.py
guillaume@ubuntu:~/py/0x00$ ./0-run
Best School
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `0-run`

## 1. Run inline

Write a Shell script that runs Python code.

The Python code will be saved in the environment variable *$PYCODE*
```shell
guillaume@ubuntu:~/py/0x00$ export PYCODE='print(f"Best School: {88+10}")'
guillaume@ubuntu:~/py/0x00$ ./1-run_inline
Best School: 98
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `1-run_inline`

## 2. Hello, print

Write a Python script that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

- Use the function `print`

```shell
guillaume@ubuntu:~/py/0x00$ ./2-print.py
"Programming is like building a multilingual puzzle
guillaume@ubuntu:~/py/0x00$
```

**Repo:***
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `2-print.py`

## 3. Print integer

Complete this [source code](https://github.com/alx-tools/0x00.py/blob/master/3-print_number.py) in order to print the integer stored in the variable `number`, followed by `Battery street`, followed by a new line.

- You can find the source code [here](https://github.com/alx-tools/0x00.py/blob/master/3-print_number.py)
- The output of the script should be:
    - the number, followed by `Battery street`,
    - followed by a new line
- You are not allowed to cast the variable `number` into a string
- Your code must be 3 lines long
- You have to use f-strings [tips](https://intranet.alxswe.com/rltoken/Ju0J8BxkuPX5yKZctyKfsQ)

```shell
guillaume@ubuntu:~/py/0x00$ ./3-print_number.py
98 Battery street
guillaume@ubuntu:~/py/0x00$
```
**Repo:**
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `3-print_number.py`

## 4. Print float

Complete the source code in order to print the float stored in the variable `number` with a precision of 2 digits.

- You can find the source code [here](https://github.com/alx-tools/0x00.py/blob/master/4-print_float.py)
- The output of the program should be:
    - `Float:`, followed by the float with only 2 digits
    - followed by a new line
- You are not allowed to cast `number` to string
- You have to use f-strings

```shell
guillaume@ubuntu:~/py/0x00$ ./4-print_float.py
Float: 3.14
guillaume@ubuntu:~/py/0x00$
```
**Repo:**
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `4-print_float.py`

## 5. Print string

Complete this [source code](https://github.com/alx-tools/0x00.py/blob/master/5-print_string.py) in order to print 3 times a string stored in the variable `str`, followed by its first 9 characters.

- You can find the source [code here](https://github.com/alx-tools/0x00.py/blob/master/5-print_string.py)
- The output of the program should be:
  - 3 times the value of str
  - followed by a new line
  - followed by the 9 first characters of `str`
  - followed by a new line
- You are not allowed to use any loops or conditional statement
- Your program should be maximum 5 lines long

```shell
guillaume@ubuntu:~/py/0x00$ ./5-print_string.py
Holberton SchoolHolberton SchoolHolberton School
Holberton
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: 5-print_string.py

## 6. Play with strings

Complete this [source code](https://github.com/alx-tools/0x00.py/blob/master/6-concat.py) to print Welcome to Holberton School!

- You can find the source [code here](https://github.com/alx-tools/0x00.py/blob/master/6-concat.py)
- You are not allowed to use any loops or conditional statements.
- You have to use the variables `str1` and `str2` in your new line of code
- Your program should be exactly 5 lines long

```shell
guillaume@ubuntu:~/py/0x00$ ./6-concat.py
Welcome to Holberton School!
guillaume@ubuntu:~/py/0x00$ wc -l 6-concat.py
5 6-concat.py
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: `6-concat.py`

## 7. Copy - Cut - Paste

Complete this [source code](https://github.com/alx-tools/0x00.py/blob/master/7-edges.py)

- You can find the source code [here](https://github.com/alx-tools/0x00.py/blob/master/7-edges.py)
- You are not allowed to use any loops or conditional statements
- Your program should be exactly 8 lines long
- `word_first_3` should contain the first 3 letters of the variable `word`
- `word_last_2` should contain the last 2 letters of the variable `word`
- `middle_word` should contain the value of the variable `word` without the first and last letters

```shell
guillaume@ubuntu:~/py/0x00$ ./7-edges.py
First 3 letters: Hol
Last 2 letters: on
Middle word: olberto
guillaume@ubuntu:~/py/0x00$ wc -l 7-edges.py
8 7-edges.py
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: `7-edges.py`

## 8. Create a new sentence

Complete this [source code](https://github.com/alx-tools/0x00.py/blob/master/8-concat_edges.py) to print `object-oriented programming with Python`, followed by a new line.

- You can find the source code [here](https://github.com/alx-tools/0x00.py/blob/master/8-concat_edges.py)
- You are not allowed to use any loops or conditional statements
- Your program should be exactly 5 lines long
- You are not allowed to create new variables
- You are not allowed to use string literals

```shell
guillaume@ubuntu:~/py/0x00$ ./8-concat_edges.py
object-oriented programming with Python
guillaume@ubuntu:~/py/0x00$ wc -l 8-concat_edges.py
5 8-concat_edges.py
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: `8-concat_edges.py`

## 9. Easter Egg

Write a Python script that prints “The Zen of Python”, by TimPeters, followed by a new line.
- Your script should be maximum 98 characters long (please check with `wc -m 9-easter_egg.py`)

```
guillaume@ubuntu:~/py/0x00$ ./9-easter_egg.py
The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: `9-easter_egg.py`

## 10. Linked list cycle

## Technical interview preparation:

- You are not allowed to google anything
- Whiteboard first
- This task and all future technical interview prep tasks will include checks for the efficiency of your solution, i.e. is your solution’s runtime fast enough, does your solution require extra memory usage / mallocs, etc.

Write a function in C that checks if a singly linked list has a cycle in it.
- Prototype: `int check_cycle(listint_t *list);`
- Return: `0` if there is no cycle, `1` if there is a cycle

Requirements:
- Only these functions are allowed: `write, printf, putchar, puts, malloc, free`

```shell
carrie@ubuntu:~/0x00$ cat lists.h
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
carrie@ubuntu:~/0x00$ cat 10-linked_lists.c
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

carrie@ubuntu:~/0x00$ cat 10-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    listint_t *head;
    listint_t *current;
    listint_t *temp;
    int i;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    temp = current->next;
    current->next = head;

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    current->next = temp;

    free_listint(head);

    return (0);
}

carrie@ubuntu:~/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 10-main.c 10-check_cycle.c 10-linked_lists.c -o cycle
carrie@ubuntu:~/0x00$$ ./cycle
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
carrie@ubuntu:~/0x00$
```

> Solving a problem is already a big win! but finding the best and optimal way to solve it, it’s way better! Think about the most optimal / fastest way to do it.

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: `10-check_cycle.c, lists.h`

## 11. Hello, write

Write a Python script that prints exactly `and that piece of art is useful - Dora Korpar, 2015-10-19`, followed by a new line.

- Use the function `write` from the `sys` module
- You are not allowed to use `print`
- Your script should print to `stderr`
- Your script should exit with the status code `1`

```shell
guillaume@ubuntu:~/py/0x00$ ./100-write.py
and that piece of art is useful - Dora Korpar, 2015-10-19
guillaume@ubuntu:~/py/0x00$ echo $?
1
guillaume@ubuntu:~/py/0x00$ ./100-write.py 2> q
guillaume@ubuntu:~/py/0x00$ cat q
and that piece of art is useful - Dora Korpar, 2015-10-19
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: `alx-python-higher_level_programming`
- Directory: `0x00-python-hello_world`
- File: `100-write.py`

## 12. Compile

Write a script that compiles a Python script file.

The Python file name will be stored in the environment variable `$PYFILE`

The output filename has to be `$PYFILEc` (ex: `export PYFILE=my_main.py` => output filename: `my_main.pyc)`

```shell
guillaume@ubuntu:~/py/0x00$ cat main.py
#!/usr/bin/python3
print("Best School")

guillaume@ubuntu:~/py/0x00$ export PYFILE=main.py
guillaume@ubuntu:~/py/0x00$ ./101-compile
Compiling main.py ...
guillaume@ubuntu:~/py/0x00$ ls
101-compile  main.py  main.pyc
guillaume@ubuntu:~/py/0x00$ cat main.pyc | zgrep -c "Best School"
1
guillaume@ubuntu:~/py/0x00$ od -t x1 main.pyc # SYSTEM DEPENDANT => CAN BE DIFFERENT
0000000 ee 0c 0d 0a 91 26 3e 58 31 00 00 00 e3 00 00 00
0000020 00 00 00 00 00 00 00 00 00 02 00 00 00 40 00 00
0000040 00 73 0e 00 00 00 65 00 00 64 00 00 83 01 00 01
0000060 64 01 00 53 29 02 7a 10 48 6f 6c 62 65 72 74 6f
0000100 6e 20 53 63 68 6f 6f 6c 4e 29 01 da 05 70 72 69
0000120 6e 74 a9 00 72 02 00 00 00 72 02 00 00 00 fa 07
0000140 6d 61 69 6e 2e 70 79 da 08 3c 6d 6f 64 75 6c 65
0000160 3e 02 00 00 00 73 00 00 00 00
0000172
guillaume@ubuntu:~/py/0x00$
```

**Repo:**
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `101-compile`

## 13. ByteCode -> Python #1

Write the Python function `def magic_calculation(a, b):` that does exactly the same as the following Python bytecode:

```shell
  3           0 LOAD_CONST               1 (98)
              3 LOAD_FAST                0 (a)
              6 LOAD_FAST                1 (b)
              9 BINARY_POWER
             10 BINARY_ADD
             11 RETURN_VALUE
```

- Tip: [Python bytecode](https://intranet.alxswe.com/rltoken/B38QeZHREbvgq-wY7Ze3vQ)

**Repo:**
- GitHub repository: ``alx-python-higher_level_programming``
- Directory: ``0x00-python-hello_world``
- File: `102-magic_calculation.py`
