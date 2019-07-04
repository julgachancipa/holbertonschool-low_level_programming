#include "holberton.h"
/**
 * reverse_array - rev. the order of an array
 * @a : pointer-parameter
 * @n : parameter
 * Return: ntg.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int aux[n];

	for (i = n - 1; i >= 0; i--)
	{
		aux[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
