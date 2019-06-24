#include "holberton.h"
/**
 *main - prints holberton
 *Return: 0
 */
int main(void)
{
	char h[] = "Holberton";
	char n = '\n';
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar (h[i]);
	}
	_putchar(n);
	return (0);
}
