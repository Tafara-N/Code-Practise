#include <cs50.h>
#include <stdio.h>

/**
 * main - Program prints a pyramid of size n by n
 *
 * Description: Takes an integer as base (rows) of the triangle, then computes
 *				how many columns for the rows using formula 2(rows) - 1.
 *				Then prints the stars from left to right using
 *				(rows - (i - 1)) to (rows + (i - 1)).
 *
 * Return: On succes - (0)
 */

int main(void)
{
	int rows, i, j;  /* i = row number, j = column number */

	rows = get_int("Rows: ");  /* Number of rows from user */

	for (i = 1; i <= rows; i++)  /* prints rows */
	{
		for (j = 1; j <= (2 * rows) - 1; j++)  /* column for rows 2(rows) - 1 */
		{
			if (j >= rows - (i - 1) && j <= rows + (i - 1))  /* prints the star from left to right */
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return (0);
}