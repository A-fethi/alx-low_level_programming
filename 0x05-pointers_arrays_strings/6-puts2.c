#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: char to check
 */

void	puts2(char *str)
{
	int	i;

	i = -2;
	while (str[i])
	{
		_putchar(str[i + 2]);
		i = i + 2;
	}
	_putchar('\n');
}
