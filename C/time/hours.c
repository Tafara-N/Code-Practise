#include <stdio.h>

/**
 * main - Takes hours and minutes as input, and then outputs the total
 *          number of minutes
 *
 * Return: On success - (0)
*/

int main(void)
{
    int hours, minutes, total_minutes;

    printf("Enter the hours and minutes (12 35): ");
    scanf("%d" "%d", &hours, &minutes);

    total_minutes = hours * 60 + minutes;

    printf("%d hour(s) %d minutes = %d minutes\n", hours, minutes, total_minutes);

    return (0);
}