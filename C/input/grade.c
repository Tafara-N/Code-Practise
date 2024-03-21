#include <stdio.h>

/**
 * main - Program asks' user for a grade and prints it
 *
 * Return: On success - (0)
 */

int main(void)
{
	char grade;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("Perfect!!\n");
			break;
		case 'B':
			printf("Good job, well done!!\n");
			break;
		case 'C':
			printf("Keep up the good work.!!\n");
			break;
		case 'D':
			printf("Pull up your socks!!\n");
			break;
		case 'F':
			printf("You failed!!\n");
			break;
		default:
			printf("Invalid grade.\n");
			break;
	}
	return (0);
}
