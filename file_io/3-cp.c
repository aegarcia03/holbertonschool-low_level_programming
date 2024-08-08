#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main -  copies the content of a file to another file.
 * @argc: the numnber of arguments.
 * @argv: the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *filef, *filet;
	int fdone , fdtwo;
	int  sz = 1024, wr = 0;
	int *buffer [1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filef = argv[1];
	filet = argv[2];
	fdone = open(filef, O_RDONLY);
	fdtwo = open(filet, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fdone < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filef);
		exit(98);
	}
	if (fdtwo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filet);
		exit(99);
	}

	while (sz != 0)
	{
		sz = read(fdone , buffer, 1024);
		if (sz < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filef);
			exit(98);
		}
		wr = write(fdtwo, buffer, sz);
		if (wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filet);
			exit(99);
		}
	}

	if (close(fdone) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdone);
		exit(100);
	}
	if (close(fdtwo) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdtwo);
		exit(100);
	}

	return (0);
}
