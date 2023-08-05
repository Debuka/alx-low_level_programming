#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int e = 0, g = 0, k = 0, ln = 0, h = 0, dg = 0;

	while (s[ln] != '\0')
		ln++;

	while (e < ln && h == 0)
	{
		if (s[e] == '-')
			++g;

		if (s[e] >= '0' && s[e] <= '9')
		{
			dg = s[e] - '0';
			if (g % 2)
				dg = -dg;
			k = k * 10 + dg;
			h = 1;
			if (s[e + 1] < '0' || s[e + 1] > '9')
				break;
			h = 0;
		}
		e++;
	}

	if (h == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
