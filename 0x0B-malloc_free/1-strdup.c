#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an
 * array of size and initialize with char c
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Description: Creates an array of the given size and
 * initializes all elements with a char.
 *
 * Return: pointer to the created array, NULL if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *strig;
	unsigned int it;

	strig = malloc(sizeof(char) * size);
	if (size == 0 || strig == NULL)
		return (NULL);
	for (it = 0; it < size; it++)
		strig[it] = c;
	return (strig);
}
