#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: NULL or pointer
 */
int *array_range(int min, int max)
{
	int len;
	int *p;
	int i;

	if (min > max)
		return (NULL);
	len = max - min;
	p = malloc(len * sizeof(int) + 1);
	for (i = min; i <= max; i++)
		p[i] = i;
	return (p);
}
