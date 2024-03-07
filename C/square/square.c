#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a table of a number and it's square
 *
 * Description: First print a an underlined heading, takes user input,
 *				squares it and then prints it.
 *
 * Return: On success - (0)
 */

int main(void)
{
	int num, i;

	printf("Table of number and it's square.\n================================\n");

	printf("\nEnter number of entries in the table: ");
	scanf("%d", &num);

	printf("\n");

	for (i = 1; i <= num ; i++)
	{
		printf("%10d%10d\n", i, (i * i));
	}

	return (0);
}
