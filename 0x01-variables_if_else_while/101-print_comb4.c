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
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				int a = n * 3;
				int x = n + i + j;

				if (x > a)
				{
					putchar(n);
					putchar(i);
					putchar(j);
					if (!(n == '8' && i == '9' && j == '9'))
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
