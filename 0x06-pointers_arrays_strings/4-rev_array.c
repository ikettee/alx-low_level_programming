#include "main.h"

/**
 * reverse_array - a function that reverses array of integers
 * @a: an array
 * @n: number of elements of the array
 * Return: should be void
 */
void reverse_array(int *a, int n)
{
	int g;
	int k;

	for (g = 0; g < n--; g++)
	{
		k = a[g];
		a[g] = a[n];
		a[n] = k;
	}
}
