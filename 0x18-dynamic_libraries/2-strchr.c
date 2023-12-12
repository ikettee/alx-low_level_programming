#include "main.h"
/**
 * _strchr - the start entry point
 * @c: the character to input
 * @s: the string to input
 * Return: 0 for success
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
