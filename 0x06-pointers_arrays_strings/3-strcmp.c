#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1 : pointer-parameter
 * @s2 : pointer-parameter
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	res = s1[i] - s2[i];
	return (res);
}
