#include <stdio.h>
/**
 * main - prints num of arg., followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
