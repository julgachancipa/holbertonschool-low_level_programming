#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  _words - count words.
 * @str: all str
 *
 * Return: count.
 */
int _words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}
/**
 *  _free - free mtx mem.
 * @a: *str
 * @i: aux
 * Return: ntg.
 */
void _free(char **a, int i)
{
	int j;

	for (j = 0; j <= i; j++)
	{
		free(a[j]);
	}
	free(a);
}
/**
 * strtow - splits a string into words.
 * @str: all str
 *
 * Return: **pointer.
 */
char **strtow(char *str)
{
	int i, k, l, m = 0, words = 0, letters;
	char **a;

	if (str == NULL)
		return (NULL);
	words = _words(str);
	a = malloc(sizeof(char *) * words);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		letters = 0;
		for (l = m; str[l]; l++)
		{
			if (str[l] != ' ')
			{
				letters++;
				if (str[l + 1] == ' ' || str[l + 1] == '\0')
					break;
			}
		}
		a[i] = malloc(letters * sizeof(char) + 1);
		if (a[i] == NULL)
		{
			_free(a, i);
			return (NULL);
		}
		m = l - letters + 1;
		k = 0;
		while (k < letters)
		{
			a[i][k] = str[m];
			m++;
			k++;
		}
		a[i][k] = '\0';
	}
	return (a);
}
