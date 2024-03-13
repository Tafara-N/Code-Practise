#include <ctype.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lower case then in UPPERCASE using putchar
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if ((i != 4) && (i != 16))
		{
			putchar(alphabet[i]);
		}
	}

	printf("\n");

	return (0);
}
