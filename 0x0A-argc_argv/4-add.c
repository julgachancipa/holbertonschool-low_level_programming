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
	int i, j, add = 0, b = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(*(argv + i) + j) != '\0'; j++)
			{
				if (*(*(argv + i) + j) < '0')
					b = 1;
				if (*(*(argv + i) + j) > '9')
					b = 1;
			}
			add += atoi(argv[i]);
		}
		if (b == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
			printf("%d\n", add);
	}
	return (0);
}
