#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	printf("\n");

	return (0);
}
