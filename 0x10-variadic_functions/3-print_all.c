#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int g = 0;
	char *str, *separator = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[g])
		{
			switch (format[g])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);

					if (!str)
						str = "(nil)";

					printf("%s%s", separator, str);
					break;
				default:
					g++;
					continue;
			}
			separator = ", ";
			g++;
		}
	}
	printf("\n");
	va_end(list);
}

