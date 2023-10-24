#include "lists.h"

/**
 * free_listint - a function that frees a listint_ list
 * @head: pointer the head of listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
