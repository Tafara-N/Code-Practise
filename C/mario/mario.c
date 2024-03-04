#include <stdio.h>
#include <cs50.h>

/**
 * main - Program prints an n x n square using a hash
 *
 * Return: On success - (0)
*/

int main(void)
{
    int i, j, num;

    do  /* Prompts user for a positive number (grid size) */
    {
        num = get_int("Size of square: ");
    }
    while ( num < 1);

    for (i = 0; i < num; i++)  /* Prints the row */
    {
        for (j = 0; j < num; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return (0);
}