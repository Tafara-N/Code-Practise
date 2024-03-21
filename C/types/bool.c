#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints size and int represantation of a boolean
 *
 * Return: On success - (0)
 */

int main(void)
{
	bool i, j;

	printf("Size of a boolean: %zu byte.\n", sizeof(i));

	/* Types */

	i = true;
	j = false;

	printf("If true:   %d\n", i);
	printf("If false:  %d\n", j);

	return (0);
}
