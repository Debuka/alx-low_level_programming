#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: Pointer to the 2D array.
 * @height: Height dimension of the grid.
 *
 * Description: Frees memory of a dynamically allocated 2D array.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int it;

    for (it = 0; it < height; it++)
    {
        free(grid[it]);
    }
    free(grid);
}
