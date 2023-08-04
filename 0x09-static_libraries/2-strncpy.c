#include "main.h"
/**
 * _strncpy - copy a string to spacified num of chars.
 * @dest: pointer to the buffer.
 * @src: pointer to the source.
 * @n: max chars to print.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
