#include "main.h"

/**
 * more_numbers - nmbr fct
 * Return: no return
 */

void	more_numbers(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i < 15)
		{
			if (i >= 10)
				_putchar (i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
