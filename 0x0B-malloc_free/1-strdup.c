#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string copied to the newly allocate space
 * Return: the pointer to the newly allocated space
 */

char *_strdup(char *str)
{
	int g;
	char *space;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (g = 0; str[g] != '\0'; g++)
		count++;

	space = malloc(sizeof(char) * count + 1);

	if (space == NULL)
		return (NULL);
	for (g = 0; str[g] != '\0'; g++)
		space[g] = str[g];

	return (space);
}
