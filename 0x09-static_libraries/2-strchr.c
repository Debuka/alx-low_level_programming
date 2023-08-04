#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that returns first occurance of a char
 * @s: string to be searched
 * @c: char to be returned
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (&s[z]);
	}
	return (0);
}
