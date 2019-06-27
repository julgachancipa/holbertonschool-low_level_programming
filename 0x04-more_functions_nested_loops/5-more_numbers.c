#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14, 10 times.
 * Return: nothing
 */
void more_numbers(void)
{
	char i, j, k;
	int l;

	for (l = 0; l <= 9; l++)
	{
		k = '9';
		for (i = '0'; i <= '1'; i++)
		{
			for (j = '0'; j <= k; j++)
			{
				if (i > '0')
					_putchar(i);
				_putchar(j);
			}
			k = '4';
		}
		_putchar('\n');
	}
}
