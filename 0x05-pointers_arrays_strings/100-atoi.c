#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */

int    _atoi(const char *s)
{
	long int	i;
	int		result;
	int		sign;
	int		j;

	sign = 1;
	i = 0;
	result = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == '\n' || s[i] == '\v' || s[i] == '\t'
				|| s[i] == '\f' || s[i] == '\r' || s[i] == ' ')
			i++;

		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] == '-' && s[i] == '+')
		{
			i++;
		}
		while ((s[i] >= '0' && s[i] <= '9'))
		{
			j = 1;
			result = result * 10 + s[i] - '0';
			i++;
		}
		if (s[i] == '\0' || j == 1)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
