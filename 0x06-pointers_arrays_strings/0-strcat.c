#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)

{
	int base = 0; dest_len = 0;
	
	while (dest[base++])
		dest_len++;
	
	for (index = 0; src[base]; base++)
		dest[dest_len++] = src[base];
	
	return (dest);
}

