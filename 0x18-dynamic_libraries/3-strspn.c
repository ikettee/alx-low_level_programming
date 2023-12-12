#include "main.h"
/**
 * _strspn - an entry or start point
 * @s: type one(input)
 * @accept: input again
 * Return: is 0 for success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				n++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
