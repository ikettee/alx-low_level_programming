#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: the array size
 * @c: the char for storing the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int g;
	char *arra;

	if (size == 0)
		return (NULL);

	arra = malloc(sizeof(char) * size);

	if (arra == NULL)
		return (NULL);

	for (g = 0; g < size; g++)
		arra[g] = c;
	return (arra);
}
