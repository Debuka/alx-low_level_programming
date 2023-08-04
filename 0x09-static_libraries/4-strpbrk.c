#include "main.h"
/**
 * _strpbrk - determine the first appearanc of a byte.
 * @s: pointer to the str to be checked.
 * @accept: points to the bytes to be checked.
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
