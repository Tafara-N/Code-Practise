#include <stdio.h>

/**
 * main - Prints an integer in octal, hexadecimal form
 *
 * Return: On success - (0)
*/

int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

	return (0);
}
