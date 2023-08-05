#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (unused)
 * @argv: An array of command-line argument strings (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print_name(*argv);
	return (0);
}
