#include "main.h"

/**
 * print_triangle - entry point
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */


void    print_triangle(int size)
{
	int     i;
	int     j;
	int     s;

	i = 1;
	j = 1;
	while (i <= size)
	{
		s = size - i;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			j = 1;
			i++;
			_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
