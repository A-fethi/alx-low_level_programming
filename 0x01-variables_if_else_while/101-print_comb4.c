#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	int     a;
	int     b;
	int     c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 0;
	}
	putchar('\n');
	return (0);
}
