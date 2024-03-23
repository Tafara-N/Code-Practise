#include "bitwise.h"

/**
 * int_sign - Function checks the sign of an integer
 * @number: Number to check for
 *
 * Return: If sign is positive - (1),
 *			If sign is negative - (-1),
 *			Otherwise - (0)
*/

int int_sign(int number)
{
	int sign = 0;

	sign = (number > 0) - (number < 0);

	if (sign > 0)
	{
		return (1);
	}
	else if (sign < 0)
	{
		return (-1);
	}
	else if (sign == 0)
	{
		printf("Number is %d\n", sign);
	}

	return (0);
}
