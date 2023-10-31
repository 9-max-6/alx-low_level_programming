#include "main.h"

void be_free(int **grid, int height);
/**
 * alloc_grid - a function to return a pointer to 2d array
 * @height: height of the grid
 * @width: width of the grid.
 *
 * Return: success? pointer: NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(int *) * height);

	if (!grid)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			be_free(grid, i);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

/**
 * be_free - a function to free a grid.
 * @grid: pointer to the grid.
 * @i: the height of the grid.
 */

void be_free(int **grid, int i)
{
	int height;

	if (i == 0)
	{
		free(grid);
		return;
	}
	for (height = 0; height < i; height++)
	{
		free(grid[height]);
	}

	free(grid);
}
