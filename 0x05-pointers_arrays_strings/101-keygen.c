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
		digit = rand() % 90;
		if (digit > 33)
		{
			psw[i] = digit;
			i++;
			sum += digit;
		}
	}
        printf("%s", psw);
}
