#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Program converts a string from lowercase to uppercase
 *
 * Return: On success - (0)
 */

int main(void)
{
	string c = get_string("String before: ");

	printf("String after:  ");

	for (size_t i = 0; i < strlen(c); i++)
	{
		printf("%c", toupper(c[i]));
	}

	printf("\n");
}