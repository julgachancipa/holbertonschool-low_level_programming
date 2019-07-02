#include "holberton.h"
/**
 * puts_half - prints a half of a string
 * @str : pointer-parameter
 * Return: ntg.
 */
void puts_half(char *str)
{
	int i;
	int sz = 0;

	for (i = 0; i < 1000; i++)
	{
		if (str[i] == '\0')
			break;
		sz++;
	}
	if (sz % 2 != 0)
	{
		sz -= 1;
	}
	for (i = sz / 2; i < sz; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
