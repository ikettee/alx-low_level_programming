#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer first node
 * @index: index of the node
 * Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g;

	if (head == NULL)
		return (NULL);
	for (g = 0; g < index; g++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
