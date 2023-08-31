#include "main.h"

/**
 * flip_bits - Function that count number of
 * bits to get from one number to another.
 * @n: first input.
 * @m: second input.
 *
 * Return: number of the bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, q = 0;
	unsigned long int pind;
	unsigned long int hg = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		pind = hg >> i;
		if (pind & 1)
			q++;
	}

	return (q);
}
