#include <stdio.h>
/**
 *main - frst 98 fbnc
 *Return: 0
 */
int main(void)
{
	unsigned long num_1_a = 0;
	unsigned long num_1_b = 0;
	unsigned long num_2_a = 0;
	unsigned long num_2_b = 1;
	unsigned long num_a, num_b, i;
	int k;

	for (k = 1; k <= 98; k++)
	{
		num_a = num_1_a + num_2_a;
		num_b = num_1_b + num_2_b;
		i = (num_b - (num_b % 100000000000)) / 100000000000;
		num_a += i;
		num_b -= (i * 100000000000);
		num_1_a = num_2_a;
		num_1_b = num_2_b;
		num_2_a = num_a;
		num_2_b = num_b;
		if (num_a > 0)
		{
		printf("%lu", num_a);
		}
		printf("%lu", num_b);
		if (k < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
