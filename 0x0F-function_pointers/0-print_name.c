#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name with pointer to function.
 * @name: The name that will be printed.
 * @f: A pointer to the function that will be
 * formating the printing.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

