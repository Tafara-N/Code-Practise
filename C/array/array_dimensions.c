#include <stdio.h>
#include <string.h>

/**
 * main - Learning multi array dimensions
 *
 * Return: On success - (0)
*/

int main()
{
    int array[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {11, 12, 13}}
    };

    printf("%d\n", array[0][0][2]);

    return (0);
}
