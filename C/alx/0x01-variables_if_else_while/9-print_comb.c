#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single-digit numbers.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}