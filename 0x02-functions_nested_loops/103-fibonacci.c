#include <stdio.h>
/**
 *main - sum 4m fbnc
 *Return: 0
 */
int main(void)
{
	long int i = 1;
	long int j = 0;
	long int l;
	long int sum = 0;

	while (i < 4000000)
	{
		l = j;
		j = i;
		i = l + j;
		sum += i;
	}
	printf("%ld\n", sum);
	return (0);
}
