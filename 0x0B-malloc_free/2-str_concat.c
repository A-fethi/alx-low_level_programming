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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, pointer contains the content of s1 and s2
 */

char	*str_concat(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len1;
	int	len2;
	char	*space;

	i = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	space = malloc(sizeof(char) * ((len1 + len2)) + 1);
	if (!space)
		return (NULL);
	while (s1[i])
	{
		space[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		space[i] = s2[j];
		j++;
		i++;
	}
	space[i] = '\0';
	return (space);
}
