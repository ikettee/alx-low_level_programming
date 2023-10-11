#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its own opcodes
 * @argc: arguments
 * @argv: argument array
 * Return: should be 0 for success
 */
int main(int argc, char *argv[])
{
	int bytes, g;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (g = 0; g < bytes; g++)
	{
		if (g == bytes - 1)
		{
			printf("%02hhx\n", arr[g]);
			break;
		}
		printf("%02hhx ", arr[g]);
	}
	return (0);
}
