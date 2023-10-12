#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: parameters to calculate the sum of
 * Return: If n == 0 - 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int g, sum = 0;

	va_start(para, n);

	for (g = 0; g < n; g++)
		sum += va_arg(para, int);

	va_end(para);

	return (sum);
}
