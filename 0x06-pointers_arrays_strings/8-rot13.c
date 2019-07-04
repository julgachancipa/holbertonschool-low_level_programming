#include "holberton.h"
/**
 * rot13 - encodes into rot13.
 * @s: pointer
 * Return: encode string.
 */
char *rot13(char *s)
{
	int i, j;
	char l[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = l[j + 13];
				break;
			}
		}
	}
	return (s);
}
