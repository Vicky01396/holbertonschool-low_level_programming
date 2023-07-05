#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * alloc_grid - function that returns a pointer to a two-dimensional array
 * of integers.
 * @width: x axis
 * @height: y axis
 * Return: a pointer to a 2 dimensional array of int or null
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int k, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
		for (j = 0; j < k; j++)
			free(grid[j]);
	free(grid);
	for (k = 0; k < height; k++)
		for (j = 0; j < width; j++)
			grid[k][j] = 0;
	return (grid);
}
