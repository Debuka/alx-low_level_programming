#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins to 
 * make change for an amount of money.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int amount, index, coin_count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coin_count = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (index = 0; index < 5 && amount >= 0; index++)
	{
		while (amount >= coins[index])
		{
			coin_count++;
			amount -= coins[index];
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
