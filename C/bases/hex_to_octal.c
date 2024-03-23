#include <stdio.h>
#include <string.h>

/**
 * hex_to_octal - Function to convert hexadecimal to octal
 * @hex: Hexadecimal to be converted
 *
 * Return: Octal number
 */

void hex_to_octal(char hex[]) {
	int len = strlen(hex);
	char octalNum[100];
	int octalIndex = 0;
	char binNum[100];
	int binIndex = 0;
	int decimalNum = 0;

	// Convert hexadecimal to decimal
	for (int i = len - 1; i >= 0; i--) {
		int hexDigit;
		if (hex[i] >= '0' && hex[i] <= '9') {
			hexDigit = hex[i] - '0';
		} else if (hex[i] >= 'A' && hex[i] <= 'F') {
			hexDigit = hex[i] - 'A' + 10;
		}

		decimalNum += hexDigit * (1 << (4 * (len - i - 1)));
	}

	// Convert decimal to binary
	while (decimalNum != 0) {
		binNum[binIndex++] = decimalNum % 2;
		decimalNum /= 2;
	}

	// Convert binary to octal
	int remainder = 0;
	int powerOfTwo = 1;
	for (int i = binIndex - 1; i >= 0; i--) {
		remainder += binNum[i] * powerOfTwo;
		powerOfTwo *= 2;
		if (powerOfTwo == 8) {
			octalNum[octalIndex++] = remainder;
			remainder = 0;
			powerOfTwo = 1;
		}
	}

	// Handle the last octal digit if it's not complete
	if (powerOfTwo != 1) {
		octalNum[octalIndex++] = remainder;
	}

	// Print the octal number
	printf("Octal: ");
	for (int i = octalIndex - 1; i >= 0; i--) {
		printf("%d", octalNum[i]);
	}
	printf("\n");
}
