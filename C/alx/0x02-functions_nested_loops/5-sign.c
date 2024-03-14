#include "main.h"

/**
 * print_sign - Function prints the sign of a number
 * @n: Number to be checked
 *
 * Return: If positive - (1), if zero - (0),
 *			Otherwise - (-1)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else if (n < 0)
	{
		_putchar(45);
	}
	return (-1);

}
