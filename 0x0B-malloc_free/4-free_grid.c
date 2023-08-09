#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated.
 * @grid: Pointer to the 2D array.
 * @height: Height dimension of the grid.
 *
 * Description: Frees alocated memory.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
	
	for (it = 0; it < height; it++)
	{
		free(grid[it]);
	}
	free(grid);
}
