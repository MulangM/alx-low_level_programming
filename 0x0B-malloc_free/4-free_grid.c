#include "main.h"

/**
 * free_grid- a functio that frees a 2-d grid.
 * @grid: the dimension of the array.
 * @height: the height of the two-d array.
 * Return: NOTHING for Void function.
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
