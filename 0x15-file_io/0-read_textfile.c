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
	ssize_t print;
	int fd, error_;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	print = read(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);
	error_ = write(STDOUT_FILENO, buf, letters);
	if (error_ == -1)
		return (0);
	return (print);
}
