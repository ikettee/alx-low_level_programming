#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: the arguments count
 * @argv: the arguments vector
 * Return: should be 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
