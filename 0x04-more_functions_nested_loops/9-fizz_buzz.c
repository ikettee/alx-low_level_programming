#include <stdio.h>

/**
 * main - this is the main function
 * Return: Always 0
 */

int main(void)
{
	int g;

	for (g = 1 ; g <= 100 ; g++)
	{
		if ((g % 3 == 0) && (g % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (g % 3 == 0)
			printf("%s", "Fizz");
		else if (g % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", g);
		if (g != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
