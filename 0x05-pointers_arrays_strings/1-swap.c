#include "holberton.h"
/**
 * swap_int - Change the value of a and b.
 * @a : pointer-parameter
 * @b : pointer-parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
