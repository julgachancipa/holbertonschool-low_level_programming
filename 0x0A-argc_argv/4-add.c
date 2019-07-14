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
	int sum = 0, i, b = 1;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
				b = 0;
			sum += atoi(argv[i]);
		}
		if (b == 1)
			printf("%d\n", sum);
		else
			printf("Error\n");
		return (1);
	}
	return (0);
}
