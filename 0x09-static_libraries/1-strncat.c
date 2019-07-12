#include "holberton.h"
/**
 * _strncat - concatenates n char of two strings.
 * @dest : pointer-parameter
 * @src : pointer-parameter
 * @n : parameter
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int sz1 = 0;
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
			break;
		sz1++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[sz1 + i] = src[i];
	}
	dest[sz1 + i] = '\0';
	return (dest);
}
