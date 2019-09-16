#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
