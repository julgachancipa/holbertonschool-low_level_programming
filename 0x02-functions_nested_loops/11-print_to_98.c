#include "holberton.h"
/**
 *print_to_98 - from n to 98
 *@n: parameter
 *Return: ntg
*/
void print_to_98(int n)
{
	int a, b, c;

	while (n != 98)
	{
		c = n % 10;
		b = ((n % 100) - c) / 10;
		a = (n - c - b) / 100;
		if (n < 0)
		{
			c = c * -1;
			b = b * -1;
			a = b * -1;
			_putchar('-');
		}
		if ((n < -99 || n > 99) && n != 0)
			_putchar(a + '0');
		if ((n < -9 || n > 9) && n != 0)
			_putchar(b + '0');
		_putchar(c + '0');
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
