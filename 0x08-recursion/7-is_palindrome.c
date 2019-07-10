#include "holberton.h"
/**
 * strsize - catculates size of a str
 * @s: string
 * Return: size
 */
int strsize(char *s)
{
	int sz = 0;

	if (*s != '\0')
	{
		sz++;
		return (sz + strsize(s + 1));
	}
	return (sz);
}
/**
 * comp - comp chars
 * @a: string
 * @sz: size
 * @i: aux
 * Return: 1 / 0
 */
int comp(char *a, int sz, int i)
{
	if (i >= sz)
		return (1);
	else if (a[i] == a[sz])
		return (comp(a, sz - 1, i + 1));
	else
		return (0);
}
/**
 * is_palindrome - catculates size of a str
 * @s: string
 * Return: 1 / 0
 */
int is_palindrome(char *s)
{
	int sz = strsize(s);
	int i = 0;

	return (comp(s, sz - 1, i));
}
