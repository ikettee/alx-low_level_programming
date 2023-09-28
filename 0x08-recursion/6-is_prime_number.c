#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - a function if the input integer is a prime number
 * @n: evaluated number
 * Return: should be 1 for n a prime number, or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate recursively if a number is a prime
 * @n: the evaluated number
 * @i: iterator
 * Return: should be 1 for n a prime, or 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
