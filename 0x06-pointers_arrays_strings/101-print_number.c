#include "main.h"

/**
  * print_number - prints a number
  * @n: the number
  *
  * Return: void
  */

void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_number(n);
	}
	else if (n < 10)
	{
		_putchar(n + 48);
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
