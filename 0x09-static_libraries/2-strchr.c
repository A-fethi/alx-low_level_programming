#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: the string
 * Return: a pointer to the first occurrence of the character
 */

char	*_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
