#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
/**
 * create_file - creates a file.
 * @filename: file's name.
 * @text_content: content
 * Return: 1 OR -1.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t error_;
	int fd;
	unsigned int sz = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	error_ = write(fd, text_content, sz);
	if (error_ == -1)
		return (-1);
	close(fd);
	return (1);
}
