#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: integer array
 * @size: array's size
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int aux;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}
