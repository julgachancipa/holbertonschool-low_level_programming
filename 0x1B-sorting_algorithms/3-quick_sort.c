#include "sort.h"
/**
 * pivoting - swap th values and evaluate the new pivot
 * @array: integer array
 * @low: lower idx
 * @high: higher idx
 * @size: array's size
 * Return: new pivot
 */
size_t pivoting(int *array, int low, int high, size_t size)
{
	int pivot, aux, i, j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (j != i)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (pivot < array[i + 1])
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_call - recursive function to divide the array
 * @array: integer array
 * @low: lower idx
 * @high: higher idx
 * @size: array's size
 * Return: nothing
 */
void quick_call(int *array, int low, int high, size_t size)
{
	size_t sep;

	if (low < high)
	{
		sep = pivoting(array, low, high, size);
		quick_call(array, low, sep - 1, size);
		quick_call(array, sep + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: integer array
 * @size: array's size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		quick_call(array, 0, size - 1, size);
	}
}
