#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints out
 * @filename: name of the file
 * @letters: number of letters to be printed and read by func
 * Return: number of letters to be printed, otherwise 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *base;

	if (filename == NULL)
		return (0);

	base = malloc(sizeof(char) * letters);
	if (base == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, base, letters);
	w = write(STDOUT_FILENO, base, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(base);
		return (0);
	}

	free(base);
	close(o);

	return (w);
}
