#include <stdio.h>

/**
 * main - Prints the alphabet in lower case using putchar
 *			and ASCII values.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		putchar(i);
	}
	printf("\n");

	return (0);
}
