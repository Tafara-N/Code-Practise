#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string name, surname;

	name = get_string("Name: ");
	surname = get_string("Surname: ");

	printf("%s, %c.\n", surname, name[0]);
}