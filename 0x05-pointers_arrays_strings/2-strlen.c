#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: length of the string
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
