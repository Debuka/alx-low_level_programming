#include "main.h"

/**
 * _sqrt_recursion - Returns the square root of a number inputed.
 * @n: Number to calculate.
 *
 * Return: The result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Finds the square root of a number.
 * @n: The number to calculate it's square root.
 * @i: Iterator.
 *
 * Return: The square root produced.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
