#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all args
 * @n: num of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	int sum = 0;
	unsigned int i;

	va_start(lst, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lst, unsigned int);

	va_end(lst);

	return (sum);
}
