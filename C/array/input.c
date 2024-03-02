#include <stdio.h>
#include <string.h>

/**
 * main - Program use's {fgets} to get user information and then prints it
 *
 * Return: On success - (0)
*/

int main(void)
{
    char first_name[100], last_name[100], full_name[100];

    printf("Enter your first name: ");
    fgets(first_name, sizeof(first_name), stdin); /* Gets the user's name */
    first_name[strlen(first_name) - 1] = '\0'; /* Trim off the last char */

    printf("Enter your last name: ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strlen(last_name) - 1] = '\0';

    strcpy(full_name, first_name); /* Copy user's name into full_name */
    strcat(full_name, " "); /* Joining last_name to make a full_name*/
    strcat(full_name, last_name);

    printf("\nYour name is %s\n", full_name);

    return (0);
}