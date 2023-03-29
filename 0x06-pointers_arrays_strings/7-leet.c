#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */

char	*leet(char *str)
{
	int	i;
	int	j;

	char	*a = "aAeEoOtTlL";
	char	*b = "4433007711";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
