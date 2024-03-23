#include <stdio.h>


/**
 * print_octal - Function prints an integer in octal form
 * @number: Number to print in octal form
 *
 * Return: Void
*/

void print_octal(int number) {
	int octal[100], i = 0;

	while (number != 0) {
		octal[i++] = number % 8;
		number /= 8;
	}

	printf("Octal: ");
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", octal[j]);
	}
}
