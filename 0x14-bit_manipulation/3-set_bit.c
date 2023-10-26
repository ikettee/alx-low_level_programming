#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: the pointer
 * @index: the index
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int g;

	if (index > 63)
		return (-1);

	g = 1 << index;
	*n = (*n | g);

	return (1);
}
