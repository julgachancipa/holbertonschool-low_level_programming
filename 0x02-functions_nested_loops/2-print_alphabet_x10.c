#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet
 *Return: 0
 */
int print_alphabet_x10(void)
{
	char lc;
	char n = '\n';
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (lc = 'a'; lc < 123; lc++)
		{
			_putchar(lc);
		}
	_putchar(n);
	}
	return (0);
}
