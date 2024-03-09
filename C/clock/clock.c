#include <stdio.h>

/**
 * main - Converts 24hr to 12hr notation
 *
 * Return: On success - (0)
*/

int main(void)
{
	int hr, min;

	printf("Enter a 24-hr time: ");
	scanf("%d:%d", &hr, &min);

	if (hr >= 13 && hr <= 23)
		printf("Equivalent 12-hr time: %d:%d PM\n", (hr - 12), min);
	else
		printf("Equivalent 12-hour time: %d:%d AM\n", hr, min);

	return (0);
}