#include "main.h"

/**
  * print_line - printing line of n times
  *@n: number of lines
  */

void	print_line(int n)
{
	int	i;

	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
