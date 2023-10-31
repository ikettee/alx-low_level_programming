#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the file's name
 * @text_content: the file's content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fil;
	int nle;
	int readwr;

	if (filename)
		return (-1);

	fil = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fil == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nle = 0; text_content[nle]; nle++)
		;

	readwr = write(fil, text_content, nle);

	if (readwr == -1)
		return (-1);

	close(fil);

	return (1);
}
