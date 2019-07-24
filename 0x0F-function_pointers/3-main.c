#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - call functions to print answer
 * @argc: num of arg
 * @argv: atguments
 * Return: 0 or errors
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("%s", "Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	    && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("%s", "Error\n");
		exit(99);
	}
	if (argv[2][1])
	{
		printf("%s", "Error\n");
		exit(99);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	printf("%d\n", (get_op_func(argv[2]))(num1, num2));
	return (0);
}
