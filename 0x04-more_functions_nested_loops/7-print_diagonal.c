#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int t, g;

		for (t = 0 ; t < n ; t++)
		{
			for (g = 0 ; g <= t ; g++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
