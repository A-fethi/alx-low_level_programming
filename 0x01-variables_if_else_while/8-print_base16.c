#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char	c;

	c = 0;
	while (c < 16)
	{
		if (c < 10)
		{
			putchar(c + '0');
		}
		else
		{
			putchar(c - 10 + 'a');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
