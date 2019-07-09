#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: char to find
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == '\0')
			return ('\0');
	}
	return (s);
}
