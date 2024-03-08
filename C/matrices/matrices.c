#include <cs50.h>
#include <stdio.h>

/**
 * main - Program prints a matrix of size n by n
 *
 * Return: On succes - (0)
 */

int main(void)
{
	int rows, col;

	rows = get_int("Rows: ");
	col = get_int("Columns: ");

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return (0);
}
