#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: for the grid
 * @height: for the height
 * Return:
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}

	free(grid);
}
