#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Funtion that returns
 * the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters the sum is to be calculated.
 *
 * Return: If n == 0 - 0.
 *         Or  - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_p;
	unsigned int k, sum = 0;

	va_start(args_p, n);

	for (k = 0; k < n; k++)
		sum += va_arg(args_p, int);

	va_end(args_p);

	return (sum);
}
