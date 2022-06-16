#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - function that concantenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int base = 0; dest_len = 0;

	while (dest[base++])
			dest_len++;
	
	for (base = 0; src[base]; base++)
			dest[dest_len++] = src[base];

	return (dest);
}
