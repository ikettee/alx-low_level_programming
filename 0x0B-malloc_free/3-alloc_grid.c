#include "main.h"

/**
 * alloc_grid - returns a pointer t a 2 dimensional array of integers
 * @width: the # of columns
 * @height: the # of rows
 * Return: the pointer to an array
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int g;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		result[g] = malloc(sizeof(int) * width);

		if (result[g] == NULL)
		{
			free(result);
			for (k = 0; k <= height; k++)
				free(result[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			result[g][k] = 0;
	}
	return (result);
}

