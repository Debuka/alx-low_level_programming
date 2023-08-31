#include "main.h"

/**
 * set_bit - Function that will set a bit at an index to 1
 * @n: pointer of the number ta will be change.
 * @index: Bit to be set to 1
 *
 * Return: 1 on success, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
