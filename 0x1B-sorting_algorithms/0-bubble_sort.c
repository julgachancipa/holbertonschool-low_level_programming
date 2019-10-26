#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: integer array
 * @size: array's size
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int aux;
	size_t swapped, i;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				aux = array[i - 1];
				array[i - 1] = array[i];
				array[i] = aux;
				print_array(array, size);
				swapped = 1;
			}
		}
	}
}
