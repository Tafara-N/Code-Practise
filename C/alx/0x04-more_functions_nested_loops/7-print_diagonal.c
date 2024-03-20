#include "main.h"

/**
 * print_diagonal - Function draws a diagonal line in the terminal
 * @n: Number of times '\' should be printed
 *
 * Return: On success - (0)
 */

void print_diagonal(int n)
{
	int rows, columns;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (rows = 0; rows < n; rows++)
	{
		for (columns = 0; columns < rows; columns++)
		{
			_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');

}
