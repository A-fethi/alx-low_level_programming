#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: string contain the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char	*_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
