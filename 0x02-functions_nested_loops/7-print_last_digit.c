#include "holberton.h"
/**
 * print_last_digit - last digit
 * @n: parameter
 * Return: n
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
