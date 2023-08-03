#include "main.h"
/**
 * _puts_recursion -print strings to stdout like puts().
 * @s: pointer of the string printed.
 * Return: Always 0 (Success).
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);

	else

		_putchar('\n');
}
