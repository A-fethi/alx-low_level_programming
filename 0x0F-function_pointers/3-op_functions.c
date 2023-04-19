#include "3-calc.h"


/**
 * op_add - calculates sum of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sum of a and b
 */

int	op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: difference of a and b
 */

int	op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: product of a and b
 */

int	op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of the division of a and b
 */

int	op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of the division of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: reminder of the division of  a by b
 */

int	op_mod(int a, int b)
{
	return (a % b);
}
