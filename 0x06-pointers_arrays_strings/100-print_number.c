#include "holberton.h"
/**
 * print_number - print a num.
 *
 */
void print_number(int n)
{
	int aux = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		_putchar(n +'0');
	else
	{
		while (aux > 0)
		{
			aux /= div;
			if (aux > 0)
				div *= 10;
		}
		aux = n;
		while (div > 0)
		{
			aux = (aux / div) % 10;
			_putchar(aux + '0');
			div = div / 10;
		}
	}
}
