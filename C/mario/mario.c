#include <stdio.h>
#include <cs50.h>

/**
 * main - Program prints an n x n square using a hash
 *
 * Return: On success - (0)
*/

int main(void)
{
    int i, j, n;

    do
    {
        n = get_int("Size of square: ");
    }
    while ( n < 1);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return (0);
}