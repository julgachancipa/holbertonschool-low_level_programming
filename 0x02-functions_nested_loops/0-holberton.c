#include "holberton.h"
/**
 *main - prints holberton
 *Return: 0
 */
int main(void)
{
	char h[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar (h[i]);
	}
	_putchar('\n');
	return (0);
}
