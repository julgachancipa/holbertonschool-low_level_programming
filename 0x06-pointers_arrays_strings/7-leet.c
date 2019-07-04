#include "holberton.h"
/**
 * leet - encodes into 1337.
 * @s: pointer
 * Return: encode string.
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "o__ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
				s[i] = j + '0';
		}
	}
	return (s);
}
