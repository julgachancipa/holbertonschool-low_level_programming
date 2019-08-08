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
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number or 0 if it fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, p = 0, x;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		;
	for (i -= 1; i >= 0; i--, p++)
	{
		x = b[i] - 48;
		if (x != 0 && x != 1)
			return (0);
		conv += (pof(2, p) * x);
	}
	return (conv);
}
