#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: function
 * Return: ntg
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;
	if (name != NULL && f != NULL)
		p(name);
}
