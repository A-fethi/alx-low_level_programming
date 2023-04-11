#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: char to check
 * Return: len of the string
 */

int	_strlen(char *s)
{
	char	*str;

	str = s;
	while (*str)
	{
		str++;
	}
	return (str - s);
}

/**
 * argstostr - concatenates all the args of the program
 * @ac: arguments count
 * @av: arguments
 * Return: pointer to a new str, NULL if it fails
 */

char	*argstostr(int ac, char **av)
{
	int	i;
	int	j;
	int	k;
	int	len;
	char	*str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (i < ac)
	{
		len += _strlen(av[i]) + 1;
		i++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (!str)
	{
		return (NULL);
	}
	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
