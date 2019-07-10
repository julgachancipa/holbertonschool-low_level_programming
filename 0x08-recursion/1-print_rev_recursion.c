#include "holberton.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string
 * Return: ntg
 */
void _print_rev_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		count++;
		_putchar(*(s - count));
	}
}
