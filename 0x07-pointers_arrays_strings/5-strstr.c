#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
