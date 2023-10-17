#include <stdio.h>

/*
 * add -  funtions for additon
 * @a: first num to add
 * @b: second num to add
 *
 * Return: a+b
 */

int add(int a, int b)
{
	return (a + b);
}

/*
 * sub - subtraction function
 * @a: first int.
 * @b: second int.
 * Return: a-b.
 */

int sub(int a, int b)
{
	return (a - b);
}

/*
 * mul - function for multiplication
 * @a: first int
 * @b: second int
 * Return: a*b
 */

int mul(int a, int b)
{
	return (a * b);
}

/* 
 * div - This is division function
 * @a: first int
 * @b: second int
 * Return: a/b
 */

int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}
/* 
 * mode - this one is for finding the modulus
 * @a: first int
 * @b: second int
 * Return: a%b
 */

int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
