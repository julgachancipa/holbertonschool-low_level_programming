#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random pswd.
 *
 * Return: Always 0.
 */
int main(void)
{
	char psw[500];
	int digit;
	int i = 0;
	int sum = 0;
	time_t t;

/* Intializes random number generator */
	srand((unsigned) time(&t));
	while (sum < 2772)
	{
		digit = rand() % 122;
		if (digit > 97)
		{
			psw[i] = digit;
			i++;
			sum += digit;
		}
	}
	if (sum > 2772)
	{
		psw[i - 1] -= (sum - 2772);
	}
	psw[i] = '\0';
	printf("%s", psw);
	return (0);
}
