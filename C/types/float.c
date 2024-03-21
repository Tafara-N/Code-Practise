#include <float.h>
#include <limits.h>
#include <stdio.h>

/**
 * main - Prints size and range of all float types
 *
 * Return: On success - (0)
 */

int main(void)
{
	float i;
	double j;
	long double k;

	printf("Size of a float:                 %zu bytes.\n", sizeof(i));
	printf("Size of a double:                %zu bytes.\n", sizeof(j));
	printf("Size of a long double:           %zu bytes.\n", sizeof(k));

	/* Ranges */

	printf("\nFloat range:                     %e ...... %e\n", FLT_MIN, FLT_MAX);
	printf("Negative float range:           %e ..... %e\n", -FLT_MIN, -FLT_MAX);
	printf("Double range:                    %e ..... %e\n", DBL_MIN, DBL_MAX);
	printf("Negative double range:          %e .... %e\n", -DBL_MIN, -DBL_MAX);
	printf("Long double range:               %Le .... %Le\n", LDBL_MIN, LDBL_MAX);
	printf("Negative long double range:     %Le ... %Le\n", -(long double)LDBL_MIN, -(long double)LDBL_MAX);

	return (0);
}
