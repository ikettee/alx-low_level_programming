#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: this is the destination
 * @src: the source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int g;

	for (g = 0 ; src[g] != '\0' ; g++)
		dest[g] = src[g];
	dest[g] = '\0';
	return (dest);
}
