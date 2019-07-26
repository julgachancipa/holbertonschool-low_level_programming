#include <stdio.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: num of args.
 * @argv: args
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
