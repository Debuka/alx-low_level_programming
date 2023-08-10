#include"main.h"
#include<stdlib.h>

/**
 * malloc_checked - function that allocates memory.
 * @b: the memory to be allocated using malloc.
 *
 * Return: pointer to the address of the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
