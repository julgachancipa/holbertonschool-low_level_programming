#include <stdio.h>
/**
 *main - frst 98 fbnc
 *Return: 0
 */
int main(void)
{
	unsigned long i = 1;
	long int j = 0;
	long int k, l;

	for (k = 1; k <= 98; k++)
	{
		l = j;
		j = i;
		i = l + j;
		printf("%ld", i);
		if (k < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
