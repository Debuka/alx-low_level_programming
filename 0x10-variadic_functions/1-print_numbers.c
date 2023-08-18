#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function that Prints number.
 * @separator: The string that will
 * be printed between numbers.
 * @n: The number of inputs passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int k;

	va_start(num, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(num, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
