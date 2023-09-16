#include "main.h"
/**
 * print_line - a function that draws a straight line in terminal
 * @n: input an integer
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
