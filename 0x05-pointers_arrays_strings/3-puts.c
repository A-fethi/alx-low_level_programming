#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 */

void	_puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
