#include <ctype.h>
#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase
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
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	printf("\n");

	return (0);
}