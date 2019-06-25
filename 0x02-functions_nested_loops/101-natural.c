#include <stdio.h>
/**
 *main - sum of mult.
 *Return: 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
