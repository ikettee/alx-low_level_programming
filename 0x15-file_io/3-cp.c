#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - buffer is 1024 bytes.
 * @file: Storing chars for is the name of the file
 *
 * Return: A pointer to the newly allocated buf
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Descriptors that closes
 * @fd: The file descriptor to be close
 */
void close_file(int fd)
{
	int g;

	g = close(fd);

	if (g == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - contents of a file is copied to another
 * @argc: The number of arguments sup
 * @argv: The arguments array of
 *
 * Return: 0 on success.
 *
 * Description: If the count of the argument is not  - exit code 97.
 *              If file_from does not exist or  be read - exit code 98.
 *              If file_to cannot be crea written to - exit code 99.
 *              If file_to or file_annot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
