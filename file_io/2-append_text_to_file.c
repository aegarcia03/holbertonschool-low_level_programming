#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: is a NULL terminated string to write the file
 *
 * Return: 1 on success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	wr = write(fd, text_content, len);

	if (wr == -1 || wr != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
