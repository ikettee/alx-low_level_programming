#include "limits.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: the head of a double pointer
 * @index: index of the node
 * Return: 1 if it succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_1 = *head;
	listint_t *temp_2 = NULL;
	unsigned int g = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_1);
		return (1);
	}

	while (g < index)
	{
		if (!temp_1)
			return (-1);

		temp_2 = temp_1;
		temp_1 = temp_1->next;
		g++
	}

	if (!temp_1)
		return (-1);

	temp_2->next = temp_1->next;
	free(temp_1);

	return (1);
}
