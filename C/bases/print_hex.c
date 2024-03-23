#include <stdio.h>

/**
 * print_hex - Function prints an integer in hexadecimal form
 * @number: Number to print in hexadecimal form
 *
 * Return: Void
 */


void print_hex(int number)
{
	char hex[100];
	int i = 0;

	while (number != 0)
	{
		int remainder = number % 16;
		if (remainder < 10)
		{
			hex[i++] = remainder + 48; // Convert to ASCII code
		}
		else
		{
			hex[i++] = remainder + 55; // Convert to ASCII code
		}
		number /= 16;
	}

	printf("Hexadecimal: ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%c", hex[j]);
	}
}
