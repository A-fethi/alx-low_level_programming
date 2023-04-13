#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	i;
	char	*space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(size * nmemb);
	if (!space)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		space[i] = 0;
		i++;
	}
	return (space);
}
