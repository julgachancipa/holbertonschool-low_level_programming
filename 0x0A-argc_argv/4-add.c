#include <stdio.h>
#include <stdlib.h>
/**
 * main - add numbers, followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, b = 1, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*(argv[i]) != '0' && atoi(argv[i]) == 0)
				b = 0;
			sum += atoi(argv[i]);
		}
	}
	if (b == 1)
		printf("%d\n", sum);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
