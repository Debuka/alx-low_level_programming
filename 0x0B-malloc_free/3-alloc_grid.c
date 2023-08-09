#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates 2D arra inialised with 0.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: Pointer to the allocated 2D array, or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
    int **dp;
    int a, z;

    if (width <= 0 || height <= 0)
        return (NULL);

    dp = malloc(sizeof(int *) * height);
    if (dp == NULL)
        return (NULL);

    for (a = 0; a < height; a++)
    {
        dp[a] = malloc(sizeof(int) * width);
        if (dp[a] == NULL)
        {
            for (; a >= 0; a--)
                free(dp[a]);
            free(dp);
            return (NULL);
        }
    }

    for (a = 0; a < height; a++)
    {
        for (z = 0; z < width; z++)
            dp[a][z] = 0;
    }

    return (dp);
}
