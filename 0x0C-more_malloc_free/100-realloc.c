#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space
 * @new_size: new size, in bytes of the new memory block
 * Return: NULL or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		np[i] = ((char *)ptr)[i];
	return (np);
}
