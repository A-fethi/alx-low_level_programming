#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
* followed by a new line.
*/

void print_alphabet_x10(void)
{
	char	i;
	char	j;

	i = 'a';
	j = 0;
	while (j < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		i = 'a';
		j++;
	}
}
