#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	clock_t start, end;
	double cpu_time_used;

	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7, 1, 3};
	size_t n = sizeof(array) / sizeof(array[0]);
     
	start = clock();

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("%f", cpu_time_used);
	return (0);
}
