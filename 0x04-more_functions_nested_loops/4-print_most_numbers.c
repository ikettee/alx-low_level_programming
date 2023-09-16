#include "main.h"

/**
 * print_most_numbers - print numbers 01356789
 * Return: is void
 */

void print_most_numbers(void)
{
	int nu;

	for (nu = 0; nu <= 9; nu++)
	{
		if (nu != 2 && nu != 4)
		{
			_putchar(nu + '0');
		}
	}
	_putchar('\n');
}
