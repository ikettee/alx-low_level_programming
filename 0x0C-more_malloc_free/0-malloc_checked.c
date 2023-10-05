#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocated memory using malloc
 * @b: the number of bytes allocated
 * Return: pointer to the allocated memory or exit with status 98
 */

void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	else
	return (memory);
}
