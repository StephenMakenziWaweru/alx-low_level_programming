#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to be created.
 * @text_content: null terminated string to be written to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
