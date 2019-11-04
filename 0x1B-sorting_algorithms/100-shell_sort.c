#include "sort.h"
/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm using the Knuth sequence
 * @array: array of integers
 * @size: size of the array
 * Return: anything
 */
void shell_sort(int *array, size_t size)
{
	size_t gaps = 1, out = 0, inter = 0;
	int value = 0;

	if (array == NULL || size < 2)
		return;
	while (gaps < size / 3)
		gaps = gaps * 3 + 1;
	while (gaps > 0)
	{
		for (out = gaps; out < size; out++)
		{
			value = array[out];
			inter = out;
			while (inter > (gaps - 1) && array[inter - gaps] >= value)
			{
				array[inter] = array[inter - gaps];
				inter = inter - gaps;
			}
			array[inter] = value;
		}
		gaps = (gaps - 1) / 3;
		print_array(array, size);
	}
}
