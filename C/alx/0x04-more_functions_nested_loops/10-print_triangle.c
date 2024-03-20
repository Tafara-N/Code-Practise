#include "main.h"

/**
 * print_triangle - Function prints a triangle
 * @size: Size of the triangle
 *
 * Return: On success - (0)
 */

void print_triangle(int size)
{
	int rows, columns;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (columns = rows; columns < size; columns++)
			{
				_putchar(' ');
			}

			for (columns = 1; columns <= rows; columns++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
