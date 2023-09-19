#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: the string to print
 * Return: Always 0
 */

void _puts(char *str)
{
	int g;

	for (g = 0 ; str[g] != '\0' ; g++)
		_putchar(str[g]);
	_putchar('\n');
}
