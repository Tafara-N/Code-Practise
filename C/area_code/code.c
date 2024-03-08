#include <cs50.h>
#include <stdio.h>

/**
 * main - Program prints a city using it's area code
 *
 * Return: On success - (0)
*/

int main(void)
{
	int code;

	code = get_int("Area code: 0");

	switch (code)
	{
	case 21:
		printf("Cape Town\n");
		break;
	case 31:
		printf("Durban.\n");
		break;
	case 11:
		printf("Johannesburg\n");
		break;
	case 12:
		printf("Pretoria\n");
		break;
	case 51:
		printf("Polokwane\n");
		break;

	default:
		printf("Area not recognized.\n");
		break;
	}
}