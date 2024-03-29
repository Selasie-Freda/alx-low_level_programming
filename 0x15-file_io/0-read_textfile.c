#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @letters: number of letters to read and print
 * @filename: pointer to filename
 * Return: the number that could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || r != w)
		return (0);

	free(buf);
	close(fd);

	return (w);
}
