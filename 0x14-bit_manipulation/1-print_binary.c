#include "main.h"

/**
 * print_binary - Function that prints
 * binary equivalent of decimal number.
 * @n: number that it's binary will be printed.
 */
void print_binary(unsigned long int n)
{
	int k, q = 0;
	unsigned long int d_val;

	for (k = 63; k >= 0; k--)
	{
		d_val = n >> k;

		if (d_val & 1)
		{
			_putchar('1');
			q++;
		}
		else if (q)
			_putchar('0');
	}
	if (!q)
		_putchar('0');
}
