#include "main.h"

/**
 * puts_half - a function that prints half of string
 * @str: the string to print
 * Return: Always 0
 */

void puts_half(char *str)
{
	int g, k, count = 0;

	for (g = 0 ; str[g] != '\0' ; g++)
		count++;
	k = (count - 1) / 2;
	for (g = k + 1 ; str[g] != '\0' ; g++)
		_putchar(str[g]);
	_putchar('\n');
}
