#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: it returns (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int g;

	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
