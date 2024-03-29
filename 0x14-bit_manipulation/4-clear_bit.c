#include "main.h"

/**
 * clear_bit - Function that sets
 * the value of a given bit to 0.
 * @n: pointer of the number that will be changed.
 * @index: Index of te bit to clear
 *
 * Return: 1 on success, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
