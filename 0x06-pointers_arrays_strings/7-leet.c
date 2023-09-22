#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: the value to input
 * Return: the n value
 */
char *leet(char *n)
{
	int g;
	int k;

	char l1[] = "aAeEoOtTlL";
	char l2[] = "4433007711";

	for (g = 0; n[g] != '\0'; g++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[g] == l1[k])
			{
				n[g] = l2[k];
			}
		}
	}
	return (n);
}
