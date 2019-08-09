#include <stdio.h>
#include "holberton.h"
/**
 * pof - pows a number
 * @x: number
 * @n: power
 * Return: result
 */
unsigned int pof(unsigned int x, unsigned int n)
{
	unsigned int i, result = 1;

	if (n == 0)
		return (1);
	for (i = 1; i <= n; i++)
		result *= x;
	return (result);
}
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position
 * Return: 1 or -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n += pof(2, index);
	return (1);
}
