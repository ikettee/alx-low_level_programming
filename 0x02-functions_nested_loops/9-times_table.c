#include "main.h"
#include <stdio.h>
/**
 * times_table - prints nine times table
 * Return: 0
 */
void times_table(void)
{
	int k, y, result;

	for (k = 0 ; k < 10 ; k++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			result = k * y;
			if (y == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (y != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}

