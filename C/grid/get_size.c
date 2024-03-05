#include "main.h"

int get_size()
{
	int number;

	do
	{
		number = get_int("Size of square: ");

	} while (number < 1);
	return number;
}