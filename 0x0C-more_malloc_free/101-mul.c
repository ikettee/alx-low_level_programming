#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - a function to check if a string contains a non-digit
 * @str: the string to check
 * Return: should be 0 for a non-digit
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
	{
		return (0);
	}

		str++;
	}
	return (1);
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the number of arrays
 * Return: should be 0 for success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result =  num1 * num2;

	printf("%d\n", result);
	return (0);
}
