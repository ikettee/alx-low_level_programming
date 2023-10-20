#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function returns number of elements in a linked
 * @h: list
 * Return: elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		h = h->next;
		numb++;
	}

	return (numb);
}
