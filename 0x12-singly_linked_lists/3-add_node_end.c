#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of
 * a list_t list
 * @head: head of list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *curr_node;
	size_t g;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (g = 0; str[g]; g++)
		;

	n_node->len = g;
	n_node->next = NULL;
	curr_node = *head;

	if (curr_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (curr_node->next != NULL)
			curr_node = curr_node->next;
		curr_node->next = n_node;
	}

	return (*head);
}
