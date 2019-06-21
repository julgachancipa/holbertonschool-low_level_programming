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
					if (n >= j && i < k)
					{
					putchar(n);
					putchar(i);
					putchar(' ');
					putchar(j);
					putchar(k);
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
