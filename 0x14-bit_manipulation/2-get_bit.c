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
 * get_bit -  returns the value of a bit at a given index.
 * @n: number
 * @index: position
 * Return: the value of the bit at index or -1 if it fails.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	mask = pof(2, index);
	if (n & mask)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
