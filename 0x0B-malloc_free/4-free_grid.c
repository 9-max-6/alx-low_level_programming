#include "main.h"

/**
 * free_grid - a function free a grid
 * @grid: pointer to the grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i])
		{
			free(grid[i]);
		}
	}

	free(grid);
}

