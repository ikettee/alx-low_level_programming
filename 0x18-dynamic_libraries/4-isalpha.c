#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: a function parameter
 * Return: should be 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
