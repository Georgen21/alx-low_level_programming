#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: a dimensional grid to be freed
 * @height: second dimensional grid to be created.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
