#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minum coins required to make a change.
 *
 * @argc: the num of args to programe.
 * @argv: array of args.
 * Return: 1 on syccess, 0 on error.
 */

int main(int argc, char *argv[])
{
	int kobo, i, naira;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error: Please provide a single integer argument.\n");
		return (1);
	}
	kobo = atoi(argv[1]);
	naira = 0;
	if (kobo < 0)
	{
		printf("0\n")
		return (0);
	}
	for (i = 0; i < 5 && kobo >= 0; i++)
		while (kobo >= coins[i])
		{
			naira++;
			kobo -= coins[i];
		}
}
printf("%d\n", naira);
return (0);
}
