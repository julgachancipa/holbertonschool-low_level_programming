#include <math.h>
#include "search_algos.h"

/**
 * min - find the min value
 * @a: first value
 * @b: second value
 * Return: the min value
 */
size_t min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
/**
 * jump_search -  searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: array's size
 * @value: value to find
 * Return: the index of the value or -1 if it fails.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, s, p;

	if (!array)
		return (-1);

	prev = 0;
	p = 0;
	step = sqrt(size);

	while (array[prev] < value)
	{
		p = prev;
		s = step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", p, s);
	while (array[p] < value && p < size)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		p++;
	}
	if (array[p] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		return (p);
	}
	return (-1);
}
