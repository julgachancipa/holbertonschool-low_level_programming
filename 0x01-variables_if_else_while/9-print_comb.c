#include <stdio.h>
/**
 *main - prints put char with ascii numbers
 *Return: 0
*/
int main(void)
{
	int n = '0';
	int c = ',';
	int e = ' ';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(c);
			putchar(e);
		}
		n++;
	}
	return (0);
}
