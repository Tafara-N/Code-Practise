#include <stdio.h>

/**
 * octal_to_hex - Function to convert hexadecimal to decimal
 * @octal: Octal number to be converted
 *
 * Return: Void
 */

void octal_to_hex(int octal)
{
	long int decimal = 0;
	int i = 0;

	while (octal != 0) {
		decimal += (octal % 10) * pow(8, i++);
		octal /= 10;
	}

	print_hex(decimal);
}
