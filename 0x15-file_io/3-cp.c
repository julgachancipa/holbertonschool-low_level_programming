#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * close_ - return -1 if close fails.
 * @f1: file 1
 * @f2: file 2
 * Return: ntg
 */
void close_(int f1, int f2)
{
	int c1, c2;

	c1 = close(f1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	c2 = close(f2);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
}
/**
 * main - cp a file to other.
 * @argc: num of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int f1, f2;
	ssize_t len = 1024, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
	while (len == 1024)
	{
		len = read(f1, buf, 1024);
		if (len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wr = write(f2, buf, len);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close_(f1, f2);
	return (0);
}
