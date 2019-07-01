#include "holberton.h"
/**
 * print_rev - prints a string rev.
 * @s : pointer-parameter
 * Return: ntg.
 */
void print_rev(char *s)
{
	int i;
	int sz = 0;

	for (i = 0; i < 1000; i++)
	{
		if (s[i] == '\0')
			break;
		sz++;
	}
	for (i = sz - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
