#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 *
 * @n: first and mandatory variable
 *
 * @...: Variadic arguments
 *
 * Return: The sum of x parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list np;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(np, n);

	while (i < n)
	{
		sum = sum + (va_arg(np, int));
		i++;
	}

	va_end(np);

	return (sum);
}
