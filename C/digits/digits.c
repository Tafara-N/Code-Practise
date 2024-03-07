#include <cs50.h>
#include <stdio.h>

/**
 * main - Prints the amount of digits in a number
 *
 * Description: Takes a positive integer, divides it by 10
 *				until it has one digit left.
 *				The amount of times we divide the number is
 *				is the amount of digits in that number.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int digits = 0, num, a;

	a = num = get_int("Enter a number from 0: ");

	do {
		num /= 10;
		digits++;
	} while (num > 0);

	printf("The number %d has %d digit(s).\n", a, digits);

	return (0);
}
