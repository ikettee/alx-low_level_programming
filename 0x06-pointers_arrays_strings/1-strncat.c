#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: first value
 * @src: second value
 * @n: third value
 * Return: a pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int k;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[g] = src[k];
	g++;
	k++;
	}
	dest[g] = '\0';
	return (dest);
}
