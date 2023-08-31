#include "main.h"

/**
 * binary_to_uint - Function that
 * converts binary number to unsigned int.
 * @b: string with the binary number.
 *
 * Return: the result.
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int d_num = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		d_num = 2 * d_num + (b[k] - '0');
	}

	return (d_num);
}
