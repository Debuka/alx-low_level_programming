#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2D array memory.
 * @grid: The grid of the array.
 * @height: height dimension of grid
 * Description: frees allocated memory of grid
 * Return: nothing
 *
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
