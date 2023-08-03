#include<main.h>

/*
 * _print_rev_recursion - Prints str in reverse.
 * @s: pointer of d string.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
