#include "main.h"

/**
 * _strdup - copies the str given as parameter to dest
 * @str: the string
 * Return: NULL if str is NULL, else pointer to the new string
 */

char	*_strdup(char *str)
{
	int	i;
	char	*dest;

	if (str == NULL)
	{
		return (NULL);
	}
	dest = malloc(sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
