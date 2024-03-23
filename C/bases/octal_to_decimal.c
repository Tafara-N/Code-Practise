#include <stdio.h>

/**
 * octal_to_decimal - Function to convert octal to decimal
 * @octal: Octal number to be converted
 *
 * Return: Decimal number
 */

int octal_to_decimal(int octal) {
	int decimal = 0, i = 0;

	while (octal != 0) {
		decimal += (octal % 10) * pow(8, i++);
		octal /= 10;
	}

	return decimal;
}
