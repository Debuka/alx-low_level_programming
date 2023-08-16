#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * in an array through a comparison function.
 * @array: Pointer to the array.
 * @size: Elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element that cmp
 * doesn't return 0, or -1 if no there's no matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
