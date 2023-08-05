#include <stdio.h>
#include "main.h"

/**
 * print_pname - Prints program name.
 * @program_name: Name of the program.
 */
void print_pname(char *program_name)
{
	while (*program_name)
	{
		_putchar(*program_name);
		program_name++;
	}
	_putchar('\n');
}

/**
 * main - Entry point of the program.
 * @argc: The num of command line args.
 * @argv: An array of strings
 * representing the command line args.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argc;
	print_pname(argv[0]);
	return (0);
}
