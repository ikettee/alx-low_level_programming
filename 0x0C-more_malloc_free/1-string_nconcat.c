#include <stdio.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: string to which s2 will be concatenated
 * @s2: string to concatenate from
 * @n: the max number of bytes from s2 to concatenate to s1
 * Return: a pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int g = 0, a = 0, len_s1 = 0, len_s2 = 0;

	while (s1 && s1[len_s1])
		len_s1++;
	while (s2 && s2[len_s2])
		len_s2++;

	if (n < len_s2)
		result = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (!result)
		return (NULL);

	while (g < len_s1)
	{
		result[g] = s1[g];
		g++;
	}

	while (n < len_s2 && g < (len_s1 + n))
		result[g++] = s2[a++];

	while (n >= len_s2 && g < (len_s1 + len_s2))
		result[g++] = s2[a++];

	result[g] = '\0';

	return (result);
}
