#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name file to read
 * @letters: the number of letters it should read
 *
 * Return: NULL if filename is 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	ssize_t ler, lew;
	char *ptr;

	if (filename == NULL)
		return (0);
	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fil);
		return (0);
	}
	ler = read(fil, ptr, letters);
	close(fil);
	if (ler == -1)
	{
		free(ptr);
		return (0);
	}
	lew = write(STDOUT_FILENO, ptr, ler);
	free(ptr);
	if (ler != lew)
		return (0);
	return (lew);
}

