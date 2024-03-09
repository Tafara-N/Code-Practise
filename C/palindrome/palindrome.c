#include <cs50.h>
#include <stdio.h>

/**
 * main - Checks if a number is palindrome or not
 *
 * Description: Get an integer > 0, remainder = number % 10, then
 *				result = (result * 10) + remainder.
 *				After, temp = temp / 10 we check if the reversed number
 *				is the same as the original number.
 *
 * Return: On success - (0)
*/

int main(void)
{
	int number, result = 0, temp, remainder;

	number = get_int("Number: ");
	temp = number;

	while (temp != 0)
	{
		remainder = temp % 10;  /* Gets remainder */
		result = (result * 10) + remainder;  /* Adds the reversed number to the current number */
		temp /= 10;  /* Gets the number except the last digit */
	}

	if (result == number)
		printf("Number %d is palindrome.\n", number);
	else
		printf("Number %d is not a palindrome number.\n", number);

	return (0);
}
