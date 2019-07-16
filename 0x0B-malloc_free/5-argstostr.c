#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
 * argstostr - concatenates all the arguments of your program.
 * @ac: num of arg
 * @av: array of arg
 * Return: str or NULL
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, sz = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		sz += _strlen(av[i]) + 1;
	}
	a = malloc(sz);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(a, av[i]);
		_strcat(a, "\n");
	}
	return (a);
}
