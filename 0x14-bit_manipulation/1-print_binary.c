#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: ntg
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux, flag = 0;
	int i;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 63; i >= 0; i--)
		{
			aux = n >> i;
			if (aux & 1)
				flag = 1;
			if (flag == 1)
			{
				if (aux & 1)
					_putchar('1');
				else
					_putchar('0');
			}
		}
	}
}
