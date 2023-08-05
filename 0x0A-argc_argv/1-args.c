#include <stdio.h>
#include "main.h"

/**
 * arg_counts - Counts number of arguments.
 * @argc: The number of command line arguments.
 * Return: The number of arguments.
 */
int arg_counts(int argc)
{
	return (argc - 1);
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: An array of strings.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv;
	int num_args = arg_counts(argc);

	printf("%d\n", num_args);
	return (0);
}
