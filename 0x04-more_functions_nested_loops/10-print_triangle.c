#include "holberton.h"
/**
 * print_triangle - n*n trangle times #.
 * @size: parameter
 * Return: nothing
 */
void print_triangle(int size)
{
	int j, k, l;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (k = 0; k < (size - j); k++)
			{
				_putchar(' ');
			}
			for (l = 0; l < (size - (size - j)); l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
