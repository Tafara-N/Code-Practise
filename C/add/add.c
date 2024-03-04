#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

/**
 * main - Program prompts user for integer values and adds them until
 *          they enter 0 to stop.
*/

int main(void)
{
    int total = 0, number;

    while (true)
    {
        number = get_int("Enter a number or 0 to stop: ");

        if (number == 0)
            break;
        total += number;
        printf("\nTotal is %d.\n", total);
    }

    printf("\nFinal total is %d.\n", total);

    return (0);
}