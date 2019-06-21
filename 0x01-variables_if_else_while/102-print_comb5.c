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
	int k;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '8'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (k = '1'; k <= '9'; k++)
				{
					if (j >= n && k >= i)
					{
						putchar(n);
						putchar(i);
						putchar(' ');
						putchar(j);
						putchar(k);
					if (!(n == '9' && i == '8' && k == '9' && j == '9'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
