#include "holberton.h"
/**
 * print_diagonal - n times '\'.
 * @n: parameter
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
