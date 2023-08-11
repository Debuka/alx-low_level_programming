#include "main.h"
#include <stdlib.h>

/**
 * *_memset - function thst fills memory with a constant bytes.
 * @s: memory location that will be filled
 * @b: character  to copy.
 * @n: number of times to copy b.
 *
 * Return: pointer to the address of the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array nd returns
 * a pointer to the memory address.
 * @nmemb: Elements in the array
 * @size: size of the elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
