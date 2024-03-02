#include <stdio.h>

/**
 * main - Program adds array elements to get the total and average.
 * Return: On success - (0)
 */

int main(void)
{
    float numbers[5], total, average;

    numbers[0] = 23.0;
    numbers[1] = 2.7;
    numbers[2] = 100.3;
    numbers[3] = 77.9;
    numbers[4] = 45.5;

    total = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    average = total / 5;

    printf("The total is %.2f, average is %.2f.\n", total, average);
    return (0);
}
