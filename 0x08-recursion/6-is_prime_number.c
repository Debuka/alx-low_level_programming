#include "main.h"

/**
 * is_prime_helper - Checks if the number is prime recursively.
 * @n: The number that will be checked.
 * @i: Checks if 'n' is divisible by.
 *
 * Return: 1 if 'n' is prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a num is a prime number.
 * @n: The number.
 *
 * Return: 1 if 'n' is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
