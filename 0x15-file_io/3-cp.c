#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _close - closes open fd.
 * @fd_from: 1st fd.
 * @fd_to: 2nd fd.
 */
void _close(int fd_from, int fd_to)
{
	int cl_from, cl_to;

	cl_from = close(fd_from);
	if (cl_from == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	cl_to = close(fd_to);
	if (cl_to == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * _cp - copies the contents of a file to another file.
 * @file_from: file to copy from.
 * @file_to: file to copy to.
 *
 * Return: 1 on success, -1 on failure.
 */
int _cp(const char *file_from, const char *file_to)
{
	int rd = 1024, wr, fd_from, fd_to;
	char buf[1024];

	if (!file_from)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(fd_from, buf, 1024);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		wr = write(fd_to, buf, rd);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		if (wr != rd)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	_close(fd_from, fd_to);
	return (1);
}

/**
 * main - copies the content of a file to another file.
 * @argc: first arg.
 * @argv: second arg.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
