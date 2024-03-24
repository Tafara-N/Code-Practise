#include "sorting.h"

/**
 * print_array - Prints an array of integers
 * @array: Array to print
 * @size: Array size
 *
 * Return: Void
 */

void print_array(int array[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	putchar('\n');
}
