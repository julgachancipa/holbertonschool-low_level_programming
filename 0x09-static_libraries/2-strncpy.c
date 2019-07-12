#include "holberton.h"
/**
 * _strncpy - concatenates n char of two strings.
 * @dest : pointer-parameter
 * @src : pointer-parameter
 * @n : parameter
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
