#include "main.h"
/**
 * _strspn - returns the lenght of a substring.
 * @s: pointer to the input str.
 * @accept: pointer to the bytes that will be matched.
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				a++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
