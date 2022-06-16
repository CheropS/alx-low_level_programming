#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - concantenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of strings
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int base = 0, dest_len = 0;

	while (dest[base++])
		dest_len++;

	for (base = 0; src[base] && base < n; base++)
		dest[dest_len++] = src[base];

	return (dest);
}

