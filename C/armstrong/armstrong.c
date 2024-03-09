#include <cs50.h>
#include <stdio.h>

/**
 * main - Checks if a number is an armstrong number.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int count = 0, digits, mul = 1, number, remainder, result = 0, temp;

	number = get_int("Number: ");
	temp = number;  /* Stores the number from user */

	while (temp != 0)
	{
		temp /= 10;  /* Gets the number except the last digit */
		count++;  /* Increments the digits in the number */
	}
	digits = count;  /* Stores the digits of the number */
	temp = number;

	while (temp != 0)
	{
		remainder = temp % 10;  /* Stores the actual remainder of the number */

		while (digits != 0)
		{
			mul *= remainder;  /* Multiplies remainder by value of mul */
			digits--;
		}
		result += mul;  /* Adds value of mul to result */
		digits = count;
		temp /= 10;  /* Divide number again to get the quotient */
		mul = 1;  /* Init mul back to 1 */
	}

	if (result == number)
		printf("%d is an armstrong number.\n", number);
	else
		printf("%d is not an armstrong number.\n", number);

	return (0);
}
