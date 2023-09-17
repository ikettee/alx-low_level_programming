#include "main.h"

/**
 *print_square - use the character # to print a square
 *@size: the size of the square
 *Return: Always 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, g;

		for (a = 1 ; a <= size ; a++)
		{
			for (g = 1 ; g <= size ; g++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
