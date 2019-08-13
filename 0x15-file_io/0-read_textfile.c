#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file's name.
 * @letters: num of letters
 * Return: 0 for error or num road letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t print, error_;
	int fd;

	buf = (char *)malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	print = read(fd, buf, letters);
	error_ = write(STDOUT_FILENO, buf, print);
	if (error_ == -1)
		return (0);
	close(fd);
	return (print);
}
