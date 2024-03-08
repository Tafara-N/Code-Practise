#include <stdio.h>

/**
 * main - Program prints date in a legal represantation form
 *
 * Return: On success - (0)
*/

int main(void)
{
	int dd, mm, yy;

	printf("Date (dd/mm/yy): ");
	scanf("%d/%d/%d", &dd, &mm, &yy);

	printf("Dated this %d", dd);

	switch (dd)
	{
	case 1: case 31: case 21:
		printf("st");
		break;
	case 2: case 22:
		printf("nd");
		break;
	case 3: case 23:
		printf("rd");
		break;
	default:
		printf("th");
		break;
	}

	printf(" day of ");

	switch (mm)
	{
	case 1:
		printf("January");
		break;
	case 2:
		printf("February");
		break;
	case 3:
		printf("March");
		break;
	case 4:
		printf("April");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7:
		printf("July");
		break;
	case 8:
		printf("August");
		break;
	case 9:
		printf("September");
		break;
	case 10:
		printf("October");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("December");
		break;

	default:
		printf("Invalid options.\n");
		break;
	}

	printf(", 20%.2d.\n", yy);

	return (0);
}
