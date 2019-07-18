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
 * strtow - splits a string into words.
 * @str: all str
 *
 * Return: **pointer.
 */
char **strtow(char *str)
{
	int i, j, k, l, m = 0, words = 0, letters;
	char **a;

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
			for (j = 0; j <= i; j++)
			{
				free(a[j]);
			}
			free(a);
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
