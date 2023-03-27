#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char to check
 */

void    rev_string(char *s)
{
	int     i;
	int     n;
	char    c;

	n = 0;
	while (s[n] != '\0')
		n++;
	i = 0;
	while (i < n / 2)
	{
		c = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = c;
		i++;
	}
}
