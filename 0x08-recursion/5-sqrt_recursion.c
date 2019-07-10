#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: value
 * @aux: auxiliar
 * Return: result
 */
int comp(int aux, int n)
{
	if (aux * aux == n)
        {
		return (aux);
	}
	else if (aux * aux > n)
		return (-1);
	return (comp(aux + 1, n));
}
int _sqrt_recursion(int n)
{
	return (comp(1, n));
}
