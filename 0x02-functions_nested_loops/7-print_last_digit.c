#include "main.h"
/**
 * print_last_digit - it prints the last digit
 * @l: function parameter
 * Return: y
 */
int print_last_digit(int l)
{
	int y;

	y = l % 10;
	if (l < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
