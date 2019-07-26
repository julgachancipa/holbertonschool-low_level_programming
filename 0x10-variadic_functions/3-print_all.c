#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: ntg
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, format);
	while (*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	va_end(lst);
}
