#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - return the flip bits.
 * @n: num1
 * @m: num2
 * Return: fliped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, mask = 1;

	n ^= m;
	while (n)
	{
		if (n & mask)
			i++;
		n >>= 1;
	}
	return (i);
}
