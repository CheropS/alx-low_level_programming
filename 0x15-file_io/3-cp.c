#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_base - allocates 1024 bytes of a buffer
 * @file: pointer to the file storing buffer bytes
 * Return: a pointer to newly-allocated buffer
 */

char *create_base(char *file);
void close_file(int fd);

char *create_base(char *file)
{
	char *base;

	base = malloc(sizeof(char) * 1024);

	/**code to check if it can create a file*/

	if (base == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (base);
}

/**
 * close_file - closes file descriptors
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int b;

	b = close(fd);

	/**check if you can close descriptor*/

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content from one file to another
 * @argc: number of arguments supplied
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *base;

	/**to check if number of arguments are correct*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	base = create_base(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, base, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(base);
			exit(98);
		}
		
		w = write(to, base, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(base);
			exit(99);
		}

		r = read(from, base, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(base);
	close_file(from);
	close_file(to);

	return (0);

}


