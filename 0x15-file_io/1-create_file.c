#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int crf, m, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	crf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(crf, text_content, size);

	if (crf == -1 || m == -1)
		return (-1);

	close(crf);

	return (1);
}
