#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: should be 0
 */
int main(int argc, char *argv[])
{
	int g, k, add = 0;

	for (g = 1; g < argc; g++)
	{
		for (k = 0; argv[g][k] != '\0'; k++)
		{
			if (!isdigit(argv[g][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[g]);
	}
	printf("%d\n", add);
	return (0);
}
