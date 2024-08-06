#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: pointer to the text file
 * @letters: number of letters
 *
 * Return: Number of letters it could read and print
 * return 0, If the file cannot be opened or read,
 * if filename is NULL or if write fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, op, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buffer);
		return (0);
	}
	re = read(op, buffer, letters);
	if (re == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1 || wr != re)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
