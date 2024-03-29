#include "main.h"

/**
 * _pow_recursion - Returns the value of x to the power of y.
 * @x: Number
 * @y: power.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

