#include <stdio.h>

/**
 * main - Program converts Fahrenheit to Celcius degrees
 *
 * Return: On success - (0)
*/

int main(void)
{
    float fah, celcius;

    printf("Type the fahrenheit: ");
    scanf("%f", &fah);

    celcius = 5.0 / 9.0 * (fah - 32);

    printf("%.2f Fahrenheit is equal to %.2f Celcius degrees.\n", fah, celcius);
}