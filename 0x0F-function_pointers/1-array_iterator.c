#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: .
 * @size: .
 * @action: .
 * Return: ntg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*p)(int);
	unsigned int i;

	p = action;
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p(array[i]);
		}
	}
}
