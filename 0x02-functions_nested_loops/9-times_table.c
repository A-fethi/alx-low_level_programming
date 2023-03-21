#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 9)
	{
		_putchar('0');
		_putchar(',');
		while (j <= 9)
		{
			if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
			if (j > 9)
				_putchar('\n');
		}
		i++;
		j = 1;
	}
}
