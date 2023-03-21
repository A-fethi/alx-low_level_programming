#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int	i;
	int	p;

	i = 0;
	while (i <= 9)
	{
		p = 9 * i;
		if (p < 10)
		{
			_putchar(p + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			if (p != 81)
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
