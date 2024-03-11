#include <cs50.h>
#include <stdio.h>

/**
 * main - Checks if a number is a strong number or not
 *
 * Return: On success - (0)
 */

int main(void)
{
	int factorial = 1, number, remainder, result = 0, temp;

	number = get_int("Number: ");
	temp = number;

	while (temp != 0)
	{
		remainder = temp  % 10;  /* Stores the remainder */
		for (int i = 1; i <= remainder; i++)  /* Loop according to the remainder */
		{
			factorial *= i;  /* Multiplying the digit by it's factorial */
		}
		result += factorial;  /* Store the factorial sum in result */
		factorial = 1;  /* Reset factorial to start the next loop */
		temp /= 10;  /* Keep decreasing the original number by 1 digit */
	}

	if (result == number)
		printf("%d is a strong number.\n", number);
	else
		printf("%d is not a strong number.\n", number);

	return (0);
}
