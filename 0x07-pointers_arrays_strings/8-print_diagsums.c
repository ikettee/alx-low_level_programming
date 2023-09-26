#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: the input value
 * @size: another input value
 * Return: should be 0 for success
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, g;

	add1 = 0;
	add2 = 0;

	for (g = 0; g < size; g++)
	{
		add1 = add1 + a[g * size + g];
	}
	for (g = size - 1; g >= 0; g--)
	{
		add2 += a[g * size + (size - g - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
