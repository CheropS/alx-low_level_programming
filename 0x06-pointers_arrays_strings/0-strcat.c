#include <stdio.h>
#include <string.h>
#include "main.h"

/**
<<<<<<< HEAD
 * _strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
=======
 * *_strcat - function that concantenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
>>>>>>> a000239aa7914cb260d3bf17b964e5ff771c22a1
{
	int base = 0; dest_len = 0;

	while (dest[base] != '\0')
	{
		base++
	}

	for (dest_len = 0; (dest[base + dest_len] = *src++) != '\0'; dest_len++)
	{
	}

return (dest);
}

