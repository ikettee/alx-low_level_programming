#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the end of the file, the string to be added
 *
 * Return: If the function fails - -1.
 *         The user lacks write permissions the file does not exist - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int g, k, lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	g = open(filename, O_WRONLY | O_APPEND);
	k = write(g, text_content, lenn);

	if (g == -1 || k == -1)
		return (-1);

	close(g);

	return (1);
}
