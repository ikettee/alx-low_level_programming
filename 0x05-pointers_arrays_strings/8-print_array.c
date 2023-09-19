#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements of the array to be printed
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0 ; g < n ; g++)
	{
		printf("%d", a[g]);
		if (g < n - 1)
			printf(", ");
	}
	printf("\n");
}
