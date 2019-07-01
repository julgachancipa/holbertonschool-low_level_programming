#include "holberton.h"
/**
 * rev_string - rev. the order of a string
 * @s : pointer-parameter
 * Return: ntg.
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int sz = 0;
	int aux[1000];

	for (i = 0; i < 1000; i++)
	{
		if (s[i] == '\0')
			break;
		sz++;
	}
	for (i = sz - 1; i >= 0; i--)
	{
		aux[j] = s[i];
		j++;
	}
	for (i = 0; i < sz; i++)
	{
		s[i] = aux[i];
	}
}
