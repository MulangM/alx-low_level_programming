#include "main.h"

/**
 * alloc_grid- function to show the two dimensions of an array.
 * @width: one dimension of the array.
 * @height: the other dimention of the array.
 * Return: 1
 */

int **alloc_grid(int width, int height)
{
	/* Declaring variables*/
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Assigning memory using malloc */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);



}
