#include "holberton.h"
/**
 * _isdigit - parameter is a num or not.
 * Return: 1 if c is num, 0 otherwhise
 * @c: parameter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
