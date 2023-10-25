#include "lists.h"

/**
 * free_listint_safe - a function frees a lintint_t list
 * @h: point to the first node in the linked list.
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		next = current->next;

	if (current < next)
	{
		len++;
		free(current);
		*h = next;
	}
	else
	{
		free(current);
		*h = NULL;
		len++;
		break;
	}
	}

	return (len);
}
