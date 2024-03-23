#ifndef BASES_H
#define BASES_H

#include <stdio.h>
#include <string.h>

#define NUM_BITS (sizeof(number) * 8)  /* Evaluates the number of bits in an integer */

void print_binary(unsigned int number);

void print_hex(int number);
int hex_to_decimal(char hex[]);
void hex_to_octal(char hex[]);

void print_octal(int number);
void octal_to_hex(int octal);
int octal_to_decimal(int octal);

#endif  /* BASES_H */
