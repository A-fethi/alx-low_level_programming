#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char to check
 */

void	puts_half(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	if (n % 2 != 0)
	{
		n = (n + 1) / 2;
		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = n / 2;
		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
