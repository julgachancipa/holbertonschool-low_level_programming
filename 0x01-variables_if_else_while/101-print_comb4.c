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
				int a = i + i;
				int x = j + i;

				if (i != j && i > n && j > n && x > a)
				{
					putchar(n);
					putchar(i);
					putchar(j);
					if (!(n == '7' && i == '8' && j == '9'))
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
