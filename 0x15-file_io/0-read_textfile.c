#include "main.h"

/**
 * read_textfile- a function that reads textile
 * and prints to the STDOUT.
 * @filename: name of file containing text to be read.
 * @letters: Number of letters to be read.
 * Return: w- The real/actual number of bytes read and printed
 * or ZERO (0) is returned function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
