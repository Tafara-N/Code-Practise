#include <stdio.h>

/**
 * main - Converts user's weight from pounces to rhodium
 *
 * Return: On success - (0)
*/

int main(void)
{
	float weight, value;  /* value = rhodium equivalent */

	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");

	printf("Please enter your weight in pounds: ");
	scanf("%f", &weight);

	/* Assume rhodium is $770 per ounce */
	/* 14.5833 converts pounds avd. (avoirdupois) to ounces troy */
	value = 770.0 * weight * 14.5833;

	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that! If rhodium prices drop,\n");
	printf("eat more to maintain your value.\n");

	return (0);
}
