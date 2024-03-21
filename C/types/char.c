#include <limits.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * main - Prints size and range of all char types
 *
 * Return: On success - (0)
*/

int main(void)
{
	char i;  /* It's also signed by default */
	unsigned char j;

	printf("Size of a char:             %zu byte\n", sizeof(i));
	printf("Size of an unsigned char:   %zu byte\n", sizeof(j));

	/* Ranges */

	printf("\nChar range:                %d ... %u\n", CHAR_MIN, CHAR_MAX);
	printf("Unsigned char range:        %u ..... %u\n", 0, UCHAR_MAX);

	return (0);
}
