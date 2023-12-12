#include "main.h"
/**
 * _memset - the function that fills the first n bytes
 * @n: the number of bytes to set
 * @s: the starting address of memory
 * @b: the constant byte to set
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int g = 0;

	for (; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}
