#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest: The destination of strings
 * @src: The source of the string
 * Return: Pointer to the resulting string dest
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
	{
		len++;
	}
		while (src[i])
		{
			dest[len + i] = src[i];
			i++;
		}
		dest[len + i] = '\0';
	return (dest);
}
