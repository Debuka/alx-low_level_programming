#include "main.h"

/**
 * get_bit - Function that returns value of a
 * bit at an index in a decimal number.
 * @n: number
 * @index: bit index.
 *
 * Return: The bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int d_bit;

	if (index > 63)
		return (-1);

	d_bit = (n >> index) & 1;

	return (d_bit);
}
