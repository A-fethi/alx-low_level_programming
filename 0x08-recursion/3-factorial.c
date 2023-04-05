#include "main.h"

/**
 * factorial - get the factorial of a given number.
 * @n: the number given.
 * Return: factorial of the given number if it's not less than 0.
 */

int	factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
