#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional grid previously
 * @grid: a grid
 * @height: The grid's height
 *
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
