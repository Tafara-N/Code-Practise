#include <stdio.h>
#include <string.h>

/**
 * main - Asks for user's name and age
 *
 * Return: on succes - (0)
 */

int main(void)
{
	int age;
	char name[50];

	printf("What\'s your name? ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';

	printf("How old are you? ");
	scanf("%d", &age);

	printf("Your name is %s and you are %d years old.\n", name, age);

	return (0);
}
