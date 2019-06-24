#include "holberton.h"
/**
 *print_alphabet - prints the alphabet
 *Return: 0
 */
int print_alphabet(void)
{
	char lc;
	char n = '\n';

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar(n);
	return (0);
}
