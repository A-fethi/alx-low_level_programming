#include "main.h"

/**
 * _strcmp - compare 2 string
 * @s1:first string
 * @s2:second string
 * Return:result of the comparaison
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
