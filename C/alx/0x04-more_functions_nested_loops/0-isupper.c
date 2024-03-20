#include "main.h"

/**
 * _isupper - Function checks for uppercase character
 * @c: Character to be checked
 *
 * Return: On success - (1)
 *			Otherwise - (0)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
		return (0);
}
