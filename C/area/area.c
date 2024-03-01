#include <stdio.h>

/**
 * main - Program calculates the area and perimeter of a rectangle with
 *          a width of 3 inches and height of 5 inches
 *
 * Description: To work with a rectangle with a width of 6.8 inches and a
 *              length of 2.3 inches simply typecast in to float or declare
 *              the values as float data types.
 *
 * Return: On success - (0)
*/

int main(void)
{
    int width = 3, height = 7;
    int area, perimeter;

    area = width * height;
    perimeter = (area + height) * 2;

    printf("The area of the rectangle is %d inches.\n", area);
    printf("The perimeter of the rectangle is %d inches.\n", perimeter);

    return (0);
}