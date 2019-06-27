#include "holberton.h"
/**
 * print_number - print number n
 * Return: nothing
 * @n: parameter
 */
void print_number(int n)
{
	int a, b, c, d;

	if (n < 0)
	{
		n = n * -1;
		_putchar(45);
	}
	d = (n % 10);
	c = (((n % 100) - d) / 10);
	b = (((n % 1000) - c - d) / 100);
	a = ((n - b - c - d) / 1000);
	if (n > 999 || n < -999)
		_putchar(a + 48);
	if (n > 99 || n < -99)
		_putchar(b + 48);
	if (n > 9 || n < -9)
		_putchar(c + 48);
	_putchar(d + 48);
}
