#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all the elecments of a listint_t
 * @h: pointer to the head
 * Return: the noddes in the list_t
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (nodes);
}
