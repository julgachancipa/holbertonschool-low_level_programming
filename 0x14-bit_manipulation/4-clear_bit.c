#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit -  sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position
 * Return: 1 or -1 if it fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= 64)
		return (-1);
	mask = 1 << index;
	*n &= ~mask;
	return (1);
}
