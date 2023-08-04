#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: destination.
 * @src: source str.
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int z = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; z < a ; z++)
	{
		dest[z] = src[z];
	}
	dest[a] = '\0';
	return (dest);
}
