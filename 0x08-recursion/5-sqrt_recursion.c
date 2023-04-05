#include "main.h"

/**
 * _if - check multiple cases
 * @i: variable int
 * @j: variable int
 * Return: result of the check int
 */

int	_if(int i, int j)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (_if(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int that we will find the sqrt of.
 * Return: natural square root and -1 if n does not have 
 * a natural square root.
 */

int	_sqrt_recursion(int n)
{
	int	a;

	a = 1;
	if (n == 0)
		return (0);
	return (_if(a, n));
}
