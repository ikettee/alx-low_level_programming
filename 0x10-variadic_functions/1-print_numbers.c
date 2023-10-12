#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int indx;

	va_start(num, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(num, int));

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
