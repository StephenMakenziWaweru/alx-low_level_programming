#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std out.
 * @filename: name of text file.
 * @letters: no. of chars.
 *
 * Return: no. of leters read and printed or 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t readitems, writeitems;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readitems = read(fd, buf, letters);
	if (readitems == -1)
		return (free(buf), 0);
	close(fd);

	writeitems = write(STDOUT_FILENO, buf, readitems);
	free(buf);
	if (writeitems != readitems)
		return (0);
	return (readitems);
}
