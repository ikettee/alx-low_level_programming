#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocated memory using malloc
 * @size: the number of bytes allocated
 * Return: pointer to the allocated memory or exit with status 98
 */

void *malloc_checked(unsigned int size)
{
	void *memory;

	memory = malloc(size);

	if (memory == NULL)
		exit(98);

	return (memory);
}
