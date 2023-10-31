#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to create
 * @text_content: The files string 
 *
 * Return: If unsuccessful - -1
 *         Otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int g, k, lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	g = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(g, text_content, lenn);

	if (g == -1 || k == -1)
		return (-1);

	close(g);

	return (1);
}
