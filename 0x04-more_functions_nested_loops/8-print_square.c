#include "main.h"

/**
  * print_square - printing square
  *@size: size of square
  */

void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
