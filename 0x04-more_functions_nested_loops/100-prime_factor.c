#include <stdio.h>

/**
 * main - prints largest prime factors of a num
 * Return: 0
 */
int main(void)
{
	long int n, j;
	long int a = 0;
	long int num = 30;
	long int div = num;

	for (n = 2; n <= num ; n++)
	{
		for (j = 1; j <= n; j++)
		{
			if (n % j == 0)
				a++;
		}
		if ((a == 2) && (div % n == 0))
		{
			div = num / n;
			if (div == 1)
			{
				printf("%ld", n);
				break;
			}
		}
		a = 0;
	}
	printf("\n");
	return (0);
}
