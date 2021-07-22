#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees the grid
 * @grid: the grid
 * @height: the height
 * Return: memory is freed
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
		free(grid[z]);
	free(grid);
}
