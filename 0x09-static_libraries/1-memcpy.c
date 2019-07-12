#include "holberton.h"
/**
 * _memcpy - copy memory with a constant byte.
 * @src: source
 * @n: bytes of the mem. area
 * @dest: destine
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
