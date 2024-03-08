#include <cs50.h>
#include <stdio.h>

/**
 * main - Program swaps two integer values
 *
 * Return: On success - (0)
*/

int main(void)
{
	int x, y;

	x = get_int("Value of x: ");
	y = get_int("Value of y: ");

	printf("Before swap: x = %d, y = %d.\n", x, y);

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("After swap : x = %d, y = %d.\n", x, y);

	return (0);
}
