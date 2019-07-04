#include "holberton.h"
/**
 * reverse_array - rev. the order of an array
 * @a : pointer-parameter
 * @n : parameter
 * Return: ntg.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
