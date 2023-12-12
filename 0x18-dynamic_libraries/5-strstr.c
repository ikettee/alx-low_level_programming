#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the input value
 * @needle: another input value
 * Return: should be 0 for success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *g = haystack;
		char *k = needle;

		while (*g == *k && *k != '\0')
		{
			g++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
