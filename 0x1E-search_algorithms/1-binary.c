#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: array's size
 * @value: value to find
 * Return: the index of the value or -1 if it fails.
 */
int binary_search(int *array, size_t size, int value)
{
	int R, L, m, i;

	if (!array)
		return (-1);

	L = 0;
	R = size - 1;

	while (L <= R)
	{
		printf("Searching in array:");
		for (i = L; i <= R; i++)
		{
			printf(" %d", array[i]);
			if (i != R)
				printf(",");
		}
		printf("\n");
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
