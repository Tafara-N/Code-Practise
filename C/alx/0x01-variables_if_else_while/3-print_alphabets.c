#include <ctype.h>
#include <stdio.h>

#define LETTER alphabet[i]

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
		putchar(LETTER);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(toupper(LETTER));
	}

	putchar('\n');

	return (0);
}
