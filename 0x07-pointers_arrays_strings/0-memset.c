#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: poiter to the memory area
 * @n: number of bytes
 * @b: the constant byte
 * Return: a pointer to the memory area @s
 */

char	*_memset(char *s, char b, unsigned int n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
