#include "holberton.h"
/**
 * _isupper - char upper or not.
 * Return: 1 if c is uc, 0 otherwhise
 * @c: parameter
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
