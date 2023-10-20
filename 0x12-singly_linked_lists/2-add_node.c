#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node
 * @head: link list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tem;
	int leng = 0;

	tem = malloc(sizeof(list_t));
	if (tem == NULL)
		return (NULL);

	while (str[leng])
		leng++;

	tem->len = leng;
	tem->str = strdup(str);
	tem->next = *head;
	*head = tem;
	return (tem);
}
