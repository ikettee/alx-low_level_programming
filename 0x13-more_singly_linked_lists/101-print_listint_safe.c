#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - a function that counts the number of unique nodes.
 * @head: A point to the head of the listint_t
 * Return: should be 0 if the list is not looped or the unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ananse, *anansewaa;
	size_t uniq_nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	ananse = head->next;
	anansewaa = (head->next)->next;

	while (anansewaa)
	{
		if (ananse == anansewaa)
		{
			ananse = head;
			while (ananse != anansewaa)
			{
				uniq_nodes++;
				ananse = anansewaa->next;
				anansewaa = anansewaa->next;
			}

			ananse = ananse->next;
			while (ananse != anansewaa)
			{
				uniq_nodes++;
				ananse = ananse->next;
			}

			return (uniq_nodes);
		}

		ananse = ananse->next;
		anansewaa = (anansewaa->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that Prints a listint_t list
 * @head: point to the head of the listint_t list.
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod = looped_listint_len(head);
	size_t indx;

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d (unique)\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < nod; indx++)
		{
			printf("[%p] %d (unique)\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d (looped)\n", (void *)head, head->n);
	}

	return (nod);
}
