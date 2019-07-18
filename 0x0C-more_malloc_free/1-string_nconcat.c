#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
/**
 * string_nconcat - concatenates n char of two strings.
 * @s1 : pointer-parameter
 * @s2 : pointer-parameter
 * @n : parameter
 * Return: s concat.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, sz1 = _strlen(s1);
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);
	len = sz1 + n + 1;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		s[sz1 + i] = s2[i];
	}
	s[sz1 + i] = '\0';
	return (s);
}
