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

int rect_area(int width, int length);

int main(void)
{
    int area, width = 3, height = 7, perimeter;

    area = rect_area(width, height);
    perimeter = (area + height) * 2;

    printf("The area of the rectangle is %d inches.\n", area);
    printf("The perimeter of the rectangle is %d inches.\n", perimeter);

    return (0);
}

#include <cs50.h>
#include <stdio.h>

/**
 * rect_area - Function to calculate the area of a rectangle
 *
 *@length: Length of rectangle
 *@width: Width of rectangle
 *
 * Return: Area of rectangle
 */

int rect_area(int length, int width)
{
    int area;

    area = length * width;

    return (area);
}
