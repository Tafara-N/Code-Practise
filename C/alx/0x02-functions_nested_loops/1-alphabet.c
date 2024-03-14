#include "main.h"

/**
 * print_alphabet - Function prints the alphabet, in lowercase
 *
 * Return: On success - (0)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
