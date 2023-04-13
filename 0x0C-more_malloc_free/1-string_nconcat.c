#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: char to check
 * Return: len of the string
 */

int    _strlen(char *s)
{
	char    *str;

	str = s;
	while (*str)
	{
		str++;
	}
	return (str - s);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: NULL on failure, pointer contains the content of s1 and s2
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	i, j, len1, len2;
	char		*space;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	space = malloc(sizeof(char) * (len1 + n + 1));
	if (!space)
		return (NULL);
	while (s1[i])
	{
		space[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		space[i] = s2[j];
		j++;
		i++;
	}
	space[i] = '\0';
	return (space);
}
