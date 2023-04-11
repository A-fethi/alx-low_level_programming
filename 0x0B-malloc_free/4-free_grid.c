#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: 2D array
 * @height: matrix height
 */

void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		if (!grid[i])
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
