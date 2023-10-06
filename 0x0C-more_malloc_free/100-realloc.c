#include <stdio.h>
#include "main.h"

/**
 * *_realloc - funct that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size of the allocated memory
 * @new_size: new size of the new memory
 * Return: a pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *old_ptr;
	unsigned int g;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_1 = malloc(new_size);

	if (!ptr_1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (g = 0; g < new_size; g++)
			ptr_1[g] = old_ptr[g];
	}

	if (new_size > old_size)
	{
		for (g = 0; g < old_size; g++)
			ptr_1[g] = old_ptr[g];
	}

	free(ptr);
	return (ptr_1);
}

