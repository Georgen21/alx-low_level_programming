#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: actual number of file it could read.
 * @letters: number of letters it should read and print.
 * Return: if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t txtf;
	ssize_t f;
	ssize_t m;

	txtf = open(filename, O_RDONLY);
	if (txtf == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	m = read(txtf, buffer, letters);
	f = write(STDOUT_FILENO, buffer, m);

	free(buffer);
	close(txtf);
	return (f);
}
