#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input string
 * @src: input value
 *
 * Return: void (nothing)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int z;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[i] = src[z];
		i++;
		z++;
	}

	dest[i] = '\0';
	return (dest);
}
