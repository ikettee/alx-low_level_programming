#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: point to the first node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *nxt_node = NULL;

	while (*head)
	{
		nxt_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = nxt_node;
	}

	*head = prev_node;

	return (*head);
}
