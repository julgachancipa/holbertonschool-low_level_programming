#include <stdio.h>
/**
 *main - prints 0 to 10 numbers
 *Return: 0
*/
int main(void)
{
	int n;
	int i;
	int j;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '1'; i <= '9'; i++)
		{
			for (j = '2'; j <= '9'; j++)
			{
				if (n != i && i != j && n != j && i > n && j > n)
				{
					putchar(n);
					putchar(i);
					putchar(j);
					if (!(n == '7' && i == '9' && j == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
