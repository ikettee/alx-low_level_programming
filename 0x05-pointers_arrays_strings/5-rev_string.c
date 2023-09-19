#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int g;
	int count = 0;

	for (g = 0 ; s[g] != '\0' ; g++)
		count++;
	for (g = 0 ; g < count / 2 ; g++)
	{
		char k;

		k = s[g];
		s[g] = s[count - 1 - g];
		s[count - 1 - g] = k;
	}
}
