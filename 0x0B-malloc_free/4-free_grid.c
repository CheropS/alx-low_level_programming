#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees 2 dim grid
 * @grid: 2 dim. array to free
 * @height: input height (size)
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
