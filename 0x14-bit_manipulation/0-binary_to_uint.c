#include "main.h"

/**
 * binary_to_uint - a fuction that converts a binary number to an unsigned int
 * unsigned int - the unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uns;
	int g, b_2;

	if (!b)
		return (0);
	uns = 0;

	for (g = 0; b[g] != '\0'; g++)

	for (g--, b_2 = 1; g >= 0; g--, b_2 *= 2)
	{
		if (b[g] != '0' && b[g] != '1')
		{
			return (0);
		}

		if (b[g] & 1)
		{
			uns += b_2;
		}
	}

	return (uns);
}
