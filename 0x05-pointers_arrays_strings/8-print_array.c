#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints until the n element of a string
 * @a: pointer-parameter
 * @n: parameter
 * Return: ntg.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n)
			printf("%d", a[i]);
		if ((i + 1) != n)
		{
			printf(", ");
		}
		else
			break;
	}
	printf("\n");
}
