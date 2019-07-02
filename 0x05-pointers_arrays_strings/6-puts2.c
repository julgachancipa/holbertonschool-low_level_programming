#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str : pointer-parameter
 * Return: ntg.
 */
void puts2(char *str)
{
	int i;
	int sz = 0;

	for (i = 0; i < 1000; i++)
	{
		if (str[i] == '\0')
			break;
		sz++;
	}
	for (i = 0; i < sz; i += 2)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
