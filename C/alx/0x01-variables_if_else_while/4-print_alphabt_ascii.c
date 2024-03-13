#include <ctype.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lower case then in UPPERCASE using putchar
 *			using their ASCII values.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
	}

	printf("\n");

	return (0);
}
