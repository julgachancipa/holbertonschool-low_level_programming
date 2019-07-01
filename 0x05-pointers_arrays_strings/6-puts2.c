#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str : pointer-parameter
 * Return: ntg.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 1000; i += 2)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
