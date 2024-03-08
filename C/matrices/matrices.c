#include <stdio.h>

/**
 * main - Program prints a matrix of size n by n
 *
 * Return: On succes - (0)
 */

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return (0);
}
