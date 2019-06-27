#include "holberton.h"
/**
 * print_number - print number n
 * Return: nothing
 * @n: parameter
 */
void print_number(int n)
{
	char a, b, c, d;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	d = n % 10;
	c = ((n % 100) - d) / 10;
	b = ((n % 1000) - c - d) / 100;
	a = (n - b - c - d) / 1000;
	if (n > 999 || n < -999)
		_putchar(a + '0');
	if (n > 99 || n < -99)
		_putchar(b + '0');
	if (n > 9 || n < -9)
		_putchar(c + '0');
	_putchar(d + '0');
}
