#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: number of strings
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int base = 0;
	int src_len = 0;

	while (src[base++])
		src_len++;

	for (base = 0; src[base] && base < n; base++)
		dest[base] = src[base];

	for (base = src_len; base < n; base++)
		dest[base] = '\0';

	return (dest);
}
