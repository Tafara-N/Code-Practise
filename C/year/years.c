#include <stdio.h>

/**
 * main - Asks' user for their age and prints it in days
 *
 * Return: On success - (0)
 */

int main(void)
{
	int age, days = 365;

	printf("Your age: ");
	scanf("%d", &age);

	days *= age;

	printf("%d years is equal to %d days\n", age, days);

	return (0);
}
