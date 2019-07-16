#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - initializes it with a specific char.
 * @size: str size
 * @c: specific char
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));
	for (; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
