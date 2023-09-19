#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int g;
	int count = 0;

	for (g = 0 ; s[g] != '\0' ; g++)
		count++;
	for (g = count - 1 ; g >= 0 ; g--)
		_putchar(s[g]);
	_putchar('\n');
}
