#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: string input
 * Return: should be an integer
 */
int _atoi(char *s)
{
	int g, m, a, len, h, digit;

	g = 0;
	m = 0;
	a = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (g < len && h == 0)
	{
		if (s[g] == '-')
			++m;
		if (s[g] >= '0' && s[g] <= '9')
		{
			digit = s[g] - '0';
			if (m % 2)
				digit = -digit;
			a = a * 10 + digit;
			h = 1;
			if (s[g + 1] < '0' || s[g + 1] > '9')

				break;
			h = 0;
		}
		g++;
	}
	if (h == 0)
		return (0);

	return (a);
}
