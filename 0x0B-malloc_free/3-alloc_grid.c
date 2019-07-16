#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer.
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (k = 0; k < height; k++)
			a[i][k] = 0;
	}
	return (a);
}
