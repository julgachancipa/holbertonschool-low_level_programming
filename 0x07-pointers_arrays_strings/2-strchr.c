#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: char to find
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (*s != c)
	{
		++s;
		++index;
		return (s + index);
	}
	return ('\0');
}
