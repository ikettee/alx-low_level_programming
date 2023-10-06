#include <stdio.h>
#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: the memory area to fill
 * @b: byte to copy
 * @n: the number of times to copy the byte
 * Return: the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: the number of elements
 * @size: size of each element
 * Return: a pointer to the memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	_memset(memory, 0, nmemb * size);

	return (memory);
}
