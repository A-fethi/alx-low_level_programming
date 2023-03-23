#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void	print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
