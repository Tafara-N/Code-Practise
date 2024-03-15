#include "shift.h"

/**
 * left_shift - Function right shifts bits of a number by n times
 *
 * @number: Number whose bits are to be shifted
 * @times: Number of times to shift the bits
 *
 * Return: Number
*/

int left_shift(long number, int times)
{
	number <<= times;
	return number;
}