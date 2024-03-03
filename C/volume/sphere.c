#include <stdio.h>
#include <math.h>

/**
 * main - Program computes the volume of a sphere
 *
 * Return: On success - (0)
*/

const float PI = 3.1415;

int main(void)
{
    float radius, volume;

    printf("Enter the radius of: ");
    scanf("%f", &radius);

    volume = 4.0 / 3.0 * PI * radius * radius * radius;

    printf("Volume of a sphere with a radius of %.2f = %.2f\n", radius, volume);

    return (0);
}