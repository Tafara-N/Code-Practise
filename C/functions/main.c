#include <stdio.h>
#include <stdlib.h>

int test_loop(void);

/**
 * main - Testing the test_loop function
 *
 * Return: On success - (0)
*/

int main(void)
{
	for (test_loop(); test_loop(); test_loop())
	{
		printf("%d ", test_loop());
	}
	printf("\n");

	return (0);
}
