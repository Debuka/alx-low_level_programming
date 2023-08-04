#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string to the evaluated.
 * Return: the result of the check.
 */
int _strlen(char *s)
{
	int tg = 0;

	while (*s != '\0')
	{
		tg++;
		s++;
	}

	return (tg);
}
