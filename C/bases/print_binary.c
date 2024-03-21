#include "bases.h"

/**
 * print_binary - Prints binary representation of an integer
 *
 * @number: Number to print in binary
 *
 * Description: By (num_bits - 1), we subtract 1 from (32 or 64) because we
 *				starting from the (MSB) going down to the (LSB). Right shift
 *				the number by i bits, moving the ith bit towards (LSB). Then use
 *				bitwise AND (&) with 1 to extract the (LSB).
 *
 * Return: Nothing, just prints base 10 in base 2
 */

void print_binary(unsigned int number)
{
	const int bits = NUM_BITS;
	int leading_zeros = 1, bit, i = 0;

	for (i = bits - 1; i >= 0; i--)
	{
		bit = (number >> i) & 1;

		/* Print the bit if it's not a leading 0 or if it's a 1 */
		if (!leading_zeros || bit)
		{
			printf("%d", bit);
			leading_zeros = 0;  /* Update leading_zeros if bit is not 0 */
		}
	}

	if (number == 0)
	{
		printf("0");
	}

	printf("\n");
}
