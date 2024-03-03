#include <stdio.h>

/**
 * main - Program computes the area of triangle
 *
 * Return: On success - (0)
*/

int main()
{
    char line[100];
    int height;
    int width;
    int area;

    printf("Enter width: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &width);

    printf("Enter height: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &height);

    area = (width * height) / 2;
    printf("The area is %d\n", area);
    return (0);
}