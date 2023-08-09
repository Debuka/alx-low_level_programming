#include "main.h"
/**
 *_memcpy - Copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied from
 *@n: number of bytes
 *
 *Return: copied memory with n bytsd changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int z = n;

	for (a = 0; a < z; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
