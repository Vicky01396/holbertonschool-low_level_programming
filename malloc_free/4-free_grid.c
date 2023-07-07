#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that releases a two-dimensional grid previously
 * created by its alloc_grid function.
 * @grid: the grid
 * @height: an int
 */
void free_grid(int **grid, int height)
{
	int count = 0;

	for (; count < height; count++)
		free(grid[count]);
	free(grid);
}
