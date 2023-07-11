#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Function that frees a 2-dimensional array
 *previously created by alloc_grid function
 *@grid: pointer to  a pointer
 *@height: column of array
 *Return: 0 Success
 *
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
