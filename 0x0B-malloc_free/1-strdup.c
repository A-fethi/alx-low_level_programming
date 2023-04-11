#include "main.h"
#include <string.h>
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
	i = 0;
	while (str[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
