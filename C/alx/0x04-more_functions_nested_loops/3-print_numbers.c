#include "main.h"

/**
 * print_numbers - Function prints numbers, from 0 to 9
 *
 * Return: On success - (0)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
