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
	int n = 0;

	while ((s[i] > 'a' || s[i&& s[i])
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				n++;
			accept++;
		}
		s++;
	}
	return (n);
}
