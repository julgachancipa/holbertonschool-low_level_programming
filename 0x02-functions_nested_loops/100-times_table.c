#include "holberton.h"
/**
 *print_times_table - prints n tables
 *Return: nothing
 *@n: parameter
*/
void print_times_table(int n)
{
	int i, j, k;
	char a, b, c;

	if (n < 15 && n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			i = 0;
			for (k = 0; k <= n; k++)
			{
				if (k > 0)
					i += j;
				c = i % 10;
				b = ((i % 100) - c) / 10;
				a = (i - c - b) / 100;
				if (i < 10 && k > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (i < 100 && i > 9 && k > 0)
					_putchar(' ');
				if(k > 0)
					_putchar(' ');
				if (i > 99)
					_putchar(a + '0');
				if (i > 9)
					_putchar(b + '0');
				_putchar(c + '0');
				if (k < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
