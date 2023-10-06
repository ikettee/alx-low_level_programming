#include <stdio.h>
#include "main.h"

/**
 * *array_range -  a function that creates an array of integers
 * @min: the minimum range
 * @max: the maximum range
 * Return: a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *memory;
	int g, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	memory = malloc(sizeof(int) * size);

	if (memory == NULL)
		return (NULL);

	for (g = 0; min <= max; g++)
		memory[g] = min++;

	return (memory);
}
