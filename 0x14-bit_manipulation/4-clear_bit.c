#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @index: is the index, starting from 0
 * @n: the pointer
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int g;

	if (index > 63)
		return (-1);

	g = 1 << index;

	if (*n & g)
		*n ^= g;

	return (1);
}
