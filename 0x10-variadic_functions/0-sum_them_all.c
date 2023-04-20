#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments passed to the function
 * Return: sum result
 */

int	sum_them_all(const unsigned int n, ...)
{
	unsigned int	i;
	int		sum;
	va_list		args;

	i = 0;
	sum = 0;
	va_start(args, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	return (sum);
}
