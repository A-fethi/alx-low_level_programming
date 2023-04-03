#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	n;
	int		i;
	int		j;

	i = 0;
	n = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			break;
		i++;
	}
	return (n);
}
