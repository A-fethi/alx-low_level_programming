#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @str: string to be encoded
 *
 * Return: the resulting string
 */

char	*rot13(char *str)
{
	int	i;
	int	j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (a[j])
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
