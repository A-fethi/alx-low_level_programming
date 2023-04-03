#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: poiter to the memory area
 * @n: number of bytes
 * @b: the constant byte
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
