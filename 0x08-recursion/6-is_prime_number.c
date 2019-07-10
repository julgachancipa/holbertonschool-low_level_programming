#include "holberton.h"
/**
 * mod - evalue factors of a number.
 * @n: number
 * @aux: factor
 * Return: 0 - 1
 */
int mod(int aux, int n)
{
	int sum = 0;

	if (aux <= n)
	{
		if (n % aux == 0)
			sum++;
		return (sum + mod(aux + 1, n));
	}
	return (sum);
}
/**
 * is_prime_number - evalue prime number.
 * @n: number
 * Return: 0 - 1
 */
int is_prime_number(int n)
{
	if (mod(1, n) == 2)
		return (1);
	return (0);
}
