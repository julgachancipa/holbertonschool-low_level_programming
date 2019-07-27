#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * character - pc
 * @lst: arg
 * Return: ntg
 */
void character(va_list lst)
{
	char aux = va_arg(lst, int);

	printf("%c", aux);
}
/**
 * integer - pi
 * @lst: arg
 * Return: ntg
 */
void integer(va_list lst)
{
	int aux = va_arg(lst, int);

	printf("%d", aux);
}
/**
 * floater - pf
 * @lst: arg
 * Return: ntg
 */
void floater(va_list lst)
{
	double aux = va_arg(lst, double);

	printf("%f", aux);
}
/**
 * str - ps
 * @lst: arg
 * Return: ntg
 */
void str(va_list lst)
{
	char *aux = va_arg(lst, char *);

	if (aux != NULL)
		printf("%s", aux);
	else
		printf("(nil)");
}
/**
 * print_all - prints anything.
 * @format:lst of types of arguments passed to the function
 * Return: ntg
 */
void print_all(const char * const format, ...)
{
	int i, j, k;
	va_list lst;
	var_t var[] = {
		{"c", character},
		{"i", integer},
		{"f", floater},
		{"s", str},
		{NULL, NULL}
	};

	va_start(lst, format);
	i = 0;
	k = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == var[j].tp[0])
			{
				switch (k)
				{
					case 0:
						break;
					default:
						printf(", ");
				}
				var[j].f(lst);
				k++;
				break;

			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
