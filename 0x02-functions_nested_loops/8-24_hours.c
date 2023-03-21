#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */

void	jack_bauer(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			if (a != 23 || b != 59)
			{
				_putchar('\n');
			}
			b++;
		}
		a++;
		b = 0;
	}
	_putchar('\n');
}
