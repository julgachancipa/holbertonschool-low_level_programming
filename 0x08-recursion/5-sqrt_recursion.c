#include "holberton.h"
/**
 * comp - evalue result
 * @n: value
 * @aux: auxiliar
 * Return: aux
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
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: value
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (comp(1, n));
}
