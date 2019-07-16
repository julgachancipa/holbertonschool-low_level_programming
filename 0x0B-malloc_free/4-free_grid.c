#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: matrix
 * @height: height of the grid
 *
 * Return: pointer.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j <= height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
