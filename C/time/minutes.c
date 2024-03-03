#include <stdio.h>

/**
 * main - Takes an integer as the number of minutes, and
 *          outputs the total hours and minutes
 *
 * Return: On success - (0)
*/

int main(void)
{
    int hours, minutes, total_minutes;

    printf("Enter the minutes: ");
    scanf("%d", &total_minutes);

    hours = total_minutes / 60;
    minutes = total_minutes % 60;  /* The remainder is our minutes */

    printf("%d minutes = %d hours %d minutes\n", total_minutes, hours, minutes);

    return (0);
}