#include "sorting.h"

#define SIZE (size - 1)

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array to be sorted
 * @size: Array size
 *
 * Return: Void
*/

void bubble_sort(int array[], int size)
{
	int i, j, temp;

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
