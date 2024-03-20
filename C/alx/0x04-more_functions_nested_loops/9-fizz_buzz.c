#include "main.h"

void fizz_buzz(void);

/**
 * main - Program prints numbers from 1 to 100
 *
 * Return: On success - (0)
 */

int main(void)
{
	fizz_buzz();

	return (0);
}


/**
 * fizz_buzz - Function to print numbers from 1 to 100
 *
 * Description: Multiples of both three and five prints 'FizzBuzz'
 *				Multiples of three prints 'Fizz'
 *				Multiples of five prints 'Buzz'
 *
 * Return: On success - (0)
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");

		else if (i % 5 == 0)
			printf("Buzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}

}
