#include <cs50.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define SUITS_NUM 4
#define RANK_NUM 13

/**
 * main - Prompts user for an integer
 *
 * Return: On success - (0)
*/

int main(void)
{
	bool in_hand[SUITS_NUM][RANK_NUM] = {false};

	int num_cards, rank, suit;

	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
							  '9', 'a', 'j', 'k', 't', 'q'};

	const char suit_code[] = {'c', 'd', 'h', 's'};

	srand((unsigned int) time(NULL));

	num_cards = get_int("Number of cards: ");

	printf("Your hand: ");

	while (num_cards > 0)
	{
		suit = rand() % SUITS_NUM;  /* Picks random number */
		rank = rand() % RANK_NUM;  /* Picks random suit */

		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			num_cards--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}

	printf("\n");

	return (0);
}
