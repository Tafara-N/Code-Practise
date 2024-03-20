#include "main.h"

/**
 * print_square - Function prints a square using '#' character
 * @size: Size of the square
 *
 * Return: On success - (0)
 */

void print_square(int size)
{
	int rows, columns;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (columns = 0; columns < size; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
