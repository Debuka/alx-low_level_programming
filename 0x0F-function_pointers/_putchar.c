#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - Writes character to the std output
 * @c: The character to be written
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
