#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int	*array_range(int min, int max)
{
	int	*space;
	int	i;

	if (min > max)
		return (NULL);
	space = malloc(sizeof(int) * (max - min + 1));
	if (!space)
		return (NULL);
	i = 0;
	while (i <= max)
	{
		space[i] = i;
		i++;
	}
	return (space);
}
