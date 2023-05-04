#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: char to check
 * Return: len of the string
 */

int	_strlen(const char *s)
{
	const char	*str;

	str = s;
	while (*str)
	{
		str++;
	}
	return (str - s);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b != 0 or 1 , b is NULL
 */

unsigned int	binary_to_uint(const char *b)
{
	int	decimal;
	int	weight;
	int	len;
	int	i;

	if (b == NULL)
		return (0);
	decimal = 0;
	weight = 1;
	len = _strlen(b);
	i = len - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal = decimal + (b[i] - '0') * weight;
		weight = weight * 2;
		i--;
	}
	return (decimal);
}
