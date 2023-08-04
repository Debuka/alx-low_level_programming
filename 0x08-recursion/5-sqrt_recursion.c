#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number for which the square root is calculated.
 * @x: The current guess for the square root.
 *
 * Return: The square root of 'n', or -1 or 'n'.
 */

int sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is calculated.
 *
 * Return: Square root of 'n', or -1 if 'n' does not have square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
