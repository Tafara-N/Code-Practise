#include "main.h"

void print_grid(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}