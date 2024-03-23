#include "bases.h"

/**
 * hex_to_decimal - Function to convert hexadecimal to decimal
 * @hex: Hexadecimal to be converted
 *
 * Return: Decimal number
*/


int hex_to_decimal(char hex[])
{
	int base = 1, decimal = 0;
	int len = strlen(hex);

	for (int i = len - 1; i >= 0; i--)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			decimal += (hex[i] - 48) * base;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			decimal += (hex[i] - 55) * base;
		}
		base *= 16;
	}

	return decimal;
}
