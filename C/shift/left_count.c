#include "shift.h"

/**
 * left_count - Function counts how many times a number was shifted left
 *
 * @number: Number whose bits are to be shifted
 * @times: Number of times to shift the bits
 *
 * Return: Number of times the bits were shifted - (count)
 */

int left_count(long number, int times)
{
	int count = 0;

	while (times > 0)
	{
		count++;
		number <<= 1;
		times--;
	}

	return (count);
}
