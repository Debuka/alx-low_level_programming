#include "3-calc.h"

/**
 * op_add - function Returns sum of a and b.
 * @a: First int.as input
 * @b: Second int. as input
 *
 * Return: Result of a + b
 */
int op_add(int a, int b)
{
	return a + b;
}

/**
 * op_sub - Returns difference of a and b.
 * @a: First integer as input
 * @b: Second input integer
 *
 * Return: Result of a - b
 */
int op_sub(int a, int b)
{
	return a - b;
}

/**
 * op_mul - Returns product of a and b.
 * @a: First integer input.
 * @b: Second input integer
 *
 * Return: Result of a * b
 */
int op_mul(int a, int b)
{
	return a * b;
}

/**
 * op_div - Returns result of a divided by b.
 * @a: First input integer
 * @b: Second input integer (non-zero)
 *
 * Return: Result of a / b
 */
int op_div(int a, int b)
{
	return a / b;
}

/**
 * op_mod - Returns remainder of a divided by b.
 * @a: First input integer
 * @b: Second input integer (non-zero)
 *
 * Return: Result of a % b
 */
int op_mod(int a, int b)
{
	return a % b;
}
