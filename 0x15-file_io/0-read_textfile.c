#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: The filename.
 * @letters: the number of letters it should read and print.
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *head;
	ssize_t pro, row;
	ssize_t fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	head = malloc(sizeof(char) * letters);
	row = read(fd, head, letters);
	pro = write(STDOUT_FILENO, head, row);

	close(fd);
	free(head);
	return (pro);
}
