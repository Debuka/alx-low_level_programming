#include "function_pointers.h"

/**
 * print_name - Prints a name using a given printing function
 * @name: The name to be printed
 * @f: Pointer to a printing function that takes a char pointer as an argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	return (name);
}
