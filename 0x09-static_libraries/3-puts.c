#include "holberton.h"
/**
 * _puts - prints a string.
 * @str : pointer-parameter
 * Return: ntg.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
