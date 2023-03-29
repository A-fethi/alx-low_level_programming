#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @str: string to modify
 *
 * Return: the resulting string
 */

char	*cap_string(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i])
	{
		if (word_start && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			word_start = 1;
		}
		else
		{
			word_start = 0;
		}
		i++;
	}
	return (str);
}
