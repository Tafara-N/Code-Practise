#include "main.h"

/**
 * _isdigit - Function checks for a digit (0 through 9)
 * @c: Digit to be checked
 *
 * Return: On success - (1)
 *			Otherwise - (0)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
		return (0);
}
