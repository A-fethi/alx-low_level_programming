#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: number of bytes
 * @src: bytes from memory area
 * @dest: destination
 * Return: a pointer to dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
