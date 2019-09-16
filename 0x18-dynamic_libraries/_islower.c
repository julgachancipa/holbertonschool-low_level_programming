
#include "holberton.h"
/**
 * _islower - identify lowercase
 * @c: parameter
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
