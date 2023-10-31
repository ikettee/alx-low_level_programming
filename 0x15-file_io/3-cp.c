#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcnt1.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - a function to copy the content of one file
 * @argc: count arguments
 * @argv: argument vector
 * Return: should be 1 for success
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, arv[1], '0');
	dest = open(argv[2], O_WRONLY | OCREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, butffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - a function to check for file open or close
 * @stat: the file to open
 * @filename: file
 * @mode: close or open
 * @fd: descriptor
 * Return: should be void
 */

void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n, fd);
		exit(100);
	}
	eles if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n, filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
        {
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n, filename);
		exit(99);
	}
}
