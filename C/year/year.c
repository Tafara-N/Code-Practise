#include <stdio.h>

/**
 * main - Asks' user for date, month and year
 *
 * Return: On success - (0)
 */

int main(void)
{
	int dd, mm, yyyy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("You entered the date %d%d%d\n", yyyy, mm, dd);

	return (0);
}
