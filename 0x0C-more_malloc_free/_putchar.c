#include "main.h"
#include <unistd.h>

/**
 * _putchar - a funct that writes the character c to stdout
 * @c: the char
 * Return: should be 1 for success
 * On erro, -1 is returned, and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
