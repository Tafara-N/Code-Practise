#include <stdio.h>

/**
 * main - Prints the alphabet in lower case using putchar
 *
 * Return: On success - (0)
 */

int main(void)
{
	int i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	printf("\n");

	return (0);
}
