#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 * Return: 0 if big, 1 if little.
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
