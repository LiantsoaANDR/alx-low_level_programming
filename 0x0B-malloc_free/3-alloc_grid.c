#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 * each elemet of the grid are initialied to 0
 * Return: a pointer to a 2D array of int
 * NULL on failure or width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (0);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
			return (0);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
