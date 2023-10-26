#include "main.h"

/**
 * flip_bits - a function that returns of bits
 * @n: number is 1
 * @m: number is 2
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nw;

	for (nw = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nw++;
	}

	return (nw);
}
