#include "holberton.h"
/**
 *times_table - prints 9 tables
 *Return: nothing
*/
void times_table(void)
{
	int i, j, k;
	char a, b;

	for (j = 0; j <= 9; j++)
	{
		i = 0;
		for (k = 0; k <= 9; k++)
		{
			if (k > 0)
				i += j;
			a = ((i % 100) - (i % 10)) / 10;
			b = (i % 10);
			if (i < 10 && k != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (k > 0)
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			_putchar(b + '0');
			if (k < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
