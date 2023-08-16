#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function
 * on the elements of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function that will be executed.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	unsigned int  j;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
