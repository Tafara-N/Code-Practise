#include "shift.h"

/**
 * right_count - Function counts how many times a number was shifted right
 *
 * @number: Number whose bits are to be shifted
 * @times: Number of times to shift the bits
 *
 * Return: Number of times the bits were shifted - (count)
 */

int right_count(long number, int times)
{
	int count = 0;

	while (number)
	{
		count++;
		number >>= 1;
		times--;
	}

	return (count);
}
