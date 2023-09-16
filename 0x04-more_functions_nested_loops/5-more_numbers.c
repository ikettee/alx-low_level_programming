#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 - 14
 */
void more_numbers(void)
{
	int t;
	int g;

	for (t = 0; t <= 9; t++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
			{
			_putchar((g / 10) + '0');
			}
		_putchar((g % 10) + '0');
		}
		_putchar('\n');
	}
}
