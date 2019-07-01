#include "holberton.h"
/**
 * _strlen - gives the size of a string.
 * @s : pointer-parameter
 * Return: the size.
 */
int _strlen(char *s)
{
	int sz = 0;
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (s[i] == '\0')
			break;
		sz++;
	}
	return (sz);
}
