#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write the file
 *
 * Return: 1 on success, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	wr = write(op, text_content, len);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
