#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that prints each array element on a new line
 * @array: an array
 * @size: the number of elements to print
 * @action: the pointer printing regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int g;

	if (array == NULL || action == NULL)
		return;
	for (g = 0; g < size; g++)
	{
		action(array[g]);
	}
}
