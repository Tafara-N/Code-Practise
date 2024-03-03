#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to evaluate face values
 *
 * Return: On success - (0)
 */

int main(void)
{
    char card_name[3];

    puts("Enter the card name: ");
    fgets(card_name, sizeof(card_name), stdin);

    int value = 0;

    switch (card_name[0])
    {
        case 'J':
        case 'K':
        case 'Q':
            value = 10;
            break;
        case 'A':
            value = 11;
            break;
        default:
            value = atoi(card_name);
    }

    printf("The card value is: %d\n", value);

    return (0);
}
