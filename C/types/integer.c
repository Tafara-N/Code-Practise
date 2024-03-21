#include <limits.h>
#include <stdio.h>
#include <stdint.h>

/**
 * main - Prints size and range of all int types
 *
 * Return: On success - (0)
 */

int main(void)
{
	short int i;  /* short i */
	unsigned short int j;  /* unsigned short j */
	int k;
	unsigned int l;
	long int x;
	unsigned long int y;

	printf("Size of a short int:                     %zu bytes.\n", sizeof(i));
	printf("Size of an unsigned short int:           %zu bytes.\n", sizeof(j));
	printf("Size of an int:                          %zu bytes.\n", sizeof(k));
	printf("Size of an unsigned int:                 %zu bytes.\n", sizeof(l));
	printf("Size of a long int:                      %zu bytes.\n", sizeof(x));
	printf("Size of an unsigned long int:            %zu bytes.\n", sizeof(y));

	/* Ranges */

	printf("\nShort int range                         %d ................. %d\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned short int range:                %u ..................... %u\n", 0, USHRT_MAX);
	printf("Int range                               %d ............ %d\n", INT_MIN, INT_MAX);
	printf("Unsigned int range                       %u ..................... %u\n", 0, UINT_MAX);
	printf("Long int range:                         %ld ... %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned long int range:                 %u ..................... %llu\n", 0, ULLONG_MAX);

	return (0);
}
