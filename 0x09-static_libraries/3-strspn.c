#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: s1
 * @accept: s2
 *
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i, j;

	for (j = 0; s[j]; j++)
	{
		if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
		{
			for (i = 0; accept[i];  i++)
			{
				if (s[j] == accept[i])
					n++;
			}
		}
		else
			break;
	}

	return (n);
}
