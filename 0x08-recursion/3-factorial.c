#include<main.h>

/*
 * factorial - returns factorial of an input.
 * @n: an input to calculate factorial of.
 *
 * Return: the factorisl of n.
 */
int factorial(int n)
{
	if (n<0)
	{
		return (-1);
	}
	if(n==0)
	{
		return (1);
	}
	return(n * factorial(n-1));
}
