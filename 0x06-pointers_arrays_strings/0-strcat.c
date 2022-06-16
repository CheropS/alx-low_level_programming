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

	while (dest[base] != '\0')
	{
		base++
	}

	for (dest_len = 0; (dest[base + dest_len] = *src++) != '\0'; dest_len++)
	{
	}

return (dest);
}

