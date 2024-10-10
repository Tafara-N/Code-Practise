#!/usr/bin/env python3

"""
Define a decorator called `test` that prints `'start'` when a function is
called and `'end'` when it finishes

Algorithm:
==========
1. Define a decorator called `test`
2. Define a wrapper function that takes in `*args` and `**kwargs`
3. Print `'start'` when the function is called
4. Call the function with `*args` and `**kwargs`
5. Print `'end'` when the function finishes

"""

def test(func):
    """
    Decorator that prints 'start' when a function is called and 'end' when it
    finishes.

    Arguments:
        func: A function as an argument
    """

    def wrapper(*args, **kwargs):
        """
        Wrapper function that takes in `*args` and `**kwargs` and calls the
        function with `*args` and `**kwargs`.
        """

        print('start')
        func(*args, **kwargs)
        print('end')

    return wrapper


def say_hello(name: str) -> None:
    """
    A function that prints 'Hello, <name>!'

    Arguments:
    name : str : A string

    Returns:
    None
    """

    print(f'Hello, {name}!')


say_hello = test(say_hello)


if __name__ == '__main__':
    say_hello('John')
