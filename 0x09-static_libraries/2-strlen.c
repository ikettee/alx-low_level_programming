#include "main.h"

/**
 * _strlen - a function that returns the lengthe of a string
 * @s: the string for counting
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
