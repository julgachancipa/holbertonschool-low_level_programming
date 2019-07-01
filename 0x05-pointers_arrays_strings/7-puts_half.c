#include "holberton.h"
/**
 * puts_half - prints a half of a string
 * @str : pointer-parameter
 * Return: ntg.
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = 0;

	for (i = 0; i < 1000; i++)
	{
		if (str[i] == '\0')
			break;
		length_of_the_string++;
	}
	for (i = (length_of_the_string) / 2; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
