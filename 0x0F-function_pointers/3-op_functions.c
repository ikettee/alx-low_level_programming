#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Operation that returns the sum of two numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Operations that returns diff of two numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: diff btn a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Operations that returns product of two numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: product of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Operations that returns division of two numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: quotient of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Operations that returns the remainder of two numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: remainder of div of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
