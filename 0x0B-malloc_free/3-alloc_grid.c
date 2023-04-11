#include "main.h"

/**
 * alloc_grid - creates a 2D array of integers
 * @width: matrix width
 * @height: matrix height
 * Return: pointer to the created matrix, NULL if failure
 */

int	**alloc_grid(int width, int height)
{
	int	i;
	int	j;
	int	**grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (!grid)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			i = 0;
			while (i < height)
			{
				free(grid[i]);
				i++;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
