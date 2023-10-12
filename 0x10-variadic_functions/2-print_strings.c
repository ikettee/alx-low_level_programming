#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: number of strings printed
 * If separator is NULL, dont print it
 * If one of the string is NULL, print(nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int indx;

	va_start(string, n);

	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
