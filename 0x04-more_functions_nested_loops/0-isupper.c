#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: input a character
 *
 * Return: (1) when true (0) when false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
