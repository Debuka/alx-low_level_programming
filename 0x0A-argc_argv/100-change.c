#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins Checks the minimum
 * number of coins require for change making.
 * @cents: The amount of cents to make change for
 *
 * Return: The minimum number of coins
 */
int minCoins(int cents)
{
	if (cents < 0)
		return 0;

	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i = 0;

	while (cents > 0)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
		i++;
	}

	return numCoins;
}

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int cents = atoi(argv[1]);
	int result = minCoins(cents);

	printf("%d\n", result);

	return 0;
}
