#include "main.h"

/**
 * string_toupper - func changes all lowercase letters of a string to uppercase
 * @n: the pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int g;

	g = 0;
	while (n[g] != '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
			n[g] = n[g] - 32;
		g++;
	}
	return (n);
}
