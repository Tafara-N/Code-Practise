#include <stdio.h>

/**
 * main - Program converts kilometers to miles
 *
 * Return: On success - (0)
*/

int main(void)
{
    float kms, miles;

    printf("Enter the kilometers: ");
    scanf("%f", &kms);

    miles = kms * 0.6213712;

    printf("%.2f kms is equal to %.2f miles.\n", kms, miles);

    return (0);
}