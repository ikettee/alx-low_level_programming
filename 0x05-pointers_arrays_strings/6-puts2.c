#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: the string to print
 * Return: Always 0
 */

void puts2(char *str)
{
	int g;

	for (g = 0 ; str[g] != '\0' ; g++)
	{
		if (g % 2 == 0)
			_putchar(str[g]);
	}
	_putchar('\n');
}

