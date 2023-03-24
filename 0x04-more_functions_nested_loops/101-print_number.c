#include "main.h"

/**
 * print_number - prints an integer
 * @n:.input integer parameter
 */
void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_number(n);
	}
	else if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
}
