#include "function_pointers.h"

/**
 * int_index - return index of the first element
 * @array: an array
 * @size: the size of the element in the array
 * @cmp: the pointer to function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (g = 0; g < size; g++)
	{
		if (cmp(array[g]))
			return (g);
	}
	return (-1);
}
