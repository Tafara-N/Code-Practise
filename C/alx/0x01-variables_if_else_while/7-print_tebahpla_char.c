#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 *
 * Return: On success - (0)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}