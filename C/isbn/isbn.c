#include <stdio.h>

/**
 * main - Main function
 *
 * Return: On success - (0)
 *
 * Description: Prompts user for an ISBN and breaks it down
*/

int main(void)
{
	int gs1, grp, code, item, digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &grp, &code, &item, &digit);

	printf("GS1 prefix: %d\nGroup identifier: %d\n", gs1, grp);
	printf("Publisher code: %d\nItem number: %d\n", code, item);
	printf("Check digit: %d\n", digit);

	return (0);
}