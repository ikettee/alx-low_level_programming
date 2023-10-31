#include "main.h"

/**
 * append_text_to_file - a function that appends text at the
 * end of a file
 * @filename: name of the file
 * @text_content: content
 * return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil;
	int nle;
	int readwr;

	if (!filename)
		return (-1);

	fil = open(filename, O_WRONLY | O_APPEND);

	if (fil == -1)
		return (-1);

	if (text_content)
	{
		for (nle = 0; text_content[nle]; nle++)
			;
		readwr = write(fil, text_content, nle);

		if (readwr == -1)
			return (-1);
	}

	close(fil);

	return (1);
}
