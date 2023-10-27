#include "main.h"

/**
 * binary_to_uint - a fuction that converts a binary number to unsign int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uns;
	int g;

	uns = 0;
	if (!b)
		return (0);

	for (g = 0; b[g] != '\0'; g++)
	{
		if (b[g] != '0' && b[g] != '1')
			return (0);
	}
	for (g = 0; b[g] != '\0'; g++)
	{
		uns <<= 1;
		if (b[g] == '1')
			uns += 1;
	}

	return (uns);
}
