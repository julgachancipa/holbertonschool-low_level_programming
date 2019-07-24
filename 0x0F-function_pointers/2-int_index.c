#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: .
 * @size: .
 * @cmp: .
 * Return: ntg
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*p)(int);
	int i;

	p = cmp;
	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (p(array[i]))
				return (i);
		}
	}
	return (-1);
}
