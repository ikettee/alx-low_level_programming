#include "main.h"

/**
 * print_triangle - a function that prints a triangle with # character
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int g, i;

	if (size > 0)
	{
		for (g = 1; g <= size; g++)
		{
			for (i = size - g; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < g; i++)
			{
				_putchar('#');
			}
			if (g == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
