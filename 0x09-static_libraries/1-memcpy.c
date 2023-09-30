#include "main.h"
/**
 * _memcpy - a function copies n bytes
 * @n: the bytes from memory area
 * @src: to memory area
 * @dest: the memory area for storage
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int k = n;

	for (; g < k; g++)
	{
		dest[g] = src[g];
		n--;
	}
	return (dest);
}
