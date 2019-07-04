#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest : pointer-parameter
 * @src : pointer-parameter
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int sz1 = 0;
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
			break;
		sz1++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[sz1 + i] = src[i];
	}
	dest[sz1 + i] = '\0';
	return (dest);
}
