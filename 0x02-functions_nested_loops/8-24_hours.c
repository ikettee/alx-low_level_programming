#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int g, k;

	for (g = 0 ; g < 24 ; g++)
	{
		for (k = 0 ; k < 60 ; k++)
		{
			_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}
