#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
/**
 * _strcpy - copy from src to dest.
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - concatenates two strings.
 * @dest : pointer-parameter
 * @src : pointer-parameter
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int sz1 = 0;
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
			break;
		sz1++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[sz1 + i] = src[i];
	}
	dest[sz1 + i] = '\0';
	return (dest);
}
/**
 * str_concat - concat 2 strg.
 * @s1: str1
 * @s2: str2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	s = _strcpy(s, s1);
	s = _strcat(s, s2);
	return (s);
}
