#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char	c;
	char	a;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
