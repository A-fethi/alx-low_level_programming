#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a <= 9)
	{
		while (b < 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
				d = c - c;
			}
			b++;
			c = b - b;
		}
		a++;
		b = a - a;
	}
	putchar('\n');
	return (0);
}

