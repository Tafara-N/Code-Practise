#include <stdio.h>

/**
 * two_d_array - Program calculates the sum of 2d arrays
 *
 * Return: Sum of the addition.
*/

int two_d_array(int a, int b, int arr[a][b])
{
	int i, j, sum = 0;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			sum += arr[i][j];
		}
	}

	return (sum);
}
