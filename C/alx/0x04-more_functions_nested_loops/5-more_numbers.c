#include "main.h"

/**
 * more_numbers - Function prints 10 times the numbers, from 0 to 14
 *
 * Return: On success - (0)
 */

void more_numbers(void)
{
	int rows, columns;

	for (rows = 1; rows <= 10; rows++)
	{
		for (columns = 0; columns <= 14; columns++)
		{
			if (columns >= 10)
				_putchar('1');
			_putchar (columns % 10 + '0');
		}
		_putchar('\n');
	}
}
