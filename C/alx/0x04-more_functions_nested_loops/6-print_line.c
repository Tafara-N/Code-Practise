#include "main.h"

/**
 * print_line - Function draws a straight line in the terminal
 * @n: Number of times '_' should be printed
 *
 * Return: On success - (0)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
