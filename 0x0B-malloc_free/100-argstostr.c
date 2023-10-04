#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: for the count
 * @av: the vector
 * Return: for the return
 */

char *argstostr(int ac, char **av)
{
	int g = 0, a = 0, m = 0, h = 0;
	char *k;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][m])
		{
			g++;
			m++;
		}

		m = 0;
		a++;
	}

	k = malloc((sizeof(char) * g) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][m])
		{
			k[h] = av[a][m];
			h++;
			m++;
		}

		k[h] = '\n';

		m = 0;
		h++;
		a++;
	}

	h++;
	k[h] = '\0';
	return (k);
}
