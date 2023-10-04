#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int g;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (g = 0; s1[g] != '\0'; g++)
		len1++;
	for (g = 0; s2[g] != '\0'; g++)
		len2++;

	result = malloc(sizeof(char) * (len1 + len2) + 1);

	if (result == NULL)
		return (NULL);
	for (g = 0; s1[g] != '\0'; g++)
		result[g] = s1[g];
	for (g = 0; s2[g] != '\0'; g++)
		result[len1 + g] = s2[g];
	return (result);
}

