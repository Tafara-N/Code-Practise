#include "main.h"

/**
 * _isalpha - Function checks for alphabetic characters
 * @c: Character to be checked
 *
 * Return: If alpha - (1),
 *			Otherwise - (0)
 */

int _isalpha(int c)
{
	if ((c >= 96 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
