#include "main.h"
/**
 * _abs - function to compute the absolute value of an integer
 * @i: the function parameters
 * Return: should be -i or i
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
	{
		return (i);
	}

	return (0);
}
