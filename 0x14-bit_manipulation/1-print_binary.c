#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 */

void	print_binary(unsigned long int n)
{
	int	i;
	int	one;

	i = sizeof(n) * 8 - 1;
	one = 0;
	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (i >= 0)
	{
		if (((n >> i) & 1) == 1)
			one = 1;
		if (one)
		{
			if ((n >> i) & 1)
				putchar('1');
			else
				putchar('0');
		}
		i--;
	}
}
