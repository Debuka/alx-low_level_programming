#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, else -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * multiply - multiplies two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The result of the multiplication
 */
int multiply(int a, int b)
{
	return a * b;
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
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return 0;
}

