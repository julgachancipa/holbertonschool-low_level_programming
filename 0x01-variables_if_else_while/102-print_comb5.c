#include <stdio.h>
/**
 *main - prints 0 to 10 numbers
 *Return: 0
*/
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int num1;
	int num2;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					num1 = (((int) a - '0') * 10) + ((int) b - '0');
					num2 = (((int) c - '0') * 10) + ((int) d - '0');
					if (num2 > num1)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (!(num1 == 98 && num2 == 99))
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
