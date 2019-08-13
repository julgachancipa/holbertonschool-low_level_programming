#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file's name.
 * @text_content: content
 * Return: 1 OR -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t error_;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		error_ = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (error_ == -1)
		return (-1);
	return (1);
}
