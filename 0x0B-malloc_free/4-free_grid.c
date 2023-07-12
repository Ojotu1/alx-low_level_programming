#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Free(grid): It frees a two dimensional grid
 * @grid: it is a two dimensional grid
 * @height: That is the height of the grid
 * Return:void
 */

void free_grid(int **grid, int height)
{
	int e;

	for (e = 0; e < height; e++)
	{
		free(grid[e]);
	}
	free(grid);
}

