#include "main.h"

/**
 * _islower - Function checks if a character is lowercase
 * @c: Character to be checked
 *
 * Return: 1 if char is lowercase,
 *			Otherwise - (0)
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);

}
