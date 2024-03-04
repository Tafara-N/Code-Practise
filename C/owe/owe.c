#include <stdio.h>
#include <cs50.h>

/**
 * main - Program ask's user how much they owe and prints the balance
 *
 * Return: On success - (0)
*/

int main()
{
    int balance_owed;

    balance_owed = get_int("Enter number of dollars owed: ");

    if (balance_owed == 0)
        printf("You owe nothing.\n");
    else
        printf("You owe %d dollars.\n", balance_owed);

    return (0);
}