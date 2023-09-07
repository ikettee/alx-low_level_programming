#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return: should be 0 for success
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("Size of a char; %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int; %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int; %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int; %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float; %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
