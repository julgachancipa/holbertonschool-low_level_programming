#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer
 * Return: the string cap.
 */
char *cap_string(char *s)
{
	int j;
	int i = 0;
	int sp[13] = {' ', '\n', '\t', ';', '.', '!', '?',
		      '(', ')', '{', '}', '"', ','};

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == sp[j]))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
