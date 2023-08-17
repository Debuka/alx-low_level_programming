#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Applies function to the elements of an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to array elements.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
