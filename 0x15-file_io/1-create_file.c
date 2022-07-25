#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 if successful, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		return (-1);
	{
		for (len = 0; text_content[len];)
			len++; /**length of file*/
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/**truncate if file exists*/
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
