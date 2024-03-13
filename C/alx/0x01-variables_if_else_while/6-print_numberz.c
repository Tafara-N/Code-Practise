#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
