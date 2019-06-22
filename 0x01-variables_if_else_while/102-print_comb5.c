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
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
				{
					num1 = ((int) a * 10) + ((int) b);
					num2 = ((int) c * 10) + ((int) d);
					if (num2 > num1)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
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
