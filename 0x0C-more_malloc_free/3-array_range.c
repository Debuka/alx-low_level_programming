#include"main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value for the array.
 * @max: The maximum value for the array.
 *
 * Return: A pointer to the address of
 * the new array, NULL on failure.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
