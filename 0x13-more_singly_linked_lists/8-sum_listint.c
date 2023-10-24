#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data of a listint_t list
 * @head: first node
 * Return: total of all the data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
