#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - adds
 * @a: numa
 * @b: numb
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs
 * @a: numa
 * @b: numb
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - adds
 * @a: numa
 * @b: numb
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - adds
 * @a: numa
 * @b: numb
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - adds
 * @a: numa
 * @b: numb
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
