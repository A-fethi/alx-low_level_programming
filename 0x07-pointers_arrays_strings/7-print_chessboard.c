#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */

void	print_chessboard(char (*a)[8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
