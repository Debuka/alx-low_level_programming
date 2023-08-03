#include "main.h"

/**
 * _strlen_recursion - checks the length of a string.
 * @s: The string to be checked.
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)

{
	int lentstr = 0;

	if (*s)
	{
		lentstr++;
		lentstr += _strlen_recursion(s + 1);
	}
	return (lentstr);
}
