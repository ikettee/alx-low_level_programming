#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives
 * @argc: the argument count
 * @argv: the argument vector
 * Return: should be 0
 */

int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
		printf("%s\n", argv[g]);
	return (0);
}
