#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: char to find
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i, b = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
			b = 1;
		}
	}
	if (b == 1)
		return ('\0');
	return ('\0');
}
