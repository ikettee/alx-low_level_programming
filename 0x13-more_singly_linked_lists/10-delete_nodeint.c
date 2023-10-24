#include "limits.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: the head of a double pointer
 * @index: index
 * Return: 1 if it succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int g;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (g = 0; g < index - 1; g++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
