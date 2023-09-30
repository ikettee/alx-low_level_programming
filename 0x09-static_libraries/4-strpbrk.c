#include "main.h"
/**
 * _strpbrk - the entry point
 * @s: for the input value
 * @accept: for another input value
 * Return: is 0
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
		if (*s == accept[g])
		return (s);
		}
	s++;
	}
	return ('\0');
}
