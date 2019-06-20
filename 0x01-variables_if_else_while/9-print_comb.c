#include <stdio.h>
/**
 *main - prints put char with ascii numbers
 *Return: 0
*/
int main(void)
{
	int n = 48;
	int c = 44;
	int e = 32;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(c);
			putchar(e);
		}
		n++;
	}
	return (0);
}
