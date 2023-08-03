#include "main.h"
/**
 * _puts_recursion -print strings to stdout like puts().
 * @s: pointer of the string printed.
 * Return: Always 0 (Success).
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
