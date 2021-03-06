#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: str len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: str size
 * Return: string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(_strlen_recursion(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
