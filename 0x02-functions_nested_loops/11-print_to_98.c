#include <stdio.h>
/**
 * print_to_98 - print the numberso from n to 98
 * @n: parameter
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", 98);
	else
	{

		while (n < 98)
		{
			printf("%d, ", n);
			n++;
			if (n == 98)
				printf("%d", n);
		}

		while (n > 98)
		{
			printf("%d, ", n);
			n--;
			if (n == 98)
				printf("%d", n);
		}
	}
	printf("\n");
}
