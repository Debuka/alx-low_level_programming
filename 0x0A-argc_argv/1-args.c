#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to a program
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignore argv */
	printf("%d\n", argc - 1);
	return (0);
}
