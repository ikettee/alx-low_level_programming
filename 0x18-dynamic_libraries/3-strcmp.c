#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first input
 * @s2: second input
 * Return: s1[g] - s2[g]
 */
int _strcmp(char *s1, char *s2)
{
	int g;

	g = 0;
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
		g++;
	}
	return (0);
}
