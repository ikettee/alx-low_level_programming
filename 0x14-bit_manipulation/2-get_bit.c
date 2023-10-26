#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the unsign long integer
 * @index: the index
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int g;

	if (n == 0 && index < 64)
		return (0);

	for (g = 0; g <= 63; n >>= 1, g++)
	{
		if (index == g)
		{
			return (n & 1);
		}
	}

	return (-1);
}
