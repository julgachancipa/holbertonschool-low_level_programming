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
	int sz = 0;

	for (i = 0; i < 1000; i++)
	{
		if (s[i] == '\0')
			break;
		sz++;
	}
	for (i = 0; i < sz; i++)
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
