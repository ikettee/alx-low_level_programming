#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 * Return: should 0
 */
void print_alphabet_x10(void)
{
	int l;
	char k;

	for (l = 0 ; l < 10 ; l++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}
