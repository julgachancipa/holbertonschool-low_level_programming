#include "holberton.h"
/**
 *jack_bauer - prints hours
 *Return: nothing
*/
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int i = '9';

	for (a = '0'; a <= '2'; a++)
	{
		if (a == '2')
		{
			i = '3';
		}
		for (b = '0'; b <= i; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
