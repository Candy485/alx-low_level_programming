#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums up all arguments
 * @n: first argument
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
